/* Generated code for Python module 'anyio'
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

/* The "module_anyio" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio;
PyDictObject *moduledict_anyio;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[129];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[129];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("anyio"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 129; i++) {
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
void checkModuleConstants_anyio(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 129; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8083b8e287e3d0427f838e0bed7e8d4f;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[1]; CHECK_OBJECT(module_filename_obj);
    codeobj_8083b8e287e3d0427f838e0bed7e8d4f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[128], mod_consts[128], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


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

function_impl_code functable_anyio[] = {

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

    function_impl_code *current = functable_anyio;
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

    if (offset > sizeof(functable_anyio) || offset < 0) {
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
        functable_anyio[offset],
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
        module_anyio,
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
PyObject *modulecode_anyio(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio");

    // Store the module for future use.
    module_anyio = module;

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
        PRINT_STRING("anyio: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initanyio\n");

    moduledict_anyio = MODULE_DICT(module_anyio);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[124]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_anyio, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_anyio);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_import_from_10__module = NULL;
    PyObject *tmp_import_from_11__module = NULL;
    PyObject *tmp_import_from_12__module = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    PyObject *tmp_import_from_9__module = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8083b8e287e3d0427f838e0bed7e8d4f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_key;
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
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_anyio, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_anyio, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST1(mod_consts[3]);
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_3);
    }
    frame_8083b8e287e3d0427f838e0bed7e8d4f = MAKE_MODULE_FRAME(codeobj_8083b8e287e3d0427f838e0bed7e8d4f, module_anyio);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8083b8e287e3d0427f838e0bed7e8d4f);
    assert(Py_REFCNT(frame_8083b8e287e3d0427f838e0bed7e8d4f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = Nuitka_SysGetObject("path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_subscript_value_1 = mod_consts[5];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[1];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[9], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_anyio, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_anyio, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_anyio,
                mod_consts[14],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[14]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[16];
        tmp_level_value_1 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 79;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_anyio,
                mod_consts[18],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[18]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_anyio,
                mod_consts[19],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[19]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
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
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[20];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[21];
        tmp_level_value_2 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 80;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_anyio,
                mod_consts[22],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[22]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_anyio,
                mod_consts[23],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[23]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_anyio,
                mod_consts[24],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[24]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_anyio,
                mod_consts[25],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[25]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_anyio,
                mod_consts[26],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[26]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_anyio,
                mod_consts[27],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[27]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_anyio,
                mod_consts[28],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[28]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_18);
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
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[29];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[30];
        tmp_level_value_3 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 89;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_anyio,
                mod_consts[31],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[31]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_anyio,
                mod_consts[32],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[32]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_anyio,
                mod_consts[33],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[33]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_anyio,
                mod_consts[34],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[34]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_anyio,
                mod_consts[35],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[35]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_anyio,
                mod_consts[36],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[36]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_anyio,
                mod_consts[37],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[37]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_anyio,
                mod_consts[38],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[38]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_anyio,
                mod_consts[39],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[39]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_20 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_anyio,
                mod_consts[40],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_20, mod_consts[40]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_29);
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
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[41];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[42];
        tmp_level_value_4 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 101;
        tmp_assign_source_30 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_21 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_anyio,
                mod_consts[43],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_21, mod_consts[43]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_22 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_anyio,
                mod_consts[44],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_22, mod_consts[44]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_23 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_anyio,
                mod_consts[45],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_23, mod_consts[45]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_24 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_anyio,
                mod_consts[46],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_24, mod_consts[46]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_34);
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
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[47];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[48];
        tmp_level_value_5 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 102;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_anyio,
                mod_consts[49],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_25, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[50];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[51];
        tmp_level_value_6 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 103;
        tmp_import_name_from_26 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_anyio,
                mod_consts[52],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_26, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[53];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[54];
        tmp_level_value_7 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 104;
        tmp_assign_source_37 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_27 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_anyio,
                mod_consts[55],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_27, mod_consts[55]);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_28 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_anyio,
                mod_consts[56],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_28, mod_consts[56]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_29 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_anyio,
                mod_consts[57],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_29, mod_consts[57]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_30 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_anyio,
                mod_consts[58],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_30, mod_consts[58]);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_31 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_anyio,
                mod_consts[59],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_31, mod_consts[59]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_32 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_anyio,
                mod_consts[60],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_32, mod_consts[60]);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_33 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_anyio,
                mod_consts[61],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_33, mod_consts[61]);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_34 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_anyio,
                mod_consts[62],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_34, mod_consts[62]);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_35 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_anyio,
                mod_consts[63],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_35, mod_consts[63]);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_36 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_anyio,
                mod_consts[64],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_36, mod_consts[64]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_47);
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
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_37;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[65];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[66];
        tmp_level_value_8 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 116;
        tmp_import_name_from_37 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_anyio,
                mod_consts[67],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_37, mod_consts[67]);
        }

        Py_DECREF(tmp_import_name_from_37);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[68];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[69];
        tmp_level_value_9 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 117;
        tmp_assign_source_49 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_49;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_38 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_anyio,
                mod_consts[70],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_38, mod_consts[70]);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_39 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_anyio,
                mod_consts[71],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_39, mod_consts[71]);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_51);
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
        PyObject *tmp_assign_source_52;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[72];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[73];
        tmp_level_value_10 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 118;
        tmp_assign_source_52 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_52;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_40;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_40 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_anyio,
                mod_consts[74],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_40, mod_consts[74]);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_41;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_41 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_anyio,
                mod_consts[75],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_41, mod_consts[75]);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_42 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_anyio,
                mod_consts[76],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_42, mod_consts[76]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_43;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_43 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_anyio,
                mod_consts[77],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_43, mod_consts[77]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_44;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_44 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_anyio,
                mod_consts[78],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_44, mod_consts[78]);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_45;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_45 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_anyio,
                mod_consts[79],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_45, mod_consts[79]);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_46;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_46 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_anyio,
                mod_consts[80],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_46, mod_consts[80]);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_47 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_anyio,
                mod_consts[81],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_47, mod_consts[81]);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_48;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_48 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_anyio,
                mod_consts[82],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_48, mod_consts[82]);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_49;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_49 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_49,
                (PyObject *)moduledict_anyio,
                mod_consts[83],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_49, mod_consts[83]);
        }

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_50;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_50 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_50,
                (PyObject *)moduledict_anyio,
                mod_consts[84],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_50, mod_consts[84]);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_51;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_51 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_51,
                (PyObject *)moduledict_anyio,
                mod_consts[85],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_51, mod_consts[85]);
        }

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_52;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_52 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_52,
                (PyObject *)moduledict_anyio,
                mod_consts[86],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_52, mod_consts[86]);
        }

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_53;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_53 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_53,
                (PyObject *)moduledict_anyio,
                mod_consts[87],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_53, mod_consts[87]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_54;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_54 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_54,
                (PyObject *)moduledict_anyio,
                mod_consts[88],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_54, mod_consts[88]);
        }

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_67);
    }
    goto try_end_7;
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

    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[89];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[90];
        tmp_level_value_11 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 135;
        tmp_assign_source_68 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_8__module == NULL);
        tmp_import_from_8__module = tmp_assign_source_68;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_55;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_55 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_55,
                (PyObject *)moduledict_anyio,
                mod_consts[91],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_55, mod_consts[91]);
        }

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_56;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_56 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_56,
                (PyObject *)moduledict_anyio,
                mod_consts[92],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_56, mod_consts[92]);
        }

        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_57;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_57 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_57,
                (PyObject *)moduledict_anyio,
                mod_consts[93],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_57, mod_consts[93]);
        }

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_58;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_58 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_58,
                (PyObject *)moduledict_anyio,
                mod_consts[94],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_58, mod_consts[94]);
        }

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_59;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_59 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_59,
                (PyObject *)moduledict_anyio,
                mod_consts[95],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_59, mod_consts[95]);
        }

        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_60;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_60 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_60,
                (PyObject *)moduledict_anyio,
                mod_consts[96],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_60, mod_consts[96]);
        }

        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_61;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_61 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_61,
                (PyObject *)moduledict_anyio,
                mod_consts[97],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_61, mod_consts[97]);
        }

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_75);
    }
    goto try_end_8;
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

    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[98];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[99];
        tmp_level_value_12 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 144;
        tmp_assign_source_76 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_9__module == NULL);
        tmp_import_from_9__module = tmp_assign_source_76;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_import_name_from_62;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_62 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_62,
                (PyObject *)moduledict_anyio,
                mod_consts[100],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_62, mod_consts[100]);
        }

        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_import_name_from_63;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_63 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_63,
                (PyObject *)moduledict_anyio,
                mod_consts[101],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_78 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_63, mod_consts[101]);
        }

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_64;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_64 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_64,
                (PyObject *)moduledict_anyio,
                mod_consts[102],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_64, mod_consts[102]);
        }

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_65;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_65 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_65,
                (PyObject *)moduledict_anyio,
                mod_consts[103],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_65, mod_consts[103]);
        }

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_80);
    }
    goto try_end_9;
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

    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[104];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[105];
        tmp_level_value_13 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 150;
        tmp_assign_source_81 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_10__module == NULL);
        tmp_import_from_10__module = tmp_assign_source_81;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_import_name_from_66;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_66 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_66,
                (PyObject *)moduledict_anyio,
                mod_consts[106],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_82 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_66, mod_consts[106]);
        }

        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_67;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_67 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_67,
                (PyObject *)moduledict_anyio,
                mod_consts[107],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_67, mod_consts[107]);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_68;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_68 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_68,
                (PyObject *)moduledict_anyio,
                mod_consts[108],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_68, mod_consts[108]);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_84);
    }
    goto try_end_10;
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

    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[109];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[110];
        tmp_level_value_14 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 154;
        tmp_assign_source_85 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_11__module == NULL);
        tmp_import_from_11__module = tmp_assign_source_85;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_69;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_69 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_69,
                (PyObject *)moduledict_anyio,
                mod_consts[111],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_86 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_69, mod_consts[111]);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_70;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_70 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_70)) {
            tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_70,
                (PyObject *)moduledict_anyio,
                mod_consts[112],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_87 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_70, mod_consts[112]);
        }

        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_87);
    }
    goto try_end_11;
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

    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[113];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_anyio;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[114];
        tmp_level_value_15 = mod_consts[17];
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 155;
        tmp_assign_source_88 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_12__module == NULL);
        tmp_import_from_12__module = tmp_assign_source_88;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_import_name_from_71;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_71 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_71)) {
            tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_71,
                (PyObject *)moduledict_anyio,
                mod_consts[115],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_89 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_71, mod_consts[115]);
        }

        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_import_name_from_72;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_72 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_72)) {
            tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_72,
                (PyObject *)moduledict_anyio,
                mod_consts[116],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_90 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_72, mod_consts[116]);
        }

        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_import_name_from_73;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_73 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_73)) {
            tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_73,
                (PyObject *)moduledict_anyio,
                mod_consts[117],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_91 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_73, mod_consts[117]);
        }

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_import_name_from_74;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_74 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_74)) {
            tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_74,
                (PyObject *)moduledict_anyio,
                mod_consts[118],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_92 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_74, mod_consts[118]);
        }

        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_anyio, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_92);
    }
    goto try_end_12;
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

    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = (PyObject *)&PyUnicode_Type;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[119];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[120];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = (PyObject *)moduledict_anyio;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[121]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 165;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_93 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_93 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_93;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_94;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_94 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_94 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 165;
                goto try_except_handler_13;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_95 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_96 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_96 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 165;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_96;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_97 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_97 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 165;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_97;
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


                    exception_lineno = 165;
                    goto try_except_handler_15;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[122];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 165;
            goto try_except_handler_15;
        }
    }
    goto try_end_13;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    try_end_13:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_13;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_98;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_98 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict_anyio, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_98);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_99;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_99 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict_anyio, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_99);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_getattr_target_1 == NULL)) {
            tmp_getattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_13;
        }
        tmp_getattr_attr_1 = mod_consts[123];
        tmp_getattr_default_1 = mod_consts[124];
        tmp_expression_value_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_13;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[125]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_13;
        }
        frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame.f_lineno = 166;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[126]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_13;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 166;

            goto try_except_handler_13;
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
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[127];
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_13;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[123], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto try_except_handler_13;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 165;

        goto try_except_handler_13;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8083b8e287e3d0427f838e0bed7e8d4f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8083b8e287e3d0427f838e0bed7e8d4f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8083b8e287e3d0427f838e0bed7e8d4f, exception_lineno);
    }



    assertFrameObject(frame_8083b8e287e3d0427f838e0bed7e8d4f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio", false);

    Py_INCREF(module_anyio);
    return module_anyio;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
