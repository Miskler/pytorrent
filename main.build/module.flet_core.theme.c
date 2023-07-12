/* Generated code for Python module 'flet_core.theme'
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

/* The "module_flet_core$theme" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$theme;
PyDictObject *moduledict_flet_core$theme;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[163];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[163];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.theme"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 163; i++) {
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
void checkModuleConstants_flet_core$theme(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 163; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8f025e3a5f8bbb5551aa2949a42fd2f9;
static PyCodeObject *codeobj_51607268c1c7bcccb1e281bc09aac8b5;
static PyCodeObject *codeobj_2535893f53957a5e422c74fb55fcbd6d;
static PyCodeObject *codeobj_f463f14cba65cbdfdce170235b226e6d;
static PyCodeObject *codeobj_630c7289fe1a9eb66e0b37e3d14d7b7a;
static PyCodeObject *codeobj_56ac8dc5d7d00c5bc73464d00c470b6a;
static PyCodeObject *codeobj_48c64f38c79f3badf7f85c48b53bb47e;
static PyCodeObject *codeobj_58c1dd70601ecc8f8b68180c0ee4e347;
static PyCodeObject *codeobj_71e37d36a628cc2a30c21f135a373c01;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[1]; CHECK_OBJECT(module_filename_obj);
    codeobj_8f025e3a5f8bbb5551aa2949a42fd2f9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[160], mod_consts[160], NULL, NULL, 0, 0, 0);
    codeobj_51607268c1c7bcccb1e281bc09aac8b5 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[161], NULL, 0, 0, 0);
    codeobj_2535893f53957a5e422c74fb55fcbd6d = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[161], NULL, 0, 0, 0);
    codeobj_f463f14cba65cbdfdce170235b226e6d = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[161], NULL, 0, 0, 0);
    codeobj_630c7289fe1a9eb66e0b37e3d14d7b7a = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[161], NULL, 0, 0, 0);
    codeobj_56ac8dc5d7d00c5bc73464d00c470b6a = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_NOFREE, mod_consts[137], mod_consts[137], mod_consts[161], NULL, 0, 0, 0);
    codeobj_48c64f38c79f3badf7f85c48b53bb47e = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[161], NULL, 0, 0, 0);
    codeobj_58c1dd70601ecc8f8b68180c0ee4e347 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_NOFREE, mod_consts[147], mod_consts[147], mod_consts[161], NULL, 0, 0, 0);
    codeobj_71e37d36a628cc2a30c21f135a373c01 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[161], NULL, 0, 0, 0);
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

function_impl_code functable_flet_core$theme[] = {

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

    function_impl_code *current = functable_flet_core$theme;
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

    if (offset > sizeof(functable_flet_core$theme) || offset < 0) {
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
        functable_flet_core$theme[offset],
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
        module_flet_core$theme,
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
PyObject *modulecode_flet_core$theme(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.theme");

    // Store the module for future use.
    module_flet_core$theme = module;

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
        PRINT_STRING("flet_core.theme: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.theme: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.theme: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$theme\n");

    moduledict_flet_core$theme = MODULE_DICT(module_flet_core$theme);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$theme,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$theme,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[162]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$theme,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$theme,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$theme,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$theme);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$theme, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$theme, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$theme, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$theme);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_8f025e3a5f8bbb5551aa2949a42fd2f9;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_flet_core$theme$$$class__1_ThemeVisualDensity_21 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_71e37d36a628cc2a30c21f135a373c01_2;
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
    PyObject *locals_flet_core$theme$$$class__2_PageTransitionTheme_32 = NULL;
    struct Nuitka_FrameObject *frame_2535893f53957a5e422c74fb55fcbd6d_3;
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
    PyObject *locals_flet_core$theme$$$class__3_PageTransitionsTheme_41 = NULL;
    struct Nuitka_FrameObject *frame_f463f14cba65cbdfdce170235b226e6d_4;
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
    PyObject *locals_flet_core$theme$$$class__4_ColorScheme_50 = NULL;
    struct Nuitka_FrameObject *frame_51607268c1c7bcccb1e281bc09aac8b5_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_flet_core$theme$$$class__5_TextTheme_84 = NULL;
    struct Nuitka_FrameObject *frame_48c64f38c79f3badf7f85c48b53bb47e_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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
    PyObject *locals_flet_core$theme$$$class__6_ScrollbarTheme_103 = NULL;
    struct Nuitka_FrameObject *frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
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
    PyObject *locals_flet_core$theme$$$class__7_TabsTheme_118 = NULL;
    struct Nuitka_FrameObject *frame_56ac8dc5d7d00c5bc73464d00c470b6a_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
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
    PyObject *locals_flet_core$theme$$$class__8_Theme_131 = NULL;
    struct Nuitka_FrameObject *frame_58c1dd70601ecc8f8b68180c0ee4e347_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_8f025e3a5f8bbb5551aa2949a42fd2f9 = MAKE_MODULE_FRAME(codeobj_8f025e3a5f8bbb5551aa2949a42fd2f9, module_flet_core$theme);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8f025e3a5f8bbb5551aa2949a42fd2f9);
    assert(Py_REFCNT(frame_8f025e3a5f8bbb5551aa2949a42fd2f9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[1];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[3]);

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
        UPDATE_STRING_DICT0(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[7];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$theme;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[8];
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[7];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$theme;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[9];
        tmp_level_value_2 = mod_consts[8];
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 2;
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
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[10],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[10]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[11];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$theme;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[12];
        tmp_level_value_3 = mod_consts[8];
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 3;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[13],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_6);
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
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[14],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[14]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[15],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[15]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[16],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[16]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_10);
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
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[17];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$theme;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[18];
        tmp_level_value_4 = mod_consts[8];
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[19],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[20];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$theme;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[21];
        tmp_level_value_5 = mod_consts[8];
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 7;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[22],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[23];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$theme;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[24];
        tmp_level_value_6 = mod_consts[8];
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 8;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[25],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[25]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[26];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_flet_core$theme;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[27];
        tmp_level_value_7 = mod_consts[8];
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 9;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[28],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[28]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[29],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[29]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[30],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[30]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_17);
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        tmp_import_name_from_12 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_12 == NULL));
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[31],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[31]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_18);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_8f025e3a5f8bbb5551aa2949a42fd2f9, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_8f025e3a5f8bbb5551aa2949a42fd2f9, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[32];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_flet_core$theme;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[33];
        tmp_level_value_8 = mod_consts[8];
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 14;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$theme,
                mod_consts[31],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_19);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 11;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame) frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_subscript_value_1 = mod_consts[34];
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_20);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_22 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_2 = mod_consts[8];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[36]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[36]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        tmp_tuple_element_2 = mod_consts[37];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 21;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[38]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
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
        tmp_mod_expr_left_1 = mod_consts[39];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[40];
        tmp_getattr_default_1 = mod_consts[41];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[40]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 21;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$theme$$$class__1_ThemeVisualDensity_21 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__1_ThemeVisualDensity_21, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__1_ThemeVisualDensity_21, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_7;
        }
        frame_71e37d36a628cc2a30c21f135a373c01_2 = MAKE_CLASS_FRAME(codeobj_71e37d36a628cc2a30c21f135a373c01, module_flet_core$theme, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_71e37d36a628cc2a30c21f135a373c01_2);
        assert(Py_REFCNT(frame_71e37d36a628cc2a30c21f135a373c01_2) == 2);

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__1_ThemeVisualDensity_21, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[46];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__1_ThemeVisualDensity_21, mod_consts[47], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[48];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__1_ThemeVisualDensity_21, mod_consts[49], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__1_ThemeVisualDensity_21, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__1_ThemeVisualDensity_21, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_71e37d36a628cc2a30c21f135a373c01_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_71e37d36a628cc2a30c21f135a373c01_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_71e37d36a628cc2a30c21f135a373c01_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_71e37d36a628cc2a30c21f135a373c01_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_71e37d36a628cc2a30c21f135a373c01_2);

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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__1_ThemeVisualDensity_21, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_7;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[37];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flet_core$theme$$$class__1_ThemeVisualDensity_21;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 21;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_7;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_27 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_flet_core$theme$$$class__1_ThemeVisualDensity_21);
        locals_flet_core$theme$$$class__1_ThemeVisualDensity_21 = NULL;
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

        Py_DECREF(locals_flet_core$theme$$$class__1_ThemeVisualDensity_21);
        locals_flet_core$theme$$$class__1_ThemeVisualDensity_21 = NULL;
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
        exception_lineno = 21;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_27);
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
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[55];
        tmp_assign_source_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_29);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_31 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_8 = tmp_class_creation_2__bases;
        tmp_subscript_value_4 = mod_consts[8];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_4, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_33 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[36]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[36]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        tmp_tuple_element_6 = mod_consts[57];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 32;
        tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_11 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[38]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
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
        tmp_mod_expr_left_2 = mod_consts[39];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[40];
        tmp_getattr_default_2 = mod_consts[41];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[40]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 32;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_35;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$theme$$$class__2_PageTransitionTheme_32 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__2_PageTransitionTheme_32, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__2_PageTransitionTheme_32, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_10;
        }
        frame_2535893f53957a5e422c74fb55fcbd6d_3 = MAKE_CLASS_FRAME(codeobj_2535893f53957a5e422c74fb55fcbd6d, module_flet_core$theme, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_2535893f53957a5e422c74fb55fcbd6d_3);
        assert(Py_REFCNT(frame_2535893f53957a5e422c74fb55fcbd6d_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__2_PageTransitionTheme_32, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__2_PageTransitionTheme_32, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__2_PageTransitionTheme_32, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__2_PageTransitionTheme_32, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__2_PageTransitionTheme_32, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2535893f53957a5e422c74fb55fcbd6d_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2535893f53957a5e422c74fb55fcbd6d_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2535893f53957a5e422c74fb55fcbd6d_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2535893f53957a5e422c74fb55fcbd6d_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_2535893f53957a5e422c74fb55fcbd6d_3);

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
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$theme$$$class__2_PageTransitionTheme_32, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_10;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[57];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_flet_core$theme$$$class__2_PageTransitionTheme_32;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 32;
            tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_10;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_36 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_flet_core$theme$$$class__2_PageTransitionTheme_32);
        locals_flet_core$theme$$$class__2_PageTransitionTheme_32 = NULL;
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

        Py_DECREF(locals_flet_core$theme$$$class__2_PageTransitionTheme_32);
        locals_flet_core$theme$$$class__2_PageTransitionTheme_32 = NULL;
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
        exception_lineno = 32;
        goto try_except_handler_8;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_36);
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
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_39;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_11;
        }
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_flet_core$theme$$$class__3_PageTransitionsTheme_41 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[44], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[69], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_f463f14cba65cbdfdce170235b226e6d_4 = MAKE_CLASS_FRAME(codeobj_f463f14cba65cbdfdce170235b226e6d, module_flet_core$theme, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f463f14cba65cbdfdce170235b226e6d_4);
        assert(Py_REFCNT(frame_f463f14cba65cbdfdce170235b226e6d_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_5;
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_f463f14cba65cbdfdce170235b226e6d_4->m_frame.f_lineno = 42;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_5 == NULL)) {
                tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
            }

            if (tmp_subscript_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_5);
            if (tmp_ass_subvalue_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscribed_1 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_1 = mod_consts[72];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_6;
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_f463f14cba65cbdfdce170235b226e6d_4->m_frame.f_lineno = 43;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[73], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_6 == NULL)) {
                tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
            }

            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_6);
            if (tmp_ass_subvalue_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscribed_2 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_2 = mod_consts[73];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_7;
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_f463f14cba65cbdfdce170235b226e6d_4->m_frame.f_lineno = 44;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_7 == NULL)) {
                tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
            }

            if (tmp_subscript_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_7);
            if (tmp_ass_subvalue_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscribed_3 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_3 = mod_consts[74];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_8;
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_f463f14cba65cbdfdce170235b226e6d_4->m_frame.f_lineno = 45;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_8 == NULL)) {
                tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
            }

            if (tmp_subscript_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_8);
            if (tmp_ass_subvalue_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscribed_4 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_4);

                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_4 = mod_consts[75];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_9;
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_f463f14cba65cbdfdce170235b226e6d_4->m_frame.f_lineno = 46;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[76], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_9 == NULL)) {
                tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
            }

            if (tmp_subscript_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_9);
            if (tmp_ass_subvalue_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscribed_5 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_5);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_5);

                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_5 = mod_consts[76];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            Py_DECREF(tmp_ass_subvalue_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f463f14cba65cbdfdce170235b226e6d_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f463f14cba65cbdfdce170235b226e6d_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f463f14cba65cbdfdce170235b226e6d_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f463f14cba65cbdfdce170235b226e6d_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_f463f14cba65cbdfdce170235b226e6d_4);

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
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_10 = (PyObject *)&PyType_Type;
            tmp_tuple_element_9 = mod_consts[68];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[77];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_flet_core$theme$$$class__3_PageTransitionsTheme_41;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 41;
            tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_13;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_41;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_args_element_value_1 = outline_2_var___class__;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41);
        locals_flet_core$theme$$$class__3_PageTransitionsTheme_41 = NULL;
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

        Py_DECREF(locals_flet_core$theme$$$class__3_PageTransitionsTheme_41);
        locals_flet_core$theme$$$class__3_PageTransitionsTheme_41 = NULL;
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
        exception_lineno = 41;
        goto try_except_handler_11;
        outline_result_3:;
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 40;
        tmp_assign_source_40 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[67], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_40);
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

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_43;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_14;
        }
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_flet_core$theme$$$class__4_ColorScheme_50 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[44], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_51607268c1c7bcccb1e281bc09aac8b5_5 = MAKE_CLASS_FRAME(codeobj_51607268c1c7bcccb1e281bc09aac8b5, module_flet_core$theme, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_51607268c1c7bcccb1e281bc09aac8b5_5);
        assert(Py_REFCNT(frame_51607268c1c7bcccb1e281bc09aac8b5_5) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_11;
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 51;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_10);
            if (tmp_ass_subvalue_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_6 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_6);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_6);

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_6 = mod_consts[79];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            Py_DECREF(tmp_ass_subvalue_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_12;
            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_12 == NULL)) {
                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 52;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_11);
            if (tmp_ass_subvalue_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_7 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_7);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_7 = mod_consts[80];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            Py_DECREF(tmp_ass_subvalue_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_13;
            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_13 == NULL)) {
                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 53;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_12 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_12);
            if (tmp_ass_subvalue_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_8 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_8);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_8);

                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_8 = mod_consts[81];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            Py_DECREF(tmp_ass_subvalue_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_14;
            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_14 == NULL)) {
                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 54;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[82], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_13 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_13);
            if (tmp_ass_subvalue_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_9 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_9);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_9);

                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_9 = mod_consts[82];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
            Py_DECREF(tmp_ass_subvalue_9);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_15;
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 55;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_14);
            if (tmp_ass_subvalue_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_10 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_10);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_10);

                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_10 = mod_consts[83];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
            Py_DECREF(tmp_ass_subvalue_10);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_16;
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 56;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_11;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_ass_subscribed_11;
            PyObject *tmp_ass_subscript_11;
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_15 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_15);
            if (tmp_ass_subvalue_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_11 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_11);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_11);

                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_11 = mod_consts[84];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
            Py_DECREF(tmp_ass_subvalue_11);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_17;
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 57;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[85], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_12;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_ass_subscribed_12;
            PyObject *tmp_ass_subscript_12;
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_16 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_16);
            if (tmp_ass_subvalue_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_12 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_12);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_12);

                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_12 = mod_consts[85];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
            Py_DECREF(tmp_ass_subvalue_12);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_18;
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 58;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_13;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_ass_subscribed_13;
            PyObject *tmp_ass_subscript_13;
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_17 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_17);
            if (tmp_ass_subvalue_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_13 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_13);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_13);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_13 = mod_consts[86];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
            Py_DECREF(tmp_ass_subvalue_13);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_19;
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 59;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_19, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[87], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_14;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_ass_subscribed_14;
            PyObject *tmp_ass_subscript_14;
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_18 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_18);
            if (tmp_ass_subvalue_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_14 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_14);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_14);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_14 = mod_consts[87];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
            Py_DECREF(tmp_ass_subvalue_14);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_20;
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 60;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_15;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_ass_subscribed_15;
            PyObject *tmp_ass_subscript_15;
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_19);
            if (tmp_ass_subvalue_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_15 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_15);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_15);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_15 = mod_consts[88];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
            Py_DECREF(tmp_ass_subvalue_15);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_21;
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 61;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_16;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_ass_subscribed_16;
            PyObject *tmp_ass_subscript_16;
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_20);
            if (tmp_ass_subvalue_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_16 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_16);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_16);

                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_16 = mod_consts[89];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
            Py_DECREF(tmp_ass_subvalue_16);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_22;
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 62;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[90], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_17;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_ass_subscribed_17;
            PyObject *tmp_ass_subscript_17;
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_21 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_21);
            if (tmp_ass_subvalue_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_17 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_17);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_17);

                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_17 = mod_consts[90];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
            Py_DECREF(tmp_ass_subvalue_17);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_23;
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 63;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[91], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_18;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_ass_subscribed_18;
            PyObject *tmp_ass_subscript_18;
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_22 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_22);
            if (tmp_ass_subvalue_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_18 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_18);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_18);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_18 = mod_consts[91];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
            Py_DECREF(tmp_ass_subvalue_18);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_24;
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 64;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_19;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_ass_subscribed_19;
            PyObject *tmp_ass_subscript_19;
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_23 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_23);
            if (tmp_ass_subvalue_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_19 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_19);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_19);

                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_19 = mod_consts[92];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
            Py_DECREF(tmp_ass_subvalue_19);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_25;
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_20;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_ass_subscribed_20;
            PyObject *tmp_ass_subscript_20;
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_24 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_24);
            if (tmp_ass_subvalue_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_20 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_20);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_20);

                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_20 = mod_consts[93];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
            Py_DECREF(tmp_ass_subvalue_20);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_26;
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 66;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_21;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_ass_subscribed_21;
            PyObject *tmp_ass_subscript_21;
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_25 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_25);
            if (tmp_ass_subvalue_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_21 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_21);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_21);

                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_21 = mod_consts[94];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
            Py_DECREF(tmp_ass_subvalue_21);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_27;
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 67;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_27, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_22;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_ass_subscribed_22;
            PyObject *tmp_ass_subscript_22;
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_26 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_26);
            if (tmp_ass_subvalue_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_22 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_22);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_22);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_22 = mod_consts[95];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
            Py_DECREF(tmp_ass_subvalue_22);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_28;
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 68;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_28, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[96], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_23;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_ass_subscribed_23;
            PyObject *tmp_ass_subscript_23;
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_27 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_27);
            if (tmp_ass_subvalue_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_23 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_23);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_23);

                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_23 = mod_consts[96];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
            Py_DECREF(tmp_ass_subvalue_23);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_29;
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_29, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[97], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_24;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_ass_subscribed_24;
            PyObject *tmp_ass_subscript_24;
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_28);
            if (tmp_ass_subvalue_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_24 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_24);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_24);

                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_24 = mod_consts[97];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
            Py_DECREF(tmp_ass_subvalue_24);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_30;
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 70;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_25;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_ass_subscribed_25;
            PyObject *tmp_ass_subscript_25;
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_29 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_29);
            if (tmp_ass_subvalue_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_25 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_25);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_25);

                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_25 = mod_consts[98];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
            Py_DECREF(tmp_ass_subvalue_25);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_31;
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 71;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_26;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_ass_subscribed_26;
            PyObject *tmp_ass_subscript_26;
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_30 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_30);
            if (tmp_ass_subvalue_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_26 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_26);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_26);

                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_26 = mod_consts[99];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
            Py_DECREF(tmp_ass_subvalue_26);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_32;
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_32, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_27;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_ass_subscribed_27;
            PyObject *tmp_ass_subscript_27;
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_31 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_31);
            if (tmp_ass_subvalue_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_27 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_27);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_27);

                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_27 = mod_consts[100];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
            Py_DECREF(tmp_ass_subvalue_27);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_33;
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 73;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[101], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_28;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_ass_subscribed_28;
            PyObject *tmp_ass_subscript_28;
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_32 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_32);
            if (tmp_ass_subvalue_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_28 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_28);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_28);

                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_28 = mod_consts[101];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
            Py_DECREF(tmp_ass_subvalue_28);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_34;
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 74;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_34, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[102], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_29;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_ass_subscribed_29;
            PyObject *tmp_ass_subscript_29;
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_33 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_33);
            if (tmp_ass_subvalue_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_29 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_29);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_29);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_29 = mod_consts[102];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
            Py_DECREF(tmp_ass_subvalue_29);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_35;
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 75;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[103], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_30;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_ass_subscribed_30;
            PyObject *tmp_ass_subscript_30;
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_34 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_34);
            if (tmp_ass_subvalue_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_30 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_30);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_30);

                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_30 = mod_consts[103];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
            Py_DECREF(tmp_ass_subvalue_30);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_36;
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_36, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[104], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_31;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_ass_subscribed_31;
            PyObject *tmp_ass_subscript_31;
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_35 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_35);
            if (tmp_ass_subvalue_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_31 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_31);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_31);

                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_31 = mod_consts[104];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
            Py_DECREF(tmp_ass_subvalue_31);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_37;
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 77;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_37, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[105], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_32;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_ass_subscribed_32;
            PyObject *tmp_ass_subscript_32;
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_36 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_36);
            if (tmp_ass_subvalue_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_32 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_32);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_32);

                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_32 = mod_consts[105];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
            Py_DECREF(tmp_ass_subvalue_32);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_38;
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 78;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_38, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_33;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_ass_subscribed_33;
            PyObject *tmp_ass_subscript_33;
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_37 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_37);
            if (tmp_ass_subvalue_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_33 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_33);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_33);

                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_33 = mod_consts[106];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
            Py_DECREF(tmp_ass_subvalue_33);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_39;
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 79;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_39, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[107], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_34;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_ass_subscribed_34;
            PyObject *tmp_ass_subscript_34;
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_38 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_38);
            if (tmp_ass_subvalue_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_34 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_34);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_34);

                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_34 = mod_consts[107];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
            Py_DECREF(tmp_ass_subvalue_34);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_40;
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_40, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_35;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_39;
            PyObject *tmp_ass_subscribed_35;
            PyObject *tmp_ass_subscript_35;
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_39 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_39);
            if (tmp_ass_subvalue_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_35 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__4_ColorScheme_50, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_35);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_35);

                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_35 = mod_consts[108];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
            Py_DECREF(tmp_ass_subvalue_35);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_51607268c1c7bcccb1e281bc09aac8b5_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_51607268c1c7bcccb1e281bc09aac8b5_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_51607268c1c7bcccb1e281bc09aac8b5_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_51607268c1c7bcccb1e281bc09aac8b5_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_51607268c1c7bcccb1e281bc09aac8b5_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_16;
        skip_nested_handling_4:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            tmp_called_value_41 = (PyObject *)&PyType_Type;
            tmp_tuple_element_10 = mod_consts[78];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[77];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_flet_core$theme$$$class__4_ColorScheme_50;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
            frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 50;
            tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_41, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto try_except_handler_16;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_args_element_value_2 = outline_3_var___class__;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_flet_core$theme$$$class__4_ColorScheme_50);
        locals_flet_core$theme$$$class__4_ColorScheme_50 = NULL;
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

        Py_DECREF(locals_flet_core$theme$$$class__4_ColorScheme_50);
        locals_flet_core$theme$$$class__4_ColorScheme_50 = NULL;
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
        exception_lineno = 50;
        goto try_except_handler_14;
        outline_result_4:;
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 49;
        tmp_assign_source_44 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[67], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_44);
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

    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_47;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_17;
        }
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_flet_core$theme$$$class__5_TextTheme_84 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[44], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_48c64f38c79f3badf7f85c48b53bb47e_6 = MAKE_CLASS_FRAME(codeobj_48c64f38c79f3badf7f85c48b53bb47e, module_flet_core$theme, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_48c64f38c79f3badf7f85c48b53bb47e_6);
        assert(Py_REFCNT(frame_48c64f38c79f3badf7f85c48b53bb47e_6) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_42;
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 85;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_42, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[110], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_36;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_ass_subscribed_36;
            PyObject *tmp_ass_subscript_36;
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_40 == NULL)) {
                tmp_subscript_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_40);
            if (tmp_ass_subvalue_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_36 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_36);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_36);

                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_36 = mod_consts[110];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
            Py_DECREF(tmp_ass_subvalue_36);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_43;
            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_43 == NULL)) {
                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 86;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_43, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_37;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_ass_subscribed_37;
            PyObject *tmp_ass_subscript_37;
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_41 == NULL)) {
                tmp_subscript_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_41);
            if (tmp_ass_subvalue_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_37 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_37);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_37);

                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_37 = mod_consts[111];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
            Py_DECREF(tmp_ass_subvalue_37);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_44;
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 87;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_44, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_38;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_42;
            PyObject *tmp_ass_subscribed_38;
            PyObject *tmp_ass_subscript_38;
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_42 == NULL)) {
                tmp_subscript_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_42);
            if (tmp_ass_subvalue_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_38 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_38);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_38);

                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_38 = mod_consts[112];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
            Py_DECREF(tmp_ass_subvalue_38);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_45;
            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_45 == NULL)) {
                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 88;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_45, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_39;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_43;
            PyObject *tmp_ass_subscribed_39;
            PyObject *tmp_ass_subscript_39;
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_43 == NULL)) {
                tmp_subscript_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_43);
            if (tmp_ass_subvalue_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_39 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_39);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_39);

                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_39 = mod_consts[113];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
            Py_DECREF(tmp_ass_subvalue_39);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_46;
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 89;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_46, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[114], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_40;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_44;
            PyObject *tmp_ass_subscribed_40;
            PyObject *tmp_ass_subscript_40;
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_44 == NULL)) {
                tmp_subscript_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_44);
            if (tmp_ass_subvalue_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_40 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_40);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_40);

                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_40 = mod_consts[114];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
            Py_DECREF(tmp_ass_subvalue_40);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_47;
            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_47 == NULL)) {
                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 90;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_47, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[115], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_41;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_45;
            PyObject *tmp_ass_subscribed_41;
            PyObject *tmp_ass_subscript_41;
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_45 == NULL)) {
                tmp_subscript_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_45);
            if (tmp_ass_subvalue_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_41 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_41);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_41);

                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_41 = mod_consts[115];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
            Py_DECREF(tmp_ass_subvalue_41);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_48;
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 91;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_48, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_42;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_ass_subscribed_42;
            PyObject *tmp_ass_subscript_42;
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_46 == NULL)) {
                tmp_subscript_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_46);
            if (tmp_ass_subvalue_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_42 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_42);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_42);

                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_42 = mod_consts[116];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
            Py_DECREF(tmp_ass_subvalue_42);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_49;
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_49, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[117], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_43;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_subscript_value_47;
            PyObject *tmp_ass_subscribed_43;
            PyObject *tmp_ass_subscript_43;
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_47 == NULL)) {
                tmp_subscript_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_43 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_47);
            if (tmp_ass_subvalue_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_43 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_43);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_43);

                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_43 = mod_consts[117];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
            Py_DECREF(tmp_ass_subvalue_43);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_50;
            tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_50 == NULL)) {
                tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 93;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_50, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[118], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_44;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_48;
            PyObject *tmp_ass_subscribed_44;
            PyObject *tmp_ass_subscript_44;
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_48 == NULL)) {
                tmp_subscript_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_44 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_48);
            if (tmp_ass_subvalue_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_44 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_44);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_44);

                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_44 = mod_consts[118];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
            Py_DECREF(tmp_ass_subvalue_44);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_51;
            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_51 == NULL)) {
                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 94;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_51, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[119], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_45;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_49;
            PyObject *tmp_ass_subscribed_45;
            PyObject *tmp_ass_subscript_45;
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_49 == NULL)) {
                tmp_subscript_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_45 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_49);
            if (tmp_ass_subvalue_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_45 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_45 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_45);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_45);

                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_45 = mod_consts[119];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
            Py_DECREF(tmp_ass_subvalue_45);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_52;
            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_52 == NULL)) {
                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 95;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_52, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[120], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_46;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_50;
            PyObject *tmp_ass_subscribed_46;
            PyObject *tmp_ass_subscript_46;
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_50 == NULL)) {
                tmp_subscript_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_50);
            if (tmp_ass_subvalue_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_46 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_46);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_46);

                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_46 = mod_consts[120];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
            Py_DECREF(tmp_ass_subvalue_46);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_53;
            tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_53 == NULL)) {
                tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 96;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_53, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_47;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_51;
            PyObject *tmp_ass_subscribed_47;
            PyObject *tmp_ass_subscript_47;
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_51 == NULL)) {
                tmp_subscript_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_47 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_51);
            if (tmp_ass_subvalue_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_47 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_47);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_47);

                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_47 = mod_consts[121];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
            Py_DECREF(tmp_ass_subvalue_47);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_54;
            tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_54 == NULL)) {
                tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 97;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_54, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_48;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_52;
            PyObject *tmp_ass_subscribed_48;
            PyObject *tmp_ass_subscript_48;
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_52 == NULL)) {
                tmp_subscript_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_52);
            if (tmp_ass_subvalue_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_48 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_48 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_48);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_48);

                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_48 = mod_consts[122];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
            Py_DECREF(tmp_ass_subvalue_48);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_55;
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 98;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_55, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_49;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_53;
            PyObject *tmp_ass_subscribed_49;
            PyObject *tmp_ass_subscript_49;
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_53 == NULL)) {
                tmp_subscript_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_49 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_53);
            if (tmp_ass_subvalue_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_49 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_49 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_49);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_49);

                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_49 = mod_consts[123];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
            Py_DECREF(tmp_ass_subvalue_49);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_56;
            tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_56 == NULL)) {
                tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_56, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[124], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_50;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_subscript_value_54;
            PyObject *tmp_ass_subscribed_50;
            PyObject *tmp_ass_subscript_50;
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_54 == NULL)) {
                tmp_subscript_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_50 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_54);
            if (tmp_ass_subvalue_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_50 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__5_TextTheme_84, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_50);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_50);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_50 = mod_consts[124];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
            Py_DECREF(tmp_ass_subvalue_50);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_48c64f38c79f3badf7f85c48b53bb47e_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_48c64f38c79f3badf7f85c48b53bb47e_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_48c64f38c79f3badf7f85c48b53bb47e_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_48c64f38c79f3badf7f85c48b53bb47e_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_48c64f38c79f3badf7f85c48b53bb47e_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_19;
        skip_nested_handling_5:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_7;
            tmp_called_value_57 = (PyObject *)&PyType_Type;
            tmp_tuple_element_11 = mod_consts[109];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[77];
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_flet_core$theme$$$class__5_TextTheme_84;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
            frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 84;
            tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_57, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_19;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_49;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_args_element_value_3 = outline_4_var___class__;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_flet_core$theme$$$class__5_TextTheme_84);
        locals_flet_core$theme$$$class__5_TextTheme_84 = NULL;
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

        Py_DECREF(locals_flet_core$theme$$$class__5_TextTheme_84);
        locals_flet_core$theme$$$class__5_TextTheme_84 = NULL;
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
        exception_lineno = 84;
        goto try_except_handler_17;
        outline_result_5:;
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 83;
        tmp_assign_source_48 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[67], tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_48);
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

    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_51;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_20;
        }
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_flet_core$theme$$$class__6_ScrollbarTheme_103 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[125];
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[44], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[69], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7 = MAKE_CLASS_FRAME(codeobj_630c7289fe1a9eb66e0b37e3d14d7b7a, module_flet_core$theme, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7);
        assert(Py_REFCNT(frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_58;
            tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_58 == NULL)) {
                tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7->m_frame.f_lineno = 104;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_58, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[126], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_51;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_55;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_ass_subscribed_51;
            PyObject *tmp_ass_subscript_51;
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_tuple_element_12 = Py_None;
            tmp_subscript_value_55 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_64;
                PyObject *tmp_subscript_value_56;
                PyObject *tmp_tuple_element_13;
                PyTuple_SET_ITEM0(tmp_subscript_value_55, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = (PyObject *)&PyBool_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_55, 1, tmp_tuple_element_12);
                tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[14]);

                if (unlikely(tmp_expression_value_64 == NULL)) {
                    tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                }

                if (tmp_expression_value_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_tuple_element_13 == NULL)) {
                    tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_subscript_value_56 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_56, 0, tmp_tuple_element_13);
                tmp_tuple_element_13 = (PyObject *)&PyBool_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_56, 1, tmp_tuple_element_13);
                tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_56);
                Py_DECREF(tmp_subscript_value_56);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_55, 2, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_subscript_value_55);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_ass_subvalue_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_55);
            Py_DECREF(tmp_subscript_value_55);
            if (tmp_ass_subvalue_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_51 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_51 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_51);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_51);

                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_51 = mod_consts[126];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
            Py_DECREF(tmp_ass_subvalue_51);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_59;
            tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_59 == NULL)) {
                tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7->m_frame.f_lineno = 105;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_59, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[127], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_52;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_57;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_ass_subscribed_52;
            PyObject *tmp_ass_subscript_52;
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_tuple_element_14 = Py_None;
            tmp_subscript_value_57 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_66;
                PyObject *tmp_subscript_value_58;
                PyObject *tmp_tuple_element_15;
                PyTuple_SET_ITEM0(tmp_subscript_value_57, 0, tmp_tuple_element_14);
                tmp_tuple_element_14 = (PyObject *)&PyFloat_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_57, 1, tmp_tuple_element_14);
                tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[14]);

                if (unlikely(tmp_expression_value_66 == NULL)) {
                    tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                }

                if (tmp_expression_value_66 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_tuple_element_15 == NULL)) {
                    tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                tmp_subscript_value_58 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_58, 0, tmp_tuple_element_15);
                tmp_tuple_element_15 = (PyObject *)&PyFloat_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_58, 1, tmp_tuple_element_15);
                tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_58);
                Py_DECREF(tmp_subscript_value_58);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_57, 2, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_subscript_value_57);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_ass_subvalue_52 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_57);
            Py_DECREF(tmp_subscript_value_57);
            if (tmp_ass_subvalue_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_52 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_52);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_52);

                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_52 = mod_consts[127];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
            Py_DECREF(tmp_ass_subvalue_52);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_60;
            tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_60 == NULL)) {
                tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7->m_frame.f_lineno = 106;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_60, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[128], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_53;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_59;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_ass_subscribed_53;
            PyObject *tmp_ass_subscript_53;
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_tuple_element_16 = Py_None;
            tmp_subscript_value_59 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_68;
                PyObject *tmp_subscript_value_60;
                PyObject *tmp_tuple_element_17;
                PyTuple_SET_ITEM0(tmp_subscript_value_59, 0, tmp_tuple_element_16);
                tmp_tuple_element_16 = (PyObject *)&PyBool_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_59, 1, tmp_tuple_element_16);
                tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[14]);

                if (unlikely(tmp_expression_value_68 == NULL)) {
                    tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                }

                if (tmp_expression_value_68 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_tuple_element_17 == NULL)) {
                    tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                tmp_subscript_value_60 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_60, 0, tmp_tuple_element_17);
                tmp_tuple_element_17 = (PyObject *)&PyBool_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_60, 1, tmp_tuple_element_17);
                tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_60);
                Py_DECREF(tmp_subscript_value_60);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_59, 2, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_subscript_value_59);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_ass_subvalue_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_59);
            Py_DECREF(tmp_subscript_value_59);
            if (tmp_ass_subvalue_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_53 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_53 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_53);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_53);

                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_53 = mod_consts[128];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53);
            Py_DECREF(tmp_ass_subvalue_53);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_61;
            tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_61 == NULL)) {
                tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7->m_frame.f_lineno = 107;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_61, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[129], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_54;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_61;
            PyObject *tmp_ass_subscribed_54;
            PyObject *tmp_ass_subscript_54;
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_subscript_value_61 = (PyObject *)&PyFloat_Type;
            tmp_ass_subvalue_54 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_61);
            if (tmp_ass_subvalue_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_54 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_54 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_54);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_54);

                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_54 = mod_consts[129];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54);
            Py_DECREF(tmp_ass_subvalue_54);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_62;
            tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_62 == NULL)) {
                tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7->m_frame.f_lineno = 108;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_62, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[130], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_55;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_62;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_ass_subscribed_55;
            PyObject *tmp_ass_subscript_55;
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_tuple_element_18 = Py_None;
            tmp_subscript_value_62 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_71;
                PyObject *tmp_subscript_value_63;
                PyObject *tmp_tuple_element_19;
                PyTuple_SET_ITEM0(tmp_subscript_value_62, 0, tmp_tuple_element_18);
                tmp_tuple_element_18 = (PyObject *)&PyUnicode_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_62, 1, tmp_tuple_element_18);
                tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[14]);

                if (unlikely(tmp_expression_value_71 == NULL)) {
                    tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                }

                if (tmp_expression_value_71 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_tuple_element_19 == NULL)) {
                    tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                tmp_subscript_value_63 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_63, 0, tmp_tuple_element_19);
                tmp_tuple_element_19 = (PyObject *)&PyUnicode_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_63, 1, tmp_tuple_element_19);
                tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_63);
                Py_DECREF(tmp_subscript_value_63);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_62, 2, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_subscript_value_62);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_ass_subvalue_55 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_62);
            Py_DECREF(tmp_subscript_value_62);
            if (tmp_ass_subvalue_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_55 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_55 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_55);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_55);

                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_55 = mod_consts[130];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_55, tmp_ass_subscript_55, tmp_ass_subvalue_55);
            Py_DECREF(tmp_ass_subvalue_55);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_63;
            tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_63 == NULL)) {
                tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7->m_frame.f_lineno = 109;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_63, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_56;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_64;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_ass_subscribed_56;
            PyObject *tmp_ass_subscript_56;
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_tuple_element_20 = Py_None;
            tmp_subscript_value_64 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_73;
                PyObject *tmp_subscript_value_65;
                PyObject *tmp_tuple_element_21;
                PyTuple_SET_ITEM0(tmp_subscript_value_64, 0, tmp_tuple_element_20);
                tmp_tuple_element_20 = (PyObject *)&PyUnicode_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_64, 1, tmp_tuple_element_20);
                tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[14]);

                if (unlikely(tmp_expression_value_73 == NULL)) {
                    tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                }

                if (tmp_expression_value_73 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_tuple_element_21 == NULL)) {
                    tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_tuple_element_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                tmp_subscript_value_65 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_65, 0, tmp_tuple_element_21);
                tmp_tuple_element_21 = (PyObject *)&PyUnicode_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_65, 1, tmp_tuple_element_21);
                tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_65);
                Py_DECREF(tmp_subscript_value_65);
                if (tmp_tuple_element_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_64, 2, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_subscript_value_64);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_ass_subvalue_56 = LOOKUP_SUBSCRIPT(tmp_expression_value_72, tmp_subscript_value_64);
            Py_DECREF(tmp_subscript_value_64);
            if (tmp_ass_subvalue_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_56 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_56);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_56);

                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_56 = mod_consts[131];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_56, tmp_ass_subscript_56, tmp_ass_subvalue_56);
            Py_DECREF(tmp_ass_subvalue_56);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_64;
            tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_64 == NULL)) {
                tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7->m_frame.f_lineno = 110;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_64, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_57;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_66;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_ass_subscribed_57;
            PyObject *tmp_ass_subscript_57;
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_tuple_element_22 = Py_None;
            tmp_subscript_value_66 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_75;
                PyObject *tmp_subscript_value_67;
                PyObject *tmp_tuple_element_23;
                PyTuple_SET_ITEM0(tmp_subscript_value_66, 0, tmp_tuple_element_22);
                tmp_tuple_element_22 = (PyObject *)&PyUnicode_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_66, 1, tmp_tuple_element_22);
                tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[14]);

                if (unlikely(tmp_expression_value_75 == NULL)) {
                    tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                }

                if (tmp_expression_value_75 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_tuple_element_23 == NULL)) {
                    tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_tuple_element_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                tmp_subscript_value_67 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_67, 0, tmp_tuple_element_23);
                tmp_tuple_element_23 = (PyObject *)&PyUnicode_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_67, 1, tmp_tuple_element_23);
                tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_67);
                Py_DECREF(tmp_subscript_value_67);
                if (tmp_tuple_element_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_66, 2, tmp_tuple_element_22);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_subscript_value_66);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_ass_subvalue_57 = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_66);
            Py_DECREF(tmp_subscript_value_66);
            if (tmp_ass_subvalue_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_57 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_57 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_57);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_57);

                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_57 = mod_consts[132];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_57, tmp_ass_subscript_57, tmp_ass_subvalue_57);
            Py_DECREF(tmp_ass_subvalue_57);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_65;
            tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_65 == NULL)) {
                tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7->m_frame.f_lineno = 111;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_65, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[133], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_58;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_68;
            PyObject *tmp_ass_subscribed_58;
            PyObject *tmp_ass_subscript_58;
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_subscript_value_68 = (PyObject *)&PyFloat_Type;
            tmp_ass_subvalue_58 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_68);
            if (tmp_ass_subvalue_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_58 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_58 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_58);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_58);

                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_58 = mod_consts[133];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_58, tmp_ass_subscript_58, tmp_ass_subvalue_58);
            Py_DECREF(tmp_ass_subvalue_58);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_66;
            tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_66 == NULL)) {
                tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7->m_frame.f_lineno = 112;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_66, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_59;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_subscript_value_69;
            PyObject *tmp_ass_subscribed_59;
            PyObject *tmp_ass_subscript_59;
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_subscript_value_69 = (PyObject *)&PyFloat_Type;
            tmp_ass_subvalue_59 = LOOKUP_SUBSCRIPT(tmp_expression_value_77, tmp_subscript_value_69);
            if (tmp_ass_subvalue_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_59 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_59 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_59);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_59);

                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_59 = mod_consts[134];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_59, tmp_ass_subscript_59, tmp_ass_subvalue_59);
            Py_DECREF(tmp_ass_subvalue_59);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_67;
            tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_67 == NULL)) {
                tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7->m_frame.f_lineno = 113;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_67, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[135], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_60;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_70;
            PyObject *tmp_ass_subscribed_60;
            PyObject *tmp_ass_subscript_60;
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_subscript_value_70 = (PyObject *)&PyFloat_Type;
            tmp_ass_subvalue_60 = LOOKUP_SUBSCRIPT(tmp_expression_value_78, tmp_subscript_value_70);
            if (tmp_ass_subvalue_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_60 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_60 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_60);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_60);

                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_60 = mod_consts[135];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_60, tmp_ass_subscript_60, tmp_ass_subvalue_60);
            Py_DECREF(tmp_ass_subvalue_60);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_68;
            tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_68 == NULL)) {
                tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7->m_frame.f_lineno = 114;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_68, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_61;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_71;
            PyObject *tmp_ass_subscribed_61;
            PyObject *tmp_ass_subscript_61;
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_subscript_value_71 = (PyObject *)&PyBool_Type;
            tmp_ass_subvalue_61 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_71);
            if (tmp_ass_subvalue_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_61 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__6_ScrollbarTheme_103, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_61 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_61);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_61);

                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_61 = mod_consts[136];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_61, tmp_ass_subscript_61, tmp_ass_subvalue_61);
            Py_DECREF(tmp_ass_subvalue_61);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_630c7289fe1a9eb66e0b37e3d14d7b7a_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_22;
        skip_nested_handling_6:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_value_69;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_8;
            tmp_called_value_69 = (PyObject *)&PyType_Type;
            tmp_tuple_element_24 = mod_consts[125];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = mod_consts[77];
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_flet_core$theme$$$class__6_ScrollbarTheme_103;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_6__class_decl_dict;
            frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 103;
            tmp_assign_source_53 = CALL_FUNCTION(tmp_called_value_69, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto try_except_handler_22;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_args_element_value_4 = outline_5_var___class__;
        Py_INCREF(tmp_args_element_value_4);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_flet_core$theme$$$class__6_ScrollbarTheme_103);
        locals_flet_core$theme$$$class__6_ScrollbarTheme_103 = NULL;
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

        Py_DECREF(locals_flet_core$theme$$$class__6_ScrollbarTheme_103);
        locals_flet_core$theme$$$class__6_ScrollbarTheme_103 = NULL;
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
        exception_lineno = 103;
        goto try_except_handler_20;
        outline_result_6:;
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 102;
        tmp_assign_source_52 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[67], tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_52);
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

    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_55;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_23;
        }
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_flet_core$theme$$$class__7_TabsTheme_118 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[44], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[69], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_56ac8dc5d7d00c5bc73464d00c470b6a_8 = MAKE_CLASS_FRAME(codeobj_56ac8dc5d7d00c5bc73464d00c470b6a, module_flet_core$theme, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_56ac8dc5d7d00c5bc73464d00c470b6a_8);
        assert(Py_REFCNT(frame_56ac8dc5d7d00c5bc73464d00c470b6a_8) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_70;
            tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_70 == NULL)) {
                tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_56ac8dc5d7d00c5bc73464d00c470b6a_8->m_frame.f_lineno = 119;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_70, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_62;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_72;
            PyObject *tmp_ass_subscribed_62;
            PyObject *tmp_ass_subscript_62;
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_72 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_62 = LOOKUP_SUBSCRIPT(tmp_expression_value_80, tmp_subscript_value_72);
            if (tmp_ass_subvalue_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_62 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_62 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_62);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_62);

                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_62 = mod_consts[138];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_62, tmp_ass_subscript_62, tmp_ass_subvalue_62);
            Py_DECREF(tmp_ass_subvalue_62);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_71;
            tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_71 == NULL)) {
                tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_56ac8dc5d7d00c5bc73464d00c470b6a_8->m_frame.f_lineno = 120;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_71, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[139], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_63;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_subscript_value_73;
            PyObject *tmp_ass_subscribed_63;
            PyObject *tmp_ass_subscript_63;
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_73 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_subscript_value_73 == NULL)) {
                tmp_subscript_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_subscript_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subvalue_63 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_73);
            if (tmp_ass_subvalue_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_63 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_63 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_63);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_63);

                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_63 = mod_consts[139];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_63, tmp_ass_subscript_63, tmp_ass_subvalue_63);
            Py_DECREF(tmp_ass_subvalue_63);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_72;
            tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_72 == NULL)) {
                tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_56ac8dc5d7d00c5bc73464d00c470b6a_8->m_frame.f_lineno = 121;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_72, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_64;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_74;
            PyObject *tmp_ass_subscribed_64;
            PyObject *tmp_ass_subscript_64;
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_74 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_subscript_value_74 == NULL)) {
                tmp_subscript_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_subscript_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subvalue_64 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_74);
            if (tmp_ass_subvalue_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_64 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_64 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_64);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_64);

                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_64 = mod_consts[140];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_64, tmp_ass_subscript_64, tmp_ass_subvalue_64);
            Py_DECREF(tmp_ass_subvalue_64);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_73;
            tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_73 == NULL)) {
                tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_56ac8dc5d7d00c5bc73464d00c470b6a_8->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_73, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[141], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_65;
            PyObject *tmp_ass_subscribed_65;
            PyObject *tmp_ass_subscript_65;
            tmp_ass_subvalue_65 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_ass_subvalue_65 == NULL)) {
                tmp_ass_subvalue_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
            }

            if (tmp_ass_subvalue_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_65 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_65 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_65 = mod_consts[141];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_65, tmp_ass_subscript_65, tmp_ass_subvalue_65);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_74;
            tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_74 == NULL)) {
                tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_56ac8dc5d7d00c5bc73464d00c470b6a_8->m_frame.f_lineno = 123;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_74, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_66;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_subscript_value_75;
            PyObject *tmp_ass_subscribed_66;
            PyObject *tmp_ass_subscript_66;
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_75 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_66 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_75);
            if (tmp_ass_subvalue_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_66 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_66 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_66);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_66);

                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_66 = mod_consts[142];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_66, tmp_ass_subscript_66, tmp_ass_subvalue_66);
            Py_DECREF(tmp_ass_subvalue_66);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_75;
            tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_75 == NULL)) {
                tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_56ac8dc5d7d00c5bc73464d00c470b6a_8->m_frame.f_lineno = 124;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_75, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[143], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_67;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_subscript_value_76;
            PyObject *tmp_ass_subscribed_67;
            PyObject *tmp_ass_subscript_67;
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_76 = (PyObject *)&PyBool_Type;
            tmp_ass_subvalue_67 = LOOKUP_SUBSCRIPT(tmp_expression_value_84, tmp_subscript_value_76);
            if (tmp_ass_subvalue_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_67 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_67 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_67);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_67);

                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_67 = mod_consts[143];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_67, tmp_ass_subscript_67, tmp_ass_subvalue_67);
            Py_DECREF(tmp_ass_subvalue_67);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_76;
            tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_76 == NULL)) {
                tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_56ac8dc5d7d00c5bc73464d00c470b6a_8->m_frame.f_lineno = 125;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_76, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_68;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_subscript_value_77;
            PyObject *tmp_ass_subscribed_68;
            PyObject *tmp_ass_subscript_68;
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_77 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_68 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_77);
            if (tmp_ass_subvalue_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_68 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_68 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_68);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_68);

                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_68 = mod_consts[144];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_68, tmp_ass_subscript_68, tmp_ass_subvalue_68);
            Py_DECREF(tmp_ass_subvalue_68);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_77;
            tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_77 == NULL)) {
                tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_56ac8dc5d7d00c5bc73464d00c470b6a_8->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_77, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[145], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_69;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_subscript_value_78;
            PyObject *tmp_ass_subscribed_69;
            PyObject *tmp_ass_subscript_69;
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_78 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_69 = LOOKUP_SUBSCRIPT(tmp_expression_value_86, tmp_subscript_value_78);
            if (tmp_ass_subvalue_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_69 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_69 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_69);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_69);

                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_69 = mod_consts[145];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_69, tmp_ass_subscript_69, tmp_ass_subvalue_69);
            Py_DECREF(tmp_ass_subvalue_69);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_78;
            tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_78 == NULL)) {
                tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_56ac8dc5d7d00c5bc73464d00c470b6a_8->m_frame.f_lineno = 127;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_78, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[146], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_70;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_subscript_value_79;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_ass_subscribed_70;
            PyObject *tmp_ass_subscript_70;
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_tuple_element_25 = Py_None;
            tmp_subscript_value_79 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_88;
                PyObject *tmp_subscript_value_80;
                PyObject *tmp_tuple_element_26;
                PyTuple_SET_ITEM0(tmp_subscript_value_79, 0, tmp_tuple_element_25);
                tmp_tuple_element_25 = (PyObject *)&PyUnicode_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_79, 1, tmp_tuple_element_25);
                tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[14]);

                if (unlikely(tmp_expression_value_88 == NULL)) {
                    tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                }

                if (tmp_expression_value_88 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto tuple_build_exception_9;
                }
                tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_tuple_element_26 == NULL)) {
                    tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_tuple_element_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto tuple_build_exception_9;
                }
                tmp_subscript_value_80 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_80, 0, tmp_tuple_element_26);
                tmp_tuple_element_26 = (PyObject *)&PyUnicode_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_80, 1, tmp_tuple_element_26);
                tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_88, tmp_subscript_value_80);
                Py_DECREF(tmp_subscript_value_80);
                if (tmp_tuple_element_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_79, 2, tmp_tuple_element_25);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_subscript_value_79);
            goto frame_exception_exit_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_ass_subvalue_70 = LOOKUP_SUBSCRIPT(tmp_expression_value_87, tmp_subscript_value_79);
            Py_DECREF(tmp_subscript_value_79);
            if (tmp_ass_subvalue_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_70 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__7_TabsTheme_118, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_70 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_70);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_70);

                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_70 = mod_consts[146];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_70, tmp_ass_subscript_70, tmp_ass_subvalue_70);
            Py_DECREF(tmp_ass_subvalue_70);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_56ac8dc5d7d00c5bc73464d00c470b6a_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_56ac8dc5d7d00c5bc73464d00c470b6a_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_56ac8dc5d7d00c5bc73464d00c470b6a_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_56ac8dc5d7d00c5bc73464d00c470b6a_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_56ac8dc5d7d00c5bc73464d00c470b6a_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_25;
        skip_nested_handling_7:;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_called_value_79;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_9;
            tmp_called_value_79 = (PyObject *)&PyType_Type;
            tmp_tuple_element_27 = mod_consts[137];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_27);
            tmp_tuple_element_27 = mod_consts[77];
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_flet_core$theme$$$class__7_TabsTheme_118;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_7__class_decl_dict;
            frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 118;
            tmp_assign_source_57 = CALL_FUNCTION(tmp_called_value_79, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto try_except_handler_25;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_57;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_args_element_value_5 = outline_6_var___class__;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_flet_core$theme$$$class__7_TabsTheme_118);
        locals_flet_core$theme$$$class__7_TabsTheme_118 = NULL;
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

        Py_DECREF(locals_flet_core$theme$$$class__7_TabsTheme_118);
        locals_flet_core$theme$$$class__7_TabsTheme_118 = NULL;
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
        exception_lineno = 118;
        goto try_except_handler_23;
        outline_result_7:;
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 117;
        tmp_assign_source_56 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[67], tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_56);
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

    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_59;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_26;
        }
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_flet_core$theme$$$class__8_Theme_131 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[147];
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[44], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[69], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_58c1dd70601ecc8f8b68180c0ee4e347_9 = MAKE_CLASS_FRAME(codeobj_58c1dd70601ecc8f8b68180c0ee4e347, module_flet_core$theme, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_58c1dd70601ecc8f8b68180c0ee4e347_9);
        assert(Py_REFCNT(frame_58c1dd70601ecc8f8b68180c0ee4e347_9) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_80;
            tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_80 == NULL)) {
                tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_58c1dd70601ecc8f8b68180c0ee4e347_9->m_frame.f_lineno = 132;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_80, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[148], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_71;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_subscript_value_81;
            PyObject *tmp_ass_subscribed_71;
            PyObject *tmp_ass_subscript_71;
            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_89 == NULL)) {
                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_subscript_value_81 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_71 = LOOKUP_SUBSCRIPT(tmp_expression_value_89, tmp_subscript_value_81);
            if (tmp_ass_subvalue_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscribed_71 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_71 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_71);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_71);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_71 = mod_consts[148];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_71, tmp_ass_subscript_71, tmp_ass_subvalue_71);
            Py_DECREF(tmp_ass_subvalue_71);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_81;
            tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_81 == NULL)) {
                tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_58c1dd70601ecc8f8b68180c0ee4e347_9->m_frame.f_lineno = 133;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_81, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_72;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_subscript_value_82;
            PyObject *tmp_ass_subscribed_72;
            PyObject *tmp_ass_subscript_72;
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_subscript_value_82 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_72 = LOOKUP_SUBSCRIPT(tmp_expression_value_90, tmp_subscript_value_82);
            if (tmp_ass_subvalue_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscribed_72 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_72 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_72);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_72);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_72 = mod_consts[149];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_72, tmp_ass_subscript_72, tmp_ass_subvalue_72);
            Py_DECREF(tmp_ass_subvalue_72);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_82;
            tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_82 == NULL)) {
                tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_58c1dd70601ecc8f8b68180c0ee4e347_9->m_frame.f_lineno = 134;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_82, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[150], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_73;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_subscript_value_83;
            PyObject *tmp_ass_subscribed_73;
            PyObject *tmp_ass_subscript_73;
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_subscript_value_83 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_subscript_value_83 == NULL)) {
                tmp_subscript_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
            }

            if (tmp_subscript_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subvalue_73 = LOOKUP_SUBSCRIPT(tmp_expression_value_91, tmp_subscript_value_83);
            if (tmp_ass_subvalue_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscribed_73 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_73 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_73);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_73);

                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_73 = mod_consts[150];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_73, tmp_ass_subscript_73, tmp_ass_subvalue_73);
            Py_DECREF(tmp_ass_subvalue_73);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_83;
            tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_83 == NULL)) {
                tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_58c1dd70601ecc8f8b68180c0ee4e347_9->m_frame.f_lineno = 135;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_83, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[151], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_74;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_subscript_value_84;
            PyObject *tmp_ass_subscribed_74;
            PyObject *tmp_ass_subscript_74;
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_subscript_value_84 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_subscript_value_84 == NULL)) {
                tmp_subscript_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            if (tmp_subscript_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subvalue_74 = LOOKUP_SUBSCRIPT(tmp_expression_value_92, tmp_subscript_value_84);
            if (tmp_ass_subvalue_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscribed_74 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_74 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_74);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_74);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_74 = mod_consts[151];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_74, tmp_ass_subscript_74, tmp_ass_subvalue_74);
            Py_DECREF(tmp_ass_subvalue_74);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_84;
            tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_84 == NULL)) {
                tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_58c1dd70601ecc8f8b68180c0ee4e347_9->m_frame.f_lineno = 136;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_84, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_75;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_subscript_value_85;
            PyObject *tmp_ass_subscribed_75;
            PyObject *tmp_ass_subscript_75;
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_subscript_value_85 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_subscript_value_85 == NULL)) {
                tmp_subscript_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            if (tmp_subscript_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subvalue_75 = LOOKUP_SUBSCRIPT(tmp_expression_value_93, tmp_subscript_value_85);
            if (tmp_ass_subvalue_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscribed_75 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_75 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_75);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_75);

                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_75 = mod_consts[152];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_75, tmp_ass_subscript_75, tmp_ass_subvalue_75);
            Py_DECREF(tmp_ass_subvalue_75);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_85;
            tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_85 == NULL)) {
                tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_58c1dd70601ecc8f8b68180c0ee4e347_9->m_frame.f_lineno = 137;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_85, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_76;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_subscript_value_86;
            PyObject *tmp_ass_subscribed_76;
            PyObject *tmp_ass_subscript_76;
            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_94 == NULL)) {
                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_subscript_value_86 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[125]);

            if (unlikely(tmp_subscript_value_86 == NULL)) {
                tmp_subscript_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
            }

            if (tmp_subscript_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subvalue_76 = LOOKUP_SUBSCRIPT(tmp_expression_value_94, tmp_subscript_value_86);
            if (tmp_ass_subvalue_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscribed_76 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_76 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_76);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_76);

                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_76 = mod_consts[153];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_76, tmp_ass_subscript_76, tmp_ass_subvalue_76);
            Py_DECREF(tmp_ass_subvalue_76);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_86;
            tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_86 == NULL)) {
                tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_58c1dd70601ecc8f8b68180c0ee4e347_9->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_86, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[154], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_77;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_subscript_value_87;
            PyObject *tmp_ass_subscribed_77;
            PyObject *tmp_ass_subscript_77;
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_subscript_value_87 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_subscript_value_87 == NULL)) {
                tmp_subscript_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
            }

            if (tmp_subscript_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subvalue_77 = LOOKUP_SUBSCRIPT(tmp_expression_value_95, tmp_subscript_value_87);
            if (tmp_ass_subvalue_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscribed_77 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_77 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_77);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_77);

                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_77 = mod_consts[154];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_77, tmp_ass_subscript_77, tmp_ass_subvalue_77);
            Py_DECREF(tmp_ass_subvalue_77);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_87;
            tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_87 == NULL)) {
                tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_58c1dd70601ecc8f8b68180c0ee4e347_9->m_frame.f_lineno = 139;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_87, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[155], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_78;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_subscript_value_88;
            PyObject *tmp_ass_subscribed_78;
            PyObject *tmp_ass_subscript_78;
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_subscript_value_88 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_78 = LOOKUP_SUBSCRIPT(tmp_expression_value_96, tmp_subscript_value_88);
            if (tmp_ass_subvalue_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscribed_78 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_78 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_78);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_78);

                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_78 = mod_consts[155];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_78, tmp_ass_subscript_78, tmp_ass_subvalue_78);
            Py_DECREF(tmp_ass_subvalue_78);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_88;
            tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_88 == NULL)) {
                tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_58c1dd70601ecc8f8b68180c0ee4e347_9->m_frame.f_lineno = 140;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_88, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[156], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_79;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_subscript_value_89;
            PyObject *tmp_ass_subscribed_79;
            PyObject *tmp_ass_subscript_79;
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_expression_value_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_subscript_value_89 = (PyObject *)&PyBool_Type;
            tmp_ass_subvalue_79 = LOOKUP_SUBSCRIPT(tmp_expression_value_97, tmp_subscript_value_89);
            if (tmp_ass_subvalue_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscribed_79 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_79 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_79);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_79);

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_79 = mod_consts[156];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_79, tmp_ass_subscript_79, tmp_ass_subvalue_79);
            Py_DECREF(tmp_ass_subvalue_79);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_89;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_expression_value_98;
            tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_89 == NULL)) {
                tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_expression_value_98 == NULL)) {
                tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
            }

            if (tmp_expression_value_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[47]);
            if (tmp_kw_call_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_58c1dd70601ecc8f8b68180c0ee4e347_9->m_frame.f_lineno = 141;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_89, kw_values, mod_consts[71]);
            }

            Py_DECREF(tmp_kw_call_value_0_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[157], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_80;
            PyObject *tmp_ass_subscribed_80;
            PyObject *tmp_ass_subscript_80;
            tmp_ass_subvalue_80 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_ass_subvalue_80 == NULL)) {
                tmp_ass_subvalue_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
            }

            if (tmp_ass_subvalue_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscribed_80 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_80 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_80 = mod_consts[157];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_80, tmp_ass_subscript_80, tmp_ass_subvalue_80);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_90;
            PyObject *tmp_kw_call_value_0_2;
            tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_value_90 == NULL)) {
                tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_called_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
                tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
            }

            if (tmp_kw_call_value_0_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_58c1dd70601ecc8f8b68180c0ee4e347_9->m_frame.f_lineno = 142;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_90, kw_values, mod_consts[158]);
            }

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[159], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_81;
            PyObject *tmp_ass_subscribed_81;
            PyObject *tmp_ass_subscript_81;
            tmp_ass_subvalue_81 = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_ass_subvalue_81 == NULL)) {
                tmp_ass_subvalue_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
            }

            if (tmp_ass_subvalue_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscribed_81 = DICT_GET_ITEM0(locals_flet_core$theme$$$class__8_Theme_131, mod_consts[69]);

            if (unlikely(tmp_ass_subscribed_81 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[69]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_81 = mod_consts[159];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_81, tmp_ass_subscript_81, tmp_ass_subvalue_81);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_58c1dd70601ecc8f8b68180c0ee4e347_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_58c1dd70601ecc8f8b68180c0ee4e347_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_58c1dd70601ecc8f8b68180c0ee4e347_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_58c1dd70601ecc8f8b68180c0ee4e347_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_58c1dd70601ecc8f8b68180c0ee4e347_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_28;
        skip_nested_handling_8:;
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_called_value_91;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_value_10;
            tmp_called_value_91 = (PyObject *)&PyType_Type;
            tmp_tuple_element_28 = mod_consts[147];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = mod_consts[77];
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = locals_flet_core$theme$$$class__8_Theme_131;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_8__class_decl_dict;
            frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 131;
            tmp_assign_source_61 = CALL_FUNCTION(tmp_called_value_91, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto try_except_handler_28;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_61;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_args_element_value_6 = outline_7_var___class__;
        Py_INCREF(tmp_args_element_value_6);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_flet_core$theme$$$class__8_Theme_131);
        locals_flet_core$theme$$$class__8_Theme_131 = NULL;
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

        Py_DECREF(locals_flet_core$theme$$$class__8_Theme_131);
        locals_flet_core$theme$$$class__8_Theme_131 = NULL;
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
        exception_lineno = 131;
        goto try_except_handler_26;
        outline_result_8:;
        frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame.f_lineno = 130;
        tmp_assign_source_60 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[67], tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$theme, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_60);
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

    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
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

    goto frame_no_exception_9;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8f025e3a5f8bbb5551aa2949a42fd2f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f025e3a5f8bbb5551aa2949a42fd2f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f025e3a5f8bbb5551aa2949a42fd2f9, exception_lineno);
    }



    assertFrameObject(frame_8f025e3a5f8bbb5551aa2949a42fd2f9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_9:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flet_core.theme", false);

    Py_INCREF(module_flet_core$theme);
    return module_flet_core$theme;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$theme, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$theme", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
