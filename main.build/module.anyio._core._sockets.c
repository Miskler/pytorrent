/* Generated code for Python module 'anyio._core._sockets'
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

/* The "module_anyio$_core$_sockets" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$_core$_sockets;
PyDictObject *moduledict_anyio$_core$_sockets;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[224];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[224];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("anyio._core._sockets"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 224; i++) {
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
void checkModuleConstants_anyio$_core$_sockets(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 224; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b384d28154530514ee92e54128b9f1b9;
static PyCodeObject *codeobj_180d476aa64c6aed84ef2b0747136414;
static PyCodeObject *codeobj_580aa0335a979f98a34c41144b8428e7;
static PyCodeObject *codeobj_99de0b430c5b3d04b6a850951a118b3f;
static PyCodeObject *codeobj_0039bcf784a0b65f8e3e039ec23b440f;
static PyCodeObject *codeobj_f645b13912f0489969daab3ec8ee46c4;
static PyCodeObject *codeobj_f5dd6fa46949522ce7fbdd19e37fc457;
static PyCodeObject *codeobj_57d9a6161c2e53f30fc261618aedc5ce;
static PyCodeObject *codeobj_52eb360e88ac69073a5e380f607d9bf4;
static PyCodeObject *codeobj_18926fdd68b03736ecfff9abc83addc2;
static PyCodeObject *codeobj_0949bdc6d0d4dd998969d7114b0d12e1;
static PyCodeObject *codeobj_7cab266cfd79c3b8b695353c17c08fcc;
static PyCodeObject *codeobj_96629f02c4d47d3c802f0e756ee4003a;
static PyCodeObject *codeobj_7e21195b9d9b73822304d489861677b3;
static PyCodeObject *codeobj_501aacc30bf5d5e1b3d7c560644c8e8d;
static PyCodeObject *codeobj_bc9f69a149935f419ff20b305bb77990;
static PyCodeObject *codeobj_b4f0283d4cc286941575b0f31552e4d6;
static PyCodeObject *codeobj_a7d6e81e2b3867a76adeb4d52428fdad;
static PyCodeObject *codeobj_ee8beb1203a2ce297a154cbe73dd8885;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[145]; CHECK_OBJECT(module_filename_obj);
    codeobj_b384d28154530514ee92e54128b9f1b9 = MAKE_CODE_OBJECT(module_filename_obj, 499, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[206], mod_consts[206], mod_consts[207], NULL, 1, 0, 0);
    codeobj_180d476aa64c6aed84ef2b0747136414 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[208], mod_consts[208], NULL, NULL, 0, 0, 0);
    codeobj_580aa0335a979f98a34c41144b8428e7 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_COROUTINE | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[209], NULL, 2, 2, 0);
    codeobj_99de0b430c5b3d04b6a850951a118b3f = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_COROUTINE | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[210], NULL, 2, 5, 0);
    codeobj_0039bcf784a0b65f8e3e039ec23b440f = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_COROUTINE | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[210], NULL, 2, 5, 0);
    codeobj_f645b13912f0489969daab3ec8ee46c4 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_COROUTINE | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[211], NULL, 2, 6, 0);
    codeobj_f5dd6fa46949522ce7fbdd19e37fc457 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_COROUTINE | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[211], NULL, 2, 6, 0);
    codeobj_57d9a6161c2e53f30fc261618aedc5ce = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[212], NULL, 2, 6, 0);
    codeobj_52eb360e88ac69073a5e380f607d9bf4 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[213], NULL, 1, 0, 0);
    codeobj_18926fdd68b03736ecfff9abc83addc2 = MAKE_CODE_OBJECT(module_filename_obj, 564, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[214], NULL, 1, 0, 0);
    codeobj_0949bdc6d0d4dd998969d7114b0d12e1 = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[215], NULL, 2, 4, 0);
    codeobj_7cab266cfd79c3b8b695353c17c08fcc = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[216], NULL, 0, 5, 0);
    codeobj_96629f02c4d47d3c802f0e756ee4003a = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[217], NULL, 1, 3, 0);
    codeobj_7e21195b9d9b73822304d489861677b3 = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[218], NULL, 1, 2, 0);
    codeobj_501aacc30bf5d5e1b3d7c560644c8e8d = MAKE_CODE_OBJECT(module_filename_obj, 456, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[219], NULL, 2, 4, 0);
    codeobj_bc9f69a149935f419ff20b305bb77990 = MAKE_CODE_OBJECT(module_filename_obj, 505, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[130], mod_consts[220], NULL, 2, 0, 0);
    codeobj_b4f0283d4cc286941575b0f31552e4d6 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[6], mod_consts[6], mod_consts[221], mod_consts[222], 2, 0, 0);
    codeobj_a7d6e81e2b3867a76adeb4d52428fdad = MAKE_CODE_OBJECT(module_filename_obj, 519, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[223], NULL, 1, 0, 0);
    codeobj_ee8beb1203a2ce297a154cbe73dd8885 = MAKE_CODE_OBJECT(module_filename_obj, 539, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[223], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__1_connect_tcp$$$coroutine__1_connect_tcp();


static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__2_connect_tcp$$$coroutine__1_connect_tcp();


static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__3_connect_tcp$$$coroutine__1_connect_tcp();


static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__4_connect_tcp$$$coroutine__1_connect_tcp();


static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__5_connect_tcp$$$coroutine__1_connect_tcp();


static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect$$$coroutine__1_try_connect(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__7_connect_unix$$$coroutine__1_connect_unix(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__8_create_tcp_listener$$$coroutine__1_create_tcp_listener(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__9_create_unix_listener$$$coroutine__1_create_unix_listener(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__10_create_udp_socket$$$coroutine__1_create_udp_socket(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__11_create_connected_udp_socket$$$coroutine__1_create_connected_udp_socket(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__12_getaddrinfo$$$coroutine__1_getaddrinfo(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__10_create_udp_socket(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__11_create_connected_udp_socket(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__12_getaddrinfo(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__13_getnameinfo(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__14_wait_socket_readable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__15_wait_socket_writable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__16_convert_ipv6_sockaddr(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__1_connect_tcp(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__2_connect_tcp(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__3_connect_tcp(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__4_connect_tcp(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__5_connect_tcp(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__6_connect_tcp(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__7_connect_unix(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__8_create_tcp_listener(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__9_create_unix_listener(PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$_core$_sockets$$$function__1_connect_tcp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_remote_host = python_pars[0];
    PyObject *par_remote_port = python_pars[1];
    PyObject *par_local_host = python_pars[2];
    PyObject *par_ssl_context = python_pars[3];
    PyObject *par_tls_standard_compatible = python_pars[4];
    PyObject *par_tls_hostname = python_pars[5];
    PyObject *par_happy_eyeballs_delay = python_pars[6];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__1_connect_tcp$$$coroutine__1_connect_tcp();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_remote_host);
    Py_DECREF(par_remote_host);
    CHECK_OBJECT(par_remote_port);
    Py_DECREF(par_remote_port);
    CHECK_OBJECT(par_local_host);
    Py_DECREF(par_local_host);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_tls_standard_compatible);
    Py_DECREF(par_tls_standard_compatible);
    CHECK_OBJECT(par_tls_hostname);
    Py_DECREF(par_tls_hostname);
    CHECK_OBJECT(par_happy_eyeballs_delay);
    Py_DECREF(par_happy_eyeballs_delay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_sockets$$$function__1_connect_tcp$$$coroutine__1_connect_tcp_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_sockets$$$function__1_connect_tcp$$$coroutine__1_connect_tcp_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__1_connect_tcp$$$coroutine__1_connect_tcp_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__1_connect_tcp$$$coroutine__1_connect_tcp_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__1_connect_tcp$$$coroutine__1_connect_tcp() {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__1_connect_tcp$$$coroutine__1_connect_tcp_context,
        module_anyio$_core$_sockets,
        mod_consts[0],
        NULL,
        codeobj_99de0b430c5b3d04b6a850951a118b3f,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__1_connect_tcp$$$coroutine__1_connect_tcp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__2_connect_tcp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_remote_host = python_pars[0];
    PyObject *par_remote_port = python_pars[1];
    PyObject *par_local_host = python_pars[2];
    PyObject *par_ssl_context = python_pars[3];
    PyObject *par_tls_standard_compatible = python_pars[4];
    PyObject *par_tls_hostname = python_pars[5];
    PyObject *par_happy_eyeballs_delay = python_pars[6];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__2_connect_tcp$$$coroutine__1_connect_tcp();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_remote_host);
    Py_DECREF(par_remote_host);
    CHECK_OBJECT(par_remote_port);
    Py_DECREF(par_remote_port);
    CHECK_OBJECT(par_local_host);
    Py_DECREF(par_local_host);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_tls_standard_compatible);
    Py_DECREF(par_tls_standard_compatible);
    CHECK_OBJECT(par_tls_hostname);
    Py_DECREF(par_tls_hostname);
    CHECK_OBJECT(par_happy_eyeballs_delay);
    Py_DECREF(par_happy_eyeballs_delay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_sockets$$$function__2_connect_tcp$$$coroutine__1_connect_tcp_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_sockets$$$function__2_connect_tcp$$$coroutine__1_connect_tcp_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__2_connect_tcp$$$coroutine__1_connect_tcp_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__2_connect_tcp$$$coroutine__1_connect_tcp_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__2_connect_tcp$$$coroutine__1_connect_tcp() {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__2_connect_tcp$$$coroutine__1_connect_tcp_context,
        module_anyio$_core$_sockets,
        mod_consts[0],
        NULL,
        codeobj_0039bcf784a0b65f8e3e039ec23b440f,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__2_connect_tcp$$$coroutine__1_connect_tcp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__3_connect_tcp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_remote_host = python_pars[0];
    PyObject *par_remote_port = python_pars[1];
    PyObject *par_local_host = python_pars[2];
    PyObject *par_tls = python_pars[3];
    PyObject *par_ssl_context = python_pars[4];
    PyObject *par_tls_standard_compatible = python_pars[5];
    PyObject *par_tls_hostname = python_pars[6];
    PyObject *par_happy_eyeballs_delay = python_pars[7];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__3_connect_tcp$$$coroutine__1_connect_tcp();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_remote_host);
    Py_DECREF(par_remote_host);
    CHECK_OBJECT(par_remote_port);
    Py_DECREF(par_remote_port);
    CHECK_OBJECT(par_local_host);
    Py_DECREF(par_local_host);
    CHECK_OBJECT(par_tls);
    Py_DECREF(par_tls);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_tls_standard_compatible);
    Py_DECREF(par_tls_standard_compatible);
    CHECK_OBJECT(par_tls_hostname);
    Py_DECREF(par_tls_hostname);
    CHECK_OBJECT(par_happy_eyeballs_delay);
    Py_DECREF(par_happy_eyeballs_delay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_sockets$$$function__3_connect_tcp$$$coroutine__1_connect_tcp_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_sockets$$$function__3_connect_tcp$$$coroutine__1_connect_tcp_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__3_connect_tcp$$$coroutine__1_connect_tcp_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__3_connect_tcp$$$coroutine__1_connect_tcp_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__3_connect_tcp$$$coroutine__1_connect_tcp() {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__3_connect_tcp$$$coroutine__1_connect_tcp_context,
        module_anyio$_core$_sockets,
        mod_consts[0],
        NULL,
        codeobj_f645b13912f0489969daab3ec8ee46c4,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__3_connect_tcp$$$coroutine__1_connect_tcp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__4_connect_tcp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_remote_host = python_pars[0];
    PyObject *par_remote_port = python_pars[1];
    PyObject *par_local_host = python_pars[2];
    PyObject *par_tls = python_pars[3];
    PyObject *par_ssl_context = python_pars[4];
    PyObject *par_tls_standard_compatible = python_pars[5];
    PyObject *par_tls_hostname = python_pars[6];
    PyObject *par_happy_eyeballs_delay = python_pars[7];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__4_connect_tcp$$$coroutine__1_connect_tcp();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_remote_host);
    Py_DECREF(par_remote_host);
    CHECK_OBJECT(par_remote_port);
    Py_DECREF(par_remote_port);
    CHECK_OBJECT(par_local_host);
    Py_DECREF(par_local_host);
    CHECK_OBJECT(par_tls);
    Py_DECREF(par_tls);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_tls_standard_compatible);
    Py_DECREF(par_tls_standard_compatible);
    CHECK_OBJECT(par_tls_hostname);
    Py_DECREF(par_tls_hostname);
    CHECK_OBJECT(par_happy_eyeballs_delay);
    Py_DECREF(par_happy_eyeballs_delay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_sockets$$$function__4_connect_tcp$$$coroutine__1_connect_tcp_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_sockets$$$function__4_connect_tcp$$$coroutine__1_connect_tcp_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__4_connect_tcp$$$coroutine__1_connect_tcp_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__4_connect_tcp$$$coroutine__1_connect_tcp_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__4_connect_tcp$$$coroutine__1_connect_tcp() {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__4_connect_tcp$$$coroutine__1_connect_tcp_context,
        module_anyio$_core$_sockets,
        mod_consts[0],
        NULL,
        codeobj_f5dd6fa46949522ce7fbdd19e37fc457,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__4_connect_tcp$$$coroutine__1_connect_tcp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__5_connect_tcp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_remote_host = python_pars[0];
    PyObject *par_remote_port = python_pars[1];
    PyObject *par_local_host = python_pars[2];
    PyObject *par_happy_eyeballs_delay = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__5_connect_tcp$$$coroutine__1_connect_tcp();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_remote_host);
    Py_DECREF(par_remote_host);
    CHECK_OBJECT(par_remote_port);
    Py_DECREF(par_remote_port);
    CHECK_OBJECT(par_local_host);
    Py_DECREF(par_local_host);
    CHECK_OBJECT(par_happy_eyeballs_delay);
    Py_DECREF(par_happy_eyeballs_delay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_sockets$$$function__5_connect_tcp$$$coroutine__1_connect_tcp_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_sockets$$$function__5_connect_tcp$$$coroutine__1_connect_tcp_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__5_connect_tcp$$$coroutine__1_connect_tcp_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__5_connect_tcp$$$coroutine__1_connect_tcp_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__5_connect_tcp$$$coroutine__1_connect_tcp() {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__5_connect_tcp$$$coroutine__1_connect_tcp_context,
        module_anyio$_core$_sockets,
        mod_consts[0],
        NULL,
        codeobj_580aa0335a979f98a34c41144b8428e7,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__5_connect_tcp$$$coroutine__1_connect_tcp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__6_connect_tcp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_remote_host = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_remote_port = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_local_host = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_tls = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_ssl_context = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_tls_standard_compatible = Nuitka_Cell_New1(python_pars[5]);
    struct Nuitka_CellObject *par_tls_hostname = Nuitka_Cell_New1(python_pars[6]);
    struct Nuitka_CellObject *par_happy_eyeballs_delay = Nuitka_Cell_New1(python_pars[7]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[8];

        tmp_closure_1[0] = par_happy_eyeballs_delay;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_local_host;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_remote_host;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_remote_port;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_ssl_context;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_tls;
        Py_INCREF(tmp_closure_1[5]);
        tmp_closure_1[6] = par_tls_hostname;
        Py_INCREF(tmp_closure_1[6]);
        tmp_closure_1[7] = par_tls_standard_compatible;
        Py_INCREF(tmp_closure_1[7]);

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_remote_host);
    Py_DECREF(par_remote_host);
    CHECK_OBJECT(par_remote_port);
    Py_DECREF(par_remote_port);
    CHECK_OBJECT(par_local_host);
    Py_DECREF(par_local_host);
    CHECK_OBJECT(par_tls);
    Py_DECREF(par_tls);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_tls_standard_compatible);
    Py_DECREF(par_tls_standard_compatible);
    CHECK_OBJECT(par_tls_hostname);
    Py_DECREF(par_tls_hostname);
    CHECK_OBJECT(par_happy_eyeballs_delay);
    Py_DECREF(par_happy_eyeballs_delay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp_locals {
    struct Nuitka_CellObject *var_connected_stream;
    struct Nuitka_CellObject *var_local_address;
    PyObject *var_target_addrs;
    struct Nuitka_CellObject *var_oserrors;
    PyObject *var_try_connect;
    struct Nuitka_CellObject *var_asynclib;
    PyObject *var_family;
    PyObject *var_gai_res;
    PyObject *var__;
    PyObject *var_target_host;
    PyObject *var_addr_obj;
    PyObject *var_v6_found;
    PyObject *var_v4_found;
    PyObject *var_af;
    PyObject *var_rest;
    PyObject *var_sa;
    struct Nuitka_CellObject *var_tg;
    PyObject *var_i;
    PyObject *var_addr;
    PyObject *var_event;
    PyObject *var_cause;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    nuitka_bool tmp_try_except_1__unhandled_indicator;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__element_3;
    PyObject *tmp_tuple_unpack_1__source_iter;
    PyObject *tmp_tuple_unpack_2__element_1;
    PyObject *tmp_tuple_unpack_2__element_2;
    PyObject *tmp_tuple_unpack_2__element_3;
    PyObject *tmp_tuple_unpack_2__source_iter;
    PyObject *tmp_tuple_unpack_3__element_1;
    PyObject *tmp_tuple_unpack_3__element_2;
    PyObject *tmp_tuple_unpack_3__source_iter;
    PyObject *tmp_tuple_unpack_4__element_1;
    PyObject *tmp_tuple_unpack_4__element_2;
    PyObject *tmp_tuple_unpack_4__source_iter;
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
    PyObject *tmp_with_2__enter;
    PyObject *tmp_with_2__exit;
    nuitka_bool tmp_with_2__indicator;
    PyObject *tmp_with_2__source;
    char const *type_description_1;
    int tmp_res;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
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
    bool tmp_result;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    int exception_keeper_lineno_12;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    int exception_keeper_lineno_17;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    int exception_keeper_lineno_20;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    int exception_keeper_lineno_21;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    int exception_keeper_lineno_23;
};
#endif

static PyObject *anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 9: goto yield_return_9;
    case 8: goto yield_return_8;
    case 7: goto yield_return_7;
    case 6: goto yield_return_6;
    case 5: goto yield_return_5;
    case 4: goto yield_return_4;
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_connected_stream = Nuitka_Cell_Empty();
    coroutine_heap->var_local_address = Nuitka_Cell_Empty();
    coroutine_heap->var_target_addrs = NULL;
    coroutine_heap->var_oserrors = Nuitka_Cell_Empty();
    coroutine_heap->var_try_connect = NULL;
    coroutine_heap->var_asynclib = Nuitka_Cell_Empty();
    coroutine_heap->var_family = NULL;
    coroutine_heap->var_gai_res = NULL;
    coroutine_heap->var__ = NULL;
    coroutine_heap->var_target_host = NULL;
    coroutine_heap->var_addr_obj = NULL;
    coroutine_heap->var_v6_found = NULL;
    coroutine_heap->var_v4_found = NULL;
    coroutine_heap->var_af = NULL;
    coroutine_heap->var_rest = NULL;
    coroutine_heap->var_sa = NULL;
    coroutine_heap->var_tg = Nuitka_Cell_Empty();
    coroutine_heap->var_i = NULL;
    coroutine_heap->var_addr = NULL;
    coroutine_heap->var_event = NULL;
    coroutine_heap->var_cause = NULL;
    coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_1__iter_value = NULL;
    coroutine_heap->tmp_for_loop_2__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_2__iter_value = NULL;
    coroutine_heap->tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_3 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_2__element_3 = NULL;
    coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
    coroutine_heap->tmp_tuple_unpack_3__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_3__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_3__source_iter = NULL;
    coroutine_heap->tmp_tuple_unpack_4__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_4__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_4__source_iter = NULL;
    coroutine_heap->tmp_with_1__enter = NULL;
    coroutine_heap->tmp_with_1__exit = NULL;
    coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->tmp_with_1__source = NULL;
    coroutine_heap->tmp_with_2__enter = NULL;
    coroutine_heap->tmp_with_2__exit = NULL;
    coroutine_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->tmp_with_2__source = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(Nuitka_Cell_GET(coroutine_heap->var_connected_stream) == NULL);
        Py_INCREF(tmp_assign_source_1);
        PyCell_SET(coroutine_heap->var_connected_stream, tmp_assign_source_1);

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_57d9a6161c2e53f30fc261618aedc5ce, module_anyio$_core$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[6];
        tmp_dict_key_1 = mod_consts[2];
        tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 161;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto dict_build_exception_1;
        }
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[5];
        tmp_dict_value_1 = Py_None;
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        tmp_closure_1[0] = coroutine_heap->var_asynclib;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = coroutine_heap->var_connected_stream;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = coroutine_heap->var_local_address;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = coroutine_heap->var_oserrors;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = coroutine->m_closure[3];
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = coroutine_heap->var_tg;
        Py_INCREF(tmp_closure_1[5]);

        tmp_assign_source_2 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect(tmp_annotations_1, tmp_closure_1);

        assert(coroutine_heap->var_try_connect == NULL);
        coroutine_heap->var_try_connect = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 177;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 177;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 177;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(coroutine_heap->var_asynclib) == NULL);
        PyCell_SET(coroutine_heap->var_asynclib, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        assert(Nuitka_Cell_GET(coroutine_heap->var_local_address) == NULL);
        Py_INCREF(tmp_assign_source_4);
        PyCell_SET(coroutine_heap->var_local_address, tmp_assign_source_4);

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_family == NULL);
        coroutine_heap->var_family = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[11]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 180;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[1]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 180;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_args_element_value_2;
        coroutine->m_frame->m_frame.f_lineno = 181;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[11]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_args_element_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        coroutine->m_frame->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = ASYNC_AWAIT(tmp_expression_value_3, await_normal);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_2;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = yield_return_value;
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_gai_res == NULL);
        coroutine_heap->var_gai_res = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(coroutine_heap->var_gai_res);
        tmp_expression_value_4 = coroutine_heap->var_gai_res;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_1, 0);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__source_iter == NULL);
        coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT_STARRED(tmp_unpack_1, 0, 1);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            coroutine_heap->exception_lineno = 182;
            goto try_except_handler_3;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_1 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_list_arg_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_len_arg_1 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = 1;
        tmp_condition_result_2 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 != false) {
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
        PyObject *tmp_add_expr_left_1;
        nuitka_digit tmp_add_expr_right_1;
        PyObject *tmp_len_arg_2;
        tmp_raise_type_1 = PyExc_ValueError;
        tmp_mod_expr_left_1 = mod_consts[14];
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_len_arg_2 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        tmp_add_expr_left_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_right_1 = 1;
        tmp_mod_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_mod_expr_right_1 == NULL));
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_3;
        }
        coroutine_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        coroutine_heap->exception_value = tmp_raise_value_1;
        coroutine_heap->exception_lineno = 182;
        RAISE_EXCEPTION_IMPLICIT(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
        goto try_except_handler_3;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_list_arg_value_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_list_arg_value_1 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        tmp_assign_source_10 = LIST_POP1(tmp_list_arg_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_3 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_10;
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
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = coroutine_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = coroutine_heap->var_family;
            assert(old != NULL);
            coroutine_heap->var_family = tmp_assign_source_11;
            Py_INCREF(coroutine_heap->var_family);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        assert(coroutine_heap->var__ == NULL);
        Py_INCREF(tmp_assign_source_12);
        coroutine_heap->var__ = tmp_assign_source_12;
    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_3);
        tmp_assign_source_13 = coroutine_heap->tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = Nuitka_Cell_GET(coroutine_heap->var_local_address);
            PyCell_SET(coroutine_heap->var_local_address, tmp_assign_source_13);
            Py_INCREF(tmp_assign_source_13);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_3);
    coroutine_heap->tmp_tuple_unpack_1__element_3 = NULL;

    branch_no_1:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unicode_arg_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[2]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 184;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_assign_source_14 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 184;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_target_host == NULL);
        coroutine_heap->var_target_host = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_assign_source_15;
        tmp_assign_source_15 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 186;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_4;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[2]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 186;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 186;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 186;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_4;
        }
        assert(coroutine_heap->var_addr_obj == NULL);
        coroutine_heap->var_addr_obj = tmp_assign_source_16;
    }
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
        nuitka_bool tmp_assign_source_17;
        tmp_assign_source_17 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_17;
    }
    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_3 == NULL) {
        coroutine_heap->exception_keeper_tb_3 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
    } else if (coroutine_heap->exception_keeper_lineno_3 != 0) {
        coroutine_heap->exception_keeper_tb_3 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_3, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_3, &coroutine_heap->exception_keeper_value_3, &coroutine_heap->exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_ValueError;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_7;
        coroutine->m_frame->m_frame.f_lineno = 189;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(coroutine_heap->var_target_host);
        tmp_kw_call_arg_value_0_1 = coroutine_heap->var_target_host;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 190;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_5;
        }

        tmp_kw_call_arg_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        CHECK_OBJECT(coroutine_heap->var_family);
        tmp_kw_call_dict_value_0_1 = coroutine_heap->var_family;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 190;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[17]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 190;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_5;
        }
        coroutine->m_frame->m_frame.f_lineno = 189;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_expression_value_6 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[18]);
        }

        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_5 = ASYNC_AWAIT(tmp_expression_value_6, await_normal);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_5;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_5;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_18 = yield_return_value;
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = coroutine_heap->var_gai_res;
            coroutine_heap->var_gai_res = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_False;
        assert(coroutine_heap->var_v6_found == NULL);
        Py_INCREF(tmp_assign_source_19);
        coroutine_heap->var_v6_found = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_False;
        assert(coroutine_heap->var_v4_found == NULL);
        Py_INCREF(tmp_assign_source_20);
        coroutine_heap->var_v4_found = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_LIST_EMPTY(0);
        assert(coroutine_heap->var_target_addrs == NULL);
        coroutine_heap->var_target_addrs = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(coroutine_heap->var_gai_res);
        tmp_iter_arg_2 = coroutine_heap->var_gai_res;
        tmp_assign_source_22 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 197;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_5;
        }
        assert(coroutine_heap->tmp_for_loop_1__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_22;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = coroutine_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_23 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
                coroutine_heap->exception_lineno = 197;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_1__iter_value;
            coroutine_heap->tmp_for_loop_1__iter_value = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__iter_value);
        tmp_iter_arg_3 = coroutine_heap->tmp_for_loop_1__iter_value;
        tmp_assign_source_24 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 197;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_2__source_iter;
            coroutine_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT_STARRED(tmp_unpack_2, 0, 1);
        if (tmp_assign_source_25 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            coroutine_heap->exception_lineno = 197;
            goto try_except_handler_8;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_2__element_1;
            coroutine_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_list_arg_2;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
        tmp_list_arg_2 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_26 = MAKE_LIST(tmp_list_arg_2);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 197;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_2__element_2;
            coroutine_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_2);
        tmp_len_arg_3 = coroutine_heap->tmp_tuple_unpack_2__element_2;
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tmp_len_arg_3);
        assert(!(tmp_cmp_expr_left_3 == NULL));
        tmp_cmp_expr_right_3 = 1;
        tmp_condition_result_4 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_add_expr_left_2;
        nuitka_digit tmp_add_expr_right_2;
        PyObject *tmp_len_arg_4;
        tmp_raise_type_2 = PyExc_ValueError;
        tmp_mod_expr_left_2 = mod_consts[14];
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_2);
        tmp_len_arg_4 = coroutine_heap->tmp_tuple_unpack_2__element_2;
        tmp_add_expr_left_2 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 197;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_8;
        }
        tmp_add_expr_right_2 = 1;
        tmp_mod_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        assert(!(tmp_mod_expr_right_2 == NULL));
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 197;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_8;
        }
        coroutine_heap->exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        coroutine_heap->exception_value = tmp_raise_value_2;
        coroutine_heap->exception_lineno = 197;
        RAISE_EXCEPTION_IMPLICIT(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
        goto try_except_handler_8;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_list_arg_value_2;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_2);
        tmp_list_arg_value_2 = coroutine_heap->tmp_tuple_unpack_2__element_2;
        tmp_assign_source_27 = LIST_POP1(tmp_list_arg_value_2);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 197;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_2__element_3;
            coroutine_heap->tmp_tuple_unpack_2__element_3 = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    coroutine_heap->exception_keeper_type_4 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_4 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_4 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_4;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_4;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_4;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

    goto try_except_handler_7;
    // End of try:
    try_end_4:;
    goto try_end_5;
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

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_1);
    coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_2);
    coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_3);
    coroutine_heap->tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_5;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_5;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_5;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_1);
        tmp_assign_source_28 = coroutine_heap->tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = coroutine_heap->var_af;
            coroutine_heap->var_af = tmp_assign_source_28;
            Py_INCREF(coroutine_heap->var_af);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_1);
    coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_2);
        tmp_assign_source_29 = coroutine_heap->tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = coroutine_heap->var_rest;
            coroutine_heap->var_rest = tmp_assign_source_29;
            Py_INCREF(coroutine_heap->var_rest);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_2);
    coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_3);
        tmp_assign_source_30 = coroutine_heap->tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = coroutine_heap->var_sa;
            coroutine_heap->var_sa = tmp_assign_source_30;
            Py_INCREF(coroutine_heap->var_sa);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_3);
    coroutine_heap->tmp_tuple_unpack_2__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(coroutine_heap->var_af);
        tmp_cmp_expr_left_4 = coroutine_heap->var_af;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 198;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[19]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 198;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 198;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 198;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (coroutine_heap->var_v6_found == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[20]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 198;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }

        tmp_operand_value_1 = coroutine_heap->var_v6_found;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 198;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        tmp_and_right_value_1 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = Py_True;
        {
            PyObject *old = coroutine_heap->var_v6_found;
            coroutine_heap->var_v6_found = tmp_assign_source_31;
            Py_INCREF(coroutine_heap->var_v6_found);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_tuple_element_1;
        if (coroutine_heap->var_target_addrs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 200;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_9 = coroutine_heap->var_target_addrs;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[22]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 200;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_4 = mod_consts[13];
        CHECK_OBJECT(coroutine_heap->var_af);
        tmp_tuple_element_1 = coroutine_heap->var_af;
        tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_2;
            PyTuple_SET_ITEM0(tmp_args_element_value_5, 0, tmp_tuple_element_1);
            CHECK_OBJECT(coroutine_heap->var_sa);
            tmp_expression_value_10 = coroutine_heap->var_sa;
            tmp_subscript_value_2 = mod_consts[13];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_2, 0);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 200;
                coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_5, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        coroutine->m_frame->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 200;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_11;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_operand_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(coroutine_heap->var_af);
        tmp_cmp_expr_left_5 = coroutine_heap->var_af;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 201;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[23]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 201;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 201;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 201;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (coroutine_heap->var_v4_found == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[24]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 201;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }

        tmp_operand_value_2 = coroutine_heap->var_v4_found;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 201;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        tmp_and_left_value_3 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        if (coroutine_heap->var_v6_found == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[20]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 201;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(coroutine_heap->var_v6_found);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 201;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        tmp_and_right_value_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = Py_True;
        {
            PyObject *old = coroutine_heap->var_v4_found;
            coroutine_heap->var_v4_found = tmp_assign_source_32;
            Py_INCREF(coroutine_heap->var_v4_found);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_2;
        if (coroutine_heap->var_target_addrs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 203;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_12 = coroutine_heap->var_target_addrs;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[22]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 203;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_6 = mod_consts[25];
        CHECK_OBJECT(coroutine_heap->var_af);
        tmp_tuple_element_2 = coroutine_heap->var_af;
        tmp_args_element_value_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM0(tmp_args_element_value_7, 0, tmp_tuple_element_2);
            CHECK_OBJECT(coroutine_heap->var_sa);
            tmp_expression_value_13 = coroutine_heap->var_sa;
            tmp_subscript_value_3 = mod_consts[13];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_3, 0);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 203;
                coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        coroutine->m_frame->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 203;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_tuple_element_3;
        if (coroutine_heap->var_target_addrs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 205;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_14 = coroutine_heap->var_target_addrs;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[26]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 205;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(coroutine_heap->var_af);
        tmp_tuple_element_3 = coroutine_heap->var_af;
        tmp_args_element_value_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM0(tmp_args_element_value_8, 0, tmp_tuple_element_3);
            CHECK_OBJECT(coroutine_heap->var_sa);
            tmp_expression_value_15 = coroutine_heap->var_sa;
            tmp_subscript_value_4 = mod_consts[13];
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_4, 0);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 205;
                coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_8, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_8);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        coroutine->m_frame->m_frame.f_lineno = 205;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 205;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_6:;
    branch_end_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 197;
        coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_type_6 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_6 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_6 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
    coroutine_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
    coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_6;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_6;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_6;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

    goto try_except_handler_5;
    // End of try:
    try_end_6:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
    coroutine_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
    coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
    goto branch_end_3;
    branch_no_3:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 185;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
    goto try_except_handler_5;
    branch_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_5:;
    coroutine_heap->exception_keeper_type_7 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_7 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_7 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_7;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_7;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_7;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(coroutine_heap->tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = coroutine_heap->tmp_try_except_1__unhandled_indicator;
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
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if (coroutine_heap->var_addr_obj == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 207;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = coroutine_heap->var_addr_obj;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 207;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 207;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 208;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[19]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 208;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_17;
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_4);
            if (coroutine_heap->var_addr_obj == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 208;
                coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
                goto tuple_build_exception_4;
            }

            tmp_expression_value_17 = coroutine_heap->var_addr_obj;
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[29]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 208;
                coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_33 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_33, 0, tmp_list_element_1);
        {
            PyObject *old = coroutine_heap->var_target_addrs;
            coroutine_heap->var_target_addrs = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_list_element_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 210;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[23]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 210;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyTuple_SET_ITEM(tmp_list_element_2, 0, tmp_tuple_element_5);
            if (coroutine_heap->var_addr_obj == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 210;
                coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
                goto tuple_build_exception_5;
            }

            tmp_expression_value_19 = coroutine_heap->var_addr_obj;
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[29]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 210;
                coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_list_element_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assign_source_34 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_34, 0, tmp_list_element_2);
        {
            PyObject *old = coroutine_heap->var_target_addrs;
            coroutine_heap->var_target_addrs = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    branch_end_8:;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_LIST_EMPTY(0);
        assert(Nuitka_Cell_GET(coroutine_heap->var_oserrors) == NULL);
        PyCell_SET(coroutine_heap->var_oserrors, tmp_assign_source_35);

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        coroutine->m_frame->m_frame.f_lineno = 213;
        tmp_assign_source_36 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        assert(coroutine_heap->tmp_with_2__source == NULL);
        coroutine_heap->tmp_with_2__source = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
        tmp_expression_value_20 = coroutine_heap->tmp_with_2__source;
        tmp_called_value_9 = LOOKUP_SPECIAL(tmp_expression_value_20, mod_consts[31]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        coroutine->m_frame->m_frame.f_lineno = 213;
        tmp_assign_source_37 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        assert(coroutine_heap->tmp_with_2__enter == NULL);
        coroutine_heap->tmp_with_2__enter = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
        tmp_expression_value_21 = coroutine_heap->tmp_with_2__source;
        tmp_assign_source_38 = LOOKUP_SPECIAL(tmp_expression_value_21, mod_consts[32]);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        assert(coroutine_heap->tmp_with_2__exit == NULL);
        coroutine_heap->tmp_with_2__exit = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        coroutine->m_frame->m_frame.f_lineno = 213;
        CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
        tmp_expression_value_23 = coroutine_heap->tmp_with_2__enter;
        tmp_expression_value_22 = ASYNC_AWAIT(tmp_expression_value_23, await_enter);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_23, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yieldfrom = tmp_expression_value_22;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_23, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_39 = yield_return_value;
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = coroutine_heap->tmp_with_2__enter;
            assert(old != NULL);
            coroutine_heap->tmp_with_2__enter = tmp_assign_source_39;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_40;
        tmp_assign_source_40 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_with_2__indicator = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
        tmp_assign_source_41 = coroutine_heap->tmp_with_2__enter;
        assert(Nuitka_Cell_GET(coroutine_heap->var_tg) == NULL);
        Py_INCREF(tmp_assign_source_41);
        PyCell_SET(coroutine_heap->var_tg, tmp_assign_source_41);

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_10 = (PyObject *)&PyEnum_Type;
        if (coroutine_heap->var_target_addrs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_9 = coroutine_heap->var_target_addrs;
        coroutine->m_frame->m_frame.f_lineno = 214;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_9);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_42 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_11;
        }
        assert(coroutine_heap->tmp_for_loop_2__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_42;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = coroutine_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_43 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_43 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
                coroutine_heap->exception_lineno = 214;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_2__iter_value;
            coroutine_heap->tmp_for_loop_2__iter_value = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_2__iter_value);
        tmp_iter_arg_5 = coroutine_heap->tmp_for_loop_2__iter_value;
        tmp_assign_source_44 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_3__source_iter;
            coroutine_heap->tmp_tuple_unpack_3__source_iter = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_3 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_45 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_45 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            coroutine_heap->exception_lineno = 214;
            goto try_except_handler_14;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_3__element_1;
            coroutine_heap->tmp_tuple_unpack_3__element_1 = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_4 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_46 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_46 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            coroutine_heap->exception_lineno = 214;
            goto try_except_handler_14;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_3__element_2;
            coroutine_heap->tmp_tuple_unpack_3__element_2 = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
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

                    coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
                    coroutine_heap->exception_lineno = 214;
                    goto try_except_handler_14;
                }
            }
        } else {
            Py_DECREF(coroutine_heap->tmp_iterator_attempt);

            coroutine_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            coroutine_heap->exception_value = mod_consts[33];
            Py_INCREF(coroutine_heap->exception_value);
            coroutine_heap->exception_tb = NULL;

            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            coroutine_heap->exception_lineno = 214;
            goto try_except_handler_14;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    coroutine_heap->exception_keeper_type_8 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_8 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_8 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_3__source_iter);
    coroutine_heap->tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_8;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_8;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_8;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

    goto try_except_handler_13;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_3__source_iter);
    coroutine_heap->tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__element_1);
        tmp_assign_source_47 = coroutine_heap->tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = coroutine_heap->var_i;
            coroutine_heap->var_i = tmp_assign_source_47;
            Py_INCREF(coroutine_heap->var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_1);
    coroutine_heap->tmp_tuple_unpack_3__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__element_2);
        tmp_iter_arg_6 = coroutine_heap->tmp_tuple_unpack_3__element_2;
        tmp_assign_source_48 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_4__source_iter;
            coroutine_heap->tmp_tuple_unpack_4__source_iter = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_5 = coroutine_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_49 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_49 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            coroutine_heap->exception_lineno = 214;
            goto try_except_handler_16;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_4__element_1;
            coroutine_heap->tmp_tuple_unpack_4__element_1 = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_6 = coroutine_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_50 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_50 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            coroutine_heap->exception_lineno = 214;
            goto try_except_handler_16;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_4__element_2;
            coroutine_heap->tmp_tuple_unpack_4__element_2 = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_2 = coroutine_heap->tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        coroutine_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(coroutine_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

                    coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
                    coroutine_heap->exception_lineno = 214;
                    goto try_except_handler_16;
                }
            }
        } else {
            Py_DECREF(coroutine_heap->tmp_iterator_attempt);

            coroutine_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            coroutine_heap->exception_value = mod_consts[33];
            Py_INCREF(coroutine_heap->exception_value);
            coroutine_heap->exception_tb = NULL;

            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            coroutine_heap->exception_lineno = 214;
            goto try_except_handler_16;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_16:;
    coroutine_heap->exception_keeper_type_9 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_9 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_9 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_4__source_iter);
    coroutine_heap->tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_9;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_9;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_9;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_9;

    goto try_except_handler_15;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_15:;
    coroutine_heap->exception_keeper_type_10 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_10 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_10 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_10 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_4__element_1);
    coroutine_heap->tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_4__element_2);
    coroutine_heap->tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_10;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_10;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_10;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_10;

    goto try_except_handler_13;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    coroutine_heap->exception_keeper_type_11 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_11 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_11 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_11 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_1);
    coroutine_heap->tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_2);
    coroutine_heap->tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_11;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_11;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_11;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_4__source_iter);
    coroutine_heap->tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__element_1);
        tmp_assign_source_51 = coroutine_heap->tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = coroutine_heap->var_af;
            coroutine_heap->var_af = tmp_assign_source_51;
            Py_INCREF(coroutine_heap->var_af);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_4__element_1);
    coroutine_heap->tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__element_2);
        tmp_assign_source_52 = coroutine_heap->tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = coroutine_heap->var_addr;
            coroutine_heap->var_addr = tmp_assign_source_52;
            Py_INCREF(coroutine_heap->var_addr);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_4__element_2);
    coroutine_heap->tmp_tuple_unpack_4__element_2 = NULL;

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_2);
    coroutine_heap->tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_12;
        }
        coroutine->m_frame->m_frame.f_lineno = 215;
        tmp_assign_source_53 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = coroutine_heap->var_event;
            coroutine_heap->var_event = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        if (Nuitka_Cell_GET(coroutine_heap->var_tg) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[34]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 216;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_24 = Nuitka_Cell_GET(coroutine_heap->var_tg);
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[35]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 216;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_12;
        }
        if (coroutine_heap->var_try_connect == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[6]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 216;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_12;
        }

        tmp_args_element_value_10 = coroutine_heap->var_try_connect;
        CHECK_OBJECT(coroutine_heap->var_addr);
        tmp_args_element_value_11 = coroutine_heap->var_addr;
        CHECK_OBJECT(coroutine_heap->var_event);
        tmp_args_element_value_12 = coroutine_heap->var_event;
        coroutine->m_frame->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 216;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_4);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_17;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[37]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_17;
        }

        tmp_args_element_value_13 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 217;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = coroutine_heap->tmp_with_1__source;
            coroutine_heap->tmp_with_1__source = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
        tmp_expression_value_25 = coroutine_heap->tmp_with_1__source;
        tmp_called_value_14 = LOOKUP_SPECIAL(tmp_expression_value_25, mod_consts[38]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_17;
        }
        coroutine->m_frame->m_frame.f_lineno = 217;
        tmp_assign_source_55 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
        Py_DECREF(tmp_called_value_14);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = coroutine_heap->tmp_with_1__enter;
            coroutine_heap->tmp_with_1__enter = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
        tmp_expression_value_26 = coroutine_heap->tmp_with_1__source;
        tmp_assign_source_56 = LOOKUP_SPECIAL(tmp_expression_value_26, mod_consts[39]);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = coroutine_heap->tmp_with_1__exit;
            coroutine_heap->tmp_with_1__exit = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_57;
        tmp_assign_source_57 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_with_1__indicator = tmp_assign_source_57;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 218;
        CHECK_OBJECT(coroutine_heap->var_event);
        tmp_called_instance_1 = coroutine_heap->var_event;
        coroutine->m_frame->m_frame.f_lineno = 218;
        tmp_expression_value_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[40]);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 218;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_19;
        }
        tmp_expression_value_27 = ASYNC_AWAIT(tmp_expression_value_28, await_normal);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 218;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_19;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_28, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 4;
        coroutine->m_yieldfrom = tmp_expression_value_27;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_4:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_28, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 218;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_19;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 218;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_19;
        }
        Py_DECREF(tmp_await_result_1);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_19:;
    coroutine_heap->exception_keeper_type_12 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_12 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_12 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_12 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_12 == NULL) {
        coroutine_heap->exception_keeper_tb_12 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_12);
    } else if (coroutine_heap->exception_keeper_lineno_12 != 0) {
        coroutine_heap->exception_keeper_tb_12 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_12, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_12);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_12, &coroutine_heap->exception_keeper_value_12, &coroutine_heap->exception_keeper_tb_12);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_BaseException;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_9 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        nuitka_bool tmp_assign_source_58;
        tmp_assign_source_58 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_with_1__indicator = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_15 = coroutine_heap->tmp_with_1__exit;
        tmp_args_element_value_14 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_15 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_16 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        coroutine->m_frame->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_15, call_args);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_20;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_20;
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
        coroutine_heap->exception_lineno = 217;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
    goto try_except_handler_20;
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 217;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
    goto try_except_handler_20;
    branch_end_9:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_20:;
    coroutine_heap->exception_keeper_type_13 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_13 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_13 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_13 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_2);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_13;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_13;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_13;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_13;

    goto try_except_handler_18;
    // End of try:
    try_end_13:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_2);

    goto try_end_12;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_12:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_18:;
    coroutine_heap->exception_keeper_type_14 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_14 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_14 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_14 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_11;
        nuitka_bool tmp_cmp_expr_left_8;
        nuitka_bool tmp_cmp_expr_right_8;
        assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_8 = coroutine_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_11 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_16 = coroutine_heap->tmp_with_1__exit;
        coroutine->m_frame->m_frame.f_lineno = 217;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_16, mod_consts[41]);

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_14);
            Py_XDECREF(coroutine_heap->exception_keeper_value_14);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_14);

            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_11:;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_14;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_14;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_14;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_14;

    goto try_except_handler_17;
    // End of try:
    try_end_14:;
    {
        bool tmp_condition_result_12;
        nuitka_bool tmp_cmp_expr_left_9;
        nuitka_bool tmp_cmp_expr_right_9;
        assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_9 = coroutine_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_12 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_17 = coroutine_heap->tmp_with_1__exit;
        coroutine->m_frame->m_frame.f_lineno = 217;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_17, mod_consts[41]);

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_12:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_17:;
    coroutine_heap->exception_keeper_type_15 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_15 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_15 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_15 = coroutine_heap->exception_lineno;
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
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_15;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_15;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_15;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_15;

    goto try_except_handler_12;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
    Py_DECREF(coroutine_heap->tmp_with_1__source);
    coroutine_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
    Py_DECREF(coroutine_heap->tmp_with_1__enter);
    coroutine_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_1__exit);
    coroutine_heap->tmp_with_1__exit = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 214;
        coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
        goto try_except_handler_12;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_12:;
    coroutine_heap->exception_keeper_type_16 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_16 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_16 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_16 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_for_loop_2__iter_value);
    coroutine_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_2__for_iterator);
    coroutine_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_16;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_16;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_16;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_16;

    goto try_except_handler_11;
    // End of try:
    try_end_16:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_2__iter_value);
    coroutine_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_2__for_iterator);
    coroutine_heap->tmp_for_loop_2__for_iterator = NULL;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_11:;
    coroutine_heap->exception_keeper_type_17 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_17 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_17 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_17 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 3.
    coroutine_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_17 == NULL) {
        coroutine_heap->exception_keeper_tb_17 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_17);
    } else if (coroutine_heap->exception_keeper_lineno_17 != 0) {
        coroutine_heap->exception_keeper_tb_17 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_17, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_17);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_17, &coroutine_heap->exception_keeper_value_17, &coroutine_heap->exception_keeper_tb_17);
    // Tried code:
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_10 = PyExc_BaseException;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_13 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        nuitka_bool tmp_assign_source_59;
        tmp_assign_source_59 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_with_2__indicator = tmp_assign_source_59;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        coroutine->m_frame->m_frame.f_lineno = 213;
        CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
        tmp_called_value_18 = coroutine_heap->tmp_with_2__exit;
        tmp_args_element_value_17 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_18 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_19 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        coroutine->m_frame->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_expression_value_30 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_18, call_args);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_21;
        }
        tmp_expression_value_29 = ASYNC_AWAIT(tmp_expression_value_30, await_exit);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_21;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_14, sizeof(bool), &tmp_expression_value_30, sizeof(PyObject *), &tmp_called_value_18, sizeof(PyObject *), &tmp_args_element_value_17, sizeof(PyObject *), &tmp_args_element_value_18, sizeof(PyObject *), &tmp_args_element_value_19, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 5;
        coroutine->m_yieldfrom = tmp_expression_value_29;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_5:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_14, sizeof(bool), &tmp_expression_value_30, sizeof(PyObject *), &tmp_called_value_18, sizeof(PyObject *), &tmp_args_element_value_17, sizeof(PyObject *), &tmp_args_element_value_18, sizeof(PyObject *), &tmp_args_element_value_19, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_21;
        }
        tmp_operand_value_4 = yield_return_value;
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_21;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_21;
        }
        tmp_condition_result_14 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 213;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
    goto try_except_handler_21;
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 213;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
    goto try_except_handler_21;
    branch_end_13:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_21:;
    coroutine_heap->exception_keeper_type_18 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_18 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_18 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_18 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_3);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_18;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_18;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_18;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_18;

    goto try_except_handler_10;
    // End of try:
    try_end_18:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_3);

    goto try_end_17;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_17:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_10:;
    coroutine_heap->exception_keeper_type_19 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_19 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_19 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_19 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_15;
        nuitka_bool tmp_cmp_expr_left_11;
        nuitka_bool tmp_cmp_expr_right_11;
        assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_11 = coroutine_heap->tmp_with_2__indicator;
        tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
        tmp_condition_result_15 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_called_value_19;
        PyObject *tmp_await_result_2;
        coroutine->m_frame->m_frame.f_lineno = 213;
        CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
        tmp_called_value_19 = coroutine_heap->tmp_with_2__exit;
        coroutine->m_frame->m_frame.f_lineno = 213;
        tmp_expression_value_32 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_19, mod_consts[41]);

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_19);
            Py_XDECREF(coroutine_heap->exception_keeper_value_19);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_19);

            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        tmp_expression_value_31 = ASYNC_AWAIT(tmp_expression_value_32, await_exit);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_19);
            Py_XDECREF(coroutine_heap->exception_keeper_value_19);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_19);

            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_value_19, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 6;
        coroutine->m_yieldfrom = tmp_expression_value_31;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_6:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_value_19, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_19);
            Py_XDECREF(coroutine_heap->exception_keeper_value_19);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_19);

            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        tmp_await_result_2 = yield_return_value;
        if (tmp_await_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_19);
            Py_XDECREF(coroutine_heap->exception_keeper_value_19);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_19);

            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_await_result_2);
    }
    branch_no_15:;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_19;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_19;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_19;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_19;

    goto try_except_handler_9;
    // End of try:
    try_end_19:;
    {
        bool tmp_condition_result_16;
        nuitka_bool tmp_cmp_expr_left_12;
        nuitka_bool tmp_cmp_expr_right_12;
        assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_12 = coroutine_heap->tmp_with_2__indicator;
        tmp_cmp_expr_right_12 = NUITKA_BOOL_TRUE;
        tmp_condition_result_16 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_called_value_20;
        PyObject *tmp_await_result_3;
        coroutine->m_frame->m_frame.f_lineno = 213;
        CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
        tmp_called_value_20 = coroutine_heap->tmp_with_2__exit;
        coroutine->m_frame->m_frame.f_lineno = 213;
        tmp_expression_value_34 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_20, mod_consts[41]);

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        tmp_expression_value_33 = ASYNC_AWAIT(tmp_expression_value_34, await_exit);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_34, sizeof(PyObject *), &tmp_called_value_20, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 7;
        coroutine->m_yieldfrom = tmp_expression_value_33;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_7:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_34, sizeof(PyObject *), &tmp_called_value_20, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        tmp_await_result_3 = yield_return_value;
        if (tmp_await_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_await_result_3);
    }
    branch_no_16:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_9:;
    coroutine_heap->exception_keeper_type_20 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_20 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_20 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_20 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_with_2__source);
    coroutine_heap->tmp_with_2__source = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_2__enter);
    coroutine_heap->tmp_with_2__enter = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_2__exit);
    coroutine_heap->tmp_with_2__exit = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_20;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_20;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_20;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
    Py_DECREF(coroutine_heap->tmp_with_2__source);
    coroutine_heap->tmp_with_2__source = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
    Py_DECREF(coroutine_heap->tmp_with_2__enter);
    coroutine_heap->tmp_with_2__enter = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_2__exit);
    coroutine_heap->tmp_with_2__exit = NULL;
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        if (Nuitka_Cell_GET(coroutine_heap->var_connected_stream) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[42]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 220;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_13 = Nuitka_Cell_GET(coroutine_heap->var_connected_stream);
        tmp_cmp_expr_right_13 = Py_None;
        tmp_condition_result_17 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_60;
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_14;
        nuitka_digit tmp_cmp_expr_right_14;
        PyObject *tmp_len_arg_5;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_20;
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_oserrors));
        tmp_len_arg_5 = Nuitka_Cell_GET(coroutine_heap->var_oserrors);
        tmp_cmp_expr_left_14 = BUILTIN_LEN(tmp_len_arg_5);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 221;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_14 = 1;
        tmp_condition_result_18 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        Py_DECREF(tmp_cmp_expr_left_14);
        if (tmp_condition_result_18 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_oserrors));
        tmp_expression_value_35 = Nuitka_Cell_GET(coroutine_heap->var_oserrors);
        tmp_subscript_value_5 = mod_consts[13];
        tmp_assign_source_60 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_35, tmp_subscript_value_5, 0);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 221;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_asynclib));
        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine_heap->var_asynclib);
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_oserrors));
        tmp_args_element_value_20 = Nuitka_Cell_GET(coroutine_heap->var_oserrors);
        coroutine->m_frame->m_frame.f_lineno = 221;
        tmp_assign_source_60 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[43], tmp_args_element_value_20);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 221;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(coroutine_heap->var_cause == NULL);
        coroutine_heap->var_cause = tmp_assign_source_60;
    }
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_raise_cause_1;
        tmp_make_exception_arg_1 = mod_consts[44];
        coroutine->m_frame->m_frame.f_lineno = 222;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_OSError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_3 == NULL));
        CHECK_OBJECT(coroutine_heap->var_cause);
        tmp_raise_cause_1 = coroutine_heap->var_cause;
        coroutine_heap->exception_type = tmp_raise_type_3;
        coroutine_heap->exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        coroutine_heap->exception_lineno = 222;
        RAISE_EXCEPTION_WITH_CAUSE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb, tmp_raise_cause_1);
        coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
        goto frame_exception_exit_1;
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_19;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_3;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        int tmp_truth_name_4;
        int tmp_truth_name_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[45]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 224;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[5]));
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 224;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 224;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[46]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 224;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[6]));
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 224;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 224;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[47]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 224;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_5 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[4]));
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 224;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_19 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_19 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    // Tried code:
    {
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_unicode_arg_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        coroutine->m_frame->m_frame.f_lineno = 226;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 226;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[49]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 226;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }
        if (Nuitka_Cell_GET(coroutine_heap->var_connected_stream) == NULL) {
            Py_DECREF(tmp_called_value_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[42]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 227;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }

        tmp_kw_call_arg_value_0_2 = Nuitka_Cell_GET(coroutine_heap->var_connected_stream);
        tmp_kw_call_dict_value_0_2 = Py_False;
        if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {
            Py_DECREF(tmp_called_value_21);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[46]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 229;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }

        tmp_or_left_value_3 = Nuitka_Cell_GET(coroutine->m_closure[6]);
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_21);

            coroutine_heap->exception_lineno = 229;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_21);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[2]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 229;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }

        tmp_unicode_arg_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_or_right_value_3 = BUILTIN_UNICODE1(tmp_unicode_arg_3);
        if (tmp_or_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_21);

            coroutine_heap->exception_lineno = 229;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }
        tmp_kw_call_dict_value_1_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        Py_INCREF(tmp_or_left_value_3);
        tmp_kw_call_dict_value_1_2 = tmp_or_left_value_3;
        or_end_3:;
        if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[47]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 230;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }

        tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
        if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[50]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 231;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }

        tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
        coroutine->m_frame->m_frame.f_lineno = 226;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_expression_value_37 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_21, args, kw_values, mod_consts[51]);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 226;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }
        tmp_expression_value_36 = ASYNC_AWAIT(tmp_expression_value_37, await_normal);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 226;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_37, sizeof(PyObject *), &tmp_called_value_21, sizeof(PyObject *), &tmp_expression_value_38, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_1_2, sizeof(PyObject *), &tmp_or_left_truth_3, sizeof(int), &tmp_or_left_value_3, sizeof(PyObject *), &tmp_or_right_value_3, sizeof(PyObject *), &tmp_unicode_arg_3, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 8;
        coroutine->m_yieldfrom = tmp_expression_value_36;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_8:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_37, sizeof(PyObject *), &tmp_called_value_21, sizeof(PyObject *), &tmp_expression_value_38, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_1_2, sizeof(PyObject *), &tmp_or_left_truth_3, sizeof(int), &tmp_or_left_value_3, sizeof(PyObject *), &tmp_or_right_value_3, sizeof(PyObject *), &tmp_unicode_arg_3, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 226;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 226;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_22;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_22:;
    coroutine_heap->exception_keeper_type_21 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_21 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_21 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_21 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 4.
    coroutine_heap->exception_preserved_4 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_21 == NULL) {
        coroutine_heap->exception_keeper_tb_21 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_21);
    } else if (coroutine_heap->exception_keeper_lineno_21 != 0) {
        coroutine_heap->exception_keeper_tb_21 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_21, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_21);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_21, &coroutine_heap->exception_keeper_value_21, &coroutine_heap->exception_keeper_tb_21);
    // Tried code:
    {
        bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        tmp_cmp_expr_left_15 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_15 = PyExc_BaseException;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_20 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_await_result_4;
        coroutine->m_frame->m_frame.f_lineno = 234;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_23;
        }
        if (Nuitka_Cell_GET(coroutine_heap->var_connected_stream) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[42]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_23;
        }

        tmp_args_element_value_21 = Nuitka_Cell_GET(coroutine_heap->var_connected_stream);
        coroutine->m_frame->m_frame.f_lineno = 234;
        tmp_expression_value_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_21);
        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_23;
        }
        tmp_expression_value_39 = ASYNC_AWAIT(tmp_expression_value_40, await_normal);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_23;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_40, sizeof(PyObject *), &tmp_called_value_22, sizeof(PyObject *), &tmp_args_element_value_21, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 9;
        coroutine->m_yieldfrom = tmp_expression_value_39;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_9:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_40, sizeof(PyObject *), &tmp_called_value_22, sizeof(PyObject *), &tmp_args_element_value_21, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_23;
        }
        tmp_await_result_4 = yield_return_value;
        if (tmp_await_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_await_result_4);
    }
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 235;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
    goto try_except_handler_23;
    goto branch_end_19;
    branch_no_19:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 225;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
    goto try_except_handler_23;
    branch_end_19:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_23:;
    coroutine_heap->exception_keeper_type_22 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_22 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_22 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_22 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_4);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_22;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_22;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_22;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    branch_no_18:;
    if (Nuitka_Cell_GET(coroutine_heap->var_connected_stream) == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[42]);
        coroutine_heap->exception_tb = NULL;
        NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        CHAIN_EXCEPTION(coroutine_heap->exception_value);

        coroutine_heap->exception_lineno = 237;
        coroutine_heap->type_description_1 = "ccccccccccococoooooooooocoooo";
        goto frame_exception_exit_1;
    }

    coroutine_heap->tmp_return_value = Nuitka_Cell_GET(coroutine_heap->var_connected_stream);
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
            coroutine->m_closure[3],
            coroutine->m_closure[1],
            coroutine->m_closure[5],
            coroutine->m_closure[4],
            coroutine->m_closure[7],
            coroutine->m_closure[6],
            coroutine->m_closure[0],
            coroutine_heap->var_connected_stream,
            coroutine_heap->var_local_address,
            coroutine_heap->var_target_addrs,
            coroutine_heap->var_oserrors,
            coroutine_heap->var_try_connect,
            coroutine_heap->var_asynclib,
            coroutine_heap->var_family,
            coroutine_heap->var_gai_res,
            coroutine_heap->var__,
            coroutine_heap->var_target_host,
            coroutine_heap->var_addr_obj,
            coroutine_heap->var_v6_found,
            coroutine_heap->var_v4_found,
            coroutine_heap->var_af,
            coroutine_heap->var_rest,
            coroutine_heap->var_sa,
            coroutine_heap->var_tg,
            coroutine_heap->var_i,
            coroutine_heap->var_addr,
            coroutine_heap->var_event,
            coroutine_heap->var_cause
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
    CHECK_OBJECT(coroutine_heap->var_connected_stream);
    Py_DECREF(coroutine_heap->var_connected_stream);
    coroutine_heap->var_connected_stream = NULL;
    CHECK_OBJECT(coroutine_heap->var_local_address);
    Py_DECREF(coroutine_heap->var_local_address);
    coroutine_heap->var_local_address = NULL;
    Py_XDECREF(coroutine_heap->var_target_addrs);
    coroutine_heap->var_target_addrs = NULL;
    CHECK_OBJECT(coroutine_heap->var_oserrors);
    Py_DECREF(coroutine_heap->var_oserrors);
    coroutine_heap->var_oserrors = NULL;
    Py_XDECREF(coroutine_heap->var_try_connect);
    coroutine_heap->var_try_connect = NULL;
    CHECK_OBJECT(coroutine_heap->var_asynclib);
    Py_DECREF(coroutine_heap->var_asynclib);
    coroutine_heap->var_asynclib = NULL;
    Py_XDECREF(coroutine_heap->var_family);
    coroutine_heap->var_family = NULL;
    Py_XDECREF(coroutine_heap->var_gai_res);
    coroutine_heap->var_gai_res = NULL;
    Py_XDECREF(coroutine_heap->var__);
    coroutine_heap->var__ = NULL;
    Py_XDECREF(coroutine_heap->var_target_host);
    coroutine_heap->var_target_host = NULL;
    Py_XDECREF(coroutine_heap->var_addr_obj);
    coroutine_heap->var_addr_obj = NULL;
    Py_XDECREF(coroutine_heap->var_v6_found);
    coroutine_heap->var_v6_found = NULL;
    Py_XDECREF(coroutine_heap->var_v4_found);
    coroutine_heap->var_v4_found = NULL;
    Py_XDECREF(coroutine_heap->var_af);
    coroutine_heap->var_af = NULL;
    Py_XDECREF(coroutine_heap->var_rest);
    coroutine_heap->var_rest = NULL;
    Py_XDECREF(coroutine_heap->var_sa);
    coroutine_heap->var_sa = NULL;
    CHECK_OBJECT(coroutine_heap->var_tg);
    Py_DECREF(coroutine_heap->var_tg);
    coroutine_heap->var_tg = NULL;
    Py_XDECREF(coroutine_heap->var_i);
    coroutine_heap->var_i = NULL;
    Py_XDECREF(coroutine_heap->var_addr);
    coroutine_heap->var_addr = NULL;
    Py_XDECREF(coroutine_heap->var_event);
    coroutine_heap->var_event = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_23 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_23 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_23 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_23 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    CHECK_OBJECT(coroutine_heap->var_connected_stream);
    Py_DECREF(coroutine_heap->var_connected_stream);
    coroutine_heap->var_connected_stream = NULL;
    CHECK_OBJECT(coroutine_heap->var_local_address);
    Py_DECREF(coroutine_heap->var_local_address);
    coroutine_heap->var_local_address = NULL;
    Py_XDECREF(coroutine_heap->var_target_addrs);
    coroutine_heap->var_target_addrs = NULL;
    CHECK_OBJECT(coroutine_heap->var_oserrors);
    Py_DECREF(coroutine_heap->var_oserrors);
    coroutine_heap->var_oserrors = NULL;
    Py_XDECREF(coroutine_heap->var_try_connect);
    coroutine_heap->var_try_connect = NULL;
    CHECK_OBJECT(coroutine_heap->var_asynclib);
    Py_DECREF(coroutine_heap->var_asynclib);
    coroutine_heap->var_asynclib = NULL;
    Py_XDECREF(coroutine_heap->var_family);
    coroutine_heap->var_family = NULL;
    Py_XDECREF(coroutine_heap->var_gai_res);
    coroutine_heap->var_gai_res = NULL;
    Py_XDECREF(coroutine_heap->var__);
    coroutine_heap->var__ = NULL;
    Py_XDECREF(coroutine_heap->var_target_host);
    coroutine_heap->var_target_host = NULL;
    Py_XDECREF(coroutine_heap->var_addr_obj);
    coroutine_heap->var_addr_obj = NULL;
    Py_XDECREF(coroutine_heap->var_v6_found);
    coroutine_heap->var_v6_found = NULL;
    Py_XDECREF(coroutine_heap->var_v4_found);
    coroutine_heap->var_v4_found = NULL;
    Py_XDECREF(coroutine_heap->var_af);
    coroutine_heap->var_af = NULL;
    Py_XDECREF(coroutine_heap->var_rest);
    coroutine_heap->var_rest = NULL;
    Py_XDECREF(coroutine_heap->var_sa);
    coroutine_heap->var_sa = NULL;
    CHECK_OBJECT(coroutine_heap->var_tg);
    Py_DECREF(coroutine_heap->var_tg);
    coroutine_heap->var_tg = NULL;
    Py_XDECREF(coroutine_heap->var_i);
    coroutine_heap->var_i = NULL;
    Py_XDECREF(coroutine_heap->var_addr);
    coroutine_heap->var_addr = NULL;
    Py_XDECREF(coroutine_heap->var_event);
    coroutine_heap->var_event = NULL;
    Py_XDECREF(coroutine_heap->var_cause);
    coroutine_heap->var_cause = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_23;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_23;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_23;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_23;

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

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp_context,
        module_anyio$_core$_sockets,
        mod_consts[0],
        NULL,
        codeobj_57d9a6161c2e53f30fc261618aedc5ce,
        closure,
        8,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_remote_host = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_event = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[8];

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = self->m_closure[1];
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_event;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = self->m_closure[2];
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = self->m_closure[3];
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_remote_host;
        Py_INCREF(tmp_closure_1[5]);
        tmp_closure_1[6] = self->m_closure[4];
        Py_INCREF(tmp_closure_1[6]);
        tmp_closure_1[7] = self->m_closure[5];
        Py_INCREF(tmp_closure_1[7]);

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect$$$coroutine__1_try_connect(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_remote_host);
    Py_DECREF(par_remote_host);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect$$$coroutine__1_try_connect_locals {
    PyObject *var_stream;
    PyObject *var_exc;
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
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
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

static PyObject *anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect$$$coroutine__1_try_connect_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect$$$coroutine__1_try_connect_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect$$$coroutine__1_try_connect_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_stream = NULL;
    coroutine_heap->var_exc = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_b4f0283d4cc286941575b0f31552e4d6, module_anyio$_core$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        coroutine->m_frame->m_frame.f_lineno = 164;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[53]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_3;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_3;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[2]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_3;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_3;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[6]);
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[54]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_3;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        coroutine->m_frame->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_3;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_3;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_3;
        }
        tmp_assign_source_1 = yield_return_value;
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 164;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->var_stream == NULL);
        coroutine_heap->var_stream = tmp_assign_source_1;
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
        tmp_cmp_expr_right_1 = PyExc_OSError;
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[55]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 166;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_5;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[4]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[26]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 166;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(coroutine_heap->var_exc);
        tmp_args_element_value_4 = coroutine_heap->var_exc;
        coroutine->m_frame->m_frame.f_lineno = 166;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 166;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_5;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    Py_XDECREF(coroutine_heap->var_exc);
    coroutine_heap->var_exc = NULL;

    goto try_return_handler_4;
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

    Py_XDECREF(coroutine_heap->var_exc);
    coroutine_heap->var_exc = NULL;

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 163;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccooccccc";
    goto try_except_handler_4;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    goto try_return_handler_2;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[42]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 169;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(coroutine_heap->var_stream);
        tmp_assign_source_3 = coroutine_heap->var_stream;
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[1]);
            PyCell_SET(coroutine->m_closure[1], tmp_assign_source_3);
            Py_INCREF(tmp_assign_source_3);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[34]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[7]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[56]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 171;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[57]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 173;
        CHECK_OBJECT(coroutine_heap->var_stream);
        tmp_called_instance_2 = coroutine_heap->var_stream;
        coroutine->m_frame->m_frame.f_lineno = 173;
        tmp_expression_value_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[58]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_2;
        }
        tmp_expression_value_6 = ASYNC_AWAIT(tmp_expression_value_7, await_normal);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_6;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_2;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_await_result_1);
    }
    branch_end_2:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 175;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[59]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto frame_return_exit_1;
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
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_6;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 175;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[59]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_4);
    }
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 163;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccooccccc";
    goto try_except_handler_6;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 175;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[59]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cccooccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
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
            coroutine->m_closure[5],
            coroutine->m_closure[2],
            coroutine->m_closure[1],
            coroutine_heap->var_stream,
            coroutine_heap->var_exc,
            coroutine->m_closure[0],
            coroutine->m_closure[6],
            coroutine->m_closure[3],
            coroutine->m_closure[4],
            coroutine->m_closure[7]
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
    Py_XDECREF(coroutine_heap->var_stream);
    coroutine_heap->var_stream = NULL;
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

    Py_XDECREF(coroutine_heap->var_stream);
    coroutine_heap->var_stream = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect$$$coroutine__1_try_connect(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect$$$coroutine__1_try_connect_context,
        module_anyio$_core$_sockets,
        mod_consts[6],
        mod_consts[7],
        codeobj_b4f0283d4cc286941575b0f31552e4d6,
        closure,
        8,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect$$$coroutine__1_try_connect_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__7_connect_unix(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_path = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_path;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__7_connect_unix$$$coroutine__1_connect_unix(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
    goto function_return_exit;
    // End of try:

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
struct anyio$_core$_sockets$$$function__7_connect_unix$$$coroutine__1_connect_unix_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_return_value;
    char yield_tmps[1024];
};
#endif

static PyObject *anyio$_core$_sockets$$$function__7_connect_unix$$$coroutine__1_connect_unix_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__7_connect_unix$$$coroutine__1_connect_unix_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__7_connect_unix$$$coroutine__1_connect_unix_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_52eb360e88ac69073a5e380f607d9bf4, module_anyio$_core$_sockets, sizeof(void *));
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
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 250;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[62]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 250;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 250;
        tmp_unicode_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 250;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 250;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[0]);
            PyCell_SET(coroutine->m_closure[0], tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        coroutine->m_frame->m_frame.f_lineno = 251;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 251;
        tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[0]));
        tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 251;
        tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[63], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__7_connect_unix$$$coroutine__1_connect_unix(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__7_connect_unix$$$coroutine__1_connect_unix_context,
        module_anyio$_core$_sockets,
        mod_consts[63],
        NULL,
        codeobj_52eb360e88ac69073a5e380f607d9bf4,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__7_connect_unix$$$coroutine__1_connect_unix_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__8_create_tcp_listener(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_local_host = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_local_port = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_family = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_backlog = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_reuse_port = Nuitka_Cell_New1(python_pars[4]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[5];

        tmp_closure_1[0] = par_backlog;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_family;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_local_host;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_local_port;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_reuse_port;
        Py_INCREF(tmp_closure_1[4]);

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__8_create_tcp_listener$$$coroutine__1_create_tcp_listener(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_local_host);
    Py_DECREF(par_local_host);
    par_local_host = NULL;
    CHECK_OBJECT(par_backlog);
    Py_DECREF(par_backlog);
    par_backlog = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_local_port);
    Py_DECREF(par_local_port);
    CHECK_OBJECT(par_family);
    Py_DECREF(par_family);
    CHECK_OBJECT(par_reuse_port);
    Py_DECREF(par_reuse_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_sockets$$$function__8_create_tcp_listener$$$coroutine__1_create_tcp_listener_locals {
    PyObject *var_listeners;
    PyObject *var_asynclib;
    PyObject *var_gai_res;
    PyObject *var_fam;
    PyObject *var__;
    PyObject *var_sockaddr;
    PyObject *var_raw_socket;
    PyObject *var_listener;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__element_3;
    PyObject *tmp_tuple_unpack_1__source_iter;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
};
#endif

static PyObject *anyio$_core$_sockets$$$function__8_create_tcp_listener$$$coroutine__1_create_tcp_listener_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__8_create_tcp_listener$$$coroutine__1_create_tcp_listener_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__8_create_tcp_listener$$$coroutine__1_create_tcp_listener_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_listeners = NULL;
    coroutine_heap->var_asynclib = NULL;
    coroutine_heap->var_gai_res = NULL;
    coroutine_heap->var_fam = NULL;
    coroutine_heap->var__ = NULL;
    coroutine_heap->var_sockaddr = NULL;
    coroutine_heap->var_raw_socket = NULL;
    coroutine_heap->var_listener = NULL;
    coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_1__iter_value = NULL;
    coroutine_heap->tmp_for_loop_2__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_2__iter_value = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_3 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_7cab266cfd79c3b8b695353c17c08fcc, module_anyio$_core$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 277;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 277;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 277;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_asynclib == NULL);
        coroutine_heap->var_asynclib = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[65]);
        assert(tmp_called_value_2 != NULL);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[66]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 278;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_args_element_value_2 = mod_consts[67];
        coroutine->m_frame->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 278;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[0]);
            PyCell_SET(coroutine->m_closure[0], tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_unicode_arg_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[11]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 279;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[11]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 279;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_assign_source_3 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 279;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_3 = Py_None;
        Py_INCREF(tmp_assign_source_3);
        condexpr_end_1:;
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[2]);
            PyCell_SET(coroutine->m_closure[2], tmp_assign_source_3);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        coroutine->m_frame->m_frame.f_lineno = 280;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[2]));
        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[68]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 282;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[69]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 283;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 284;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 284;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            coroutine_heap->exception_lineno = 285;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[70]);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            coroutine_heap->exception_lineno = 285;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_bitor_expr_left_1);

            coroutine_heap->exception_lineno = 285;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[71]);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_bitor_expr_left_1);

            coroutine_heap->exception_lineno = 285;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            coroutine_heap->exception_lineno = 285;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 280;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_bitor_expr_left_1, sizeof(PyObject *), &tmp_bitor_expr_right_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_bitor_expr_left_1, sizeof(PyObject *), &tmp_bitor_expr_right_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = yield_return_value;
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_gai_res == NULL);
        coroutine_heap->var_gai_res = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
        assert(coroutine_heap->var_listeners == NULL);
        coroutine_heap->var_listeners = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_set_arg_1;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[73]);
        assert(tmp_called_value_4 != NULL);
        CHECK_OBJECT(coroutine_heap->var_gai_res);
        tmp_set_arg_1 = coroutine_heap->var_gai_res;
        tmp_args_element_value_3 = PySet_New(tmp_set_arg_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 291;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 291;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 291;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 291;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->tmp_for_loop_1__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = coroutine_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "cccccoooooooo";
                coroutine_heap->exception_lineno = 291;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_1__iter_value;
            coroutine_heap->tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = coroutine_heap->tmp_for_loop_1__iter_value;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 291;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_1__source_iter;
            coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT_STARRED(tmp_unpack_1, 0, 1);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "cccccoooooooo";
            coroutine_heap->exception_lineno = 291;
            goto try_except_handler_5;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_1__element_1;
            coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_list_arg_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 291;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_1__element_2;
            coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_len_arg_1 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        assert(!(tmp_cmp_expr_left_2 == NULL));
        tmp_cmp_expr_right_2 = 1;
        tmp_condition_result_2 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        nuitka_digit tmp_add_expr_right_1;
        PyObject *tmp_len_arg_2;
        tmp_raise_type_1 = PyExc_ValueError;
        tmp_mod_expr_left_1 = mod_consts[14];
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_len_arg_2 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        tmp_add_expr_left_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 291;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_5;
        }
        tmp_add_expr_right_1 = 1;
        tmp_mod_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_mod_expr_right_1 == NULL));
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 291;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_5;
        }
        coroutine_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        coroutine_heap->exception_value = tmp_raise_value_1;
        coroutine_heap->exception_lineno = 291;
        RAISE_EXCEPTION_IMPLICIT(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "cccccoooooooo";
        goto try_except_handler_5;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_list_arg_value_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_list_arg_value_1 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        tmp_assign_source_11 = LIST_POP1(tmp_list_arg_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 291;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_1__element_3;
            coroutine_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

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

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_1;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_1;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_1;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_3);
    coroutine_heap->tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = coroutine_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = coroutine_heap->var_fam;
            coroutine_heap->var_fam = tmp_assign_source_12;
            Py_INCREF(coroutine_heap->var_fam);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = coroutine_heap->var__;
            coroutine_heap->var__ = tmp_assign_source_13;
            Py_INCREF(coroutine_heap->var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_3);
        tmp_assign_source_14 = coroutine_heap->tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = coroutine_heap->var_sockaddr;
            coroutine_heap->var_sockaddr = tmp_assign_source_14;
            Py_INCREF(coroutine_heap->var_sockaddr);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_3);
    coroutine_heap->tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 292;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(coroutine_heap->var_fam);
        tmp_args_element_value_4 = coroutine_heap->var_fam;
        coroutine->m_frame->m_frame.f_lineno = 292;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[9], tmp_args_element_value_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 292;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = coroutine_heap->var_raw_socket;
            coroutine_heap->var_raw_socket = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_called_instance_2 = coroutine_heap->var_raw_socket;
        coroutine->m_frame->m_frame.f_lineno = 293;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[74],
            PyTuple_GET_ITEM(mod_consts[75], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 293;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 296;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[77]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 296;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_3 = mod_consts[78];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 296;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_expression_value_7 = coroutine_heap->var_raw_socket;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[79]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_5);

            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[80]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_5);

            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_5);

            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[81]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_5);

            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_7 = mod_consts[25];
        coroutine->m_frame->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_expression_value_10 = coroutine_heap->var_raw_socket;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[79]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_6);

            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[80]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_6);

            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_8);

            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[82]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_8);

            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_10 = mod_consts[25];
        coroutine->m_frame->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_2:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[83]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 301;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[4]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 301;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_expression_value_13 = coroutine_heap->var_raw_socket;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[79]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 302;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_7);

            coroutine_heap->exception_lineno = 302;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[80]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_7);

            coroutine_heap->exception_lineno = 302;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_11);

            coroutine_heap->exception_lineno = 302;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[84]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_11);

            coroutine_heap->exception_lineno = 302;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_13 = mod_consts[25];
        coroutine->m_frame->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 302;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(coroutine_heap->var_fam);
        tmp_cmp_expr_left_4 = coroutine_heap->var_fam;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 305;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[19]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 305;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 305;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_expression_value_17 = coroutine_heap->var_raw_socket;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[79]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 306;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_8);

            coroutine_heap->exception_lineno = 306;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_8);

            coroutine_heap->exception_lineno = 306;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[86]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_8);

            coroutine_heap->exception_lineno = 306;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_16 = mod_consts[25];
        coroutine->m_frame->m_frame.f_lineno = 306;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 306;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_4:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_called_instance_3 = coroutine_heap->var_raw_socket;
        CHECK_OBJECT(coroutine_heap->var_sockaddr);
        tmp_args_element_value_17 = coroutine_heap->var_sockaddr;
        coroutine->m_frame->m_frame.f_lineno = 308;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[87], tmp_args_element_value_17);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 308;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_expression_value_19 = coroutine_heap->var_raw_socket;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[88]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 309;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[66]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 309;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_18 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 309;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 309;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_19;
        if (coroutine_heap->var_asynclib == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[53]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 310;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_4 = coroutine_heap->var_asynclib;
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_args_element_value_19 = coroutine_heap->var_raw_socket;
        coroutine->m_frame->m_frame.f_lineno = 310;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[89], tmp_args_element_value_19);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 310;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = coroutine_heap->var_listener;
            coroutine_heap->var_listener = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_20;
        if (coroutine_heap->var_listeners == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[90]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 311;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_20 = coroutine_heap->var_listeners;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[26]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 311;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(coroutine_heap->var_listener);
        tmp_args_element_value_20 = coroutine_heap->var_listener;
        coroutine->m_frame->m_frame.f_lineno = 311;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 311;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_8);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 291;
        coroutine_heap->type_description_1 = "cccccoooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
    coroutine_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
    coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
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

    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_4 == NULL) {
        coroutine_heap->exception_keeper_tb_4 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_4);
    } else if (coroutine_heap->exception_keeper_lineno_4 != 0) {
        coroutine_heap->exception_keeper_tb_4 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_4, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_4);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_4, &coroutine_heap->exception_keeper_value_4, &coroutine_heap->exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_BaseException;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_3;
        if (coroutine_heap->var_listeners == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[90]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 313;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_6;
        }

        tmp_iter_arg_3 = coroutine_heap->var_listeners;
        tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 313;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_6;
        }
        assert(coroutine_heap->tmp_for_loop_2__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = coroutine_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "cccccoooooooo";
                coroutine_heap->exception_lineno = 313;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_2__iter_value;
            coroutine_heap->tmp_for_loop_2__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_2__iter_value);
        tmp_assign_source_19 = coroutine_heap->tmp_for_loop_2__iter_value;
        {
            PyObject *old = coroutine_heap->var_listener;
            coroutine_heap->var_listener = tmp_assign_source_19;
            Py_INCREF(coroutine_heap->var_listener);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 314;
        CHECK_OBJECT(coroutine_heap->var_listener);
        tmp_called_instance_5 = coroutine_heap->var_listener;
        coroutine->m_frame->m_frame.f_lineno = 314;
        tmp_expression_value_22 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[58]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 314;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_7;
        }
        tmp_expression_value_21 = ASYNC_AWAIT(tmp_expression_value_22, await_normal);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 314;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_7;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_22, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_21;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_22, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 314;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_7;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 314;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_await_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 313;
        coroutine_heap->type_description_1 = "cccccoooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
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

    Py_XDECREF(coroutine_heap->tmp_for_loop_2__iter_value);
    coroutine_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_2__for_iterator);
    coroutine_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_5;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_5;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_5;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_2__iter_value);
    coroutine_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_2__for_iterator);
    coroutine_heap->tmp_for_loop_2__for_iterator = NULL;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 316;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccccoooooooo";
    goto try_except_handler_6;
    goto branch_end_5;
    branch_no_5:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 288;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccccoooooooo";
    goto try_except_handler_6;
    branch_end_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_type_6 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_6 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_6 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_6;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_6;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_6;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_4:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
    coroutine_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
    coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 318;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }
        if (coroutine_heap->var_listeners == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[90]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 318;
            coroutine_heap->type_description_1 = "cccccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_21 = coroutine_heap->var_listeners;
        coroutine->m_frame->m_frame.f_lineno = 318;
        coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_21);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 318;
            coroutine_heap->type_description_1 = "cccccoooooooo";
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
            coroutine->m_closure[2],
            coroutine->m_closure[3],
            coroutine->m_closure[1],
            coroutine->m_closure[0],
            coroutine->m_closure[4],
            coroutine_heap->var_listeners,
            coroutine_heap->var_asynclib,
            coroutine_heap->var_gai_res,
            coroutine_heap->var_fam,
            coroutine_heap->var__,
            coroutine_heap->var_sockaddr,
            coroutine_heap->var_raw_socket,
            coroutine_heap->var_listener
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
    Py_XDECREF(coroutine_heap->var_listeners);
    coroutine_heap->var_listeners = NULL;
    Py_XDECREF(coroutine_heap->var_asynclib);
    coroutine_heap->var_asynclib = NULL;
    CHECK_OBJECT(coroutine_heap->var_gai_res);
    Py_DECREF(coroutine_heap->var_gai_res);
    coroutine_heap->var_gai_res = NULL;
    Py_XDECREF(coroutine_heap->var_fam);
    coroutine_heap->var_fam = NULL;
    Py_XDECREF(coroutine_heap->var__);
    coroutine_heap->var__ = NULL;
    Py_XDECREF(coroutine_heap->var_sockaddr);
    coroutine_heap->var_sockaddr = NULL;
    Py_XDECREF(coroutine_heap->var_raw_socket);
    coroutine_heap->var_raw_socket = NULL;
    Py_XDECREF(coroutine_heap->var_listener);
    coroutine_heap->var_listener = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_7 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_7 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_7 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_listeners);
    coroutine_heap->var_listeners = NULL;
    Py_XDECREF(coroutine_heap->var_asynclib);
    coroutine_heap->var_asynclib = NULL;
    Py_XDECREF(coroutine_heap->var_gai_res);
    coroutine_heap->var_gai_res = NULL;
    Py_XDECREF(coroutine_heap->var_fam);
    coroutine_heap->var_fam = NULL;
    Py_XDECREF(coroutine_heap->var__);
    coroutine_heap->var__ = NULL;
    Py_XDECREF(coroutine_heap->var_sockaddr);
    coroutine_heap->var_sockaddr = NULL;
    Py_XDECREF(coroutine_heap->var_raw_socket);
    coroutine_heap->var_raw_socket = NULL;
    Py_XDECREF(coroutine_heap->var_listener);
    coroutine_heap->var_listener = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_7;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_7;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_7;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

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

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__8_create_tcp_listener$$$coroutine__1_create_tcp_listener(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__8_create_tcp_listener$$$coroutine__1_create_tcp_listener_context,
        module_anyio$_core$_sockets,
        mod_consts[92],
        NULL,
        codeobj_7cab266cfd79c3b8b695353c17c08fcc,
        closure,
        5,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__8_create_tcp_listener$$$coroutine__1_create_tcp_listener_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__9_create_unix_listener(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_path = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_mode = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_backlog = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_backlog;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_mode;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_path;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__9_create_unix_listener$$$coroutine__1_create_unix_listener(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
    CHECK_OBJECT(par_backlog);
    Py_DECREF(par_backlog);
    par_backlog = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_sockets$$$function__9_create_unix_listener$$$coroutine__1_create_unix_listener_locals {
    PyObject *var_path_str;
    PyObject *var_raw_socket;
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
};
#endif

static PyObject *anyio$_core$_sockets$$$function__9_create_unix_listener$$$coroutine__1_create_unix_listener_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__9_create_unix_listener$$$coroutine__1_create_unix_listener_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__9_create_unix_listener$$$coroutine__1_create_unix_listener_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_path_str = NULL;
    coroutine_heap->var_raw_socket = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_7e21195b9d9b73822304d489861677b3, module_anyio$_core$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_unicode_arg_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[62]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 342;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 342;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_path_str == NULL);
        coroutine_heap->var_path_str = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[62]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 343;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[2]);
            PyCell_SET(coroutine->m_closure[2], tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[2]));
        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 344;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[94]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_call_result_1);

            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "cccoo";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[2]));
        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 345;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[95]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[65]);
        assert(tmp_called_value_2 != NULL);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[66]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 347;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_args_element_value_3 = mod_consts[67];
        coroutine->m_frame->m_frame.f_lineno = 347;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 347;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[0]);
            PyCell_SET(coroutine->m_closure[0], tmp_assign_source_3);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_3);

            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[96]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_3);

            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 348;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_raw_socket == NULL);
        coroutine_heap->var_raw_socket = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_called_instance_3 = coroutine_heap->var_raw_socket;
        coroutine->m_frame->m_frame.f_lineno = 349;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[74],
            PyTuple_GET_ITEM(mod_consts[75], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 349;
            coroutine_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    // Tried code:
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 351;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 351;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[98]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 351;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_expression_value_6 = coroutine_heap->var_raw_socket;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[87]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_4);

            coroutine_heap->exception_lineno = 351;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(coroutine_heap->var_path_str);
        tmp_tuple_element_1 = coroutine_heap->var_path_str;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[99]);
        coroutine->m_frame->m_frame.f_lineno = 351;
        tmp_expression_value_4 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 351;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        tmp_expression_value_3 = ASYNC_AWAIT(tmp_expression_value_4, await_normal);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 351;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_value_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kwargs_value_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_3;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_value_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kwargs_value_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 351;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 351;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_await_result_1);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[100]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 352;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_await_result_2;
        coroutine->m_frame->m_frame.f_lineno = 353;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 353;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[98]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 353;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_5);

            coroutine_heap->exception_lineno = 353;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(coroutine_heap->var_path_str);
        tmp_tuple_element_2 = coroutine_heap->var_path_str;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[100]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 353;
            coroutine_heap->type_description_1 = "cccoo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[99]);
        coroutine->m_frame->m_frame.f_lineno = 353;
        tmp_expression_value_8 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 353;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        tmp_expression_value_7 = ASYNC_AWAIT(tmp_expression_value_8, await_normal);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 353;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_8, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_args_value_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_kwargs_value_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_7;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_8, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_args_value_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_kwargs_value_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 353;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        tmp_await_result_2 = yield_return_value;
        if (tmp_await_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 353;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_await_result_2);
    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_called_instance_4 = coroutine_heap->var_raw_socket;
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[0]));
        tmp_args_element_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 355;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[88], tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 355;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 356;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 356;
        tmp_called_instance_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 356;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_args_element_value_6 = coroutine_heap->var_raw_socket;
        coroutine->m_frame->m_frame.f_lineno = 356;
        coroutine_heap->tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[102], tmp_args_element_value_6);
        Py_DECREF(tmp_called_instance_5);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 356;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_BaseException;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(coroutine_heap->var_raw_socket);
        tmp_called_instance_6 = coroutine_heap->var_raw_socket;
        coroutine->m_frame->m_frame.f_lineno = 358;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[103]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 358;
            coroutine_heap->type_description_1 = "cccoo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_5);
    }
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 359;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_3;
    goto branch_end_3;
    branch_no_3:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 350;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_3;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
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
            coroutine_heap->var_path_str,
            coroutine_heap->var_raw_socket
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
    CHECK_OBJECT(coroutine_heap->var_path_str);
    Py_DECREF(coroutine_heap->var_path_str);
    coroutine_heap->var_path_str = NULL;
    CHECK_OBJECT(coroutine_heap->var_raw_socket);
    Py_DECREF(coroutine_heap->var_raw_socket);
    coroutine_heap->var_raw_socket = NULL;
    goto function_return_exit;
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

    Py_XDECREF(coroutine_heap->var_path_str);
    coroutine_heap->var_path_str = NULL;
    Py_XDECREF(coroutine_heap->var_raw_socket);
    coroutine_heap->var_raw_socket = NULL;
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
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__9_create_unix_listener$$$coroutine__1_create_unix_listener(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__9_create_unix_listener$$$coroutine__1_create_unix_listener_context,
        module_anyio$_core$_sockets,
        mod_consts[104],
        NULL,
        codeobj_7e21195b9d9b73822304d489861677b3,
        closure,
        3,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__9_create_unix_listener$$$coroutine__1_create_unix_listener_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__10_create_udp_socket(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_family = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_local_host = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_local_port = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_reuse_port = Nuitka_Cell_New1(python_pars[3]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = par_family;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_local_host;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_local_port;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_reuse_port;
        Py_INCREF(tmp_closure_1[3]);

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__10_create_udp_socket$$$coroutine__1_create_udp_socket(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_family);
    Py_DECREF(par_family);
    par_family = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_local_host);
    Py_DECREF(par_local_host);
    CHECK_OBJECT(par_local_port);
    Py_DECREF(par_local_port);
    CHECK_OBJECT(par_reuse_port);
    Py_DECREF(par_reuse_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_sockets$$$function__10_create_udp_socket$$$coroutine__1_create_udp_socket_locals {
    PyObject *var_gai_res;
    PyObject *var_local_address;
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

static PyObject *anyio$_core$_sockets$$$function__10_create_udp_socket$$$coroutine__1_create_udp_socket_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__10_create_udp_socket$$$coroutine__1_create_udp_socket_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__10_create_udp_socket$$$coroutine__1_create_udp_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_gai_res = NULL;
    coroutine_heap->var_local_address = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_96629f02c4d47d3c802f0e756ee4003a, module_anyio$_core$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_operand_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[69]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 384;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 384;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 384;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_right_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[11]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 384;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 384;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (coroutine_heap->tmp_res == 0) ? true : false;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
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
        tmp_make_exception_arg_1 = mod_consts[107];
        coroutine->m_frame->m_frame.f_lineno = 385;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 385;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccccoo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[11]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 387;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[1]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 387;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        coroutine->m_frame->m_frame.f_lineno = 388;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 388;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[11]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 389;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_kw_call_arg_value_0_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 389;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[68]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 390;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[69]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 391;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            coroutine_heap->exception_lineno = 392;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[108]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            coroutine_heap->exception_lineno = 392;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            coroutine_heap->exception_lineno = 393;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[70]);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            coroutine_heap->exception_lineno = 393;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_bitor_expr_left_1);

            coroutine_heap->exception_lineno = 393;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[71]);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_bitor_expr_left_1);

            coroutine_heap->exception_lineno = 393;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            coroutine_heap->exception_lineno = 393;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 388;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_expression_value_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 388;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = ASYNC_AWAIT(tmp_expression_value_3, await_normal);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 388;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_bitor_expr_left_1, sizeof(PyObject *), &tmp_bitor_expr_right_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_2;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_bitor_expr_left_1, sizeof(PyObject *), &tmp_bitor_expr_right_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 388;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = yield_return_value;
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 388;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_gai_res == NULL);
        coroutine_heap->var_gai_res = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_gai_res);
        tmp_expression_value_8 = coroutine_heap->var_gai_res;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_expression_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_1, 0);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[13];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 395;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[0]);
            PyCell_SET(coroutine->m_closure[0], tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(coroutine_heap->var_gai_res);
        tmp_expression_value_10 = coroutine_heap->var_gai_res;
        tmp_subscript_value_3 = mod_consts[13];
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_3, 0);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 396;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[111];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_4, -1);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 396;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_local_address == NULL);
        coroutine_heap->var_local_address = tmp_assign_source_3;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_11;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[69]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 397;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 397;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[19]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 397;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[112];
        assert(coroutine_heap->var_local_address == NULL);
        Py_INCREF(tmp_assign_source_4);
        coroutine_heap->var_local_address = tmp_assign_source_4;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[113];
        assert(coroutine_heap->var_local_address == NULL);
        Py_INCREF(tmp_assign_source_5);
        coroutine_heap->var_local_address = tmp_assign_source_5;
    }
    branch_end_3:;
    branch_end_2:;
    {
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        coroutine->m_frame->m_frame.f_lineno = 402;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 402;
        tmp_expression_value_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[114]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[69]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 403;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        CHECK_OBJECT(coroutine_heap->var_local_address);
        tmp_args_element_value_4 = coroutine_heap->var_local_address;
        tmp_args_element_value_5 = Py_None;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[83]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 403;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        coroutine->m_frame->m_frame.f_lineno = 402;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_expression_value_13 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = ASYNC_AWAIT(tmp_expression_value_13, await_normal);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_12;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "ccccoo";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "ccccoo";
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
            coroutine->m_closure[1],
            coroutine->m_closure[2],
            coroutine->m_closure[3],
            coroutine_heap->var_gai_res,
            coroutine_heap->var_local_address
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
    Py_XDECREF(coroutine_heap->var_gai_res);
    coroutine_heap->var_gai_res = NULL;
    CHECK_OBJECT(coroutine_heap->var_local_address);
    Py_DECREF(coroutine_heap->var_local_address);
    coroutine_heap->var_local_address = NULL;
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

    Py_XDECREF(coroutine_heap->var_gai_res);
    coroutine_heap->var_gai_res = NULL;
    Py_XDECREF(coroutine_heap->var_local_address);
    coroutine_heap->var_local_address = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__10_create_udp_socket$$$coroutine__1_create_udp_socket(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__10_create_udp_socket$$$coroutine__1_create_udp_socket_context,
        module_anyio$_core$_sockets,
        mod_consts[114],
        NULL,
        codeobj_96629f02c4d47d3c802f0e756ee4003a,
        closure,
        4,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__10_create_udp_socket$$$coroutine__1_create_udp_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__11_create_connected_udp_socket(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_remote_host = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_remote_port = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_family = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_local_host = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_local_port = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_reuse_port = Nuitka_Cell_New1(python_pars[5]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[6];

        tmp_closure_1[0] = par_family;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_local_host;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_local_port;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_remote_host;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_remote_port;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_reuse_port;
        Py_INCREF(tmp_closure_1[5]);

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__11_create_connected_udp_socket$$$coroutine__1_create_connected_udp_socket(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_family);
    Py_DECREF(par_family);
    par_family = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_remote_host);
    Py_DECREF(par_remote_host);
    CHECK_OBJECT(par_remote_port);
    Py_DECREF(par_remote_port);
    CHECK_OBJECT(par_local_host);
    Py_DECREF(par_local_host);
    CHECK_OBJECT(par_local_port);
    Py_DECREF(par_local_port);
    CHECK_OBJECT(par_reuse_port);
    Py_DECREF(par_reuse_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_sockets$$$function__11_create_connected_udp_socket$$$coroutine__1_create_connected_udp_socket_locals {
    PyObject *var_local_address;
    PyObject *var_gai_res;
    PyObject *var_remote_address;
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

static PyObject *anyio$_core$_sockets$$$function__11_create_connected_udp_socket$$$coroutine__1_create_connected_udp_socket_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__11_create_connected_udp_socket$$$coroutine__1_create_connected_udp_socket_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__11_create_connected_udp_socket$$$coroutine__1_create_connected_udp_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_local_address = NULL;
    coroutine_heap->var_gai_res = NULL;
    coroutine_heap->var_remote_address = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(coroutine_heap->var_local_address == NULL);
        Py_INCREF(tmp_assign_source_1);
        coroutine_heap->var_local_address = tmp_assign_source_1;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_0949bdc6d0d4dd998969d7114b0d12e1, module_anyio$_core$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[11]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 434;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[1]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 434;
            coroutine_heap->type_description_1 = "ccccccooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        coroutine->m_frame->m_frame.f_lineno = 435;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 435;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[11]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 436;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_kw_call_arg_value_0_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 436;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[68]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 437;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[69]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 438;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            coroutine_heap->exception_lineno = 439;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[108]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            coroutine_heap->exception_lineno = 439;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            coroutine_heap->exception_lineno = 440;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[70]);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            coroutine_heap->exception_lineno = 440;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_bitor_expr_left_1);

            coroutine_heap->exception_lineno = 440;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[71]);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_bitor_expr_left_1);

            coroutine_heap->exception_lineno = 440;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            coroutine_heap->exception_lineno = 440;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 435;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 435;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 435;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_bitor_expr_left_1, sizeof(PyObject *), &tmp_bitor_expr_right_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_bitor_expr_left_1, sizeof(PyObject *), &tmp_bitor_expr_right_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 435;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = yield_return_value;
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 435;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_gai_res == NULL);
        coroutine_heap->var_gai_res = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 442;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 442;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_gai_res);
        tmp_expression_value_7 = coroutine_heap->var_gai_res;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_1, 0);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 442;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[13];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 442;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 442;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 442;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[0]);
            PyCell_SET(coroutine->m_closure[0], tmp_assign_source_3);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(coroutine_heap->var_gai_res);
        tmp_expression_value_9 = coroutine_heap->var_gai_res;
        tmp_subscript_value_3 = mod_consts[13];
        tmp_expression_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_3, 0);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 443;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[111];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_4, -1);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 443;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = coroutine_heap->var_local_address;
            assert(old != NULL);
            coroutine_heap->var_local_address = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_expression_value_12;
        coroutine->m_frame->m_frame.f_lineno = 445;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 445;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[2]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 446;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_kw_call_arg_value_0_2 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 446;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 446;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_2 = Nuitka_Cell_GET(coroutine->m_closure[4]);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[69]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 446;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            coroutine_heap->exception_lineno = 446;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[108]);
        if (tmp_kw_call_dict_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            coroutine_heap->exception_lineno = 446;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 445;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_expression_value_11 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[18]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 445;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = ASYNC_AWAIT(tmp_expression_value_11, await_normal);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 445;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_unicode_arg_2, sizeof(PyObject *), &tmp_kw_call_arg_value_1_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_1_2, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_10;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_unicode_arg_2, sizeof(PyObject *), &tmp_kw_call_arg_value_1_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_1_2, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 445;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = yield_return_value;
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 445;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = coroutine_heap->var_gai_res;
            coroutine_heap->var_gai_res = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 448;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 448;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_gai_res);
        tmp_expression_value_14 = coroutine_heap->var_gai_res;
        tmp_subscript_value_5 = mod_consts[13];
        tmp_expression_value_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_5, 0);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 448;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[13];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_6, 0);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 448;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 448;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 448;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[0]);
            PyCell_SET(coroutine->m_closure[0], tmp_assign_source_6);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(coroutine_heap->var_gai_res);
        tmp_expression_value_16 = coroutine_heap->var_gai_res;
        tmp_subscript_value_7 = mod_consts[13];
        tmp_expression_value_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_7, 0);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 449;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[111];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_8, -1);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 449;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_remote_address == NULL);
        coroutine_heap->var_remote_address = tmp_assign_source_7;
    }
    {
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        coroutine->m_frame->m_frame.f_lineno = 451;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 451;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 451;
        tmp_expression_value_19 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 451;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[114]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 451;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[0]));
        tmp_args_element_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        CHECK_OBJECT(coroutine_heap->var_local_address);
        tmp_args_element_value_6 = coroutine_heap->var_local_address;
        CHECK_OBJECT(coroutine_heap->var_remote_address);
        tmp_args_element_value_7 = coroutine_heap->var_remote_address;
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[83]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 452;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine->m_frame->m_frame.f_lineno = 451;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_expression_value_18 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 451;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = ASYNC_AWAIT(tmp_expression_value_18, await_normal);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 451;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_18, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yieldfrom = tmp_expression_value_17;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_18, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 451;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 451;
            coroutine_heap->type_description_1 = "ccccccooo";
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
            coroutine->m_closure[3],
            coroutine->m_closure[4],
            coroutine->m_closure[0],
            coroutine->m_closure[1],
            coroutine->m_closure[2],
            coroutine->m_closure[5],
            coroutine_heap->var_local_address,
            coroutine_heap->var_gai_res,
            coroutine_heap->var_remote_address
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
    CHECK_OBJECT(coroutine_heap->var_local_address);
    Py_DECREF(coroutine_heap->var_local_address);
    coroutine_heap->var_local_address = NULL;
    CHECK_OBJECT(coroutine_heap->var_gai_res);
    Py_DECREF(coroutine_heap->var_gai_res);
    coroutine_heap->var_gai_res = NULL;
    CHECK_OBJECT(coroutine_heap->var_remote_address);
    Py_DECREF(coroutine_heap->var_remote_address);
    coroutine_heap->var_remote_address = NULL;
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

    Py_XDECREF(coroutine_heap->var_local_address);
    coroutine_heap->var_local_address = NULL;
    Py_XDECREF(coroutine_heap->var_gai_res);
    coroutine_heap->var_gai_res = NULL;
    Py_XDECREF(coroutine_heap->var_remote_address);
    coroutine_heap->var_remote_address = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__11_create_connected_udp_socket$$$coroutine__1_create_connected_udp_socket(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__11_create_connected_udp_socket$$$coroutine__1_create_connected_udp_socket_context,
        module_anyio$_core$_sockets,
        mod_consts[116],
        NULL,
        codeobj_0949bdc6d0d4dd998969d7114b0d12e1,
        closure,
        6,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__11_create_connected_udp_socket$$$coroutine__1_create_connected_udp_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__12_getaddrinfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_host = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_port = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_family = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_type = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_proto = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_flags = Nuitka_Cell_New1(python_pars[5]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[6];

        tmp_closure_1[0] = par_family;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_flags;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_host;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_port;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_proto;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_type;
        Py_INCREF(tmp_closure_1[5]);

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_sockets$$$function__12_getaddrinfo$$$coroutine__1_getaddrinfo(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_family);
    Py_DECREF(par_family);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_proto);
    Py_DECREF(par_proto);
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_sockets$$$function__12_getaddrinfo$$$coroutine__1_getaddrinfo_locals {
    PyObject *var_encoded_host;
    PyObject *var_idna;
    PyObject *var_gai_res;
    PyObject *outline_0_var_family;
    PyObject *outline_0_var_type;
    PyObject *outline_0_var_proto;
    PyObject *outline_0_var_canonname;
    PyObject *outline_0_var_sockaddr;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2;
    PyObject *tmp_listcomp$tuple_unpack_1__element_3;
    PyObject *tmp_listcomp$tuple_unpack_1__element_4;
    PyObject *tmp_listcomp$tuple_unpack_1__element_5;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter;
    PyObject *tmp_listcomp_1__$0;
    PyObject *tmp_listcomp_1__contraction;
    PyObject *tmp_listcomp_1__iter_value_0;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
    struct Nuitka_FrameObject *frame_b384d28154530514ee92e54128b9f1b9_2;
    char const *type_description_2;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
};
#endif

static PyObject *anyio$_core$_sockets$$$function__12_getaddrinfo$$$coroutine__1_getaddrinfo_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_sockets$$$function__12_getaddrinfo$$$coroutine__1_getaddrinfo_locals *coroutine_heap = (struct anyio$_core$_sockets$$$function__12_getaddrinfo$$$coroutine__1_getaddrinfo_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_frame_b384d28154530514ee92e54128b9f1b9_2 = NULL;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_encoded_host = NULL;
    coroutine_heap->var_idna = NULL;
    coroutine_heap->var_gai_res = NULL;
    coroutine_heap->outline_0_var_family = NULL;
    coroutine_heap->outline_0_var_type = NULL;
    coroutine_heap->outline_0_var_proto = NULL;
    coroutine_heap->outline_0_var_canonname = NULL;
    coroutine_heap->outline_0_var_sockaddr = NULL;
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_3 = NULL;
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_4 = NULL;
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_5 = NULL;
    coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    coroutine_heap->tmp_listcomp_1__$0 = NULL;
    coroutine_heap->tmp_listcomp_1__contraction = NULL;
    coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;
    coroutine_heap->type_description_2 = NULL;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_501aacc30bf5d5e1b3d7c560644c8e8d, module_anyio$_core$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[118]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 486;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 486;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[118]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 488;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[119]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 488;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 488;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[120]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 488;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->var_encoded_host == NULL);
        coroutine_heap->var_encoded_host = tmp_assign_source_1;
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_UnicodeEncodeError;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[121];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[13];
        coroutine->m_frame->m_frame.f_lineno = 490;
        tmp_assign_source_2 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 490;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->var_idna == NULL);
        coroutine_heap->var_idna = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(coroutine_heap->var_idna);
        tmp_expression_value_2 = coroutine_heap->var_idna;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[119]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 492;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto try_except_handler_3;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[118]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 492;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[122]);
        coroutine->m_frame->m_frame.f_lineno = 492;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 492;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->var_encoded_host == NULL);
        coroutine_heap->var_encoded_host = tmp_assign_source_3;
    }
    goto branch_end_2;
    branch_no_2:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 487;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccccccooo";
    goto try_except_handler_3;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[118]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 494;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        assert(coroutine_heap->var_encoded_host == NULL);
        Py_INCREF(tmp_assign_source_4);
        coroutine_heap->var_encoded_host = tmp_assign_source_4;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        coroutine->m_frame->m_frame.f_lineno = 496;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 496;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 496;
        tmp_expression_value_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 496;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[12]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 496;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_encoded_host);
        tmp_kw_call_arg_value_0_1 = coroutine_heap->var_encoded_host;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[123]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 497;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[69]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 497;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[124]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 497;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[125]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 497;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[126]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 497;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 496;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_expression_value_4 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[127]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 496;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = ASYNC_AWAIT(tmp_expression_value_4, await_normal);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 496;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_3;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 496;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = yield_return_value;
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 496;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_gai_res == NULL);
        coroutine_heap->var_gai_res = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(coroutine_heap->var_gai_res);
        tmp_iter_arg_1 = coroutine_heap->var_gai_res;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 499;
            coroutine_heap->type_description_1 = "ccccccooo";
            goto try_except_handler_4;
        }
        assert(coroutine_heap->tmp_listcomp_1__$0 == NULL);
        coroutine_heap->tmp_listcomp_1__$0 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_LIST_EMPTY(0);
        assert(coroutine_heap->tmp_listcomp_1__contraction == NULL);
        coroutine_heap->tmp_listcomp_1__contraction = tmp_assign_source_7;
    }
    if (isFrameUnusable(cache_frame_b384d28154530514ee92e54128b9f1b9_2)) {
        Py_XDECREF(cache_frame_b384d28154530514ee92e54128b9f1b9_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b384d28154530514ee92e54128b9f1b9_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b384d28154530514ee92e54128b9f1b9_2 = MAKE_FUNCTION_FRAME(codeobj_b384d28154530514ee92e54128b9f1b9, module_anyio$_core$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b384d28154530514ee92e54128b9f1b9_2->m_type_description == NULL);
    coroutine_heap->frame_b384d28154530514ee92e54128b9f1b9_2 = cache_frame_b384d28154530514ee92e54128b9f1b9_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(coroutine_heap->frame_b384d28154530514ee92e54128b9f1b9_2);
    assert(Py_REFCNT(coroutine_heap->frame_b384d28154530514ee92e54128b9f1b9_2) == 2);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
        tmp_next_source_1 = coroutine_heap->tmp_listcomp_1__$0;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_2 = "ooooo";
                coroutine_heap->exception_lineno = 499;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_listcomp_1__iter_value_0;
            coroutine_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__iter_value_0);
        tmp_iter_arg_2 = coroutine_heap->tmp_listcomp_1__iter_value_0;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 499;
            coroutine_heap->type_description_2 = "ooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
            coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_unpack_1 = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_1, 0, 5);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_2 = "ooooo";
            coroutine_heap->exception_lineno = 499;
            goto try_except_handler_7;
        }
        {
            PyObject *old = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1;
            coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_unpack_2 = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_2, 1, 5);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_2 = "ooooo";
            coroutine_heap->exception_lineno = 499;
            goto try_except_handler_7;
        }
        {
            PyObject *old = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2;
            coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_unpack_3 = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_3, 2, 5);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_2 = "ooooo";
            coroutine_heap->exception_lineno = 499;
            goto try_except_handler_7;
        }
        {
            PyObject *old = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_3;
            coroutine_heap->tmp_listcomp$tuple_unpack_1__element_3 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_unpack_4 = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_4, 3, 5);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_2 = "ooooo";
            coroutine_heap->exception_lineno = 499;
            goto try_except_handler_7;
        }
        {
            PyObject *old = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_4;
            coroutine_heap->tmp_listcomp$tuple_unpack_1__element_4 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_unpack_5 = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_5, 4, 5);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_2 = "ooooo";
            coroutine_heap->exception_lineno = 499;
            goto try_except_handler_7;
        }
        {
            PyObject *old = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_5;
            coroutine_heap->tmp_listcomp$tuple_unpack_1__element_5 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
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

                    coroutine_heap->type_description_2 = "ooooo";
                    coroutine_heap->exception_lineno = 499;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(coroutine_heap->tmp_iterator_attempt);

            coroutine_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            coroutine_heap->exception_value = mod_consts[128];
            Py_INCREF(coroutine_heap->exception_value);
            coroutine_heap->exception_tb = NULL;

            coroutine_heap->type_description_2 = "ooooo";
            coroutine_heap->exception_lineno = 499;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
    coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_type_4 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_4 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_4 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1);
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2);
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_3);
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_4);
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_5);
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_5 = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_4;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_4;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_4;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
    coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1);
        tmp_assign_source_15 = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1;
        {
            PyObject *old = coroutine_heap->outline_0_var_family;
            coroutine_heap->outline_0_var_family = tmp_assign_source_15;
            Py_INCREF(coroutine_heap->outline_0_var_family);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1);
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2);
        tmp_assign_source_16 = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2;
        {
            PyObject *old = coroutine_heap->outline_0_var_type;
            coroutine_heap->outline_0_var_type = tmp_assign_source_16;
            Py_INCREF(coroutine_heap->outline_0_var_type);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2);
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_3);
        tmp_assign_source_17 = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_3;
        {
            PyObject *old = coroutine_heap->outline_0_var_proto;
            coroutine_heap->outline_0_var_proto = tmp_assign_source_17;
            Py_INCREF(coroutine_heap->outline_0_var_proto);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_3);
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_4);
        tmp_assign_source_18 = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_4;
        {
            PyObject *old = coroutine_heap->outline_0_var_canonname;
            coroutine_heap->outline_0_var_canonname = tmp_assign_source_18;
            Py_INCREF(coroutine_heap->outline_0_var_canonname);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_4);
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_5);
        tmp_assign_source_19 = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_5;
        {
            PyObject *old = coroutine_heap->outline_0_var_sockaddr;
            coroutine_heap->outline_0_var_sockaddr = tmp_assign_source_19;
            Py_INCREF(coroutine_heap->outline_0_var_sockaddr);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_5);
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
        tmp_append_list_1 = coroutine_heap->tmp_listcomp_1__contraction;
        CHECK_OBJECT(coroutine_heap->outline_0_var_family);
        tmp_tuple_element_2 = coroutine_heap->outline_0_var_family;
        tmp_append_value_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_1;
            PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(coroutine_heap->outline_0_var_type);
            tmp_tuple_element_2 = coroutine_heap->outline_0_var_type;
            PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_2);
            CHECK_OBJECT(coroutine_heap->outline_0_var_proto);
            tmp_tuple_element_2 = coroutine_heap->outline_0_var_proto;
            PyTuple_SET_ITEM0(tmp_append_value_1, 2, tmp_tuple_element_2);
            CHECK_OBJECT(coroutine_heap->outline_0_var_canonname);
            tmp_tuple_element_2 = coroutine_heap->outline_0_var_canonname;
            PyTuple_SET_ITEM0(tmp_append_value_1, 3, tmp_tuple_element_2);
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[129]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 500;
                coroutine_heap->type_description_2 = "ooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(coroutine_heap->outline_0_var_sockaddr);
            tmp_args_element_value_1 = coroutine_heap->outline_0_var_sockaddr;
            coroutine_heap->frame_b384d28154530514ee92e54128b9f1b9_2->m_frame.f_lineno = 500;
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 500;
                coroutine_heap->type_description_2 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_append_value_1, 4, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_append_value_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        coroutine_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 499;
            coroutine_heap->type_description_2 = "ooooo";
            goto try_except_handler_5;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 499;
        coroutine_heap->type_description_2 = "ooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
    coroutine_heap->tmp_return_value = coroutine_heap->tmp_listcomp_1__contraction;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_5;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
    Py_DECREF(coroutine_heap->tmp_listcomp_1__$0);
    coroutine_heap->tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
    Py_DECREF(coroutine_heap->tmp_listcomp_1__contraction);
    coroutine_heap->tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(coroutine_heap->tmp_listcomp_1__iter_value_0);
    coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_5:;
    coroutine_heap->exception_keeper_type_5 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_5 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_5 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
    Py_DECREF(coroutine_heap->tmp_listcomp_1__$0);
    coroutine_heap->tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
    Py_DECREF(coroutine_heap->tmp_listcomp_1__contraction);
    coroutine_heap->tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(coroutine_heap->tmp_listcomp_1__iter_value_0);
    coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_5;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_5;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_5;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

    goto frame_exception_exit_2;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_2:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_4;
    frame_exception_exit_2:


    if (coroutine_heap->exception_tb == NULL) {
        coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine_heap->frame_b384d28154530514ee92e54128b9f1b9_2, coroutine_heap->exception_lineno);
    } else if (coroutine_heap->exception_tb->tb_frame != &coroutine_heap->frame_b384d28154530514ee92e54128b9f1b9_2->m_frame) {
        coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine_heap->frame_b384d28154530514ee92e54128b9f1b9_2, coroutine_heap->exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        coroutine_heap->frame_b384d28154530514ee92e54128b9f1b9_2,
        coroutine_heap->type_description_2,
        coroutine_heap->outline_0_var_family,
        coroutine_heap->outline_0_var_type,
        coroutine_heap->outline_0_var_proto,
        coroutine_heap->outline_0_var_canonname,
        coroutine_heap->outline_0_var_sockaddr
    );


    // Release cached frame if used for exception.
    if (coroutine_heap->frame_b384d28154530514ee92e54128b9f1b9_2 == cache_frame_b384d28154530514ee92e54128b9f1b9_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b384d28154530514ee92e54128b9f1b9_2);
        cache_frame_b384d28154530514ee92e54128b9f1b9_2 = NULL;
    }

    assertFrameObject(coroutine_heap->frame_b384d28154530514ee92e54128b9f1b9_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;
    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    coroutine_heap->type_description_1 = "ccccccooo";
    goto try_except_handler_4;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF(coroutine_heap->outline_0_var_family);
    coroutine_heap->outline_0_var_family = NULL;
    Py_XDECREF(coroutine_heap->outline_0_var_type);
    coroutine_heap->outline_0_var_type = NULL;
    Py_XDECREF(coroutine_heap->outline_0_var_proto);
    coroutine_heap->outline_0_var_proto = NULL;
    Py_XDECREF(coroutine_heap->outline_0_var_canonname);
    coroutine_heap->outline_0_var_canonname = NULL;
    Py_XDECREF(coroutine_heap->outline_0_var_sockaddr);
    coroutine_heap->outline_0_var_sockaddr = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    coroutine_heap->exception_keeper_type_6 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_6 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_6 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->outline_0_var_family);
    coroutine_heap->outline_0_var_family = NULL;
    Py_XDECREF(coroutine_heap->outline_0_var_type);
    coroutine_heap->outline_0_var_type = NULL;
    Py_XDECREF(coroutine_heap->outline_0_var_proto);
    coroutine_heap->outline_0_var_proto = NULL;
    Py_XDECREF(coroutine_heap->outline_0_var_canonname);
    coroutine_heap->outline_0_var_canonname = NULL;
    Py_XDECREF(coroutine_heap->outline_0_var_sockaddr);
    coroutine_heap->outline_0_var_sockaddr = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_6;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_6;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_6;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    coroutine_heap->exception_lineno = 499;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_2;
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
            coroutine->m_closure[3],
            coroutine->m_closure[0],
            coroutine->m_closure[5],
            coroutine->m_closure[4],
            coroutine->m_closure[1],
            coroutine_heap->var_encoded_host,
            coroutine_heap->var_idna,
            coroutine_heap->var_gai_res
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

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(coroutine_heap->var_encoded_host);
    Py_DECREF(coroutine_heap->var_encoded_host);
    coroutine_heap->var_encoded_host = NULL;
    Py_XDECREF(coroutine_heap->var_idna);
    coroutine_heap->var_idna = NULL;
    CHECK_OBJECT(coroutine_heap->var_gai_res);
    Py_DECREF(coroutine_heap->var_gai_res);
    coroutine_heap->var_gai_res = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_7 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_7 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_7 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_encoded_host);
    coroutine_heap->var_encoded_host = NULL;
    Py_XDECREF(coroutine_heap->var_idna);
    coroutine_heap->var_idna = NULL;
    Py_XDECREF(coroutine_heap->var_gai_res);
    coroutine_heap->var_gai_res = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_7;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_7;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_7;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

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

static PyObject *MAKE_COROUTINE_anyio$_core$_sockets$$$function__12_getaddrinfo$$$coroutine__1_getaddrinfo(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_sockets$$$function__12_getaddrinfo$$$coroutine__1_getaddrinfo_context,
        module_anyio$_core$_sockets,
        mod_consts[12],
        NULL,
        codeobj_501aacc30bf5d5e1b3d7c560644c8e8d,
        closure,
        6,
#if 1
        sizeof(struct anyio$_core$_sockets$$$function__12_getaddrinfo$$$coroutine__1_getaddrinfo_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_sockets$$$function__13_getnameinfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sockaddr = python_pars[0];
    PyObject *par_flags = python_pars[1];
    struct Nuitka_FrameObject *frame_bc9f69a149935f419ff20b305bb77990;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bc9f69a149935f419ff20b305bb77990 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bc9f69a149935f419ff20b305bb77990)) {
        Py_XDECREF(cache_frame_bc9f69a149935f419ff20b305bb77990);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc9f69a149935f419ff20b305bb77990 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc9f69a149935f419ff20b305bb77990 = MAKE_FUNCTION_FRAME(codeobj_bc9f69a149935f419ff20b305bb77990, module_anyio$_core$_sockets, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc9f69a149935f419ff20b305bb77990->m_type_description == NULL);
    frame_bc9f69a149935f419ff20b305bb77990 = cache_frame_bc9f69a149935f419ff20b305bb77990;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bc9f69a149935f419ff20b305bb77990);
    assert(Py_REFCNT(frame_bc9f69a149935f419ff20b305bb77990) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bc9f69a149935f419ff20b305bb77990->m_frame.f_lineno = 516;
        tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sockaddr);
        tmp_args_element_value_1 = par_sockaddr;
        CHECK_OBJECT(par_flags);
        tmp_args_element_value_2 = par_flags;
        frame_bc9f69a149935f419ff20b305bb77990->m_frame.f_lineno = 516;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[130],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
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
        exception_tb = MAKE_TRACEBACK(frame_bc9f69a149935f419ff20b305bb77990, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc9f69a149935f419ff20b305bb77990->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc9f69a149935f419ff20b305bb77990, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc9f69a149935f419ff20b305bb77990,
        type_description_1,
        par_sockaddr,
        par_flags
    );


    // Release cached frame if used for exception.
    if (frame_bc9f69a149935f419ff20b305bb77990 == cache_frame_bc9f69a149935f419ff20b305bb77990) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc9f69a149935f419ff20b305bb77990);
        cache_frame_bc9f69a149935f419ff20b305bb77990 = NULL;
    }

    assertFrameObject(frame_bc9f69a149935f419ff20b305bb77990);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sockaddr);
    Py_DECREF(par_sockaddr);
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sockaddr);
    Py_DECREF(par_sockaddr);
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_sockets$$$function__14_wait_socket_readable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[0];
    struct Nuitka_FrameObject *frame_a7d6e81e2b3867a76adeb4d52428fdad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a7d6e81e2b3867a76adeb4d52428fdad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a7d6e81e2b3867a76adeb4d52428fdad)) {
        Py_XDECREF(cache_frame_a7d6e81e2b3867a76adeb4d52428fdad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7d6e81e2b3867a76adeb4d52428fdad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7d6e81e2b3867a76adeb4d52428fdad = MAKE_FUNCTION_FRAME(codeobj_a7d6e81e2b3867a76adeb4d52428fdad, module_anyio$_core$_sockets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a7d6e81e2b3867a76adeb4d52428fdad->m_type_description == NULL);
    frame_a7d6e81e2b3867a76adeb4d52428fdad = cache_frame_a7d6e81e2b3867a76adeb4d52428fdad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a7d6e81e2b3867a76adeb4d52428fdad);
    assert(Py_REFCNT(frame_a7d6e81e2b3867a76adeb4d52428fdad) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a7d6e81e2b3867a76adeb4d52428fdad->m_frame.f_lineno = 536;
        tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sock);
        tmp_args_element_value_1 = par_sock;
        frame_a7d6e81e2b3867a76adeb4d52428fdad->m_frame.f_lineno = 536;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[132], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
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
        exception_tb = MAKE_TRACEBACK(frame_a7d6e81e2b3867a76adeb4d52428fdad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7d6e81e2b3867a76adeb4d52428fdad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7d6e81e2b3867a76adeb4d52428fdad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7d6e81e2b3867a76adeb4d52428fdad,
        type_description_1,
        par_sock
    );


    // Release cached frame if used for exception.
    if (frame_a7d6e81e2b3867a76adeb4d52428fdad == cache_frame_a7d6e81e2b3867a76adeb4d52428fdad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a7d6e81e2b3867a76adeb4d52428fdad);
        cache_frame_a7d6e81e2b3867a76adeb4d52428fdad = NULL;
    }

    assertFrameObject(frame_a7d6e81e2b3867a76adeb4d52428fdad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_sockets$$$function__15_wait_socket_writable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[0];
    struct Nuitka_FrameObject *frame_ee8beb1203a2ce297a154cbe73dd8885;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee8beb1203a2ce297a154cbe73dd8885 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee8beb1203a2ce297a154cbe73dd8885)) {
        Py_XDECREF(cache_frame_ee8beb1203a2ce297a154cbe73dd8885);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee8beb1203a2ce297a154cbe73dd8885 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee8beb1203a2ce297a154cbe73dd8885 = MAKE_FUNCTION_FRAME(codeobj_ee8beb1203a2ce297a154cbe73dd8885, module_anyio$_core$_sockets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ee8beb1203a2ce297a154cbe73dd8885->m_type_description == NULL);
    frame_ee8beb1203a2ce297a154cbe73dd8885 = cache_frame_ee8beb1203a2ce297a154cbe73dd8885;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ee8beb1203a2ce297a154cbe73dd8885);
    assert(Py_REFCNT(frame_ee8beb1203a2ce297a154cbe73dd8885) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ee8beb1203a2ce297a154cbe73dd8885->m_frame.f_lineno = 556;
        tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sock);
        tmp_args_element_value_1 = par_sock;
        frame_ee8beb1203a2ce297a154cbe73dd8885->m_frame.f_lineno = 556;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[134], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
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
        exception_tb = MAKE_TRACEBACK(frame_ee8beb1203a2ce297a154cbe73dd8885, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee8beb1203a2ce297a154cbe73dd8885->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee8beb1203a2ce297a154cbe73dd8885, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee8beb1203a2ce297a154cbe73dd8885,
        type_description_1,
        par_sock
    );


    // Release cached frame if used for exception.
    if (frame_ee8beb1203a2ce297a154cbe73dd8885 == cache_frame_ee8beb1203a2ce297a154cbe73dd8885) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ee8beb1203a2ce297a154cbe73dd8885);
        cache_frame_ee8beb1203a2ce297a154cbe73dd8885 = NULL;
    }

    assertFrameObject(frame_ee8beb1203a2ce297a154cbe73dd8885);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_sockets$$$function__16_convert_ipv6_sockaddr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sockaddr = python_pars[0];
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *var_flowinfo = NULL;
    PyObject *var_scope_id = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_18926fdd68b03736ecfff9abc83addc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_18926fdd68b03736ecfff9abc83addc2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_18926fdd68b03736ecfff9abc83addc2)) {
        Py_XDECREF(cache_frame_18926fdd68b03736ecfff9abc83addc2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18926fdd68b03736ecfff9abc83addc2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18926fdd68b03736ecfff9abc83addc2 = MAKE_FUNCTION_FRAME(codeobj_18926fdd68b03736ecfff9abc83addc2, module_anyio$_core$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_18926fdd68b03736ecfff9abc83addc2->m_type_description == NULL);
    frame_18926fdd68b03736ecfff9abc83addc2 = cache_frame_18926fdd68b03736ecfff9abc83addc2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_18926fdd68b03736ecfff9abc83addc2);
    assert(Py_REFCNT(frame_18926fdd68b03736ecfff9abc83addc2) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        bool tmp_tmp_and_right_value_1_cbool_1;
        CHECK_OBJECT(par_sockaddr);
        tmp_isinstance_inst_1 = par_sockaddr;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_sockaddr);
        tmp_len_arg_1 = par_sockaddr;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 4;
        tmp_tmp_and_right_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_and_right_value_1 = tmp_tmp_and_right_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[137];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_sockaddr == NULL) {
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[138]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 580;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_sockaddr;
        frame_18926fdd68b03736ecfff9abc83addc2->m_frame.f_lineno = 580;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 580;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 580;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 580;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 580;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 580;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[139];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 580;
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_host = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_port = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_flowinfo == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_flowinfo = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert(var_scope_id == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_scope_id = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_scope_id);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_scope_id);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(var_host);
        tmp_format_value_1 = var_host;
        tmp_format_spec_1 = mod_consts[140];
        tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[141];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            CHECK_OBJECT(var_scope_id);
            tmp_format_value_2 = var_scope_id;
            tmp_format_spec_2 = mod_consts[140];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 583;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_tuple_element_1 = PyUnicode_Join(mod_consts[140], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_port);
        tmp_tuple_element_1 = var_port;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_host);
        tmp_tuple_element_3 = var_host;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_port);
        tmp_tuple_element_3 = var_port;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
        goto frame_return_exit_1;
    }
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[142];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_sockaddr == NULL) {
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[138]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 587;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_sockaddr;
        frame_18926fdd68b03736ecfff9abc83addc2->m_frame.f_lineno = 587;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
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
        exception_tb = MAKE_TRACEBACK(frame_18926fdd68b03736ecfff9abc83addc2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18926fdd68b03736ecfff9abc83addc2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18926fdd68b03736ecfff9abc83addc2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18926fdd68b03736ecfff9abc83addc2,
        type_description_1,
        par_sockaddr,
        var_host,
        var_port,
        var_flowinfo,
        var_scope_id
    );


    // Release cached frame if used for exception.
    if (frame_18926fdd68b03736ecfff9abc83addc2 == cache_frame_18926fdd68b03736ecfff9abc83addc2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_18926fdd68b03736ecfff9abc83addc2);
        cache_frame_18926fdd68b03736ecfff9abc83addc2 = NULL;
    }

    assertFrameObject(frame_18926fdd68b03736ecfff9abc83addc2);

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
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_flowinfo);
    var_flowinfo = NULL;
    Py_XDECREF(var_scope_id);
    var_scope_id = NULL;
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

    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_flowinfo);
    var_flowinfo = NULL;
    Py_XDECREF(var_scope_id);
    var_scope_id = NULL;
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
    CHECK_OBJECT(par_sockaddr);
    Py_DECREF(par_sockaddr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sockaddr);
    Py_DECREF(par_sockaddr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__10_create_udp_socket(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__10_create_udp_socket,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_96629f02c4d47d3c802f0e756ee4003a,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_sockets,
        mod_consts[105],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__11_create_connected_udp_socket(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__11_create_connected_udp_socket,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0949bdc6d0d4dd998969d7114b0d12e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_sockets,
        mod_consts[115],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__12_getaddrinfo(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__12_getaddrinfo,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_501aacc30bf5d5e1b3d7c560644c8e8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_sockets,
        mod_consts[117],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__13_getnameinfo(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__13_getnameinfo,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bc9f69a149935f419ff20b305bb77990,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_sockets,
        mod_consts[131],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__14_wait_socket_readable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__14_wait_socket_readable,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a7d6e81e2b3867a76adeb4d52428fdad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_sockets,
        mod_consts[133],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__15_wait_socket_writable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__15_wait_socket_writable,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee8beb1203a2ce297a154cbe73dd8885,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_sockets,
        mod_consts[135],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__16_convert_ipv6_sockaddr(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__16_convert_ipv6_sockaddr,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_18926fdd68b03736ecfff9abc83addc2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_sockets,
        mod_consts[143],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__1_connect_tcp(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__1_connect_tcp,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_99de0b430c5b3d04b6a850951a118b3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__2_connect_tcp(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__2_connect_tcp,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0039bcf784a0b65f8e3e039ec23b440f,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__3_connect_tcp(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__3_connect_tcp,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f645b13912f0489969daab3ec8ee46c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__4_connect_tcp(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__4_connect_tcp,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f5dd6fa46949522ce7fbdd19e37fc457,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__5_connect_tcp(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__5_connect_tcp,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_580aa0335a979f98a34c41144b8428e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__6_connect_tcp(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__6_connect_tcp,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_57d9a6161c2e53f30fc261618aedc5ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_sockets,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[7],
#endif
        codeobj_b4f0283d4cc286941575b0f31552e4d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_sockets,
        NULL,
        closure,
        6
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__7_connect_unix(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__7_connect_unix,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_52eb360e88ac69073a5e380f607d9bf4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_sockets,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__8_create_tcp_listener(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__8_create_tcp_listener,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7cab266cfd79c3b8b695353c17c08fcc,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_sockets,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_sockets$$$function__9_create_unix_listener(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_sockets$$$function__9_create_unix_listener,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7e21195b9d9b73822304d489861677b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_sockets,
        mod_consts[93],
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

function_impl_code functable_anyio$_core$_sockets[] = {
    impl_anyio$_core$_sockets$$$function__6_connect_tcp$$$coroutine__1_connect_tcp$$$function__1_try_connect,
    impl_anyio$_core$_sockets$$$function__1_connect_tcp,
    impl_anyio$_core$_sockets$$$function__2_connect_tcp,
    impl_anyio$_core$_sockets$$$function__3_connect_tcp,
    impl_anyio$_core$_sockets$$$function__4_connect_tcp,
    impl_anyio$_core$_sockets$$$function__5_connect_tcp,
    impl_anyio$_core$_sockets$$$function__6_connect_tcp,
    impl_anyio$_core$_sockets$$$function__7_connect_unix,
    impl_anyio$_core$_sockets$$$function__8_create_tcp_listener,
    impl_anyio$_core$_sockets$$$function__9_create_unix_listener,
    impl_anyio$_core$_sockets$$$function__10_create_udp_socket,
    impl_anyio$_core$_sockets$$$function__11_create_connected_udp_socket,
    impl_anyio$_core$_sockets$$$function__12_getaddrinfo,
    impl_anyio$_core$_sockets$$$function__13_getnameinfo,
    impl_anyio$_core$_sockets$$$function__14_wait_socket_readable,
    impl_anyio$_core$_sockets$$$function__15_wait_socket_writable,
    impl_anyio$_core$_sockets$$$function__16_convert_ipv6_sockaddr,
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

    function_impl_code *current = functable_anyio$_core$_sockets;
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

    if (offset > sizeof(functable_anyio$_core$_sockets) || offset < 0) {
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
        functable_anyio$_core$_sockets[offset],
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
        module_anyio$_core$_sockets,
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
PyObject *modulecode_anyio$_core$_sockets(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio._core._sockets");

    // Store the module for future use.
    module_anyio$_core$_sockets = module;

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
        PRINT_STRING("anyio._core._sockets: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio._core._sockets: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio._core._sockets: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initanyio$_core$_sockets\n");

    moduledict_anyio$_core$_sockets = MODULE_DICT(module_anyio$_core$_sockets);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$_core$_sockets,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$_core$_sockets,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[140]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$_core$_sockets,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$_core$_sockets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$_core$_sockets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$_core$_sockets);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_anyio$_core$_sockets);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    struct Nuitka_FrameObject *frame_180d476aa64c6aed84ef2b0747136414;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[145];
        UPDATE_STRING_DICT0(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_2);
    }
    frame_180d476aa64c6aed84ef2b0747136414 = MAKE_MODULE_FRAME(codeobj_180d476aa64c6aed84ef2b0747136414, module_anyio$_core$_sockets);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_180d476aa64c6aed84ef2b0747136414);
    assert(Py_REFCNT(frame_180d476aa64c6aed84ef2b0747136414) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[145];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[148], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[149], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[13];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[151];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[13];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[152];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[153];
        tmp_level_value_3 = mod_consts[13];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 4;
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
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[28],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[28]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[15],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[15]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_9);
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
        tmp_assign_source_10 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_10);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_3 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[154],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[154]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[101],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[101]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[155];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[156];
        tmp_level_value_4 = mod_consts[13];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 6;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[61],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[9];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[157];
        tmp_level_value_5 = mod_consts[13];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 7;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_6 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[106],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[106]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[158],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[158]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_17 == NULL));
        assert(tmp_import_from_4__module == NULL);
        Py_INCREF(tmp_assign_source_17);
        tmp_import_from_4__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_8 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[159],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[159]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_9 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[160],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[160]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_10 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[161],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[161]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_11 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[136],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[136]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[162],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[162]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[109],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[109]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[163],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[163]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_24);
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[140];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[164];
        tmp_level_value_6 = mod_consts[165];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 10;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[97],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[97]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[166];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[167];
        tmp_level_value_7 = mod_consts[165];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 11;
        tmp_assign_source_26 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_16 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[168],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[168]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_17 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[169],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[169]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_18 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[170],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[170]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_19 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[171],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[171]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_20 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[172],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_20, mod_consts[172]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_21 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[173],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_21, mod_consts[173]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_22 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[174],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_22, mod_consts[174]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_33);
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
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[175];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[176];
        tmp_level_value_8 = mod_consts[165];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 20;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[91],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_23, mod_consts[91]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[177];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[178];
        tmp_level_value_9 = mod_consts[165];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 21;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[48],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_24, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[179];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[180];
        tmp_level_value_10 = mod_consts[25];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 22;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[8],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_25, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[181];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[182];
        tmp_level_value_11 = mod_consts[25];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 23;
        tmp_import_name_from_26 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[52],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_26, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[183];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[184];
        tmp_level_value_12 = mod_consts[25];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 24;
        tmp_import_name_from_27 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[4],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_27, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[185];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_anyio$_core$_sockets;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[186];
        tmp_level_value_13 = mod_consts[25];
        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 25;
        tmp_assign_source_39 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_39;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_28 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[30],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_28, mod_consts[30]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_29 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[36],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_29, mod_consts[36]);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_41);
    }
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

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_30;
        tmp_import_name_from_30 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_30 == NULL));
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_anyio$_core$_sockets,
                mod_consts[187],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_30, mod_consts[187]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_getattr_target_1 == NULL)) {
            tmp_getattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_1 = mod_consts[85];
        tmp_getattr_default_1 = mod_consts[188];
        tmp_assign_source_43 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[158]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 3, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[136]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_3 = mod_consts[142];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_44 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_2);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[23]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_2);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[19]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_4, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_45 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[23]);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_3);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[19]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[191]);
        tmp_dict_key_1 = mod_consts[2];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_1);

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_13;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[11];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

            if (unlikely(tmp_subscript_value_6 == NULL)) {
                tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
            }

            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_6);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[47];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[151]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[192]);
            if (tmp_subscript_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_7);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[50];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[46];
            tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[37];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[5];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_args_element_value_1 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__1_connect_tcp(tmp_kw_defaults_1, tmp_annotations_1);

        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 44;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_2 = DICT_COPY(mod_consts[193]);
        tmp_dict_key_2 = mod_consts[2];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_2);

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_9;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[16];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[11];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

            if (unlikely(tmp_subscript_value_8 == NULL)) {
                tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
            }

            if (tmp_subscript_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_8);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[47];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[151]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[192]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[50];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[46];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_9 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_9);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[37];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[5];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_kw_defaults_2);
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_args_element_value_2 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__2_connect_tcp(tmp_kw_defaults_2, tmp_annotations_2);

        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 59;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kw_defaults_3;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_3 = DICT_COPY(mod_consts[194]);
        tmp_dict_key_3 = mod_consts[2];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_3);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 9 );
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_13;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[16];
            tmp_dict_value_3 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[11];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

            if (unlikely(tmp_subscript_value_10 == NULL)) {
                tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
            }

            if (tmp_subscript_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_10);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[45];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[187]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_11 = Py_True;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_11, 1);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[47];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto dict_build_exception_3;
            }
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[151]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[192]);
            if (tmp_subscript_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_12);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[50];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[46];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_13 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_13);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[37];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[5];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_kw_defaults_3);
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_args_element_value_3 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__3_connect_tcp(tmp_kw_defaults_3, tmp_annotations_3);

        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 74;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_kw_defaults_4;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_4 = DICT_COPY(mod_consts[194]);
        tmp_dict_key_4 = mod_consts[2];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_4);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 9 );
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_17;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[16];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[11];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

            if (unlikely(tmp_subscript_value_14 == NULL)) {
                tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
            }

            if (tmp_subscript_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_14);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[45];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[187]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_15 = Py_False;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_23, tmp_subscript_value_15, 0);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[47];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_4;
            }
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[151]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[192]);
            if (tmp_subscript_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_16);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[50];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[46];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_17 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_17);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[37];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[5];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[172]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_kw_defaults_4);
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_args_element_value_4 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__4_connect_tcp(tmp_kw_defaults_4, tmp_annotations_4);

        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 90;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_kw_defaults_5;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_5 = DICT_COPY(mod_consts[195]);
        tmp_dict_key_5 = mod_consts[2];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_5);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_18;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[16];
            tmp_dict_value_5 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[11];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

            if (unlikely(tmp_subscript_value_18 == NULL)) {
                tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
            }

            if (tmp_subscript_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_18);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[37];
            tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[5];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[172]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_kw_defaults_5);
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_args_element_value_5 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__5_connect_tcp(tmp_kw_defaults_5, tmp_annotations_5);

        frame_180d476aa64c6aed84ef2b0747136414->m_frame.f_lineno = 106;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_kw_defaults_6;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_kw_defaults_6 = DICT_COPY(mod_consts[196]);
        tmp_dict_key_6 = mod_consts[2];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_6);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 9 );
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_tuple_element_4;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[16];
            tmp_dict_value_6 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[11];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

            if (unlikely(tmp_subscript_value_19 == NULL)) {
                tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
            }

            if (tmp_subscript_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_19);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[45];
            tmp_dict_value_6 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[47];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_6;
            }
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[151]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[192]);
            if (tmp_subscript_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_20);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[50];
            tmp_dict_value_6 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[46];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_21 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_21);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[37];
            tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[5];
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[162]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_6;
            }
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[172]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_22, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_22, 1, tmp_tuple_element_4);
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_subscript_value_22);
            goto dict_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_22);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_kw_defaults_6);
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;


        tmp_assign_source_52 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__6_connect_tcp(tmp_kw_defaults_6, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_23;
        tmp_dict_key_7 = mod_consts[62];
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = mod_consts[197];
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_23);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[5];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto dict_build_exception_7;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;


        tmp_assign_source_53 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__7_connect_unix(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_kw_defaults_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_24;
        tmp_dict_key_8 = mod_consts[11];
        tmp_dict_value_8 = Py_None;
        tmp_kw_defaults_7 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[68];
            tmp_dict_value_8 = mod_consts[13];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[69];
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto dict_build_exception_8;
            }
            tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[106]);
            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[10]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[66];
            tmp_dict_value_8 = mod_consts[67];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[83];
            tmp_dict_value_8 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_kw_defaults_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;
        tmp_dict_key_9 = mod_consts[11];
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_7);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_subscript_value_24 == NULL)) {
            tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_subscript_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_7);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_24);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_7);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_25;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[68];
            tmp_dict_value_9 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[69];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[66];
            tmp_dict_value_9 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[83];
            tmp_dict_value_9 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[5];
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[172]);

            if (unlikely(tmp_subscript_value_25 == NULL)) {
                tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
            }

            if (tmp_subscript_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_25);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_kw_defaults_7);
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;


        tmp_assign_source_54 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__8_create_tcp_listener(tmp_kw_defaults_7, tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_kw_defaults_8;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_26;
        tmp_kw_defaults_8 = DICT_COPY(mod_consts[198]);
        tmp_dict_key_10 = mod_consts[62];
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_8);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = mod_consts[197];
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_26);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_8);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_27;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[100];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_27 = (PyObject *)&PyLong_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_27);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[66];
            tmp_dict_value_10 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[5];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[171]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_kw_defaults_8);
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;


        tmp_assign_source_55 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__9_create_unix_listener(tmp_kw_defaults_8, tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_kw_defaults_9;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[10]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_5);
        tmp_kw_defaults_9 = DICT_COPY(mod_consts[199]);
        tmp_dict_key_11 = mod_consts[69];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_defaults_1);
            Py_DECREF(tmp_kw_defaults_9);

            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_28;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[11];
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

            if (unlikely(tmp_subscript_value_28 == NULL)) {
                tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
            }

            if (tmp_subscript_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_11;
            }
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_28);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[68];
            tmp_dict_value_11 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[83];
            tmp_dict_value_11 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[5];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[173]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_defaults_1);
        Py_DECREF(tmp_kw_defaults_9);
        Py_DECREF(tmp_annotations_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;


        tmp_assign_source_56 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__10_create_udp_socket(tmp_defaults_1, tmp_kw_defaults_9, tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_kw_defaults_10;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_dict_key_12 = mod_consts[69];
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[10]);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_10 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[11];
        tmp_dict_value_12 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[68];
        tmp_dict_value_12 = mod_consts[13];
        tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[83];
        tmp_dict_value_12 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[2];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_10);

            exception_lineno = 408;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_29;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[16];
            tmp_dict_value_13 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[69];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[11];
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[169]);

            if (unlikely(tmp_subscript_value_29 == NULL)) {
                tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
            }

            if (tmp_subscript_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;

                goto dict_build_exception_12;
            }
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_29);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[68];
            tmp_dict_value_13 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[83];
            tmp_dict_value_13 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[5];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[168]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 415;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_kw_defaults_10);
        Py_DECREF(tmp_annotations_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;


        tmp_assign_source_57 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__11_create_connected_udp_socket(tmp_kw_defaults_10, tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_kw_defaults_11;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_30;
        tmp_kw_defaults_11 = DICT_COPY(mod_consts[200]);
        tmp_dict_key_14 = mod_consts[118];
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_11);

            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_30 = mod_consts[201];
        tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_30);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_11);

            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_tuple_element_7;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[123];
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[162]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_31 = mod_consts[202];
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_31);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[69];
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[162]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;

                goto dict_build_exception_13;
            }
            tmp_tuple_element_6 = (PyObject *)&PyLong_Type;
            tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_32, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_32, 1, tmp_tuple_element_6);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_subscript_value_32);
            goto dict_build_exception_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_32);
            Py_DECREF(tmp_subscript_value_32);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[124];
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[162]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;

                goto dict_build_exception_13;
            }
            tmp_tuple_element_7 = (PyObject *)&PyLong_Type;
            tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_33, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[158]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_33, 1, tmp_tuple_element_7);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_subscript_value_33);
            goto dict_build_exception_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_33);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[125];
            tmp_dict_value_14 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[126];
            tmp_dict_value_14 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[5];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[189]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[189]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_kw_defaults_11);
        Py_DECREF(tmp_annotations_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;


        tmp_assign_source_58 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__12_getaddrinfo(tmp_kw_defaults_11, tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        tmp_defaults_2 = mod_consts[203];
        tmp_dict_key_15 = mod_consts[138];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_35;
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[126];
            tmp_dict_value_15 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[5];
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[159]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto dict_build_exception_14;
            }
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[136]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_35 = mod_consts[204];
            tmp_subscript_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_35);
            if (tmp_subscript_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto dict_build_exception_14;
            }
            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_34);
            Py_DECREF(tmp_subscript_value_34);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_annotations_13);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_59 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__13_getnameinfo(tmp_defaults_2, tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_50;
        tmp_dict_key_16 = mod_consts[205];
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[9]);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;

            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_36;
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[5];
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[159]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 519;

                goto dict_build_exception_15;
            }
            tmp_subscript_value_36 = Py_None;
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_36);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 519;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_15;
        // Exception handling pass through code for dict_build:
        dict_build_exception_15:;
        Py_DECREF(tmp_annotations_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_15:;


        tmp_assign_source_60 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__14_wait_socket_readable(tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_value_52;
        tmp_dict_key_17 = mod_consts[205];
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[9]);
        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto frame_exception_exit_1;
        }
        tmp_annotations_15 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_37;
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[5];
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[159]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_37 = Py_None;
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_37);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_16;
        // Exception handling pass through code for dict_build:
        dict_build_exception_16:;
        Py_DECREF(tmp_annotations_15);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_16:;


        tmp_assign_source_61 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__15_wait_socket_writable(tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_38;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_39;
        tmp_dict_key_18 = mod_consts[138];
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_39 = mod_consts[137];
        tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_39);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_40;
            PyTuple_SET_ITEM(tmp_subscript_value_38, 0, tmp_tuple_element_8);
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[136]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;

                goto tuple_build_exception_7;
            }
            tmp_subscript_value_40 = mod_consts[142];
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_40);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_38, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_subscript_value_38);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_38);
        Py_DECREF(tmp_subscript_value_38);
        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_41;
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[5];
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[136]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;

                goto dict_build_exception_17;
            }
            tmp_subscript_value_41 = mod_consts[142];
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_41);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;

                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_17;
        // Exception handling pass through code for dict_build:
        dict_build_exception_17:;
        Py_DECREF(tmp_annotations_16);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_17:;


        tmp_assign_source_62 = MAKE_FUNCTION_anyio$_core$_sockets$$$function__16_convert_ipv6_sockaddr(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_62);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_180d476aa64c6aed84ef2b0747136414, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_180d476aa64c6aed84ef2b0747136414->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_180d476aa64c6aed84ef2b0747136414, exception_lineno);
    }



    assertFrameObject(frame_180d476aa64c6aed84ef2b0747136414);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio._core._sockets", false);

    Py_INCREF(module_anyio$_core$_sockets);
    return module_anyio$_core$_sockets;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_sockets, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$_core$_sockets", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
