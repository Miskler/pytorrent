/* Generated code for Python module 'anyio.abc._sockets'
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

/* The "module_anyio$abc$_sockets" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$abc$_sockets;
PyDictObject *moduledict_anyio$abc$_sockets;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[156];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[156];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("anyio.abc._sockets"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 156; i++) {
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
void checkModuleConstants_anyio$abc$_sockets(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 156; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0514e3474cf37ba06888712735088f35;
static PyCodeObject *codeobj_9771469fa9fe5cb08c66385c53b69f45;
static PyCodeObject *codeobj_ba757d22348f07e774a3958647ba7582;
static PyCodeObject *codeobj_cc0b85bb661f044a14f18feab9469bac;
static PyCodeObject *codeobj_288ec970c186cabf2043b3cc131d049e;
static PyCodeObject *codeobj_e36fd9fae6ec9d80c4ff53daa86c842f;
static PyCodeObject *codeobj_363176b16603a9b0812f6e26423e5053;
static PyCodeObject *codeobj_7ccd0e5f700263e7e3d51a498e57e806;
static PyCodeObject *codeobj_eaa1d2f638adde1afc95ac6b7f44de2f;
static PyCodeObject *codeobj_337e6fdca5a28a298842003c6b2bf19c;
static PyCodeObject *codeobj_d45fedf195f474214bfc51cd947a6519;
static PyCodeObject *codeobj_8ba15928cac439c1b483d8dadf148064;
static PyCodeObject *codeobj_a8b43bc7a1b453b3a0eea90d93b57414;
static PyCodeObject *codeobj_9025a744d9e81ca13dea15429c0c4b25;
static PyCodeObject *codeobj_0714dbf387fdb22986eef9b832ca1083;
static PyCodeObject *codeobj_55f0fdc889932c1f59dad1f04de0c188;
static PyCodeObject *codeobj_d2d86b56d674921b629553b672854fb1;
static PyCodeObject *codeobj_18c1be8653ed8ba5f3e4637b71e30da4;
static PyCodeObject *codeobj_d15bdf1f07d24b42f0500b39ad1289d5;
static PyCodeObject *codeobj_09d5a4e8b96c2a1c904b8eaf23f53777;
static PyCodeObject *codeobj_d9d036759b31129f6885d0c3e17c7848;
static PyCodeObject *codeobj_f799d8d82eee13ce02d276f190ba5a1e;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[56]; CHECK_OBJECT(module_filename_obj);
    codeobj_0514e3474cf37ba06888712735088f35 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[144], mod_consts[144], 0, 0, 0);
    codeobj_9771469fa9fe5cb08c66385c53b69f45 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[145], mod_consts[145], 0, 0, 0);
    codeobj_ba757d22348f07e774a3958647ba7582 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[146], mod_consts[146], 0, 0, 0);
    codeobj_cc0b85bb661f044a14f18feab9469bac = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[147], mod_consts[147], 0, 0, 0);
    codeobj_288ec970c186cabf2043b3cc131d049e = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[147], mod_consts[147], 0, 0, 0);
    codeobj_e36fd9fae6ec9d80c4ff53daa86c842f = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[147], mod_consts[147], 0, 0, 0);
    codeobj_363176b16603a9b0812f6e26423e5053 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[148], mod_consts[148], NULL, NULL, 0, 0, 0);
    codeobj_7ccd0e5f700263e7e3d51a498e57e806 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[149], NULL, 0, 0, 0);
    codeobj_eaa1d2f638adde1afc95ac6b7f44de2f = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_NOFREE, mod_consts[136], mod_consts[136], mod_consts[149], NULL, 0, 0, 0);
    codeobj_337e6fdca5a28a298842003c6b2bf19c = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[149], NULL, 0, 0, 0);
    codeobj_d45fedf195f474214bfc51cd947a6519 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_NOFREE, mod_consts[130], mod_consts[130], mod_consts[149], NULL, 0, 0, 0);
    codeobj_8ba15928cac439c1b483d8dadf148064 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[149], NULL, 0, 0, 0);
    codeobj_a8b43bc7a1b453b3a0eea90d93b57414 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[149], NULL, 0, 0, 0);
    codeobj_9025a744d9e81ca13dea15429c0c4b25 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_COROUTINE | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[147], NULL, 1, 0, 0);
    codeobj_0714dbf387fdb22986eef9b832ca1083 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[150], NULL, 4, 0, 0);
    codeobj_55f0fdc889932c1f59dad1f04de0c188 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[147], NULL, 1, 0, 0);
    codeobj_d2d86b56d674921b629553b672854fb1 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_COROUTINE | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[147], NULL, 1, 0, 0);
    codeobj_18c1be8653ed8ba5f3e4637b71e30da4 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[151], NULL, 1, 0, 0);
    codeobj_d15bdf1f07d24b42f0500b39ad1289d5 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_COROUTINE | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[152], NULL, 3, 0, 0);
    codeobj_09d5a4e8b96c2a1c904b8eaf23f53777 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_COROUTINE | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[153], NULL, 3, 0, 0);
    codeobj_d9d036759b31129f6885d0c3e17c7848 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[154], NULL, 4, 0, 0);
    codeobj_f799d8d82eee13ce02d276f190ba5a1e = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[155], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__1___aenter__$$$coroutine__1___aenter__();


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__2___aexit__$$$coroutine__1___aexit__();


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__5_send_fds$$$coroutine__1_send_fds();


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__6_receive_fds$$$coroutine__1_receive_fds();


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__7_accept$$$coroutine__1_accept();


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__8_serve$$$coroutine__1_serve(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__9_sendto$$$coroutine__1_sendto(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__1___aenter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2___aexit__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__2_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__3_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__4_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__5_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__6_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__4__raw_socket(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__5_send_fds(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__6_receive_fds(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__7_accept(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__8_serve(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__9_sendto(PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$abc$_sockets$$$function__1___aenter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__1___aenter__$$$coroutine__1___aenter__();

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
struct anyio$abc$_sockets$$$function__1___aenter__$$$coroutine__1___aenter___locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__1___aenter__$$$coroutine__1___aenter___context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$abc$_sockets$$$function__1___aenter__$$$coroutine__1___aenter___locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__1___aenter__$$$coroutine__1___aenter___locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__1___aenter__$$$coroutine__1___aenter__() {
    return Nuitka_Coroutine_New(
        anyio$abc$_sockets$$$function__1___aenter__$$$coroutine__1___aenter___context,
        module_anyio$abc$_sockets,
        mod_consts[0],
        mod_consts[1],
        codeobj_9025a744d9e81ca13dea15429c0c4b25,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__1___aenter__$$$coroutine__1___aenter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__2___aexit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_val = python_pars[2];
    PyObject *par_exc_tb = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__2___aexit__$$$coroutine__1___aexit__();

    goto function_return_exit;

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
struct anyio$abc$_sockets$$$function__2___aexit__$$$coroutine__1___aexit___locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__2___aexit__$$$coroutine__1___aexit___context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$abc$_sockets$$$function__2___aexit__$$$coroutine__1___aexit___locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__2___aexit__$$$coroutine__1___aexit___locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__2___aexit__$$$coroutine__1___aexit__() {
    return Nuitka_Coroutine_New(
        anyio$abc$_sockets$$$function__2___aexit__$$$coroutine__1___aexit___context,
        module_anyio$abc$_sockets,
        mod_consts[2],
        mod_consts[3],
        codeobj_0714dbf387fdb22986eef9b832ca1083,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__2___aexit__$$$coroutine__1___aexit___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__3_extra_attributes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_attributes = NULL;
    struct Nuitka_CellObject *var_peername = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_convert = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_remote_port = Nuitka_Cell_Empty();
    struct Nuitka_FrameObject *frame_18c1be8653ed8ba5f3e4637b71e30da4;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_18c1be8653ed8ba5f3e4637b71e30da4 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_18c1be8653ed8ba5f3e4637b71e30da4)) {
        Py_XDECREF(cache_frame_18c1be8653ed8ba5f3e4637b71e30da4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18c1be8653ed8ba5f3e4637b71e30da4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18c1be8653ed8ba5f3e4637b71e30da4 = MAKE_FUNCTION_FRAME(codeobj_18c1be8653ed8ba5f3e4637b71e30da4, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_18c1be8653ed8ba5f3e4637b71e30da4->m_type_description == NULL);
    frame_18c1be8653ed8ba5f3e4637b71e30da4 = cache_frame_18c1be8653ed8ba5f3e4637b71e30da4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_18c1be8653ed8ba5f3e4637b71e30da4);
    assert(Py_REFCNT(frame_18c1be8653ed8ba5f3e4637b71e30da4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[4];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$abc$_sockets;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[5];
        tmp_level_value_1 = mod_consts[6];
        frame_18c1be8653ed8ba5f3e4637b71e30da4->m_frame.f_lineno = 68;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[7],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[7]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_convert) == NULL);
        PyCell_SET(var_convert, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_dict_value_1 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__1_lambda(tmp_closure_1);

        tmp_assign_source_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_2;
            struct Nuitka_CellObject *tmp_closure_2[2];
            PyObject *tmp_expression_value_3;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "coccc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "coccc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[13]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "coccc";
                goto dict_build_exception_1;
            }

            tmp_closure_2[0] = var_convert;
            Py_INCREF(tmp_closure_2[0]);
            tmp_closure_2[1] = par_self;
            Py_INCREF(tmp_closure_2[1]);

            tmp_dict_value_1 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__2_lambda(tmp_closure_2);

            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "coccc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "coccc";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "coccc";
                goto dict_build_exception_1;
            }

            tmp_closure_3[0] = par_self;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dict_value_1 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__3_lambda(tmp_closure_3);

            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "coccc";
                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_attributes == NULL);
        var_attributes = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(Nuitka_Cell_GET(var_convert));
        tmp_called_value_1 = Nuitka_Cell_GET(var_convert);
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[15]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "coccc";
            goto try_except_handler_2;
        }
        frame_18c1be8653ed8ba5f3e4637b71e30da4->m_frame.f_lineno = 79;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "coccc";
            goto try_except_handler_2;
        }
        frame_18c1be8653ed8ba5f3e4637b71e30da4->m_frame.f_lineno = 78;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "coccc";
            goto try_except_handler_2;
        }
        assert(Nuitka_Cell_GET(var_peername) == NULL);
        PyCell_SET(var_peername, tmp_assign_source_3);

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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_18c1be8653ed8ba5f3e4637b71e30da4, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_18c1be8653ed8ba5f3e4637b71e30da4, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_OSError;
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
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        assert(Nuitka_Cell_GET(var_peername) == NULL);
        Py_INCREF(tmp_assign_source_4);
        PyCell_SET(var_peername, tmp_assign_source_4);

    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 77;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_18c1be8653ed8ba5f3e4637b71e30da4->m_frame) frame_18c1be8653ed8ba5f3e4637b71e30da4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "coccc";
    goto try_except_handler_3;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(Nuitka_Cell_GET(var_peername));
        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(var_peername);
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        struct Nuitka_CellObject *tmp_closure_4[1];
        PyObject *tmp_expression_value_5;

        tmp_closure_4[0] = var_peername;
        Py_INCREF(tmp_closure_4[0]);

        tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__4_lambda(tmp_closure_4);

        CHECK_OBJECT(var_attributes);
        tmp_dictset_dict = var_attributes;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dictset_value);

            exception_lineno = 86;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        tmp_dictset_key = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[17]);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dictset_value);

            exception_lineno = 86;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_7 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[15]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 89;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[19]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 89;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_9;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_3, 0, tmp_tuple_element_1);
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "coccc";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[20]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "coccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_3, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "coccc";
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
        struct Nuitka_CellObject *tmp_closure_5[1];
        PyObject *tmp_expression_value_10;

        tmp_closure_5[0] = par_self;
        Py_INCREF(tmp_closure_5[0]);

        tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__5_lambda(tmp_closure_5);

        if (var_attributes == NULL) {
            Py_DECREF(tmp_dictset_value);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }

        tmp_dictset_dict = var_attributes;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dictset_value);

            exception_lineno = 91;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        tmp_dictset_key = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[22]);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dictset_value);

            exception_lineno = 91;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        if (Nuitka_Cell_GET(var_peername) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_4 = Nuitka_Cell_GET(var_peername);
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(var_peername) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(var_peername);
        tmp_subscript_value_1 = mod_consts[24];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_1, 1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_remote_port) == NULL);
        PyCell_SET(var_remote_port, tmp_assign_source_5);

    }
    {
        PyObject *tmp_ass_subvalue_1;
        struct Nuitka_CellObject *tmp_closure_6[1];
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_12;

        tmp_closure_6[0] = var_remote_port;
        Py_INCREF(tmp_closure_6[0]);

        tmp_ass_subvalue_1 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__6_lambda(tmp_closure_6);

        if (var_attributes == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_attributes;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 95;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[25]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 95;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "coccc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_4:;
    branch_no_3:;
    if (var_attributes == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 97;
        type_description_1 = "coccc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_attributes;
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
        exception_tb = MAKE_TRACEBACK(frame_18c1be8653ed8ba5f3e4637b71e30da4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18c1be8653ed8ba5f3e4637b71e30da4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18c1be8653ed8ba5f3e4637b71e30da4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18c1be8653ed8ba5f3e4637b71e30da4,
        type_description_1,
        par_self,
        var_attributes,
        var_peername,
        var_convert,
        var_remote_port
    );


    // Release cached frame if used for exception.
    if (frame_18c1be8653ed8ba5f3e4637b71e30da4 == cache_frame_18c1be8653ed8ba5f3e4637b71e30da4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_18c1be8653ed8ba5f3e4637b71e30da4);
        cache_frame_18c1be8653ed8ba5f3e4637b71e30da4 = NULL;
    }

    assertFrameObject(frame_18c1be8653ed8ba5f3e4637b71e30da4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_attributes);
    var_attributes = NULL;
    CHECK_OBJECT(var_peername);
    Py_DECREF(var_peername);
    var_peername = NULL;
    CHECK_OBJECT(var_convert);
    Py_DECREF(var_convert);
    var_convert = NULL;
    CHECK_OBJECT(var_remote_port);
    Py_DECREF(var_remote_port);
    var_remote_port = NULL;
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

    Py_XDECREF(var_attributes);
    var_attributes = NULL;
    CHECK_OBJECT(var_peername);
    Py_DECREF(var_peername);
    var_peername = NULL;
    CHECK_OBJECT(var_convert);
    Py_DECREF(var_convert);
    var_convert = NULL;
    CHECK_OBJECT(var_remote_port);
    Py_DECREF(var_remote_port);
    var_remote_port = NULL;
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


static PyObject *impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_cc0b85bb661f044a14f18feab9469bac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cc0b85bb661f044a14f18feab9469bac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cc0b85bb661f044a14f18feab9469bac)) {
        Py_XDECREF(cache_frame_cc0b85bb661f044a14f18feab9469bac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc0b85bb661f044a14f18feab9469bac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc0b85bb661f044a14f18feab9469bac = MAKE_FUNCTION_FRAME(codeobj_cc0b85bb661f044a14f18feab9469bac, module_anyio$abc$_sockets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc0b85bb661f044a14f18feab9469bac->m_type_description == NULL);
    frame_cc0b85bb661f044a14f18feab9469bac = cache_frame_cc0b85bb661f044a14f18feab9469bac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cc0b85bb661f044a14f18feab9469bac);
    assert(Py_REFCNT(frame_cc0b85bb661f044a14f18feab9469bac) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_cc0b85bb661f044a14f18feab9469bac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc0b85bb661f044a14f18feab9469bac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc0b85bb661f044a14f18feab9469bac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc0b85bb661f044a14f18feab9469bac,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_cc0b85bb661f044a14f18feab9469bac == cache_frame_cc0b85bb661f044a14f18feab9469bac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc0b85bb661f044a14f18feab9469bac);
        cache_frame_cc0b85bb661f044a14f18feab9469bac = NULL;
    }

    assertFrameObject(frame_cc0b85bb661f044a14f18feab9469bac);

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


static PyObject *impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0514e3474cf37ba06888712735088f35;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0514e3474cf37ba06888712735088f35 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0514e3474cf37ba06888712735088f35)) {
        Py_XDECREF(cache_frame_0514e3474cf37ba06888712735088f35);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0514e3474cf37ba06888712735088f35 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0514e3474cf37ba06888712735088f35 = MAKE_FUNCTION_FRAME(codeobj_0514e3474cf37ba06888712735088f35, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0514e3474cf37ba06888712735088f35->m_type_description == NULL);
    frame_0514e3474cf37ba06888712735088f35 = cache_frame_0514e3474cf37ba06888712735088f35;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0514e3474cf37ba06888712735088f35);
    assert(Py_REFCNT(frame_0514e3474cf37ba06888712735088f35) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_0514e3474cf37ba06888712735088f35->m_frame.f_lineno = 73;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[28]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_0514e3474cf37ba06888712735088f35->m_frame.f_lineno = 72;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "cc";
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
        exception_tb = MAKE_TRACEBACK(frame_0514e3474cf37ba06888712735088f35, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0514e3474cf37ba06888712735088f35->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0514e3474cf37ba06888712735088f35, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0514e3474cf37ba06888712735088f35,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_0514e3474cf37ba06888712735088f35 == cache_frame_0514e3474cf37ba06888712735088f35) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0514e3474cf37ba06888712735088f35);
        cache_frame_0514e3474cf37ba06888712735088f35 = NULL;
    }

    assertFrameObject(frame_0514e3474cf37ba06888712735088f35);

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


static PyObject *impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__3_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_288ec970c186cabf2043b3cc131d049e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_288ec970c186cabf2043b3cc131d049e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_288ec970c186cabf2043b3cc131d049e)) {
        Py_XDECREF(cache_frame_288ec970c186cabf2043b3cc131d049e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_288ec970c186cabf2043b3cc131d049e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_288ec970c186cabf2043b3cc131d049e = MAKE_FUNCTION_FRAME(codeobj_288ec970c186cabf2043b3cc131d049e, module_anyio$abc$_sockets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_288ec970c186cabf2043b3cc131d049e->m_type_description == NULL);
    frame_288ec970c186cabf2043b3cc131d049e = cache_frame_288ec970c186cabf2043b3cc131d049e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_288ec970c186cabf2043b3cc131d049e);
    assert(Py_REFCNT(frame_288ec970c186cabf2043b3cc131d049e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
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
        exception_tb = MAKE_TRACEBACK(frame_288ec970c186cabf2043b3cc131d049e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_288ec970c186cabf2043b3cc131d049e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_288ec970c186cabf2043b3cc131d049e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_288ec970c186cabf2043b3cc131d049e,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_288ec970c186cabf2043b3cc131d049e == cache_frame_288ec970c186cabf2043b3cc131d049e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_288ec970c186cabf2043b3cc131d049e);
        cache_frame_288ec970c186cabf2043b3cc131d049e = NULL;
    }

    assertFrameObject(frame_288ec970c186cabf2043b3cc131d049e);

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


static PyObject *impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__4_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9771469fa9fe5cb08c66385c53b69f45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9771469fa9fe5cb08c66385c53b69f45 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9771469fa9fe5cb08c66385c53b69f45)) {
        Py_XDECREF(cache_frame_9771469fa9fe5cb08c66385c53b69f45);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9771469fa9fe5cb08c66385c53b69f45 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9771469fa9fe5cb08c66385c53b69f45 = MAKE_FUNCTION_FRAME(codeobj_9771469fa9fe5cb08c66385c53b69f45, module_anyio$abc$_sockets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9771469fa9fe5cb08c66385c53b69f45->m_type_description == NULL);
    frame_9771469fa9fe5cb08c66385c53b69f45 = cache_frame_9771469fa9fe5cb08c66385c53b69f45;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9771469fa9fe5cb08c66385c53b69f45);
    assert(Py_REFCNT(frame_9771469fa9fe5cb08c66385c53b69f45) == 2);

    // Framed code:
    if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

        FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 86;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }

    tmp_return_value = Nuitka_Cell_GET(self->m_closure[0]);
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9771469fa9fe5cb08c66385c53b69f45, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9771469fa9fe5cb08c66385c53b69f45->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9771469fa9fe5cb08c66385c53b69f45, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9771469fa9fe5cb08c66385c53b69f45,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9771469fa9fe5cb08c66385c53b69f45 == cache_frame_9771469fa9fe5cb08c66385c53b69f45) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9771469fa9fe5cb08c66385c53b69f45);
        cache_frame_9771469fa9fe5cb08c66385c53b69f45 = NULL;
    }

    assertFrameObject(frame_9771469fa9fe5cb08c66385c53b69f45);

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


static PyObject *impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__5_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_e36fd9fae6ec9d80c4ff53daa86c842f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e36fd9fae6ec9d80c4ff53daa86c842f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e36fd9fae6ec9d80c4ff53daa86c842f)) {
        Py_XDECREF(cache_frame_e36fd9fae6ec9d80c4ff53daa86c842f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e36fd9fae6ec9d80c4ff53daa86c842f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e36fd9fae6ec9d80c4ff53daa86c842f = MAKE_FUNCTION_FRAME(codeobj_e36fd9fae6ec9d80c4ff53daa86c842f, module_anyio$abc$_sockets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e36fd9fae6ec9d80c4ff53daa86c842f->m_type_description == NULL);
    frame_e36fd9fae6ec9d80c4ff53daa86c842f = cache_frame_e36fd9fae6ec9d80c4ff53daa86c842f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e36fd9fae6ec9d80c4ff53daa86c842f);
    assert(Py_REFCNT(frame_e36fd9fae6ec9d80c4ff53daa86c842f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        frame_e36fd9fae6ec9d80c4ff53daa86c842f->m_frame.f_lineno = 92;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[28]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[24];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_e36fd9fae6ec9d80c4ff53daa86c842f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e36fd9fae6ec9d80c4ff53daa86c842f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e36fd9fae6ec9d80c4ff53daa86c842f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e36fd9fae6ec9d80c4ff53daa86c842f,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e36fd9fae6ec9d80c4ff53daa86c842f == cache_frame_e36fd9fae6ec9d80c4ff53daa86c842f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e36fd9fae6ec9d80c4ff53daa86c842f);
        cache_frame_e36fd9fae6ec9d80c4ff53daa86c842f = NULL;
    }

    assertFrameObject(frame_e36fd9fae6ec9d80c4ff53daa86c842f);

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


static PyObject *impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__6_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ba757d22348f07e774a3958647ba7582;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ba757d22348f07e774a3958647ba7582 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ba757d22348f07e774a3958647ba7582)) {
        Py_XDECREF(cache_frame_ba757d22348f07e774a3958647ba7582);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba757d22348f07e774a3958647ba7582 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba757d22348f07e774a3958647ba7582 = MAKE_FUNCTION_FRAME(codeobj_ba757d22348f07e774a3958647ba7582, module_anyio$abc$_sockets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ba757d22348f07e774a3958647ba7582->m_type_description == NULL);
    frame_ba757d22348f07e774a3958647ba7582 = cache_frame_ba757d22348f07e774a3958647ba7582;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ba757d22348f07e774a3958647ba7582);
    assert(Py_REFCNT(frame_ba757d22348f07e774a3958647ba7582) == 2);

    // Framed code:
    if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

        FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[25]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 95;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }

    tmp_return_value = Nuitka_Cell_GET(self->m_closure[0]);
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba757d22348f07e774a3958647ba7582, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba757d22348f07e774a3958647ba7582->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba757d22348f07e774a3958647ba7582, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba757d22348f07e774a3958647ba7582,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ba757d22348f07e774a3958647ba7582 == cache_frame_ba757d22348f07e774a3958647ba7582) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ba757d22348f07e774a3958647ba7582);
        cache_frame_ba757d22348f07e774a3958647ba7582 = NULL;
    }

    assertFrameObject(frame_ba757d22348f07e774a3958647ba7582);

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


static PyObject *impl_anyio$abc$_sockets$$$function__5_send_fds(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    PyObject *par_fds = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__5_send_fds$$$coroutine__1_send_fds();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_fds);
    Py_DECREF(par_fds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$abc$_sockets$$$function__5_send_fds$$$coroutine__1_send_fds_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__5_send_fds$$$coroutine__1_send_fds_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$abc$_sockets$$$function__5_send_fds$$$coroutine__1_send_fds_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__5_send_fds$$$coroutine__1_send_fds_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__5_send_fds$$$coroutine__1_send_fds() {
    return Nuitka_Coroutine_New(
        anyio$abc$_sockets$$$function__5_send_fds$$$coroutine__1_send_fds_context,
        module_anyio$abc$_sockets,
        mod_consts[30],
        mod_consts[31],
        codeobj_09d5a4e8b96c2a1c904b8eaf23f53777,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__5_send_fds$$$coroutine__1_send_fds_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__6_receive_fds(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_msglen = python_pars[1];
    PyObject *par_maxfds = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__6_receive_fds$$$coroutine__1_receive_fds();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_msglen);
    Py_DECREF(par_msglen);
    CHECK_OBJECT(par_maxfds);
    Py_DECREF(par_maxfds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$abc$_sockets$$$function__6_receive_fds$$$coroutine__1_receive_fds_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__6_receive_fds$$$coroutine__1_receive_fds_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$abc$_sockets$$$function__6_receive_fds$$$coroutine__1_receive_fds_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__6_receive_fds$$$coroutine__1_receive_fds_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__6_receive_fds$$$coroutine__1_receive_fds() {
    return Nuitka_Coroutine_New(
        anyio$abc$_sockets$$$function__6_receive_fds$$$coroutine__1_receive_fds_context,
        module_anyio$abc$_sockets,
        mod_consts[33],
        mod_consts[34],
        codeobj_d15bdf1f07d24b42f0500b39ad1289d5,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__6_receive_fds$$$coroutine__1_receive_fds_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__7_accept(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__7_accept$$$coroutine__1_accept();

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
struct anyio$abc$_sockets$$$function__7_accept$$$coroutine__1_accept_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__7_accept$$$coroutine__1_accept_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$abc$_sockets$$$function__7_accept$$$coroutine__1_accept_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__7_accept$$$coroutine__1_accept_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__7_accept$$$coroutine__1_accept() {
    return Nuitka_Coroutine_New(
        anyio$abc$_sockets$$$function__7_accept$$$coroutine__1_accept_context,
        module_anyio$abc$_sockets,
        mod_consts[36],
        mod_consts[37],
        codeobj_d2d86b56d674921b629553b672854fb1,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__7_accept$$$coroutine__1_accept_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__8_serve(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_handler;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_task_group;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__8_serve$$$coroutine__1_serve(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_task_group);
    Py_DECREF(par_task_group);
    par_task_group = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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



#if 1
struct anyio$abc$_sockets$$$function__8_serve$$$coroutine__1_serve_locals {
    PyObject *var_context_manager;
    PyObject *var_create_task_group;
    PyObject *var_stream;
    PyObject *tmp_assign_unpack_1__assign_source;
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

static PyObject *anyio$abc$_sockets$$$function__8_serve$$$coroutine__1_serve_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$abc$_sockets$$$function__8_serve$$$coroutine__1_serve_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__8_serve$$$coroutine__1_serve_locals *)coroutine->m_heap_storage;
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
    coroutine_heap->var_context_manager = NULL;
    coroutine_heap->var_create_task_group = NULL;
    coroutine_heap->var_stream = NULL;
    coroutine_heap->tmp_assign_unpack_1__assign_source = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f799d8d82eee13ce02d276f190ba5a1e, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        tmp_name_value_1 = mod_consts[38];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$abc$_sockets;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[39];
        tmp_level_value_1 = mod_consts[6];
        coroutine->m_frame->m_frame.f_lineno = 151;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 151;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[40],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 151;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_create_task_group == NULL);
        coroutine_heap->var_create_task_group = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[41]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 154;
            coroutine_heap->type_description_1 = "cccooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(coroutine_heap->var_create_task_group);
        tmp_called_value_1 = coroutine_heap->var_create_task_group;
        coroutine->m_frame->m_frame.f_lineno = 155;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->tmp_assign_unpack_1__assign_source == NULL);
        coroutine_heap->tmp_assign_unpack_1__assign_source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(coroutine_heap->tmp_assign_unpack_1__assign_source);
        tmp_assign_source_3 = coroutine_heap->tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[2]);
            PyCell_SET(coroutine->m_closure[2], tmp_assign_source_3);
            Py_INCREF(tmp_assign_source_3);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(coroutine_heap->tmp_assign_unpack_1__assign_source);
        tmp_assign_source_4 = coroutine_heap->tmp_assign_unpack_1__assign_source;
        assert(coroutine_heap->var_context_manager == NULL);
        Py_INCREF(tmp_assign_source_4);
        coroutine_heap->var_context_manager = tmp_assign_source_4;
    }
    CHECK_OBJECT(coroutine_heap->tmp_assign_unpack_1__assign_source);
    Py_DECREF(coroutine_heap->tmp_assign_unpack_1__assign_source);
    coroutine_heap->tmp_assign_unpack_1__assign_source = NULL;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 158;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 158;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 158;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_context_manager == NULL);
        coroutine_heap->var_context_manager = tmp_assign_source_5;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(coroutine_heap->var_context_manager);
        tmp_assign_source_6 = coroutine_heap->var_context_manager;
        assert(coroutine_heap->tmp_with_1__source == NULL);
        Py_INCREF(tmp_assign_source_6);
        coroutine_heap->tmp_with_1__source = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
        tmp_expression_value_1 = coroutine_heap->tmp_with_1__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 160;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->tmp_with_1__enter == NULL);
        coroutine_heap->tmp_with_1__enter = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
        tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
        tmp_assign_source_8 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[2]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->tmp_with_1__exit == NULL);
        coroutine_heap->tmp_with_1__exit = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        coroutine->m_frame->m_frame.f_lineno = 160;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
        tmp_expression_value_4 = coroutine_heap->tmp_with_1__enter;
        tmp_expression_value_3 = ASYNC_AWAIT(tmp_expression_value_4, await_enter);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
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


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = yield_return_value;
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = coroutine_heap->tmp_with_1__enter;
            assert(old != NULL);
            coroutine_heap->tmp_with_1__enter = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_10;
        tmp_assign_source_10 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_with_1__indicator = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_instance_1;
        coroutine->m_frame->m_frame.f_lineno = 162;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[26]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 162;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 162;
        tmp_expression_value_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[36]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 162;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_5 = ASYNC_AWAIT(tmp_expression_value_6, await_normal);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 162;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_5;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 162;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_11 = yield_return_value;
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 162;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = coroutine_heap->var_stream;
            coroutine_heap->var_stream = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[41]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 163;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[43]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 163;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[44]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 163;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        CHECK_OBJECT(coroutine_heap->var_stream);
        tmp_args_element_value_2 = coroutine_heap->var_stream;
        coroutine->m_frame->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 163;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 161;
        coroutine_heap->type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_BaseException;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
        nuitka_bool tmp_assign_source_12;
        tmp_assign_source_12 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_with_1__indicator = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        coroutine->m_frame->m_frame.f_lineno = 160;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
        tmp_args_element_value_3 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_4 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_5 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        coroutine->m_frame->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_expression_value_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_8 = ASYNC_AWAIT(tmp_expression_value_9, await_exit);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_5;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yieldfrom = tmp_expression_value_8;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_5;
        }
        tmp_operand_value_1 = yield_return_value;
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_5;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
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
        coroutine_heap->exception_lineno = 160;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 160;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
    branch_end_2:;
    goto try_end_1;
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
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
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
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_value_6;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 160;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
        coroutine->m_frame->m_frame.f_lineno = 160;
        tmp_expression_value_11 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[45]);

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_3);
            Py_XDECREF(coroutine_heap->exception_keeper_value_3);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_10 = ASYNC_AWAIT(tmp_expression_value_11, await_exit);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_3);
            Py_XDECREF(coroutine_heap->exception_keeper_value_3);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 4;
        coroutine->m_yieldfrom = tmp_expression_value_10;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_4:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_3);
            Py_XDECREF(coroutine_heap->exception_keeper_value_3);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_3);
            Py_XDECREF(coroutine_heap->exception_keeper_value_3);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_await_result_1);
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
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = coroutine_heap->tmp_with_1__indicator;
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
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_called_value_7;
        PyObject *tmp_await_result_2;
        coroutine->m_frame->m_frame.f_lineno = 160;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_7 = coroutine_heap->tmp_with_1__exit;
        coroutine->m_frame->m_frame.f_lineno = 160;
        tmp_expression_value_13 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[45]);

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_12 = ASYNC_AWAIT(tmp_expression_value_13, await_exit);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 5;
        coroutine->m_yieldfrom = tmp_expression_value_12;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_5:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        tmp_await_result_2 = yield_return_value;
        if (tmp_await_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_await_result_2);
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

    CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
    Py_DECREF(coroutine_heap->tmp_with_1__source);
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
            coroutine->m_closure[1],
            coroutine->m_closure[0],
            coroutine->m_closure[2],
            coroutine_heap->var_context_manager,
            coroutine_heap->var_create_task_group,
            coroutine_heap->var_stream
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
    CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
    Py_DECREF(coroutine_heap->tmp_with_1__exit);
    coroutine_heap->tmp_with_1__exit = NULL;
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(coroutine_heap->var_context_manager);
    Py_DECREF(coroutine_heap->var_context_manager);
    coroutine_heap->var_context_manager = NULL;
    CHECK_OBJECT(coroutine_heap->var_create_task_group);
    Py_DECREF(coroutine_heap->var_create_task_group);
    coroutine_heap->var_create_task_group = NULL;
    Py_XDECREF(coroutine_heap->var_stream);
    coroutine_heap->var_stream = NULL;
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

    Py_XDECREF(coroutine_heap->var_context_manager);
    coroutine_heap->var_context_manager = NULL;
    Py_XDECREF(coroutine_heap->var_create_task_group);
    coroutine_heap->var_create_task_group = NULL;
    Py_XDECREF(coroutine_heap->var_stream);
    coroutine_heap->var_stream = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__8_serve$$$coroutine__1_serve(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$abc$_sockets$$$function__8_serve$$$coroutine__1_serve_context,
        module_anyio$abc$_sockets,
        mod_consts[46],
        mod_consts[47],
        codeobj_f799d8d82eee13ce02d276f190ba5a1e,
        closure,
        3,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__8_serve$$$coroutine__1_serve_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__9_sendto(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_host = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_port = Nuitka_Cell_New1(python_pars[3]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = par_data;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_host;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_port;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_self;
        Py_INCREF(tmp_closure_1[3]);

        tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__9_sendto$$$coroutine__1_sendto(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$abc$_sockets$$$function__9_sendto$$$coroutine__1_sendto_locals {
    char const *type_description_1;
    PyObject *tmp_return_value;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
};
#endif

static PyObject *anyio$abc$_sockets$$$function__9_sendto$$$coroutine__1_sendto_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$abc$_sockets$$$function__9_sendto$$$coroutine__1_sendto_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__9_sendto$$$coroutine__1_sendto_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_d9d036759b31129f6885d0c3e17c7848, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_tuple_element_1;
        coroutine->m_frame->m_frame.f_lineno = 175;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[26]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[49]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[50]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_element_2;
            PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[51]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 175;
                coroutine_heap->type_description_1 = "cccc";
                goto tuple_build_exception_1;
            }

            tmp_tuple_element_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[52]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 175;
                coroutine_heap->type_description_1 = "cccc";
                goto tuple_build_exception_2;
            }

            tmp_tuple_element_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyTuple_SET_ITEM(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        coroutine->m_frame->m_frame.f_lineno = 175;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 175;
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
            coroutine->m_closure[0],
            coroutine->m_closure[1],
            coroutine->m_closure[2]
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__9_sendto$$$coroutine__1_sendto(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$abc$_sockets$$$function__9_sendto$$$coroutine__1_sendto_context,
        module_anyio$abc$_sockets,
        mod_consts[53],
        mod_consts[54],
        codeobj_d9d036759b31129f6885d0c3e17c7848,
        closure,
        4,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__9_sendto$$$coroutine__1_sendto_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__1___aenter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__1___aenter__,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[1],
#endif
        codeobj_9025a744d9e81ca13dea15429c0c4b25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2___aexit__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__2___aexit__,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[3],
#endif
        codeobj_0714dbf387fdb22986eef9b832ca1083,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__3_extra_attributes,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_18c1be8653ed8ba5f3e4637b71e30da4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__1_lambda,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[12],
#endif
        codeobj_cc0b85bb661f044a14f18feab9469bac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$abc$_sockets,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__2_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__2_lambda,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[12],
#endif
        codeobj_0514e3474cf37ba06888712735088f35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$abc$_sockets,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__3_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__3_lambda,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[12],
#endif
        codeobj_288ec970c186cabf2043b3cc131d049e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$abc$_sockets,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__4_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__4_lambda,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[12],
#endif
        codeobj_9771469fa9fe5cb08c66385c53b69f45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$abc$_sockets,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__5_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__5_lambda,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[12],
#endif
        codeobj_e36fd9fae6ec9d80c4ff53daa86c842f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$abc$_sockets,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__6_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__6_lambda,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[12],
#endif
        codeobj_ba757d22348f07e774a3958647ba7582,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$abc$_sockets,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__4__raw_socket(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_55f0fdc889932c1f59dad1f04de0c188,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__5_send_fds(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__5_send_fds,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[31],
#endif
        codeobj_09d5a4e8b96c2a1c904b8eaf23f53777,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__6_receive_fds(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__6_receive_fds,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_d15bdf1f07d24b42f0500b39ad1289d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__7_accept(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__7_accept,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[37],
#endif
        codeobj_d2d86b56d674921b629553b672854fb1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__8_serve(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__8_serve,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[47],
#endif
        codeobj_f799d8d82eee13ce02d276f190ba5a1e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__9_sendto(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__9_sendto,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_d9d036759b31129f6885d0c3e17c7848,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
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

function_impl_code functable_anyio$abc$_sockets[] = {
    impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__1_lambda,
    impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__2_lambda,
    impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__3_lambda,
    impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__4_lambda,
    impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__5_lambda,
    impl_anyio$abc$_sockets$$$function__3_extra_attributes$$$function__6_lambda,
    impl_anyio$abc$_sockets$$$function__1___aenter__,
    impl_anyio$abc$_sockets$$$function__2___aexit__,
    impl_anyio$abc$_sockets$$$function__3_extra_attributes,
    NULL,
    impl_anyio$abc$_sockets$$$function__5_send_fds,
    impl_anyio$abc$_sockets$$$function__6_receive_fds,
    impl_anyio$abc$_sockets$$$function__7_accept,
    impl_anyio$abc$_sockets$$$function__8_serve,
    impl_anyio$abc$_sockets$$$function__9_sendto,
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

    function_impl_code *current = functable_anyio$abc$_sockets;
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

    if (offset > sizeof(functable_anyio$abc$_sockets) || offset < 0) {
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
        functable_anyio$abc$_sockets[offset],
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
        module_anyio$abc$_sockets,
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
PyObject *modulecode_anyio$abc$_sockets(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio.abc._sockets");

    // Store the module for future use.
    module_anyio$abc$_sockets = module;

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
        PRINT_STRING("anyio.abc._sockets: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio.abc._sockets: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio.abc._sockets: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initanyio$abc$_sockets\n");

    moduledict_anyio$abc$_sockets = MODULE_DICT(module_anyio$abc$_sockets);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$abc$_sockets,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$abc$_sockets,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[38]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$abc$_sockets,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc$_sockets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc$_sockets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$abc$_sockets);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_anyio$abc$_sockets);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
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
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_363176b16603a9b0812f6e26423e5053;
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
    PyObject *locals_anyio$abc$_sockets$$$class__1__NullAsyncContextManager_37 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_8ba15928cac439c1b483d8dadf148064_2;
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
    PyObject *locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50 = NULL;
    struct Nuitka_FrameObject *frame_7ccd0e5f700263e7e3d51a498e57e806_3;
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
    PyObject *locals_anyio$abc$_sockets$$$class__3__SocketProvider_65 = NULL;
    struct Nuitka_FrameObject *frame_a8b43bc7a1b453b3a0eea90d93b57414_4;
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
    PyObject *locals_anyio$abc$_sockets$$$class__4_SocketStream_105 = NULL;
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
    PyObject *locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113 = NULL;
    struct Nuitka_FrameObject *frame_d45fedf195f474214bfc51cd947a6519_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_anyio$abc$_sockets$$$class__6_SocketListener_137 = NULL;
    struct Nuitka_FrameObject *frame_eaa1d2f638adde1afc95ac6b7f44de2f_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *locals_anyio$abc$_sockets$$$class__7_UDPSocket_166 = NULL;
    struct Nuitka_FrameObject *frame_337e6fdca5a28a298842003c6b2bf19c_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_anyio$abc$_sockets$$$class__8_ConnectedUDPSocket_178 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_2);
    }
    frame_363176b16603a9b0812f6e26423e5053 = MAKE_MODULE_FRAME(codeobj_363176b16603a9b0812f6e26423e5053, module_anyio$abc$_sockets);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_363176b16603a9b0812f6e26423e5053);
    assert(Py_REFCNT(frame_363176b16603a9b0812f6e26423e5053) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[56];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[59], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[60], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[62];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$abc$_sockets;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[8];
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[63];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$abc$_sockets;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[64];
        tmp_level_value_2 = mod_consts[8];
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 2;
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
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[65],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_IO();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[66],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[66]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[67];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$abc$_sockets;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[68];
        tmp_level_value_3 = mod_consts[8];
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[69],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[69]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[70],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[70]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_9);
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
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[62];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$abc$_sockets;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[71];
        tmp_level_value_4 = mod_consts[8];
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[18],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        tmp_import_name_from_6 = IMPORT_HARD_TYPES();
        assert(!(tmp_import_name_from_6 == NULL));
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[72],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[72]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_12 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_12);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[73],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[73]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[74],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[74]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[75],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[75]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[76],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[76]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[77],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[77]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[78],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[78]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[79],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[79]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[80],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[80]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[81],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[81]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[82],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[82]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[83],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[83]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_18 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[84],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[84]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_24);
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
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[85];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio$abc$_sockets;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[86];
        tmp_level_value_5 = mod_consts[6];
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 22;
        tmp_assign_source_25 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[87],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[87]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_20 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[88],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_20, mod_consts[88]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_21 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[89],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_21, mod_consts[89]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_28);
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
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[90];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_anyio$abc$_sockets;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[91];
        tmp_level_value_6 = mod_consts[24];
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 27;
        tmp_assign_source_29 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_22 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[92],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_22, mod_consts[92]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_23 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[93],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_23, mod_consts[93]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_24 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[94],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_24, mod_consts[94]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_25 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[95],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_25, mod_consts[95]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_33);
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
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[96];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_anyio$abc$_sockets;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[97];
        tmp_level_value_7 = mod_consts[24];
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 28;
        tmp_import_name_from_26 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_anyio$abc$_sockets,
                mod_consts[98],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_26, mod_consts[98]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[100];
        tmp_assign_source_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        assert(!(tmp_tuple_element_2 == NULL));
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_2);
        tmp_assign_source_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_tuple_element_3;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = (PyObject *)&PyBytes_Type;
        tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_3);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 34;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[104]);

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_41;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_anyio$abc$_sockets$$$class__1__NullAsyncContextManager_37 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyDict_SetItem(locals_anyio$abc$_sockets$$$class__1__NullAsyncContextManager_37, mod_consts[107], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyDict_SetItem(locals_anyio$abc$_sockets$$$class__1__NullAsyncContextManager_37, mod_consts[108], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[109]);


            tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_sockets$$$function__1___aenter__(tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_anyio$abc$_sockets$$$class__1__NullAsyncContextManager_37, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_8ba15928cac439c1b483d8dadf148064_2 = MAKE_CLASS_FRAME(codeobj_8ba15928cac439c1b483d8dadf148064, module_anyio$abc$_sockets, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8ba15928cac439c1b483d8dadf148064_2);
        assert(Py_REFCNT(frame_8ba15928cac439c1b483d8dadf148064_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_6;
            tmp_dict_key_1 = mod_consts[110];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[82]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_6 = PyExc_BaseException;
            tmp_subscript_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
            if (tmp_subscript_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_9;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[111];
                tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[80]);

                if (unlikely(tmp_expression_value_7 == NULL)) {
                    tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                }

                if (tmp_expression_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_7 = PyExc_BaseException;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[112];
                tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[80]);

                if (unlikely(tmp_expression_value_8 == NULL)) {
                    tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                }

                if (tmp_expression_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[72]);

                if (unlikely(tmp_subscript_value_8 == NULL)) {
                    tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                }

                if (tmp_subscript_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[113];
                tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[80]);

                if (unlikely(tmp_expression_value_9 == NULL)) {
                    tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                }

                if (tmp_expression_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_9 = (PyObject *)&PyBool_Type;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_9);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_sockets$$$function__2___aexit__(tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_anyio$abc$_sockets$$$class__1__NullAsyncContextManager_37, mod_consts[2], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8ba15928cac439c1b483d8dadf148064_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8ba15928cac439c1b483d8dadf148064_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8ba15928cac439c1b483d8dadf148064_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8ba15928cac439c1b483d8dadf148064_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_8ba15928cac439c1b483d8dadf148064_2);

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
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_4 = mod_consts[42];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[114];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_anyio$abc$_sockets$$$class__1__NullAsyncContextManager_37;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 37;
            tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto try_except_handler_7;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_42 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_42);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_anyio$abc$_sockets$$$class__1__NullAsyncContextManager_37);
        locals_anyio$abc$_sockets$$$class__1__NullAsyncContextManager_37 = NULL;
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

        Py_DECREF(locals_anyio$abc$_sockets$$$class__1__NullAsyncContextManager_37);
        locals_anyio$abc$_sockets$$$class__1__NullAsyncContextManager_37 = NULL;
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
        exception_lineno = 37;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_42);
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
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_8;
        }
        tmp_assign_source_44 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_45 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_8;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_10 = tmp_class_creation_2__bases;
        tmp_subscript_value_10 = mod_consts[8];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_10, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_8;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_1 = tmp_class_creation_2__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[115]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[115]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_8;
        }
        tmp_tuple_element_6 = mod_consts[9];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 50;
        tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_2);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_13 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_13, mod_consts[116]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_8;
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
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[117];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_1 = mod_consts[118];
        tmp_getattr_default_1 = mod_consts[119];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_14 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[118]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_7);
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


            exception_lineno = 50;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 50;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_49;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[120], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        frame_7ccd0e5f700263e7e3d51a498e57e806_3 = MAKE_CLASS_FRAME(codeobj_7ccd0e5f700263e7e3d51a498e57e806, module_anyio$abc$_sockets, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7ccd0e5f700263e7e3d51a498e57e806_3);
        assert(Py_REFCNT(frame_7ccd0e5f700263e7e3d51a498e57e806_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_4;
            tmp_called_value_4 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[89]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7ccd0e5f700263e7e3d51a498e57e806_3->m_frame.f_lineno = 52;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
            Py_DECREF(tmp_called_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[18]);

            if (tmp_ass_subvalue_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_ass_subvalue_1 == NULL)) {
                        tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
                    }

                    if (tmp_ass_subvalue_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_ass_subvalue_1);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subscribed_1 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[120]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_1 = mod_consts[10];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_5;
            tmp_called_value_5 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[89]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 54;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7ccd0e5f700263e7e3d51a498e57e806_3->m_frame.f_lineno = 54;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
            Py_DECREF(tmp_called_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[102]);

            if (tmp_ass_subvalue_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_ass_subvalue_2 == NULL)) {
                        tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_ass_subvalue_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 54;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_ass_subvalue_2);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subscribed_2 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[120]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_2 = mod_consts[13];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_6;
            tmp_called_value_6 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[89]);

            if (tmp_called_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_called_value_6 == NULL)) {
                        tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_called_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 56;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7ccd0e5f700263e7e3d51a498e57e806_3->m_frame.f_lineno = 56;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
            Py_DECREF(tmp_called_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[121]);

            if (tmp_ass_subvalue_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_3 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_ass_subvalue_3);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subscribed_3 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[120]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_3 = mod_consts[22];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_7;
            tmp_called_value_7 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[89]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 58;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7ccd0e5f700263e7e3d51a498e57e806_3->m_frame.f_lineno = 58;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
            Py_DECREF(tmp_called_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_expression_value_15 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[62]);

            if (tmp_expression_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 58;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[62]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_ass_subvalue_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscribed_4 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[120]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_4);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_4 = mod_consts[14];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subscribed_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_8;
            tmp_called_value_8 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[89]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7ccd0e5f700263e7e3d51a498e57e806_3->m_frame.f_lineno = 60;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
            Py_DECREF(tmp_called_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_ass_subvalue_5 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[102]);

            if (tmp_ass_subvalue_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_5 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_ass_subvalue_5 == NULL)) {
                        tmp_ass_subvalue_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_ass_subvalue_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_ass_subvalue_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subscribed_5 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[120]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_5);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_5);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_5 = mod_consts[17];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            Py_DECREF(tmp_ass_subscribed_5);
            Py_DECREF(tmp_ass_subvalue_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_9;
            tmp_called_value_9 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[89]);

            if (tmp_called_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_called_value_9 == NULL)) {
                        tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_called_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 62;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_7ccd0e5f700263e7e3d51a498e57e806_3->m_frame.f_lineno = 62;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
            Py_DECREF(tmp_called_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[121]);

            if (tmp_ass_subvalue_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_6 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_ass_subvalue_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subscribed_6 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[120]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_6);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_6);

                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_6 = mod_consts[25];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            Py_DECREF(tmp_ass_subscribed_6);
            Py_DECREF(tmp_ass_subvalue_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7ccd0e5f700263e7e3d51a498e57e806_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7ccd0e5f700263e7e3d51a498e57e806_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7ccd0e5f700263e7e3d51a498e57e806_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7ccd0e5f700263e7e3d51a498e57e806_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_7ccd0e5f700263e7e3d51a498e57e806_3);

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


                exception_lineno = 50;

                goto try_except_handler_10;
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
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_10 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[9];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 50;
            tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto try_except_handler_10;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_50 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50);
        locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50 = NULL;
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

        Py_DECREF(locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50);
        locals_anyio$abc$_sockets$$$class__2_SocketAttribute_50 = NULL;
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
        exception_lineno = 50;
        goto try_except_handler_8;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_50);
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
        PyObject *tmp_assign_source_52;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        tmp_assign_source_52 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_52, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_53 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_16 = tmp_class_creation_3__bases;
        tmp_subscript_value_11 = mod_consts[8];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_11, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_2 = tmp_class_creation_3__bases;
        tmp_assign_source_55 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_55;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_17 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[115]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_4;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_18 = tmp_class_creation_3__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[115]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        tmp_tuple_element_10 = mod_consts[123];
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 65;
        tmp_assign_source_56 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_4);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_19 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[116]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_11;
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
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[117];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_2 = mod_consts[118];
        tmp_getattr_default_2 = mod_consts[119];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_4 = tmp_class_creation_3__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[118]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 65;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_57;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_anyio$abc$_sockets$$$class__3__SocketProvider_65 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_13;
        }
        frame_a8b43bc7a1b453b3a0eea90d93b57414_4 = MAKE_CLASS_FRAME(codeobj_a8b43bc7a1b453b3a0eea90d93b57414, module_anyio$abc$_sockets, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a8b43bc7a1b453b3a0eea90d93b57414_4);
        assert(Py_REFCNT(frame_a8b43bc7a1b453b3a0eea90d93b57414_4) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_tuple_element_14;
            tmp_res = MAPPING_HAS_ITEM(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[124]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_12 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[124]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[124]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_2 = mod_consts[113];
            tmp_expression_value_21 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[79]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[79]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_tuple_element_12 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[73]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[73]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);
                        Py_DECREF(tmp_expression_value_21);

                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_tuple_element_12);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_tuple_element_13;
                PyTuple_SET_ITEM(tmp_subscript_value_12, 0, tmp_tuple_element_12);
                tmp_expression_value_22 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[75]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[75]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 67;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_tuple_element_13 = MAKE_LIST_EMPTY(0);
                tmp_subscript_value_13 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_13, 0, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[73]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[73]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 67;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_13, 1, tmp_tuple_element_13);
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_13);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_12);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_1 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes(tmp_annotations_3);

            frame_a8b43bc7a1b453b3a0eea90d93b57414_4->m_frame.f_lineno = 66;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[113];
            tmp_expression_value_23 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[79]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[79]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_tuple_element_14 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[73]);

            if (tmp_tuple_element_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[73]);

                    if (unlikely(tmp_tuple_element_14 == NULL)) {
                        tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                    }

                    if (tmp_tuple_element_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_23);

                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_tuple_element_14);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_tuple_element_15;
                PyTuple_SET_ITEM(tmp_subscript_value_14, 0, tmp_tuple_element_14);
                tmp_expression_value_24 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[75]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[75]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 67;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_tuple_element_15 = MAKE_LIST_EMPTY(0);
                tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_15, 0, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[73]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[73]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 67;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_15, 1, tmp_tuple_element_15);
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_15);
                goto tuple_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_expression_value_23);
            Py_DECREF(tmp_subscript_value_14);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_23);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__3_extra_attributes(tmp_annotations_4);

            frame_a8b43bc7a1b453b3a0eea90d93b57414_4->m_frame.f_lineno = 66;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_26;
            tmp_res = MAPPING_HAS_ITEM(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[124]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_14 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[124]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[124]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_15 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[65]);

            if (tmp_called_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[65]);

                    if (unlikely(tmp_called_value_15 == NULL)) {
                        tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                    }

                    if (tmp_called_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 100;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_15);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_key_4 = mod_consts[113];
            tmp_expression_value_25 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[62]);

            if (tmp_expression_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 101;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_25);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[62]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__4__raw_socket(tmp_annotations_5);

            frame_a8b43bc7a1b453b3a0eea90d93b57414_4->m_frame.f_lineno = 100;
            tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_a8b43bc7a1b453b3a0eea90d93b57414_4->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_16 = (PyObject *)&PyProperty_Type;
            tmp_called_value_17 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[65]);

            if (tmp_called_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[65]);

                    if (unlikely(tmp_called_value_17 == NULL)) {
                        tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                    }

                    if (tmp_called_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 100;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_17);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_key_5 = mod_consts[113];
            tmp_expression_value_26 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[62]);

            if (tmp_expression_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 101;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_26);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[62]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__4__raw_socket(tmp_annotations_6);

            frame_a8b43bc7a1b453b3a0eea90d93b57414_4->m_frame.f_lineno = 100;
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_args_element_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_a8b43bc7a1b453b3a0eea90d93b57414_4->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a8b43bc7a1b453b3a0eea90d93b57414_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a8b43bc7a1b453b3a0eea90d93b57414_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a8b43bc7a1b453b3a0eea90d93b57414_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a8b43bc7a1b453b3a0eea90d93b57414_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_a8b43bc7a1b453b3a0eea90d93b57414_4);

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
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_13;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_18 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_16 = mod_consts[123];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_16 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_anyio$abc$_sockets$$$class__3__SocketProvider_65;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 65;
            tmp_assign_source_59 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto try_except_handler_13;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_59;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_58 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_58);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65);
        locals_anyio$abc$_sockets$$$class__3__SocketProvider_65 = NULL;
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

        Py_DECREF(locals_anyio$abc$_sockets$$$class__3__SocketProvider_65);
        locals_anyio$abc$_sockets$$$class__3__SocketProvider_65 = NULL;
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
        exception_lineno = 65;
        goto try_except_handler_11;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_58);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_tuple_element_17;
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        tmp_assign_source_60 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_60, 0, tmp_tuple_element_17);
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_60, 1, tmp_tuple_element_17);
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_assign_source_60);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_61 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        tmp_condition_result_11 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_27 = tmp_class_creation_4__bases;
        tmp_subscript_value_16 = mod_consts[8];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_27, tmp_subscript_value_16, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_3 = tmp_class_creation_4__bases;
        tmp_assign_source_63 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_63;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_28 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_28, mod_consts[115]);
        tmp_condition_result_12 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_6;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_29 = tmp_class_creation_4__metaclass;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[115]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        tmp_tuple_element_18 = mod_consts[128];
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_18 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 105;
        tmp_assign_source_64 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_6);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_64;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_30 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_30, mod_consts[116]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
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
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[117];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_3 = mod_consts[118];
        tmp_getattr_default_3 = mod_consts[119];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_31;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_6 = tmp_class_creation_4__prepared;
            tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_31 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[118]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 105;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_65;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_66;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_anyio$abc$_sockets$$$class__4_SocketStream_105 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__4_SocketStream_105, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__4_SocketStream_105, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__4_SocketStream_105, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_16;
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__4_SocketStream_105, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_16;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_7;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_20 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_20 = mod_consts[128];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_20 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_anyio$abc$_sockets$$$class__4_SocketStream_105;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
            frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 105;
            tmp_assign_source_67 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto try_except_handler_16;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_67;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_66 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_66);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_anyio$abc$_sockets$$$class__4_SocketStream_105);
        locals_anyio$abc$_sockets$$$class__4_SocketStream_105 = NULL;
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

        Py_DECREF(locals_anyio$abc$_sockets$$$class__4_SocketStream_105);
        locals_anyio$abc$_sockets$$$class__4_SocketStream_105 = NULL;
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
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
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

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 105;
        goto try_except_handler_14;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_66);
    }
    goto try_end_8;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
        PyObject *tmp_assign_source_68;
        PyObject *tmp_tuple_element_21;
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_17;
        }
        tmp_assign_source_68 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_68, 0, tmp_tuple_element_21);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_69 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_17;
        }
        tmp_condition_result_15 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_32 = tmp_class_creation_5__bases;
        tmp_subscript_value_17 = mod_consts[8];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_32, tmp_subscript_value_17, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_17;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_4 = tmp_class_creation_5__bases;
        tmp_assign_source_71 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_71;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_33 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_33, mod_consts[115]);
        tmp_condition_result_16 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_value_8;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_8;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_34 = tmp_class_creation_5__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[115]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_17;
        }
        tmp_tuple_element_22 = mod_consts[130];
        tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_22 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_8 = tmp_class_creation_5__class_decl_dict;
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 113;
        tmp_assign_source_72 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_8, tmp_kwargs_value_8);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_8);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_35 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_35, mod_consts[116]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_17;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[117];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_4 = mod_consts[118];
        tmp_getattr_default_4 = mod_consts[119];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_8 = tmp_class_creation_5__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[118]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 113;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_73;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_74;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_19;
        }
        frame_d45fedf195f474214bfc51cd947a6519_5 = MAKE_CLASS_FRAME(codeobj_d45fedf195f474214bfc51cd947a6519, module_anyio$abc$_sockets, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d45fedf195f474214bfc51cd947a6519_5);
        assert(Py_REFCNT(frame_d45fedf195f474214bfc51cd947a6519_5) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_called_value_22 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[65]);

            if (tmp_called_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[65]);

                    if (unlikely(tmp_called_value_22 == NULL)) {
                        tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                    }

                    if (tmp_called_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 114;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_22);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_dict_key_6 = mod_consts[131];
            tmp_dict_value_6 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[132]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_tuple_element_24;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[133];
                tmp_expression_value_37 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[76]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_38 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[84]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[84]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_37);

                            exception_lineno = 116;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_24 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[121]);

                if (tmp_tuple_element_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_24 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_24);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_19, 0, tmp_tuple_element_24);
                tmp_tuple_element_24 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[66]);

                if (tmp_tuple_element_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_tuple_element_24 == NULL)) {
                            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                        }

                        if (tmp_tuple_element_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_2 = "o";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_24);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_19, 1, tmp_tuple_element_24);
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_19);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                tmp_subscript_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_subscript_value_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_37);

                    exception_lineno = 116;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 116;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[113];
                tmp_dict_value_6 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_args_element_value_7 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__5_send_fds(tmp_annotations_7);

            frame_d45fedf195f474214bfc51cd947a6519_5->m_frame.f_lineno = 114;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[30], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_called_value_23 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[65]);

            if (tmp_called_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[65]);

                    if (unlikely(tmp_called_value_23 == NULL)) {
                        tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                    }

                    if (tmp_called_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 126;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_23);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_dict_key_7 = mod_consts[134];
            tmp_dict_value_7 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[121]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_tuple_element_25;
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[135];
                tmp_dict_value_7 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[121]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_7 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[113];
                tmp_expression_value_39 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[81]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[81]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 127;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_tuple_element_25 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[132]);

                if (tmp_tuple_element_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_25 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_tuple_element_25);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_40;
                    PyObject *tmp_subscript_value_21;
                    PyTuple_SET_ITEM(tmp_subscript_value_20, 0, tmp_tuple_element_25);
                    tmp_expression_value_40 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[78]);

                    if (tmp_expression_value_40 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[78]);

                            if (unlikely(tmp_expression_value_40 == NULL)) {
                                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                            }

                            if (tmp_expression_value_40 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 127;
                                type_description_2 = "o";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_expression_value_40);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_subscript_value_21 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[121]);

                    if (tmp_subscript_value_21 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_subscript_value_21 = (PyObject *)&PyLong_Type;
                            Py_INCREF(tmp_subscript_value_21);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_21);
                    Py_DECREF(tmp_expression_value_40);
                    Py_DECREF(tmp_subscript_value_21);
                    if (tmp_tuple_element_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 127;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_20, 1, tmp_tuple_element_25);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_20);
                goto dict_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_annotations_8);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_args_element_value_8 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__6_receive_fds(tmp_annotations_8);

            frame_d45fedf195f474214bfc51cd947a6519_5->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d45fedf195f474214bfc51cd947a6519_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d45fedf195f474214bfc51cd947a6519_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d45fedf195f474214bfc51cd947a6519_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d45fedf195f474214bfc51cd947a6519_5,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_d45fedf195f474214bfc51cd947a6519_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_19;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_19;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_75;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_24 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_26 = mod_consts[130];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_26 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
            frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 113;
            tmp_assign_source_75 = CALL_FUNCTION(tmp_called_value_24, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto try_except_handler_19;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_75;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_74 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_74);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113);
        locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113);
        locals_anyio$abc$_sockets$$$class__5_UNIXSocketStream_113 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 113;
        goto try_except_handler_17;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_74);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
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
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_22;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_subscript_value_22 == NULL)) {
            tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_subscript_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        tmp_tuple_element_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_22);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        tmp_assign_source_76 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_76, 0, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_76, 1, tmp_tuple_element_27);
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_assign_source_76);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_77 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        tmp_condition_result_19 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_42 = tmp_class_creation_6__bases;
        tmp_subscript_value_23 = mod_consts[8];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_42, tmp_subscript_value_23, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_5 = tmp_class_creation_6__bases;
        tmp_assign_source_79 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_79;
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_43 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_43, mod_consts[115]);
        tmp_condition_result_20 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_value_10;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_kwargs_value_10;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_44 = tmp_class_creation_6__metaclass;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[115]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        tmp_tuple_element_28 = mod_consts[136];
        tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_28 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_10 = tmp_class_creation_6__class_decl_dict;
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 137;
        tmp_assign_source_80 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_10, tmp_kwargs_value_10);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_10);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_80;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_45 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_45, mod_consts[116]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        tmp_condition_result_21 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[117];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_5 = mod_consts[118];
        tmp_getattr_default_5 = mod_consts[119];
        tmp_tuple_element_29 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_46;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_10 = tmp_class_creation_6__prepared;
            tmp_expression_value_46 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_46 == NULL));
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[118]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 137;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_20;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_81;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_82;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_anyio$abc$_sockets$$$class__6_SocketListener_137 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_22;
        }
        frame_eaa1d2f638adde1afc95ac6b7f44de2f_6 = MAKE_CLASS_FRAME(codeobj_eaa1d2f638adde1afc95ac6b7f44de2f, module_anyio$abc$_sockets, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_eaa1d2f638adde1afc95ac6b7f44de2f_6);
        assert(Py_REFCNT(frame_eaa1d2f638adde1afc95ac6b7f44de2f_6) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_called_value_26 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[65]);

            if (tmp_called_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[65]);

                    if (unlikely(tmp_called_value_26 == NULL)) {
                        tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                    }

                    if (tmp_called_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 144;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_value_26);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_dict_key_8 = mod_consts[113];
            tmp_dict_value_8 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[128]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);

                        exception_lineno = 145;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__7_accept(tmp_annotations_9);

            frame_eaa1d2f638adde1afc95ac6b7f44de2f_6->m_frame.f_lineno = 144;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_list_element_1;
            tmp_defaults_1 = mod_consts[138];
            tmp_dict_key_9 = mod_consts[44];
            tmp_expression_value_47 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[75]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 149;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_list_element_1 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[94]);

            if (tmp_list_element_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[94]);

                    if (unlikely(tmp_list_element_1 == NULL)) {
                        tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                    }

                    if (tmp_list_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_47);

                        exception_lineno = 149;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_list_element_1);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_tuple_element_30 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_tuple_element_30, 0, tmp_list_element_1);
            tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_24, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[73]);

            if (tmp_tuple_element_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[73]);

                    if (unlikely(tmp_tuple_element_30 == NULL)) {
                        tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                    }

                    if (tmp_tuple_element_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 149;
                        type_description_2 = "o";
                        goto tuple_build_exception_16;
                    }
                    Py_INCREF(tmp_tuple_element_30);
                } else {
                    goto tuple_build_exception_16;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_24, 1, tmp_tuple_element_30);
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_expression_value_47);
            Py_DECREF(tmp_subscript_value_24);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_47);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_48;
                PyObject *tmp_subscript_value_25;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[41];
                tmp_expression_value_48 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[80]);

                if (tmp_expression_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[80]);

                        if (unlikely(tmp_expression_value_48 == NULL)) {
                            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                        }

                        if (tmp_expression_value_48 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 149;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_48);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_25 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[98]);

                if (tmp_subscript_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[98]);

                        if (unlikely(tmp_subscript_value_25 == NULL)) {
                            tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                        }

                        if (tmp_subscript_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_48);

                            exception_lineno = 149;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_subscript_value_25);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_48);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 149;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[113];
                tmp_dict_value_9 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_sockets$$$function__8_serve(tmp_defaults_1, tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_eaa1d2f638adde1afc95ac6b7f44de2f_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_eaa1d2f638adde1afc95ac6b7f44de2f_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_eaa1d2f638adde1afc95ac6b7f44de2f_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_eaa1d2f638adde1afc95ac6b7f44de2f_6,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_eaa1d2f638adde1afc95ac6b7f44de2f_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_22;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_22 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto try_except_handler_22;
            }
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_SocketListener_137, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_22;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_83;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_27 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_31 = mod_consts[136];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_31 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = locals_anyio$abc$_sockets$$$class__6_SocketListener_137;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
            frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 137;
            tmp_assign_source_83 = CALL_FUNCTION(tmp_called_value_27, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto try_except_handler_22;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_83;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_82 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_82);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_anyio$abc$_sockets$$$class__6_SocketListener_137);
        locals_anyio$abc$_sockets$$$class__6_SocketListener_137 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_anyio$abc$_sockets$$$class__6_SocketListener_137);
        locals_anyio$abc$_sockets$$$class__6_SocketListener_137 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 137;
        goto try_except_handler_20;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_82);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_26;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_subscript_value_26 == NULL)) {
            tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_subscript_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        tmp_tuple_element_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_26);
        if (tmp_tuple_element_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        tmp_assign_source_84 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_84, 0, tmp_tuple_element_32);
        tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_tuple_element_32 == NULL)) {
            tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_tuple_element_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto tuple_build_exception_17;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_84, 1, tmp_tuple_element_32);
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_assign_source_84);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_85 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_23;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        tmp_condition_result_23 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_50 = tmp_class_creation_7__bases;
        tmp_subscript_value_27 = mod_consts[8];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_50, tmp_subscript_value_27, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_6 = tmp_class_creation_7__bases;
        tmp_assign_source_87 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_87;
    }
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_expression_value_51;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_51 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_51, mod_consts[115]);
        tmp_condition_result_24 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_value_12;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_kwargs_value_12;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_52 = tmp_class_creation_7__metaclass;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[115]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        tmp_tuple_element_33 = mod_consts[139];
        tmp_args_value_12 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_33 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_12 = tmp_class_creation_7__class_decl_dict;
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 166;
        tmp_assign_source_88 = CALL_FUNCTION(tmp_called_value_28, tmp_args_value_12, tmp_kwargs_value_12);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_value_12);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_88;
    }
    {
        bool tmp_condition_result_25;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_53;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_53 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_53, mod_consts[116]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        tmp_condition_result_25 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[117];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_6 = mod_consts[118];
        tmp_getattr_default_6 = mod_consts[119];
        tmp_tuple_element_34 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_54;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_12 = tmp_class_creation_7__prepared;
            tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_54 == NULL));
            tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[118]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_23;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 166;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_23;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_89;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_90;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_anyio$abc$_sockets$$$class__7_UDPSocket_166 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__7_UDPSocket_166, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__7_UDPSocket_166, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__7_UDPSocket_166, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_25;
        }
        frame_337e6fdca5a28a298842003c6b2bf19c_7 = MAKE_CLASS_FRAME(codeobj_337e6fdca5a28a298842003c6b2bf19c, module_anyio$abc$_sockets, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_337e6fdca5a28a298842003c6b2bf19c_7);
        assert(Py_REFCNT(frame_337e6fdca5a28a298842003c6b2bf19c_7) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_dict_key_10 = mod_consts[50];
            tmp_dict_value_10 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__7_UDPSocket_166, mod_consts[132]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[51];
            tmp_dict_value_10 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__7_UDPSocket_166, mod_consts[141]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[52];
            tmp_dict_value_10 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__7_UDPSocket_166, mod_consts[121]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[113];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_sockets$$$function__9_sendto(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__7_UDPSocket_166, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_337e6fdca5a28a298842003c6b2bf19c_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_337e6fdca5a28a298842003c6b2bf19c_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_337e6fdca5a28a298842003c6b2bf19c_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_337e6fdca5a28a298842003c6b2bf19c_7,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_337e6fdca5a28a298842003c6b2bf19c_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_25;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_26 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto try_except_handler_25;
            }
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__7_UDPSocket_166, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_25;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_91;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_13;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_29 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_35 = mod_consts[139];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_35 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = locals_anyio$abc$_sockets$$$class__7_UDPSocket_166;
            PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
            frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 166;
            tmp_assign_source_91 = CALL_FUNCTION(tmp_called_value_29, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto try_except_handler_25;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_91;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_90 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_90);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_anyio$abc$_sockets$$$class__7_UDPSocket_166);
        locals_anyio$abc$_sockets$$$class__7_UDPSocket_166 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_anyio$abc$_sockets$$$class__7_UDPSocket_166);
        locals_anyio$abc$_sockets$$$class__7_UDPSocket_166 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 166;
        goto try_except_handler_23;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_90);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_28;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        tmp_subscript_value_28 = (PyObject *)&PyBytes_Type;
        tmp_tuple_element_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_28);
        if (tmp_tuple_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        tmp_assign_source_92 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_92, 0, tmp_tuple_element_36);
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_tuple_element_36 == NULL)) {
            tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_tuple_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto tuple_build_exception_19;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_92, 1, tmp_tuple_element_36);
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_assign_source_92);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_93 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_27;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        tmp_condition_result_27 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_56 = tmp_class_creation_8__bases;
        tmp_subscript_value_29 = mod_consts[8];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_56, tmp_subscript_value_29, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_7 = tmp_class_creation_8__bases;
        tmp_assign_source_95 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_95;
    }
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_expression_value_57;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_57 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_57, mod_consts[115]);
        tmp_condition_result_28 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_value_14;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_kwargs_value_14;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_58 = tmp_class_creation_8__metaclass;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[115]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        tmp_tuple_element_37 = mod_consts[142];
        tmp_args_value_14 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_37 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_14 = tmp_class_creation_8__class_decl_dict;
        frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 178;
        tmp_assign_source_96 = CALL_FUNCTION(tmp_called_value_30, tmp_args_value_14, tmp_kwargs_value_14);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_value_14);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_96;
    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_59;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_59 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_59, mod_consts[116]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        tmp_condition_result_29 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[117];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_7 = mod_consts[118];
        tmp_getattr_default_7 = mod_consts[119];
        tmp_tuple_element_38 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_60;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_14 = tmp_class_creation_8__prepared;
            tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_60 == NULL));
            tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[118]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_tuple_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 178;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_26;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_97;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_98;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_anyio$abc$_sockets$$$class__8_ConnectedUDPSocket_178 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__8_ConnectedUDPSocket_178, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__8_ConnectedUDPSocket_178, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__8_ConnectedUDPSocket_178, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_28;
        }
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto try_except_handler_28;
            }
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__8_ConnectedUDPSocket_178, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_28;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_value_15;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_31 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_39 = mod_consts[142];
            tmp_args_value_15 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_39 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = locals_anyio$abc$_sockets$$$class__8_ConnectedUDPSocket_178;
            PyTuple_SET_ITEM0(tmp_args_value_15, 2, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
            frame_363176b16603a9b0812f6e26423e5053->m_frame.f_lineno = 178;
            tmp_assign_source_99 = CALL_FUNCTION(tmp_called_value_31, tmp_args_value_15, tmp_kwargs_value_15);
            Py_DECREF(tmp_args_value_15);
            if (tmp_assign_source_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto try_except_handler_28;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_99;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_98 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_98);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_anyio$abc$_sockets$$$class__8_ConnectedUDPSocket_178);
        locals_anyio$abc$_sockets$$$class__8_ConnectedUDPSocket_178 = NULL;
        goto try_return_handler_27;
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

        Py_DECREF(locals_anyio$abc$_sockets$$$class__8_ConnectedUDPSocket_178);
        locals_anyio$abc$_sockets$$$class__8_ConnectedUDPSocket_178 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 178;
        goto try_except_handler_26;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_98);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_363176b16603a9b0812f6e26423e5053, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_363176b16603a9b0812f6e26423e5053->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_363176b16603a9b0812f6e26423e5053, exception_lineno);
    }



    assertFrameObject(frame_363176b16603a9b0812f6e26423e5053);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_7:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio.abc._sockets", false);

    Py_INCREF(module_anyio$abc$_sockets);
    return module_anyio$abc$_sockets;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$abc$_sockets", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
