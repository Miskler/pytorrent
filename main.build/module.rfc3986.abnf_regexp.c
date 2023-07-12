/* Generated code for Python module 'rfc3986.abnf_regexp'
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

/* The "module_rfc3986$abnf_regexp" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rfc3986$abnf_regexp;
PyDictObject *moduledict_rfc3986$abnf_regexp;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[171];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[171];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("rfc3986.abnf_regexp"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 171; i++) {
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
void checkModuleConstants_rfc3986$abnf_regexp(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 171; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_db20951f109591dffdc6e8333f20ffa9;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[2]; CHECK_OBJECT(module_filename_obj);
    codeobj_db20951f109591dffdc6e8333f20ffa9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[169], mod_consts[169], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1_complex_call_helper_star_list(PyObject **python_pars);


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

function_impl_code functable_rfc3986$abnf_regexp[] = {

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

    function_impl_code *current = functable_rfc3986$abnf_regexp;
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

    if (offset > sizeof(functable_rfc3986$abnf_regexp) || offset < 0) {
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
        functable_rfc3986$abnf_regexp[offset],
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
        module_rfc3986$abnf_regexp,
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
PyObject *modulecode_rfc3986$abnf_regexp(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("rfc3986.abnf_regexp");

    // Store the module for future use.
    module_rfc3986$abnf_regexp = module;

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
        PRINT_STRING("rfc3986.abnf_regexp: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("rfc3986.abnf_regexp: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("rfc3986.abnf_regexp: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initrfc3986$abnf_regexp\n");

    moduledict_rfc3986$abnf_regexp = MODULE_DICT(module_rfc3986$abnf_regexp);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_rfc3986$abnf_regexp,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_rfc3986$abnf_regexp,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[170]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_rfc3986$abnf_regexp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_rfc3986$abnf_regexp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_rfc3986$abnf_regexp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_rfc3986$abnf_regexp);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_rfc3986$abnf_regexp);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_assign_unpack_3__assign_source = NULL;
    PyObject *tmp_assign_unpack_5__assign_source = NULL;
    PyObject *tmp_assign_unpack_6__assign_source = NULL;
    PyObject *tmp_assign_unpack_7__assign_source = NULL;
    PyObject *tmp_assign_unpack_8__assign_source = NULL;
    PyObject *tmp_assign_unpack_9__assign_source = NULL;
    struct Nuitka_FrameObject *frame_db20951f109591dffdc6e8333f20ffa9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_2);
    }
    frame_db20951f109591dffdc6e8333f20ffa9 = MAKE_MODULE_FRAME(codeobj_db20951f109591dffdc6e8333f20ffa9, module_rfc3986$abnf_regexp);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_db20951f109591dffdc6e8333f20ffa9);
    assert(Py_REFCNT(frame_db20951f109591dffdc6e8333f20ffa9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[2];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_set_arg_1;
        tmp_set_arg_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_set_arg_1 == NULL)) {
            tmp_set_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        assert(!(tmp_set_arg_1 == NULL));
        tmp_assign_source_7 = PySet_New(tmp_set_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_set_arg_2;
        tmp_set_arg_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_set_arg_2 == NULL)) {
            tmp_set_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        assert(!(tmp_set_arg_2 == NULL));
        tmp_assign_source_10 = PySet_New(tmp_set_arg_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        assert(!(tmp_called_value_1 == NULL));
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_db20951f109591dffdc6e8333f20ffa9->m_frame.f_lineno = 26;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_add_expr_left_2 == NULL)) {
            tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        assert(!(tmp_add_expr_left_2 == NULL));
        tmp_add_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_add_expr_right_2 == NULL)) {
            tmp_add_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        assert(!(tmp_add_expr_right_2 == NULL));
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_add_expr_right_1 = mod_consts[25];
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_assign_source_15 == NULL));
        assert(tmp_assign_unpack_3__assign_source == NULL);
        tmp_assign_unpack_3__assign_source = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_16 = tmp_assign_unpack_3__assign_source;
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_17 = tmp_assign_unpack_3__assign_source;
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_17);
    }
    CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
    Py_DECREF(tmp_assign_unpack_3__assign_source);
    tmp_assign_unpack_3__assign_source = NULL;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_set_arg_3;
        tmp_set_arg_3 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_set_arg_3 == NULL)) {
            tmp_set_arg_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_set_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = PySet_New(tmp_set_arg_3);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_db20951f109591dffdc6e8333f20ffa9->m_frame.f_lineno = 32;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_add_expr_left_5 = mod_consts[35];
        tmp_add_expr_right_5 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_add_expr_right_5 == NULL)) {
            tmp_add_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        assert(!(tmp_add_expr_right_5 == NULL));
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        assert(!(tmp_add_expr_left_4 == NULL));
        tmp_add_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_add_expr_right_4 == NULL)) {
            tmp_add_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_add_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[36];
        tmp_mod_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_mod_expr_right_1 == NULL)) {
            tmp_mod_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[48];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_assign_source_29 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[49];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[50];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[51];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[52];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        tmp_expression_value_3 = mod_consts[54];
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[55]);
        assert(!(tmp_dircall_arg1_1 == NULL));
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_dircall_arg2_1 == NULL));
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_30 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        tmp_kw_call_arg_value_0_1 = mod_consts[57];
        tmp_kw_call_arg_value_1_1 = mod_consts[58];
        tmp_add_expr_left_6 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_add_expr_left_6 == NULL)) {
            tmp_add_expr_left_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_add_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_add_expr_right_6 == NULL)) {
            tmp_add_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_add_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_db20951f109591dffdc6e8333f20ffa9->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_5__assign_source == NULL);
        tmp_assign_unpack_5__assign_source = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
        tmp_assign_source_32 = tmp_assign_unpack_5__assign_source;
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
        tmp_assign_source_33 = tmp_assign_unpack_5__assign_source;
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_33);
    }
    CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
    Py_DECREF(tmp_assign_unpack_5__assign_source);
    tmp_assign_unpack_5__assign_source = NULL;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_kw_call_arg_value_0_2 = mod_consts[65];
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_kw_call_dict_value_0_1 == NULL));
        tmp_kw_call_dict_value_1_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
            tmp_kw_call_dict_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_kw_call_dict_value_1_1 == NULL));
        frame_db20951f109591dffdc6e8333f20ffa9->m_frame.f_lineno = 84;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[66]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[68];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_assign_source_37 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[69];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_list_element_1;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = mod_consts[71];
        tmp_mod_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_mod_expr_right_2 == NULL)) {
            tmp_mod_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        assert(!(tmp_mod_expr_right_2 == NULL));
        tmp_list_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_38 = MAKE_LIST_EMPTY(9);
        {
            PyObject *tmp_mod_expr_left_3;
            PyObject *tmp_mod_expr_right_3;
            PyObject *tmp_mod_expr_left_4;
            PyObject *tmp_mod_expr_right_4;
            PyObject *tmp_mod_expr_left_5;
            PyObject *tmp_mod_expr_right_5;
            PyObject *tmp_mod_expr_left_6;
            PyObject *tmp_mod_expr_right_6;
            PyObject *tmp_mod_expr_left_7;
            PyObject *tmp_mod_expr_right_7;
            PyObject *tmp_mod_expr_left_8;
            PyObject *tmp_mod_expr_right_8;
            PyObject *tmp_mod_expr_left_9;
            PyObject *tmp_mod_expr_right_9;
            PyObject *tmp_mod_expr_left_10;
            PyObject *tmp_mod_expr_right_10;
            PyList_SET_ITEM(tmp_assign_source_38, 0, tmp_list_element_1);
            tmp_mod_expr_left_3 = mod_consts[72];
            tmp_mod_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_mod_expr_right_3 == NULL)) {
                tmp_mod_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_mod_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_38, 1, tmp_list_element_1);
            tmp_mod_expr_left_4 = mod_consts[73];
            tmp_mod_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_mod_expr_right_4 == NULL)) {
                tmp_mod_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_mod_expr_right_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_38, 2, tmp_list_element_1);
            tmp_mod_expr_left_5 = mod_consts[74];
            tmp_mod_expr_right_5 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_mod_expr_right_5 == NULL)) {
                tmp_mod_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_mod_expr_right_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_38, 3, tmp_list_element_1);
            tmp_mod_expr_left_6 = mod_consts[75];
            tmp_mod_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_mod_expr_right_6 == NULL)) {
                tmp_mod_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_mod_expr_right_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_38, 4, tmp_list_element_1);
            tmp_mod_expr_left_7 = mod_consts[76];
            tmp_mod_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_mod_expr_right_7 == NULL)) {
                tmp_mod_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_mod_expr_right_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_38, 5, tmp_list_element_1);
            tmp_mod_expr_left_8 = mod_consts[77];
            tmp_mod_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_mod_expr_right_8 == NULL)) {
                tmp_mod_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_mod_expr_right_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_38, 6, tmp_list_element_1);
            tmp_mod_expr_left_9 = mod_consts[78];
            tmp_mod_expr_right_9 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_mod_expr_right_9 == NULL)) {
                tmp_mod_expr_right_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_mod_expr_right_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_38, 7, tmp_list_element_1);
            tmp_mod_expr_left_10 = mod_consts[79];
            tmp_mod_expr_right_10 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_mod_expr_right_10 == NULL)) {
                tmp_mod_expr_right_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_mod_expr_right_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_38, 8, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_38);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_2;
        tmp_expression_value_4 = mod_consts[81];
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[55]);
        assert(!(tmp_dircall_arg1_2 == NULL));
        tmp_dircall_arg2_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_dircall_arg2_2 == NULL)) {
            tmp_dircall_arg2_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        assert(!(tmp_dircall_arg2_2 == NULL));
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_assign_source_39 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        tmp_mod_expr_left_11 = mod_consts[83];
        tmp_add_expr_left_8 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_add_expr_left_8 == NULL)) {
            tmp_add_expr_left_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_add_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_add_expr_right_8 == NULL)) {
            tmp_add_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_add_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_add_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_7 = mod_consts[84];
        tmp_mod_expr_right_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        if (tmp_mod_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_40 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        tmp_add_expr_left_12 = mod_consts[86];
        tmp_add_expr_right_12 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_add_expr_right_12 == NULL)) {
            tmp_add_expr_right_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_add_expr_right_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        if (tmp_add_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_11 = mod_consts[87];
        tmp_add_expr_left_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        if (tmp_add_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_10 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_add_expr_right_10 == NULL)) {
            tmp_add_expr_right_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_add_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_left_10);
        if (tmp_add_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_9 = mod_consts[88];
        tmp_assign_source_41 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        tmp_add_expr_left_15 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_add_expr_left_15 == NULL)) {
            tmp_add_expr_left_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_add_expr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_15 = mod_consts[90];
        tmp_add_expr_left_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_15, tmp_add_expr_right_15);
        if (tmp_add_expr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_14 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_add_expr_right_14 == NULL)) {
            tmp_add_expr_right_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_add_expr_right_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        if (tmp_add_expr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_13 = mod_consts[91];
        tmp_assign_source_42 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_left_13);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        PyObject *tmp_add_expr_left_17;
        PyObject *tmp_add_expr_right_17;
        PyObject *tmp_add_expr_left_18;
        PyObject *tmp_add_expr_right_18;
        tmp_add_expr_left_18 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_add_expr_left_18 == NULL)) {
            tmp_add_expr_left_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_add_expr_left_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_18 = mod_consts[93];
        tmp_add_expr_left_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_18, tmp_add_expr_right_18);
        if (tmp_add_expr_left_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_17 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_add_expr_right_17 == NULL)) {
            tmp_add_expr_right_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_add_expr_right_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_17);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_17, tmp_add_expr_right_17);
        Py_DECREF(tmp_add_expr_left_17);
        if (tmp_add_expr_left_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_16 = mod_consts[91];
        tmp_assign_source_43 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_16, tmp_add_expr_right_16);
        Py_DECREF(tmp_add_expr_left_16);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        tmp_kw_call_arg_value_0_3 = mod_consts[95];
        tmp_kw_call_arg_value_1_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_kw_call_arg_value_1_2 == NULL)) {
            tmp_kw_call_arg_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_kw_call_arg_value_2_2 == NULL)) {
            tmp_kw_call_arg_value_2_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_kw_call_arg_value_2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_db20951f109591dffdc6e8333f20ffa9->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_arg_value_2_3;
        PyObject *tmp_kw_call_arg_value_3_1;
        tmp_kw_call_arg_value_0_4 = mod_consts[97];
        tmp_kw_call_arg_value_1_3 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_kw_call_arg_value_1_3 == NULL)) {
            tmp_kw_call_arg_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_kw_call_arg_value_1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_3 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_kw_call_arg_value_2_3 == NULL)) {
            tmp_kw_call_arg_value_2_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_kw_call_arg_value_2_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_3_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
            tmp_kw_call_arg_value_3_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        assert(!(tmp_kw_call_arg_value_3_1 == NULL));
        frame_db20951f109591dffdc6e8333f20ffa9->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3, tmp_kw_call_arg_value_3_1};
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS4(unicode_builtin_format, call_args);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_6__assign_source == NULL);
        tmp_assign_unpack_6__assign_source = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
        tmp_assign_source_46 = tmp_assign_unpack_6__assign_source;
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
        tmp_assign_source_47 = tmp_assign_unpack_6__assign_source;
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_47);
    }
    CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
    Py_DECREF(tmp_assign_unpack_6__assign_source);
    tmp_assign_unpack_6__assign_source = NULL;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_add_expr_left_19;
        PyObject *tmp_add_expr_right_19;
        PyObject *tmp_add_expr_left_20;
        PyObject *tmp_add_expr_right_20;
        PyObject *tmp_add_expr_left_21;
        PyObject *tmp_add_expr_right_21;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        tmp_add_expr_left_21 = mod_consts[100];
        tmp_add_expr_right_21 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_add_expr_right_21 == NULL)) {
            tmp_add_expr_right_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_add_expr_right_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_20 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_21, tmp_add_expr_right_21);
        if (tmp_add_expr_left_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_20 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_add_expr_right_20 == NULL)) {
            tmp_add_expr_right_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_add_expr_right_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_20, tmp_add_expr_right_20);
        Py_DECREF(tmp_add_expr_left_20);
        if (tmp_add_expr_left_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_12 = mod_consts[101];
        tmp_mod_expr_right_12 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_mod_expr_right_12 == NULL)) {
            tmp_mod_expr_right_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_mod_expr_right_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_19);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        if (tmp_add_expr_right_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_19);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_48 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_19, tmp_add_expr_right_19);
        Py_DECREF(tmp_add_expr_left_19);
        Py_DECREF(tmp_add_expr_right_19);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_add_expr_left_22;
        PyObject *tmp_add_expr_right_22;
        tmp_dict_key_3 = mod_consts[105];
        tmp_add_expr_left_22 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_add_expr_left_22 == NULL)) {
            tmp_add_expr_left_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_add_expr_left_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_22 = mod_consts[106];
        tmp_dict_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_22, tmp_add_expr_right_22);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_50 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_add_expr_left_23;
            PyObject *tmp_add_expr_right_23;
            PyObject *tmp_add_expr_left_24;
            PyObject *tmp_add_expr_right_24;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_5;
            tmp_res = PyDict_SetItem(tmp_assign_source_50, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[107];
            tmp_add_expr_left_23 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_add_expr_left_23 == NULL)) {
                tmp_add_expr_left_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
            }

            if (tmp_add_expr_left_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto dict_build_exception_1;
            }
            tmp_add_expr_right_23 = mod_consts[108];
            tmp_dict_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_23, tmp_add_expr_right_23);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_50, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[109];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto dict_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[110]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto dict_build_exception_1;
            }
            frame_db20951f109591dffdc6e8333f20ffa9->m_frame.f_lineno = 153;
            tmp_add_expr_left_24 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[111]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_add_expr_left_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto dict_build_exception_1;
            }
            tmp_add_expr_right_24 = mod_consts[108];
            tmp_dict_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_24, tmp_add_expr_right_24);
            Py_DECREF(tmp_add_expr_left_24);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_50, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_50);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        tmp_mod_expr_left_13 = mod_consts[115];
        tmp_mod_expr_right_13 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_mod_expr_right_13 == NULL)) {
            tmp_mod_expr_right_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_mod_expr_right_13 == NULL));
        tmp_assign_source_52 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        tmp_mod_expr_left_14 = mod_consts[117];
        tmp_mod_expr_right_14 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_mod_expr_right_14 == NULL)) {
            tmp_mod_expr_right_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_mod_expr_right_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_53 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_mod_expr_left_15;
        PyObject *tmp_mod_expr_right_15;
        tmp_mod_expr_left_15 = mod_consts[119];
        tmp_mod_expr_right_15 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_mod_expr_right_15 == NULL)) {
            tmp_mod_expr_right_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_mod_expr_right_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_54 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_mod_expr_left_16;
        PyObject *tmp_mod_expr_right_16;
        tmp_mod_expr_left_16 = mod_consts[121];
        tmp_mod_expr_right_16 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_mod_expr_right_16 == NULL)) {
            tmp_mod_expr_right_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_mod_expr_right_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_55 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_mod_expr_left_17;
        PyObject *tmp_mod_expr_right_17;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_17 = mod_consts[123];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_17, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_17, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_17, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_17, 3, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_17, 4, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_17);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_56 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
        Py_DECREF(tmp_mod_expr_right_17);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_add_expr_left_25;
        PyObject *tmp_add_expr_right_25;
        PyObject *tmp_add_expr_left_26;
        PyObject *tmp_add_expr_right_26;
        PyObject *tmp_add_expr_left_27;
        PyObject *tmp_add_expr_right_27;
        PyObject *tmp_mod_expr_left_18;
        PyObject *tmp_mod_expr_right_18;
        tmp_add_expr_left_27 = mod_consts[125];
        tmp_add_expr_right_27 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_add_expr_right_27 == NULL)) {
            tmp_add_expr_right_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_add_expr_right_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_26 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_27, tmp_add_expr_right_27);
        if (tmp_add_expr_left_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_26 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_add_expr_right_26 == NULL)) {
            tmp_add_expr_right_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_add_expr_right_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_26);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_26, tmp_add_expr_right_26);
        Py_DECREF(tmp_add_expr_left_26);
        if (tmp_add_expr_left_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_18 = mod_consts[126];
        tmp_mod_expr_right_18 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_mod_expr_right_18 == NULL)) {
            tmp_mod_expr_right_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_mod_expr_right_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_25);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_25 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
        if (tmp_add_expr_right_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_25);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_57 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_25, tmp_add_expr_right_25);
        Py_DECREF(tmp_add_expr_left_25);
        Py_DECREF(tmp_add_expr_right_25);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_7__assign_source == NULL);
        tmp_assign_unpack_7__assign_source = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(tmp_assign_unpack_7__assign_source);
        tmp_assign_source_58 = tmp_assign_unpack_7__assign_source;
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_assign_unpack_7__assign_source);
        tmp_assign_source_59 = tmp_assign_unpack_7__assign_source;
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_59);
    }
    CHECK_OBJECT(tmp_assign_unpack_7__assign_source);
    Py_DECREF(tmp_assign_unpack_7__assign_source);
    tmp_assign_unpack_7__assign_source = NULL;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_mod_expr_left_19;
        PyObject *tmp_mod_expr_right_19;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        tmp_mod_expr_left_19 = mod_consts[129];
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[49];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_19, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_19, 2, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_19, 3, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_19, 4, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_19);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_60 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
        Py_DECREF(tmp_mod_expr_right_19);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_mod_expr_left_20;
        PyObject *tmp_mod_expr_right_20;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        tmp_mod_expr_left_20 = mod_consts[129];
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[49];
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_20, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_20, 2, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_20, 3, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_20, 4, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_20);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_61 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
        Py_DECREF(tmp_mod_expr_right_20);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_61);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[132]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[133];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

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
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_63);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_65);
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_add_expr_left_28;
        PyObject *tmp_add_expr_right_28;
        tmp_add_expr_left_28 = mod_consts[140];
        tmp_add_expr_right_28 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_add_expr_right_28 == NULL)) {
            tmp_add_expr_right_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        assert(!(tmp_add_expr_right_28 == NULL));
        tmp_assign_source_66 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_28, tmp_add_expr_right_28);
        assert(!(tmp_assign_source_66 == NULL));
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_add_expr_left_29;
        PyObject *tmp_add_expr_right_29;
        PyObject *tmp_add_expr_left_30;
        PyObject *tmp_add_expr_right_30;
        PyObject *tmp_add_expr_left_31;
        PyObject *tmp_add_expr_right_31;
        PyObject *tmp_mod_expr_left_21;
        PyObject *tmp_mod_expr_right_21;
        tmp_add_expr_left_31 = mod_consts[35];
        tmp_add_expr_right_31 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_add_expr_right_31 == NULL)) {
            tmp_add_expr_right_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        assert(!(tmp_add_expr_right_31 == NULL));
        tmp_add_expr_left_30 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_31, tmp_add_expr_right_31);
        assert(!(tmp_add_expr_left_30 == NULL));
        tmp_add_expr_right_30 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_add_expr_right_30 == NULL)) {
            tmp_add_expr_right_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_add_expr_right_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_30);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_29 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_30, tmp_add_expr_right_30);
        Py_DECREF(tmp_add_expr_left_30);
        if (tmp_add_expr_left_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_21 = mod_consts[36];
        tmp_mod_expr_right_21 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_mod_expr_right_21 == NULL)) {
            tmp_mod_expr_right_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_mod_expr_right_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_29);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_29 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
        if (tmp_add_expr_right_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_29);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_67 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_29, tmp_add_expr_right_29);
        Py_DECREF(tmp_add_expr_left_29);
        Py_DECREF(tmp_add_expr_right_29);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_add_expr_left_32;
        PyObject *tmp_add_expr_right_32;
        tmp_dict_key_4 = mod_consts[143];
        tmp_add_expr_left_32 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_add_expr_left_32 == NULL)) {
            tmp_add_expr_left_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        assert(!(tmp_add_expr_left_32 == NULL));
        tmp_add_expr_right_32 = mod_consts[106];
        tmp_dict_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_32, tmp_add_expr_right_32);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_68 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_add_expr_left_33;
            PyObject *tmp_add_expr_right_33;
            PyObject *tmp_add_expr_left_34;
            PyObject *tmp_add_expr_right_34;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_9;
            tmp_res = PyDict_SetItem(tmp_assign_source_68, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[144];
            tmp_add_expr_left_33 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[142]);

            if (unlikely(tmp_add_expr_left_33 == NULL)) {
                tmp_add_expr_left_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
            }

            if (tmp_add_expr_left_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_2;
            }
            tmp_add_expr_right_33 = mod_consts[108];
            tmp_dict_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_33, tmp_add_expr_right_33);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_68, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[145];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[142]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_2;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[110]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_2;
            }
            frame_db20951f109591dffdc6e8333f20ffa9->m_frame.f_lineno = 225;
            tmp_add_expr_left_34 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[111]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_add_expr_left_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_2;
            }
            tmp_add_expr_right_34 = mod_consts[108];
            tmp_dict_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_34, tmp_add_expr_right_34);
            Py_DECREF(tmp_add_expr_left_34);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_68, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_68);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_mod_expr_left_22;
        PyObject *tmp_mod_expr_right_22;
        tmp_mod_expr_left_22 = mod_consts[147];
        tmp_mod_expr_right_22 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_mod_expr_right_22 == NULL)) {
            tmp_mod_expr_right_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        assert(!(tmp_mod_expr_right_22 == NULL));
        tmp_assign_source_69 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_mod_expr_left_23;
        PyObject *tmp_mod_expr_right_23;
        tmp_mod_expr_left_23 = mod_consts[149];
        tmp_mod_expr_right_23 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_mod_expr_right_23 == NULL)) {
            tmp_mod_expr_right_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_mod_expr_right_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_70 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_23, tmp_mod_expr_right_23);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_mod_expr_left_24;
        PyObject *tmp_mod_expr_right_24;
        tmp_mod_expr_left_24 = mod_consts[151];
        tmp_mod_expr_right_24 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_mod_expr_right_24 == NULL)) {
            tmp_mod_expr_right_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_mod_expr_right_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_71 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_24, tmp_mod_expr_right_24);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_mod_expr_left_25;
        PyObject *tmp_mod_expr_right_25;
        tmp_mod_expr_left_25 = mod_consts[153];
        tmp_mod_expr_right_25 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_mod_expr_right_25 == NULL)) {
            tmp_mod_expr_right_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_mod_expr_right_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_72 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_25, tmp_mod_expr_right_25);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_mod_expr_left_26;
        PyObject *tmp_mod_expr_right_26;
        PyObject *tmp_tuple_element_4;
        tmp_mod_expr_left_26 = mod_consts[155];
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        assert(!(tmp_tuple_element_4 == NULL));
        tmp_mod_expr_right_26 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_26, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_26, 1, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_26, 2, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_26, 3, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_26, 4, tmp_tuple_element_4);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_26);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_73 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_26, tmp_mod_expr_right_26);
        Py_DECREF(tmp_mod_expr_right_26);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_kw_call_arg_value_2_4;
        PyObject *tmp_add_expr_left_35;
        PyObject *tmp_add_expr_right_35;
        tmp_kw_call_arg_value_0_5 = mod_consts[157];
        tmp_kw_call_arg_value_1_4 = mod_consts[58];
        tmp_add_expr_left_35 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_add_expr_left_35 == NULL)) {
            tmp_add_expr_left_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_add_expr_left_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_35 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_add_expr_right_35 == NULL)) {
            tmp_add_expr_right_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_add_expr_right_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_35, tmp_add_expr_right_35);
        if (tmp_kw_call_arg_value_2_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        frame_db20951f109591dffdc6e8333f20ffa9->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_4};
            tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_4);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_8__assign_source == NULL);
        tmp_assign_unpack_8__assign_source = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
        tmp_assign_source_75 = tmp_assign_unpack_8__assign_source;
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
        tmp_assign_source_76 = tmp_assign_unpack_8__assign_source;
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_76);
    }
    CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
    Py_DECREF(tmp_assign_unpack_8__assign_source);
    tmp_assign_unpack_8__assign_source = NULL;
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_kw_call_arg_value_2_5;
        PyObject *tmp_kw_call_arg_value_3_2;
        tmp_kw_call_arg_value_0_6 = mod_consts[97];
        tmp_kw_call_arg_value_1_5 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_kw_call_arg_value_1_5 == NULL)) {
            tmp_kw_call_arg_value_1_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_kw_call_arg_value_1_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_5 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_kw_call_arg_value_2_5 == NULL)) {
            tmp_kw_call_arg_value_2_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_kw_call_arg_value_2_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_3_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_kw_call_arg_value_3_2 == NULL)) {
            tmp_kw_call_arg_value_3_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_kw_call_arg_value_3_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        frame_db20951f109591dffdc6e8333f20ffa9->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_5, tmp_kw_call_arg_value_2_5, tmp_kw_call_arg_value_3_2};
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS4(unicode_builtin_format, call_args);
        }

        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_9__assign_source == NULL);
        tmp_assign_unpack_9__assign_source = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        CHECK_OBJECT(tmp_assign_unpack_9__assign_source);
        tmp_assign_source_78 = tmp_assign_unpack_9__assign_source;
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        CHECK_OBJECT(tmp_assign_unpack_9__assign_source);
        tmp_assign_source_79 = tmp_assign_unpack_9__assign_source;
        UPDATE_STRING_DICT0(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_79);
    }
    CHECK_OBJECT(tmp_assign_unpack_9__assign_source);
    Py_DECREF(tmp_assign_unpack_9__assign_source);
    tmp_assign_unpack_9__assign_source = NULL;
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_add_expr_left_36;
        PyObject *tmp_add_expr_right_36;
        PyObject *tmp_add_expr_left_37;
        PyObject *tmp_add_expr_right_37;
        PyObject *tmp_add_expr_left_38;
        PyObject *tmp_add_expr_right_38;
        PyObject *tmp_mod_expr_left_27;
        PyObject *tmp_mod_expr_right_27;
        tmp_add_expr_left_38 = mod_consts[162];
        tmp_add_expr_right_38 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_add_expr_right_38 == NULL)) {
            tmp_add_expr_right_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_add_expr_right_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_37 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_38, tmp_add_expr_right_38);
        if (tmp_add_expr_left_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_37 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_add_expr_right_37 == NULL)) {
            tmp_add_expr_right_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_add_expr_right_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_37);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_37, tmp_add_expr_right_37);
        Py_DECREF(tmp_add_expr_left_37);
        if (tmp_add_expr_left_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_27 = mod_consts[101];
        tmp_mod_expr_right_27 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_mod_expr_right_27 == NULL)) {
            tmp_mod_expr_right_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_mod_expr_right_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_36);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_36 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_27, tmp_mod_expr_right_27);
        if (tmp_add_expr_right_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_36);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_80 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_36, tmp_add_expr_right_36);
        Py_DECREF(tmp_add_expr_left_36);
        Py_DECREF(tmp_add_expr_right_36);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_add_expr_left_39;
        PyObject *tmp_add_expr_right_39;
        PyObject *tmp_add_expr_left_40;
        PyObject *tmp_add_expr_right_40;
        PyObject *tmp_add_expr_left_41;
        PyObject *tmp_add_expr_right_41;
        PyObject *tmp_mod_expr_left_28;
        PyObject *tmp_mod_expr_right_28;
        tmp_add_expr_left_41 = mod_consts[164];
        tmp_add_expr_right_41 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_add_expr_right_41 == NULL)) {
            tmp_add_expr_right_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_add_expr_right_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_40 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_41, tmp_add_expr_right_41);
        if (tmp_add_expr_left_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_40 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_add_expr_right_40 == NULL)) {
            tmp_add_expr_right_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_add_expr_right_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_40);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_39 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_40, tmp_add_expr_right_40);
        Py_DECREF(tmp_add_expr_left_40);
        if (tmp_add_expr_left_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_28 = mod_consts[126];
        tmp_mod_expr_right_28 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_mod_expr_right_28 == NULL)) {
            tmp_mod_expr_right_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_mod_expr_right_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_39);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_39 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_28, tmp_mod_expr_right_28);
        if (tmp_add_expr_right_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_39);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_81 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_39, tmp_add_expr_right_39);
        Py_DECREF(tmp_add_expr_left_39);
        Py_DECREF(tmp_add_expr_right_39);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_add_expr_left_42;
        PyObject *tmp_add_expr_right_42;
        PyObject *tmp_add_expr_left_43;
        PyObject *tmp_add_expr_right_43;
        PyObject *tmp_add_expr_left_44;
        PyObject *tmp_add_expr_right_44;
        PyObject *tmp_add_expr_left_45;
        PyObject *tmp_add_expr_right_45;
        PyObject *tmp_mod_expr_left_29;
        PyObject *tmp_mod_expr_right_29;
        tmp_add_expr_left_45 = mod_consts[164];
        tmp_add_expr_right_45 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_add_expr_right_45 == NULL)) {
            tmp_add_expr_right_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_add_expr_right_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_44 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_45, tmp_add_expr_right_45);
        if (tmp_add_expr_left_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_44 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_add_expr_right_44 == NULL)) {
            tmp_add_expr_right_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_add_expr_right_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_44);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_43 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_44, tmp_add_expr_right_44);
        Py_DECREF(tmp_add_expr_left_44);
        if (tmp_add_expr_left_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_43 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_add_expr_right_43 == NULL)) {
            tmp_add_expr_right_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_add_expr_right_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_43);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_42 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_43, tmp_add_expr_right_43);
        Py_DECREF(tmp_add_expr_left_43);
        if (tmp_add_expr_left_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_29 = mod_consts[126];
        tmp_mod_expr_right_29 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_mod_expr_right_29 == NULL)) {
            tmp_mod_expr_right_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_mod_expr_right_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_42);

            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_42 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_29, tmp_mod_expr_right_29);
        if (tmp_add_expr_right_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_42);

            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_82 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_42, tmp_add_expr_right_42);
        Py_DECREF(tmp_add_expr_left_42);
        Py_DECREF(tmp_add_expr_right_42);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_mod_expr_left_30;
        PyObject *tmp_mod_expr_right_30;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        tmp_mod_expr_left_30 = mod_consts[129];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[49];
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_3);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_30 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM(tmp_mod_expr_right_30, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_30, 1, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_30, 2, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_30, 3, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_30, 4, tmp_tuple_element_5);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_30);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assign_source_83 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_30, tmp_mod_expr_right_30);
        Py_DECREF(tmp_mod_expr_right_30);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_mod_expr_left_31;
        PyObject *tmp_mod_expr_right_31;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_4;
        tmp_mod_expr_left_31 = mod_consts[129];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[49];
        tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_4);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_31 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM(tmp_mod_expr_right_31, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_31, 1, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_31, 2, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_31, 3, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_mod_expr_right_31, 4, tmp_tuple_element_6);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_31);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_assign_source_84 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_31, tmp_mod_expr_right_31);
        Py_DECREF(tmp_mod_expr_right_31);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_84);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_db20951f109591dffdc6e8333f20ffa9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db20951f109591dffdc6e8333f20ffa9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db20951f109591dffdc6e8333f20ffa9, exception_lineno);
    }



    assertFrameObject(frame_db20951f109591dffdc6e8333f20ffa9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("rfc3986.abnf_regexp", false);

    Py_INCREF(module_rfc3986$abnf_regexp);
    return module_rfc3986$abnf_regexp;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$abnf_regexp, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("rfc3986$abnf_regexp", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
