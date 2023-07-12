/* Generated code for Python module 'flet_core.painting'
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

/* The "module_flet_core$painting" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$painting;
PyDictObject *moduledict_flet_core$painting;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[101];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[101];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.painting"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 101; i++) {
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
void checkModuleConstants_flet_core$painting(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 101; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d2b1b8854d64c703198ef1fb992f7cdd;
static PyCodeObject *codeobj_356ab80e55be3449d5a63810f63c3fdd;
static PyCodeObject *codeobj_61077975300b541d57502c3a6867f17a;
static PyCodeObject *codeobj_ec8d0e623da9c999fa9eda47f2b4ee65;
static PyCodeObject *codeobj_6a859c9262df3fb1311c20b3927eeae9;
static PyCodeObject *codeobj_61dbb5e93c354d617349e6cde5a571a0;
static PyCodeObject *codeobj_3949ccb890b0d3d2b650f61c7d74e5e2;
static PyCodeObject *codeobj_12b3ca76f90780c93532ac066f94957a;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[1]; CHECK_OBJECT(module_filename_obj);
    codeobj_d2b1b8854d64c703198ef1fb992f7cdd = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[98], mod_consts[98], NULL, NULL, 0, 0, 0);
    codeobj_356ab80e55be3449d5a63810f63c3fdd = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[99], NULL, 0, 0, 0);
    codeobj_61077975300b541d57502c3a6867f17a = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[99], NULL, 0, 0, 0);
    codeobj_ec8d0e623da9c999fa9eda47f2b4ee65 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[99], NULL, 0, 0, 0);
    codeobj_6a859c9262df3fb1311c20b3927eeae9 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[99], NULL, 0, 0, 0);
    codeobj_61dbb5e93c354d617349e6cde5a571a0 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[99], NULL, 0, 0, 0);
    codeobj_3949ccb890b0d3d2b650f61c7d74e5e2 = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[99], NULL, 0, 0, 0);
    codeobj_12b3ca76f90780c93532ac066f94957a = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[99], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


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

function_impl_code functable_flet_core$painting[] = {

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

    function_impl_code *current = functable_flet_core$painting;
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

    if (offset > sizeof(functable_flet_core$painting) || offset < 0) {
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
        functable_flet_core$painting[offset],
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
        module_flet_core$painting,
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
PyObject *modulecode_flet_core$painting(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.painting");

    // Store the module for future use.
    module_flet_core$painting = module;

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
        PRINT_STRING("flet_core.painting: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.painting: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.painting: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$painting\n");

    moduledict_flet_core$painting = MODULE_DICT(module_flet_core$painting);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$painting,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$painting,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[100]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$painting,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$painting,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$painting,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$painting);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$painting, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$painting, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$painting, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$painting);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
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
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_d2b1b8854d64c703198ef1fb992f7cdd;
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
    PyObject *locals_flet_core$painting$$$class__1_StrokeCap_11 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_3949ccb890b0d3d2b650f61c7d74e5e2_2;
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
    PyObject *locals_flet_core$painting$$$class__2_StrokeJoin_17 = NULL;
    struct Nuitka_FrameObject *frame_12b3ca76f90780c93532ac066f94957a_3;
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
    PyObject *locals_flet_core$painting$$$class__3_PaintingStyle_23 = NULL;
    struct Nuitka_FrameObject *frame_61dbb5e93c354d617349e6cde5a571a0_4;
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
    PyObject *locals_flet_core$painting$$$class__4_PaintGradient_29 = NULL;
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
    PyObject *locals_flet_core$painting$$$class__5_PaintLinearGradient_34 = NULL;
    struct Nuitka_FrameObject *frame_61077975300b541d57502c3a6867f17a_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_flet_core$painting$$$class__6_PaintRadialGradient_44 = NULL;
    struct Nuitka_FrameObject *frame_ec8d0e623da9c999fa9eda47f2b4ee65_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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
    PyObject *locals_flet_core$painting$$$class__7_PaintSweepGradient_56 = NULL;
    struct Nuitka_FrameObject *frame_6a859c9262df3fb1311c20b3927eeae9_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
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
    PyObject *locals_flet_core$painting$$$class__8_Paint_67 = NULL;
    struct Nuitka_FrameObject *frame_356ab80e55be3449d5a63810f63c3fdd_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_d2b1b8854d64c703198ef1fb992f7cdd = MAKE_MODULE_FRAME(codeobj_d2b1b8854d64c703198ef1fb992f7cdd, module_flet_core$painting);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d2b1b8854d64c703198ef1fb992f7cdd);
    assert(Py_REFCNT(frame_d2b1b8854d64c703198ef1fb992f7cdd) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[1];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[7];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$painting;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[8];
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[9];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$painting;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[8];
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[10];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$painting;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[11];
        tmp_level_value_3 = mod_consts[8];
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet_core$painting,
                mod_consts[12],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$painting,
                mod_consts[13],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[13]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$painting,
                mod_consts[14],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[14]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$painting,
                mod_consts[15],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[15]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$painting,
                mod_consts[16],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[16]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_11);
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[17];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$painting;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[18];
        tmp_level_value_4 = mod_consts[8];
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$painting,
                mod_consts[19],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[20];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$painting;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[21];
        tmp_level_value_5 = mod_consts[8];
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 7;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$painting,
                mod_consts[22],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[23];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$painting;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[24];
        tmp_level_value_6 = mod_consts[8];
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 8;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$painting,
                mod_consts[25],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[25]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$painting,
                mod_consts[26],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[26]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_16);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        tmp_assign_source_17 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_17, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_18 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
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


            exception_lineno = 11;

            goto try_except_handler_3;
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
        tmp_subscript_value_1 = mod_consts[8];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_20 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[27]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[27]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[28];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 11;
        tmp_assign_source_21 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[29]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
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
        tmp_mod_expr_left_1 = mod_consts[30];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[31];
        tmp_getattr_default_1 = mod_consts[32];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[31]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 11;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$painting$$$class__1_StrokeCap_11 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__1_StrokeCap_11, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__1_StrokeCap_11, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_5;
        }
        frame_3949ccb890b0d3d2b650f61c7d74e5e2_2 = MAKE_CLASS_FRAME(codeobj_3949ccb890b0d3d2b650f61c7d74e5e2, module_flet_core$painting, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3949ccb890b0d3d2b650f61c7d74e5e2_2);
        assert(Py_REFCNT(frame_3949ccb890b0d3d2b650f61c7d74e5e2_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__1_StrokeCap_11, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__1_StrokeCap_11, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__1_StrokeCap_11, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3949ccb890b0d3d2b650f61c7d74e5e2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3949ccb890b0d3d2b650f61c7d74e5e2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3949ccb890b0d3d2b650f61c7d74e5e2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3949ccb890b0d3d2b650f61c7d74e5e2_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_3949ccb890b0d3d2b650f61c7d74e5e2_2);

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


                exception_lineno = 11;

                goto try_except_handler_5;
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
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__1_StrokeCap_11, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[28];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flet_core$painting$$$class__1_StrokeCap_11;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 11;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_23 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_flet_core$painting$$$class__1_StrokeCap_11);
        locals_flet_core$painting$$$class__1_StrokeCap_11 = NULL;
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

        Py_DECREF(locals_flet_core$painting$$$class__1_StrokeCap_11);
        locals_flet_core$painting$$$class__1_StrokeCap_11 = NULL;
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
        exception_lineno = 11;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_23);
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_26 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[8];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_28;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[27]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[27]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        tmp_tuple_element_6 = mod_consts[43];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 17;
        tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[29]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
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
        tmp_mod_expr_left_2 = mod_consts[30];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[31];
        tmp_getattr_default_2 = mod_consts[32];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[31]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 17;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_30;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$painting$$$class__2_StrokeJoin_17 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__2_StrokeJoin_17, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__2_StrokeJoin_17, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_8;
        }
        frame_12b3ca76f90780c93532ac066f94957a_3 = MAKE_CLASS_FRAME(codeobj_12b3ca76f90780c93532ac066f94957a, module_flet_core$painting, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_12b3ca76f90780c93532ac066f94957a_3);
        assert(Py_REFCNT(frame_12b3ca76f90780c93532ac066f94957a_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__2_StrokeJoin_17, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__2_StrokeJoin_17, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[46];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__2_StrokeJoin_17, mod_consts[47], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_12b3ca76f90780c93532ac066f94957a_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_12b3ca76f90780c93532ac066f94957a_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_12b3ca76f90780c93532ac066f94957a_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_12b3ca76f90780c93532ac066f94957a_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_12b3ca76f90780c93532ac066f94957a_3);

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


                exception_lineno = 17;

                goto try_except_handler_8;
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
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__2_StrokeJoin_17, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_8;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[43];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_flet_core$painting$$$class__2_StrokeJoin_17;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 17;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_31 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_flet_core$painting$$$class__2_StrokeJoin_17);
        locals_flet_core$painting$$$class__2_StrokeJoin_17 = NULL;
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

        Py_DECREF(locals_flet_core$painting$$$class__2_StrokeJoin_17);
        locals_flet_core$painting$$$class__2_StrokeJoin_17 = NULL;
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
        exception_lineno = 17;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_31);
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
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_34 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_11 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[8];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_36 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[27]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[27]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        tmp_tuple_element_10 = mod_consts[48];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 23;
        tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[29]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
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
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[30];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[31];
        tmp_getattr_default_3 = mod_consts[32];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[31]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_38;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_flet_core$painting$$$class__3_PaintingStyle_23 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__3_PaintingStyle_23, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[48];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__3_PaintingStyle_23, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        frame_61dbb5e93c354d617349e6cde5a571a0_4 = MAKE_CLASS_FRAME(codeobj_61dbb5e93c354d617349e6cde5a571a0, module_flet_core$painting, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_61dbb5e93c354d617349e6cde5a571a0_4);
        assert(Py_REFCNT(frame_61dbb5e93c354d617349e6cde5a571a0_4) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__3_PaintingStyle_23, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__3_PaintingStyle_23, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_61dbb5e93c354d617349e6cde5a571a0_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_61dbb5e93c354d617349e6cde5a571a0_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_61dbb5e93c354d617349e6cde5a571a0_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_61dbb5e93c354d617349e6cde5a571a0_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_61dbb5e93c354d617349e6cde5a571a0_4);

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
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__3_PaintingStyle_23, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[48];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_flet_core$painting$$$class__3_PaintingStyle_23;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 23;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_39 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_flet_core$painting$$$class__3_PaintingStyle_23);
        locals_flet_core$painting$$$class__3_PaintingStyle_23 = NULL;
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

        Py_DECREF(locals_flet_core$painting$$$class__3_PaintingStyle_23);
        locals_flet_core$painting$$$class__3_PaintingStyle_23 = NULL;
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
        exception_lineno = 23;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_39);
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
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_42;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_12;
        }
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_flet_core$painting$$$class__4_PaintGradient_29 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__4_PaintGradient_29, mod_consts[34], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__4_PaintGradient_29, mod_consts[35], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_7;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_13 = mod_consts[54];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[55];
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_flet_core$painting$$$class__4_PaintGradient_29;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
            frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 29;
            tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_args_element_value_1 = outline_3_var___class__;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_flet_core$painting$$$class__4_PaintGradient_29);
        locals_flet_core$painting$$$class__4_PaintGradient_29 = NULL;
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

        Py_DECREF(locals_flet_core$painting$$$class__4_PaintGradient_29);
        locals_flet_core$painting$$$class__4_PaintGradient_29 = NULL;
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
        exception_lineno = 29;
        goto try_except_handler_12;
        outline_result_4:;
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 28;
        tmp_assign_source_43 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[53], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_43);
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
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_14;
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_tuple_element_14 == NULL));
        tmp_assign_source_45 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_14);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_45;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_46 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_15;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_16 = tmp_class_creation_5__bases;
        tmp_subscript_value_4 = mod_consts[8];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_15;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_15;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_4 = tmp_class_creation_5__bases;
        tmp_assign_source_48 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_48;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_17 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[27]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_8;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_kwargs_value_8;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_18 = tmp_class_creation_5__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[27]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_15;
        }
        tmp_tuple_element_15 = mod_consts[56];
        tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_15 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_8 = tmp_class_creation_5__class_decl_dict;
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 34;
        tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_8);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_19 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[29]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_15;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
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
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[30];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_4 = mod_consts[31];
        tmp_getattr_default_4 = mod_consts[32];
        tmp_tuple_element_16 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_15;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_8 = tmp_class_creation_5__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[31]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 34;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_50;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_15;
        }
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_flet_core$painting$$$class__5_PaintLinearGradient_34 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[56];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_17;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_17;
        }
        frame_61077975300b541d57502c3a6867f17a_5 = MAKE_CLASS_FRAME(codeobj_61077975300b541d57502c3a6867f17a, module_flet_core$painting, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_61077975300b541d57502c3a6867f17a_5);
        assert(Py_REFCNT(frame_61077975300b541d57502c3a6867f17a_5) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[26]);

            if (tmp_ass_subvalue_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_ass_subvalue_1 == NULL)) {
                        tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_ass_subvalue_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_ass_subvalue_1);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_ass_subscribed_1 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_1 = mod_consts[58];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[26]);

            if (tmp_ass_subvalue_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_ass_subvalue_2 == NULL)) {
                        tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_ass_subvalue_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 36;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_ass_subvalue_2);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_ass_subscribed_2 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_2 = mod_consts[59];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[13]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 37;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[60]);

            if (tmp_subscript_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_5);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_ass_subvalue_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_3 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_3 = mod_consts[61];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_22;
            tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[7]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[62]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_61077975300b541d57502c3a6867f17a_5->m_frame.f_lineno = 38;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[14]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[13]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_23);

                        exception_lineno = 38;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[66]);

            if (tmp_subscript_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_7 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_subscript_value_7);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_subscript_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_24);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_23);

                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_23);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_ass_subvalue_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_4 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_4);

                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_4 = mod_consts[65];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subscribed_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_expression_value_26;
            tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[7]);

            if (tmp_expression_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_25);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[62]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[22]);

            if (tmp_expression_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[22]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                    }

                    if (tmp_expression_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_26);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[67]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_kw_call_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_61077975300b541d57502c3a6867f17a_5->m_frame.f_lineno = 39;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, kw_values, mod_consts[64]);
            }

            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_value_0_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_ass_subvalue_5 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[22]);

            if (tmp_ass_subvalue_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[22]);

                    if (unlikely(tmp_ass_subvalue_5 == NULL)) {
                        tmp_ass_subvalue_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                    }

                    if (tmp_ass_subvalue_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_ass_subvalue_5);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_ass_subscribed_5 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_5);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_5);

                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_5 = mod_consts[68];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            Py_DECREF(tmp_ass_subscribed_5);
            Py_DECREF(tmp_ass_subvalue_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_27;
            tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[7]);

            if (tmp_expression_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 40;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_27);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[62]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_61077975300b541d57502c3a6867f17a_5->m_frame.f_lineno = 40;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[69], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[70], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[60]);

            if (tmp_ass_subvalue_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_ass_subvalue_6);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_ass_subscribed_6 = PyObject_GetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_6);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_6);

                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_6 = mod_consts[70];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            Py_DECREF(tmp_ass_subscribed_6);
            Py_DECREF(tmp_ass_subvalue_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_61077975300b541d57502c3a6867f17a_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_61077975300b541d57502c3a6867f17a_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_61077975300b541d57502c3a6867f17a_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_61077975300b541d57502c3a6867f17a_5,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_61077975300b541d57502c3a6867f17a_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_17;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__5_PaintLinearGradient_34, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_17;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_12 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_17 = mod_consts[56];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_17 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = locals_flet_core$painting$$$class__5_PaintLinearGradient_34;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
            frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 34;
            tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_17;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_args_element_value_2 = outline_4_var___class__;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_flet_core$painting$$$class__5_PaintLinearGradient_34);
        locals_flet_core$painting$$$class__5_PaintLinearGradient_34 = NULL;
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

        Py_DECREF(locals_flet_core$painting$$$class__5_PaintLinearGradient_34);
        locals_flet_core$painting$$$class__5_PaintLinearGradient_34 = NULL;
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
        exception_lineno = 34;
        goto try_except_handler_15;
        outline_result_5:;
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 33;
        tmp_assign_source_51 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[53], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_51);
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

    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
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
        PyObject *tmp_assign_source_53;
        PyObject *tmp_tuple_element_18;
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        tmp_assign_source_53 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_53, 0, tmp_tuple_element_18);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_54 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_28 = tmp_class_creation_6__bases;
        tmp_subscript_value_8 = mod_consts[8];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_28, tmp_subscript_value_8, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_5 = tmp_class_creation_6__bases;
        tmp_assign_source_56 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_56;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_29 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[27]);
        tmp_condition_result_18 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_value_10;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kwargs_value_10;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_30 = tmp_class_creation_6__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[27]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        tmp_tuple_element_19 = mod_consts[71];
        tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_19 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_10 = tmp_class_creation_6__class_decl_dict;
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 44;
        tmp_assign_source_57 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_10, tmp_kwargs_value_10);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_10);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_31 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_31, mod_consts[29]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
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
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[30];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_5 = mod_consts[31];
        tmp_getattr_default_5 = mod_consts[32];
        tmp_tuple_element_20 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_10 = tmp_class_creation_6__prepared;
            tmp_expression_value_32 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_32 == NULL));
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[31]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_18;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 44;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_18;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_58;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_18;
        }
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_flet_core$painting$$$class__6_PaintRadialGradient_44 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_20;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_20;
        }
        frame_ec8d0e623da9c999fa9eda47f2b4ee65_6 = MAKE_CLASS_FRAME(codeobj_ec8d0e623da9c999fa9eda47f2b4ee65, module_flet_core$painting, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ec8d0e623da9c999fa9eda47f2b4ee65_6);
        assert(Py_REFCNT(frame_ec8d0e623da9c999fa9eda47f2b4ee65_6) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[26]);

            if (tmp_ass_subvalue_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_ass_subvalue_7 == NULL)) {
                        tmp_ass_subvalue_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_ass_subvalue_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 45;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_ass_subvalue_7);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_ass_subscribed_7 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_7);

                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_7 = mod_consts[72];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            Py_DECREF(tmp_ass_subscribed_7);
            Py_DECREF(tmp_ass_subvalue_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[16]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_tuple_element_21 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[66]);

            if (tmp_tuple_element_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_21 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_tuple_element_21);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_9, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[73]);

            if (tmp_tuple_element_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_21 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_tuple_element_21);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_21);
            tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_33);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_ass_subvalue_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_8 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_8);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_8);

                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_8 = mod_consts[74];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            Py_DECREF(tmp_ass_subscribed_8);
            Py_DECREF(tmp_ass_subvalue_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[13]);

            if (tmp_expression_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_34 == NULL)) {
                        tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_34);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[60]);

            if (tmp_subscript_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_10);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_34);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_ass_subvalue_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_9 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_9);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_9);

                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_9 = mod_consts[61];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
            Py_DECREF(tmp_ass_subscribed_9);
            Py_DECREF(tmp_ass_subvalue_9);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_35;
            tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[7]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[62]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_ec8d0e623da9c999fa9eda47f2b4ee65_6->m_frame.f_lineno = 48;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[14]);

            if (tmp_expression_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_36);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[13]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_36);

                        exception_lineno = 48;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[66]);

            if (tmp_subscript_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_12 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_subscript_value_12);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_subscript_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_36);

                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_36);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_ass_subvalue_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_10 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_10);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_10);

                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_10 = mod_consts[65];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
            Py_DECREF(tmp_ass_subscribed_10);
            Py_DECREF(tmp_ass_subvalue_10);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_expression_value_39;
            tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[7]);

            if (tmp_expression_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_38);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[62]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[22]);

            if (tmp_expression_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[22]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 49;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_39);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[67]);
            Py_DECREF(tmp_expression_value_39);
            if (tmp_kw_call_value_0_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_ec8d0e623da9c999fa9eda47f2b4ee65_6->m_frame.f_lineno = 49;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, kw_values, mod_consts[64]);
            }

            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_kw_call_value_0_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_11;
            PyObject *tmp_ass_subscribed_11;
            PyObject *tmp_ass_subscript_11;
            tmp_ass_subvalue_11 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[22]);

            if (tmp_ass_subvalue_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[22]);

                    if (unlikely(tmp_ass_subvalue_11 == NULL)) {
                        tmp_ass_subvalue_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                    }

                    if (tmp_ass_subvalue_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_ass_subvalue_11);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_ass_subscribed_11 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_11);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_11);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_11 = mod_consts[68];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
            Py_DECREF(tmp_ass_subscribed_11);
            Py_DECREF(tmp_ass_subvalue_11);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_40;
            tmp_expression_value_40 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[7]);

            if (tmp_expression_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_40 == NULL)) {
                        tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 50;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_40);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[62]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_ec8d0e623da9c999fa9eda47f2b4ee65_6->m_frame.f_lineno = 50;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_12;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_ass_subscribed_12;
            PyObject *tmp_ass_subscript_12;
            tmp_expression_value_41 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[14]);

            if (tmp_expression_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 50;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_41);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[26]);

            if (tmp_subscript_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_subscript_value_13 == NULL)) {
                        tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_subscript_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_41);

                        exception_lineno = 50;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_subscript_value_13);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_ass_subvalue_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_41);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_ass_subvalue_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_12 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_12);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_12);

                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_12 = mod_consts[75];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
            Py_DECREF(tmp_ass_subscribed_12);
            Py_DECREF(tmp_ass_subvalue_12);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_42;
            tmp_expression_value_42 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[7]);

            if (tmp_expression_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_42 == NULL)) {
                        tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 51;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_42);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[62]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_ec8d0e623da9c999fa9eda47f2b4ee65_6->m_frame.f_lineno = 51;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[76], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_13;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_ass_subscribed_13;
            PyObject *tmp_ass_subscript_13;
            tmp_expression_value_43 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[16]);

            if (tmp_expression_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_expression_value_43 == NULL)) {
                        tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_expression_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 51;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_43);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_tuple_element_22 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[66]);

            if (tmp_tuple_element_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_22 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_tuple_element_22);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_14, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[73]);

            if (tmp_tuple_element_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_22 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_tuple_element_22);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_22);
            tmp_ass_subvalue_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_43);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_ass_subvalue_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_13 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_13);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_13);

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_13 = mod_consts[77];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
            Py_DECREF(tmp_ass_subscribed_13);
            Py_DECREF(tmp_ass_subvalue_13);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_44;
            tmp_expression_value_44 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[7]);

            if (tmp_expression_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_44 == NULL)) {
                        tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_44);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[62]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_ec8d0e623da9c999fa9eda47f2b4ee65_6->m_frame.f_lineno = 52;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[78], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[70], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_14;
            PyObject *tmp_ass_subscribed_14;
            PyObject *tmp_ass_subscript_14;
            tmp_ass_subvalue_14 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[60]);

            if (tmp_ass_subvalue_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_14 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_ass_subvalue_14);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_ass_subscribed_14 = PyObject_GetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_14);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_14);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_14 = mod_consts[70];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
            Py_DECREF(tmp_ass_subscribed_14);
            Py_DECREF(tmp_ass_subvalue_14);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ec8d0e623da9c999fa9eda47f2b4ee65_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ec8d0e623da9c999fa9eda47f2b4ee65_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ec8d0e623da9c999fa9eda47f2b4ee65_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ec8d0e623da9c999fa9eda47f2b4ee65_6,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_ec8d0e623da9c999fa9eda47f2b4ee65_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_20;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto try_except_handler_20;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__6_PaintRadialGradient_44, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_20;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_19 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_23 = mod_consts[71];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_23 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_flet_core$painting$$$class__6_PaintRadialGradient_44;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
            frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 44;
            tmp_assign_source_60 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto try_except_handler_20;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_args_element_value_3 = outline_5_var___class__;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_flet_core$painting$$$class__6_PaintRadialGradient_44);
        locals_flet_core$painting$$$class__6_PaintRadialGradient_44 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$painting$$$class__6_PaintRadialGradient_44);
        locals_flet_core$painting$$$class__6_PaintRadialGradient_44 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 44;
        goto try_except_handler_18;
        outline_result_6:;
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 43;
        tmp_assign_source_59 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[53], tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_59);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
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
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
        PyObject *tmp_assign_source_61;
        PyObject *tmp_tuple_element_24;
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_21;
        }
        tmp_assign_source_61 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_61, 0, tmp_tuple_element_24);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_62 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_21;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_45 = tmp_class_creation_7__bases;
        tmp_subscript_value_15 = mod_consts[8];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_45, tmp_subscript_value_15, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_21;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_21;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_6 = tmp_class_creation_7__bases;
        tmp_assign_source_64 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_64;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_46 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_46, mod_consts[27]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_value_12;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_kwargs_value_12;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_47 = tmp_class_creation_7__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[27]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_21;
        }
        tmp_tuple_element_25 = mod_consts[79];
        tmp_args_value_12 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_25 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_12 = tmp_class_creation_7__class_decl_dict;
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 56;
        tmp_assign_source_65 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_12, tmp_kwargs_value_12);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_12);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_48 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_48, mod_consts[29]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_21;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
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
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[30];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_6 = mod_consts[31];
        tmp_getattr_default_6 = mod_consts[32];
        tmp_tuple_element_26 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_21;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_49;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_12 = tmp_class_creation_7__prepared;
            tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_49 == NULL));
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[31]);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_21;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 56;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_21;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_66;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_21;
        }
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_flet_core$painting$$$class__7_PaintSweepGradient_56 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_23;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_23;
        }
        frame_6a859c9262df3fb1311c20b3927eeae9_7 = MAKE_CLASS_FRAME(codeobj_6a859c9262df3fb1311c20b3927eeae9, module_flet_core$painting, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6a859c9262df3fb1311c20b3927eeae9_7);
        assert(Py_REFCNT(frame_6a859c9262df3fb1311c20b3927eeae9_7) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_15;
            PyObject *tmp_ass_subscribed_15;
            PyObject *tmp_ass_subscript_15;
            tmp_ass_subvalue_15 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[26]);

            if (tmp_ass_subvalue_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_ass_subvalue_15 == NULL)) {
                        tmp_ass_subvalue_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_ass_subvalue_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 57;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_ass_subvalue_15);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_ass_subscribed_15 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_15);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_15);

                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_15 = mod_consts[72];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
            Py_DECREF(tmp_ass_subscribed_15);
            Py_DECREF(tmp_ass_subvalue_15);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_16;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_ass_subscribed_16;
            PyObject *tmp_ass_subscript_16;
            tmp_expression_value_50 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[13]);

            if (tmp_expression_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 58;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_50);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[60]);

            if (tmp_subscript_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_16 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_16);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_ass_subvalue_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_16);
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_ass_subvalue_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_16 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_16);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_16);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_16 = mod_consts[61];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
            Py_DECREF(tmp_ass_subscribed_16);
            Py_DECREF(tmp_ass_subvalue_16);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_51;
            tmp_expression_value_51 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[7]);

            if (tmp_expression_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_51);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[62]);
            Py_DECREF(tmp_expression_value_51);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_6a859c9262df3fb1311c20b3927eeae9_7->m_frame.f_lineno = 59;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_17;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_ass_subscribed_17;
            PyObject *tmp_ass_subscript_17;
            tmp_expression_value_52 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[14]);

            if (tmp_expression_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_expression_value_52 == NULL)) {
                        tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_expression_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_52);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_expression_value_53 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[13]);

            if (tmp_expression_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                    }

                    if (tmp_expression_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_52);

                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_53);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[66]);

            if (tmp_subscript_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_18 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_subscript_value_18);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_53);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_subscript_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_52);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subvalue_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_52);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_ass_subvalue_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_17 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_17);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_17);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_17 = mod_consts[65];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
            Py_DECREF(tmp_ass_subscribed_17);
            Py_DECREF(tmp_ass_subvalue_17);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_kw_call_value_0_3;
            PyObject *tmp_expression_value_55;
            tmp_expression_value_54 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[7]);

            if (tmp_expression_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_54);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[62]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_expression_value_55 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[22]);

            if (tmp_expression_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[22]);

                    if (unlikely(tmp_expression_value_55 == NULL)) {
                        tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                    }

                    if (tmp_expression_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 60;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_55);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[67]);
            Py_DECREF(tmp_expression_value_55);
            if (tmp_kw_call_value_0_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_6a859c9262df3fb1311c20b3927eeae9_7->m_frame.f_lineno = 60;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_22, kw_values, mod_consts[64]);
            }

            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_value_0_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_18;
            PyObject *tmp_ass_subscribed_18;
            PyObject *tmp_ass_subscript_18;
            tmp_ass_subvalue_18 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[22]);

            if (tmp_ass_subvalue_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[22]);

                    if (unlikely(tmp_ass_subvalue_18 == NULL)) {
                        tmp_ass_subvalue_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                    }

                    if (tmp_ass_subvalue_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_ass_subvalue_18);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_ass_subscribed_18 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_18);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_18);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_18 = mod_consts[68];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
            Py_DECREF(tmp_ass_subscribed_18);
            Py_DECREF(tmp_ass_subvalue_18);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_56;
            tmp_expression_value_56 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[7]);

            if (tmp_expression_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_56 == NULL)) {
                        tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 61;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_56);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[62]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_6a859c9262df3fb1311c20b3927eeae9_7->m_frame.f_lineno = 61;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[76], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_19;
            PyObject *tmp_ass_subscribed_19;
            PyObject *tmp_ass_subscript_19;
            tmp_ass_subvalue_19 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[66]);

            if (tmp_ass_subvalue_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_19 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_ass_subvalue_19);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_ass_subscribed_19 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_19);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_19);

                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_19 = mod_consts[80];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
            Py_DECREF(tmp_ass_subscribed_19);
            Py_DECREF(tmp_ass_subvalue_19);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_expression_value_58;
            tmp_expression_value_57 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[7]);

            if (tmp_expression_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 62;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_57);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[62]);
            Py_DECREF(tmp_expression_value_57);
            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_expression_value_58 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[9]);

            if (tmp_expression_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[9]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
                    }

                    if (tmp_expression_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);

                        exception_lineno = 62;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_58);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[81]);
            Py_DECREF(tmp_expression_value_58);
            if (tmp_mult_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);

                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_mult_expr_right_1 = mod_consts[82];
            tmp_kw_call_value_0_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_left_1);
            if (tmp_kw_call_value_0_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);

                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_6a859c9262df3fb1311c20b3927eeae9_7->m_frame.f_lineno = 62;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, kw_values, mod_consts[64]);
            }

            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_kw_call_value_0_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_20;
            PyObject *tmp_ass_subscribed_20;
            PyObject *tmp_ass_subscript_20;
            tmp_ass_subvalue_20 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[66]);

            if (tmp_ass_subvalue_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_20 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_ass_subvalue_20);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_ass_subscribed_20 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_20);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_20);

                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_20 = mod_consts[83];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
            Py_DECREF(tmp_ass_subscribed_20);
            Py_DECREF(tmp_ass_subvalue_20);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_59;
            tmp_expression_value_59 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[7]);

            if (tmp_expression_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_59 == NULL)) {
                        tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_expression_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 63;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_59);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[62]);
            Py_DECREF(tmp_expression_value_59);
            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_6a859c9262df3fb1311c20b3927eeae9_7->m_frame.f_lineno = 63;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[84], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[70], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_21;
            PyObject *tmp_ass_subscribed_21;
            PyObject *tmp_ass_subscript_21;
            tmp_ass_subvalue_21 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[60]);

            if (tmp_ass_subvalue_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_21 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_ass_subvalue_21);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_ass_subscribed_21 = PyObject_GetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_21);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_21);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_21 = mod_consts[70];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
            Py_DECREF(tmp_ass_subscribed_21);
            Py_DECREF(tmp_ass_subvalue_21);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6a859c9262df3fb1311c20b3927eeae9_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6a859c9262df3fb1311c20b3927eeae9_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6a859c9262df3fb1311c20b3927eeae9_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6a859c9262df3fb1311c20b3927eeae9_7,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_6a859c9262df3fb1311c20b3927eeae9_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_23;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto try_except_handler_23;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$painting$$$class__7_PaintSweepGradient_56, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_23;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_13;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_26 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_27 = mod_consts[79];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_27 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_flet_core$painting$$$class__7_PaintSweepGradient_56;
            PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
            frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 56;
            tmp_assign_source_68 = CALL_FUNCTION(tmp_called_value_26, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto try_except_handler_23;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_68;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_args_element_value_4 = outline_6_var___class__;
        Py_INCREF(tmp_args_element_value_4);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_flet_core$painting$$$class__7_PaintSweepGradient_56);
        locals_flet_core$painting$$$class__7_PaintSweepGradient_56 = NULL;
        goto try_return_handler_22;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$painting$$$class__7_PaintSweepGradient_56);
        locals_flet_core$painting$$$class__7_PaintSweepGradient_56 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 56;
        goto try_except_handler_21;
        outline_result_7:;
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 55;
        tmp_assign_source_67 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[53], tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_67);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
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
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
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
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_70;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_24;
        }
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_flet_core$painting$$$class__8_Paint_67 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[34], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[35], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_356ab80e55be3449d5a63810f63c3fdd_8 = MAKE_CLASS_FRAME(codeobj_356ab80e55be3449d5a63810f63c3fdd, module_flet_core$painting, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_356ab80e55be3449d5a63810f63c3fdd_8);
        assert(Py_REFCNT(frame_356ab80e55be3449d5a63810f63c3fdd_8) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_60;
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[62]);
            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_356ab80e55be3449d5a63810f63c3fdd_8->m_frame.f_lineno = 68;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_27, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_22;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_ass_subscribed_22;
            PyObject *tmp_ass_subscript_22;
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_19);
            if (tmp_ass_subvalue_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_22 = DICT_GET_ITEM0(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_22);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_22);

                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_22 = mod_consts[86];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
            Py_DECREF(tmp_ass_subvalue_22);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_62;
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[62]);
            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_356ab80e55be3449d5a63810f63c3fdd_8->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_28, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[87], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_23;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_ass_subscribed_23;
            PyObject *tmp_ass_subscript_23;
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_20 == NULL)) {
                tmp_subscript_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subvalue_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_20);
            if (tmp_ass_subvalue_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_23 = DICT_GET_ITEM0(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_23);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_23);

                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_23 = mod_consts[87];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
            Py_DECREF(tmp_ass_subvalue_23);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_29;
            PyObject *tmp_expression_value_64;
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[62]);
            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_356ab80e55be3449d5a63810f63c3fdd_8->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_29, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_24;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_ass_subscribed_24;
            PyObject *tmp_ass_subscript_24;
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_tuple_element_28 = Py_None;
            tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_expression_value_66;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_tuple_element_29;
                PyObject *tmp_expression_value_67;
                PyObject *tmp_subscript_value_23;
                PyTuple_SET_ITEM0(tmp_subscript_value_21, 0, tmp_tuple_element_28);
                tmp_tuple_element_28 = (PyObject *)&PyFloat_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_21, 1, tmp_tuple_element_28);
                tmp_tuple_element_28 = (PyObject *)&PyLong_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_21, 2, tmp_tuple_element_28);
                tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_expression_value_66 == NULL)) {
                    tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                }

                if (tmp_expression_value_66 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_expression_value_67 == NULL)) {
                    tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                }

                if (tmp_expression_value_67 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                tmp_subscript_value_23 = mod_consts[89];
                tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_23);
                if (tmp_tuple_element_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_68;
                    PyObject *tmp_subscript_value_24;
                    PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_29);
                    tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_expression_value_68 == NULL)) {
                        tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_expression_value_68 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 71;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    tmp_subscript_value_24 = mod_consts[89];
                    tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_24);
                    if (tmp_tuple_element_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 71;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_29);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_subscript_value_22);
                goto tuple_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_22);
                Py_DECREF(tmp_subscript_value_22);
                if (tmp_tuple_element_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_21, 3, tmp_tuple_element_28);
                tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_tuple_element_28 == NULL)) {
                    tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
                }

                if (tmp_tuple_element_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_21, 4, tmp_tuple_element_28);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_subscript_value_21);
            goto frame_exception_exit_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_ass_subvalue_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_21);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_ass_subvalue_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_24 = DICT_GET_ITEM0(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_24);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_24);

                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_24 = mod_consts[88];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
            Py_DECREF(tmp_ass_subvalue_24);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_expression_value_69;
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[62]);
            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_356ab80e55be3449d5a63810f63c3fdd_8->m_frame.f_lineno = 73;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[90], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_25;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_ass_subscribed_25;
            PyObject *tmp_ass_subscript_25;
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_25 = (PyObject *)&PyBool_Type;
            tmp_ass_subvalue_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_25);
            if (tmp_ass_subvalue_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_25 = DICT_GET_ITEM0(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_25);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_25);

                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_25 = mod_consts[90];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
            Py_DECREF(tmp_ass_subvalue_25);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_71;
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[62]);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_356ab80e55be3449d5a63810f63c3fdd_8->m_frame.f_lineno = 74;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[91], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_26;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_ass_subscribed_26;
            PyObject *tmp_ass_subscript_26;
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_subscript_value_26 == NULL)) {
                tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_subscript_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subvalue_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_72, tmp_subscript_value_26);
            if (tmp_ass_subvalue_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_26 = DICT_GET_ITEM0(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_26);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_26);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_26 = mod_consts[91];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
            Py_DECREF(tmp_ass_subvalue_26);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_32;
            PyObject *tmp_expression_value_73;
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[62]);
            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_356ab80e55be3449d5a63810f63c3fdd_8->m_frame.f_lineno = 75;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_32, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_27;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_ass_subscribed_27;
            PyObject *tmp_ass_subscript_27;
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_subscript_value_27 == NULL)) {
                tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_subscript_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subvalue_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_27);
            if (tmp_ass_subvalue_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_27 = DICT_GET_ITEM0(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_27);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_27);

                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_27 = mod_consts[92];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
            Py_DECREF(tmp_ass_subvalue_27);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_expression_value_75;
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[62]);
            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_356ab80e55be3449d5a63810f63c3fdd_8->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_28;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_ass_subscribed_28;
            PyObject *tmp_ass_subscript_28;
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_subscript_value_28 == NULL)) {
                tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_subscript_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subvalue_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_28);
            if (tmp_ass_subvalue_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_28 = DICT_GET_ITEM0(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_28);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_28);

                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_28 = mod_consts[93];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
            Py_DECREF(tmp_ass_subvalue_28);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_expression_value_77;
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[62]);
            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_356ab80e55be3449d5a63810f63c3fdd_8->m_frame.f_lineno = 77;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_34, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_29;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_ass_subscribed_29;
            PyObject *tmp_ass_subscript_29;
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_29 = (PyObject *)&PyFloat_Type;
            tmp_ass_subvalue_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_78, tmp_subscript_value_29);
            if (tmp_ass_subvalue_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_29 = DICT_GET_ITEM0(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_29);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_29);

                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_29 = mod_consts[94];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
            Py_DECREF(tmp_ass_subvalue_29);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_expression_value_79;
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[62]);
            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_356ab80e55be3449d5a63810f63c3fdd_8->m_frame.f_lineno = 78;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_30;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_ass_subscribed_30;
            PyObject *tmp_ass_subscript_30;
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_30 = (PyObject *)&PyFloat_Type;
            tmp_ass_subvalue_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_80, tmp_subscript_value_30);
            if (tmp_ass_subvalue_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_30 = DICT_GET_ITEM0(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_30);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_30);

                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_30 = mod_consts[95];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
            Py_DECREF(tmp_ass_subvalue_30);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_36;
            PyObject *tmp_expression_value_81;
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[62]);
            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_356ab80e55be3449d5a63810f63c3fdd_8->m_frame.f_lineno = 79;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_36, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[96], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_31;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_ass_subscribed_31;
            PyObject *tmp_ass_subscript_31;
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_32 = (PyObject *)&PyFloat_Type;
            tmp_subscript_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_32);
            if (tmp_subscript_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subvalue_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_31);
            Py_DECREF(tmp_subscript_value_31);
            if (tmp_ass_subvalue_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_31 = DICT_GET_ITEM0(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_31);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_31);

                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_31 = mod_consts[96];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
            Py_DECREF(tmp_ass_subvalue_31);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_expression_value_84;
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[62]);
            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_356ab80e55be3449d5a63810f63c3fdd_8->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_37, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[64]);
            Py_DECREF(tmp_called_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[97], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_32;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_ass_subscribed_32;
            PyObject *tmp_ass_subscript_32;
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_expression_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_subscript_value_33 == NULL)) {
                tmp_subscript_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_subscript_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subvalue_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_33);
            if (tmp_ass_subvalue_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_32 = DICT_GET_ITEM0(locals_flet_core$painting$$$class__8_Paint_67, mod_consts[57]);

            if (unlikely(tmp_ass_subscribed_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_32);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_32);

                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_32 = mod_consts[97];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
            Py_DECREF(tmp_ass_subvalue_32);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_356ab80e55be3449d5a63810f63c3fdd_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_356ab80e55be3449d5a63810f63c3fdd_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_356ab80e55be3449d5a63810f63c3fdd_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_356ab80e55be3449d5a63810f63c3fdd_8,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_356ab80e55be3449d5a63810f63c3fdd_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_26;
        skip_nested_handling_7:;
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_value_14;
            tmp_called_value_38 = (PyObject *)&PyType_Type;
            tmp_tuple_element_30 = mod_consts[85];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = mod_consts[55];
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = locals_flet_core$painting$$$class__8_Paint_67;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_8__class_decl_dict;
            frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 67;
            tmp_assign_source_72 = CALL_FUNCTION(tmp_called_value_38, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto try_except_handler_26;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_72;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_args_element_value_5 = outline_7_var___class__;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_flet_core$painting$$$class__8_Paint_67);
        locals_flet_core$painting$$$class__8_Paint_67 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$painting$$$class__8_Paint_67);
        locals_flet_core$painting$$$class__8_Paint_67 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 67;
        goto try_except_handler_24;
        outline_result_8:;
        frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame.f_lineno = 66;
        tmp_assign_source_71 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[53], tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$painting, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_71);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_8;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d2b1b8854d64c703198ef1fb992f7cdd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d2b1b8854d64c703198ef1fb992f7cdd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d2b1b8854d64c703198ef1fb992f7cdd, exception_lineno);
    }



    assertFrameObject(frame_d2b1b8854d64c703198ef1fb992f7cdd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_8:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flet_core.painting", false);

    Py_INCREF(module_flet_core$painting);
    return module_flet_core$painting;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$painting, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$painting", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
