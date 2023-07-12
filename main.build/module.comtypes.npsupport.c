/* Generated code for Python module 'comtypes.npsupport'
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

/* The "module_comtypes$npsupport" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_comtypes$npsupport;
PyDictObject *moduledict_comtypes$npsupport;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[66];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[66];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("comtypes.npsupport"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 66; i++) {
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
void checkModuleConstants_comtypes$npsupport(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 66; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_698f9c3d6eeeb29de875050bbca2b981;
static PyCodeObject *codeobj_3010112a52ab7f68dcc268daf328a870;
static PyCodeObject *codeobj_bf528733384a926278414dbb4396f91f;
static PyCodeObject *codeobj_b4998e87e2517f435df8689eb6e9268b;
static PyCodeObject *codeobj_7064bed8eead52a31038611b2826cdf5;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[45]; CHECK_OBJECT(module_filename_obj);
    codeobj_698f9c3d6eeeb29de875050bbca2b981 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[61], mod_consts[61], NULL, NULL, 0, 0, 0);
    codeobj_3010112a52ab7f68dcc268daf328a870 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[62], NULL, 0, 0, 0);
    codeobj_bf528733384a926278414dbb4396f91f = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[63], NULL, 0, 0, 0);
    codeobj_b4998e87e2517f435df8689eb6e9268b = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[64], NULL, 1, 0, 0);
    codeobj_7064bed8eead52a31038611b2826cdf5 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[64], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_comtypes$npsupport$$$function__1__make_variant_dtype();


static PyObject *MAKE_FUNCTION_comtypes$npsupport$$$function__2_isndarray();


static PyObject *MAKE_FUNCTION_comtypes$npsupport$$$function__3_isdatetime64();


static PyObject *MAKE_FUNCTION_comtypes$npsupport$$$function__4__check_ctypeslib_typecodes();


// The module function definitions.
static PyObject *impl_comtypes$npsupport$$$function__1__make_variant_dtype(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_ptr_typecode = NULL;
    PyObject *var__tagBRECORD_format = NULL;
    PyObject *var_U_VARIANT_format = NULL;
    PyObject *var_tagVARIANT_format = NULL;
    struct Nuitka_FrameObject *frame_bf528733384a926278414dbb4396f91f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bf528733384a926278414dbb4396f91f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bf528733384a926278414dbb4396f91f)) {
        Py_XDECREF(cache_frame_bf528733384a926278414dbb4396f91f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf528733384a926278414dbb4396f91f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf528733384a926278414dbb4396f91f = MAKE_FUNCTION_FRAME(codeobj_bf528733384a926278414dbb4396f91f, module_comtypes$npsupport, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf528733384a926278414dbb4396f91f->m_type_description == NULL);
    frame_bf528733384a926278414dbb4396f91f = cache_frame_bf528733384a926278414dbb4396f91f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf528733384a926278414dbb4396f91f);
    assert(Py_REFCNT(frame_bf528733384a926278414dbb4396f91f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_1 = mod_consts[1];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_1 = mod_consts[2];
        condexpr_end_1:;
        assert(var_ptr_typecode == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_ptr_typecode = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[3];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_ptr_typecode);
        tmp_tuple_element_1 = var_ptr_typecode;
        PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_1);
        tmp_assign_source_2 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_tuple_element_2;
            PyList_SET_ITEM(tmp_assign_source_2, 0, tmp_list_element_1);
            tmp_tuple_element_2 = mod_consts[4];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_ptr_typecode);
            tmp_tuple_element_2 = var_ptr_typecode;
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_2);
            PyList_SET_ITEM(tmp_assign_source_2, 1, tmp_list_element_1);
        }
        assert(var__tagBRECORD_format == NULL);
        var__tagBRECORD_format = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[5];
        tmp_dict_value_1 = LIST_COPY(mod_consts[6]);
        tmp_assign_source_3 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_list_element_2;
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[7];
            tmp_list_element_2 = mod_consts[8];
            tmp_dict_value_1 = MAKE_LIST_EMPTY(19);
            PyList_SET_ITEM0(tmp_dict_value_1, 0, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[9];
            PyList_SET_ITEM0(tmp_dict_value_1, 1, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[8];
            PyList_SET_ITEM0(tmp_dict_value_1, 2, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[10];
            PyList_SET_ITEM0(tmp_dict_value_1, 3, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[11];
            PyList_SET_ITEM0(tmp_dict_value_1, 4, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[10];
            PyList_SET_ITEM0(tmp_dict_value_1, 5, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[12];
            PyList_SET_ITEM0(tmp_dict_value_1, 6, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[13];
            PyList_SET_ITEM0(tmp_dict_value_1, 7, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[2];
            PyList_SET_ITEM0(tmp_dict_value_1, 8, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[1];
            PyList_SET_ITEM0(tmp_dict_value_1, 9, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[2];
            PyList_SET_ITEM0(tmp_dict_value_1, 10, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[14];
            PyList_SET_ITEM0(tmp_dict_value_1, 11, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[15];
            PyList_SET_ITEM0(tmp_dict_value_1, 12, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[11];
            PyList_SET_ITEM0(tmp_dict_value_1, 13, tmp_list_element_2);
            CHECK_OBJECT(var_ptr_typecode);
            tmp_list_element_2 = var_ptr_typecode;
            PyList_SET_ITEM0(tmp_dict_value_1, 14, tmp_list_element_2);
            CHECK_OBJECT(var_ptr_typecode);
            tmp_list_element_2 = var_ptr_typecode;
            PyList_SET_ITEM0(tmp_dict_value_1, 15, tmp_list_element_2);
            CHECK_OBJECT(var_ptr_typecode);
            tmp_list_element_2 = var_ptr_typecode;
            PyList_SET_ITEM0(tmp_dict_value_1, 16, tmp_list_element_2);
            CHECK_OBJECT(var_ptr_typecode);
            tmp_list_element_2 = var_ptr_typecode;
            PyList_SET_ITEM0(tmp_dict_value_1, 17, tmp_list_element_2);
            CHECK_OBJECT(var__tagBRECORD_format);
            tmp_list_element_2 = var__tagBRECORD_format;
            PyList_SET_ITEM0(tmp_dict_value_1, 18, tmp_list_element_2);
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            tmp_dict_value_1 = MAKE_LIST_REPEATED(19, mod_consts[17]);
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        assert(var_U_VARIANT_format == NULL);
        var_U_VARIANT_format = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_list_element_3;
        tmp_list_element_3 = mod_consts[18];
        tmp_assign_source_4 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_tuple_element_3;
            PyList_SET_ITEM0(tmp_assign_source_4, 0, tmp_list_element_3);
            tmp_list_element_3 = mod_consts[19];
            PyList_SET_ITEM0(tmp_assign_source_4, 1, tmp_list_element_3);
            tmp_list_element_3 = mod_consts[20];
            PyList_SET_ITEM0(tmp_assign_source_4, 2, tmp_list_element_3);
            tmp_list_element_3 = mod_consts[21];
            PyList_SET_ITEM0(tmp_assign_source_4, 3, tmp_list_element_3);
            tmp_tuple_element_3 = mod_consts[22];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_U_VARIANT_format);
            tmp_tuple_element_3 = var_U_VARIANT_format;
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_3);
            PyList_SET_ITEM(tmp_assign_source_4, 4, tmp_list_element_3);
        }
        assert(var_tagVARIANT_format == NULL);
        var_tagVARIANT_format = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tagVARIANT_format);
        tmp_args_element_value_1 = var_tagVARIANT_format;
        frame_bf528733384a926278414dbb4396f91f->m_frame.f_lineno = 56;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[24], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_bf528733384a926278414dbb4396f91f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf528733384a926278414dbb4396f91f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf528733384a926278414dbb4396f91f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf528733384a926278414dbb4396f91f,
        type_description_1,
        var_ptr_typecode,
        var__tagBRECORD_format,
        var_U_VARIANT_format,
        var_tagVARIANT_format
    );


    // Release cached frame if used for exception.
    if (frame_bf528733384a926278414dbb4396f91f == cache_frame_bf528733384a926278414dbb4396f91f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf528733384a926278414dbb4396f91f);
        cache_frame_bf528733384a926278414dbb4396f91f = NULL;
    }

    assertFrameObject(frame_bf528733384a926278414dbb4396f91f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ptr_typecode);
    Py_DECREF(var_ptr_typecode);
    var_ptr_typecode = NULL;
    CHECK_OBJECT(var__tagBRECORD_format);
    Py_DECREF(var__tagBRECORD_format);
    var__tagBRECORD_format = NULL;
    CHECK_OBJECT(var_U_VARIANT_format);
    Py_DECREF(var_U_VARIANT_format);
    var_U_VARIANT_format = NULL;
    CHECK_OBJECT(var_tagVARIANT_format);
    Py_DECREF(var_tagVARIANT_format);
    var_tagVARIANT_format = NULL;
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

    Py_XDECREF(var_ptr_typecode);
    var_ptr_typecode = NULL;
    Py_XDECREF(var__tagBRECORD_format);
    var__tagBRECORD_format = NULL;
    Py_XDECREF(var_U_VARIANT_format);
    var_U_VARIANT_format = NULL;
    Py_XDECREF(var_tagVARIANT_format);
    var_tagVARIANT_format = NULL;
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


static PyObject *impl_comtypes$npsupport$$$function__2_isndarray(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_7064bed8eead52a31038611b2826cdf5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7064bed8eead52a31038611b2826cdf5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7064bed8eead52a31038611b2826cdf5)) {
        Py_XDECREF(cache_frame_7064bed8eead52a31038611b2826cdf5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7064bed8eead52a31038611b2826cdf5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7064bed8eead52a31038611b2826cdf5 = MAKE_FUNCTION_FRAME(codeobj_7064bed8eead52a31038611b2826cdf5, module_comtypes$npsupport, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7064bed8eead52a31038611b2826cdf5->m_type_description == NULL);
    frame_7064bed8eead52a31038611b2826cdf5 = cache_frame_7064bed8eead52a31038611b2826cdf5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7064bed8eead52a31038611b2826cdf5);
    assert(Py_REFCNT(frame_7064bed8eead52a31038611b2826cdf5) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_7064bed8eead52a31038611b2826cdf5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7064bed8eead52a31038611b2826cdf5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7064bed8eead52a31038611b2826cdf5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7064bed8eead52a31038611b2826cdf5,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7064bed8eead52a31038611b2826cdf5 == cache_frame_7064bed8eead52a31038611b2826cdf5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7064bed8eead52a31038611b2826cdf5);
        cache_frame_7064bed8eead52a31038611b2826cdf5 = NULL;
    }

    assertFrameObject(frame_7064bed8eead52a31038611b2826cdf5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$npsupport$$$function__3_isdatetime64(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_b4998e87e2517f435df8689eb6e9268b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b4998e87e2517f435df8689eb6e9268b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b4998e87e2517f435df8689eb6e9268b)) {
        Py_XDECREF(cache_frame_b4998e87e2517f435df8689eb6e9268b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4998e87e2517f435df8689eb6e9268b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4998e87e2517f435df8689eb6e9268b = MAKE_FUNCTION_FRAME(codeobj_b4998e87e2517f435df8689eb6e9268b, module_comtypes$npsupport, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b4998e87e2517f435df8689eb6e9268b->m_type_description == NULL);
    frame_b4998e87e2517f435df8689eb6e9268b = cache_frame_b4998e87e2517f435df8689eb6e9268b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b4998e87e2517f435df8689eb6e9268b);
    assert(Py_REFCNT(frame_b4998e87e2517f435df8689eb6e9268b) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_b4998e87e2517f435df8689eb6e9268b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4998e87e2517f435df8689eb6e9268b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4998e87e2517f435df8689eb6e9268b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4998e87e2517f435df8689eb6e9268b,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b4998e87e2517f435df8689eb6e9268b == cache_frame_b4998e87e2517f435df8689eb6e9268b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b4998e87e2517f435df8689eb6e9268b);
        cache_frame_b4998e87e2517f435df8689eb6e9268b = NULL;
    }

    assertFrameObject(frame_b4998e87e2517f435df8689eb6e9268b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$npsupport$$$function__4__check_ctypeslib_typecodes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_np = NULL;
    PyObject *var_ctypeslib = NULL;
    PyObject *var__typecodes = NULL;
    PyObject *var_as_ctypes_type = NULL;
    PyObject *var_dtypes_to_ctypes = NULL;
    PyObject *var_tp = NULL;
    PyObject *var_ctype_for = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_3010112a52ab7f68dcc268daf328a870;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3010112a52ab7f68dcc268daf328a870 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3010112a52ab7f68dcc268daf328a870)) {
        Py_XDECREF(cache_frame_3010112a52ab7f68dcc268daf328a870);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3010112a52ab7f68dcc268daf328a870 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3010112a52ab7f68dcc268daf328a870 = MAKE_FUNCTION_FRAME(codeobj_3010112a52ab7f68dcc268daf328a870, module_comtypes$npsupport, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3010112a52ab7f68dcc268daf328a870->m_type_description == NULL);
    frame_3010112a52ab7f68dcc268daf328a870 = cache_frame_3010112a52ab7f68dcc268daf328a870;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3010112a52ab7f68dcc268daf328a870);
    assert(Py_REFCNT(frame_3010112a52ab7f68dcc268daf328a870) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[23];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$npsupport;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[17];
        frame_3010112a52ab7f68dcc268daf328a870->m_frame.f_lineno = 82;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_np == NULL);
        var_np = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[23];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_comtypes$npsupport;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[31];
        tmp_level_value_2 = mod_consts[17];
        frame_3010112a52ab7f68dcc268daf328a870->m_frame.f_lineno = 83;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$npsupport,
                mod_consts[32],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctypeslib == NULL);
        var_ctypeslib = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[33];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_comtypes$npsupport;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[34];
        tmp_level_value_3 = mod_consts[17];
        frame_3010112a52ab7f68dcc268daf328a870->m_frame.f_lineno = 85;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_comtypes$npsupport,
                mod_consts[35],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[35]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(var__typecodes == NULL);
        var__typecodes = tmp_assign_source_3;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_3010112a52ab7f68dcc268daf328a870, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_3010112a52ab7f68dcc268daf328a870, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[33];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_comtypes$npsupport;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[36];
        tmp_level_value_4 = mod_consts[17];
        frame_3010112a52ab7f68dcc268daf328a870->m_frame.f_lineno = 87;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_comtypes$npsupport,
                mod_consts[37],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        assert(var_as_ctypes_type == NULL);
        var_as_ctypes_type = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY();
        assert(var_dtypes_to_ctypes == NULL);
        var_dtypes_to_ctypes = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_np);
        tmp_expression_value_2 = var_np;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        frame_3010112a52ab7f68dcc268daf328a870->m_frame.f_lineno = 91;
        tmp_set_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_set_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_iter_arg_1 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_6 == NULL));
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
                type_description_1 = "ooooooo";
                exception_lineno = 91;
                goto try_except_handler_4;
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
            PyObject *old = var_tp;
            var_tp = tmp_assign_source_8;
            Py_INCREF(var_tp);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        if (var_as_ctypes_type == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_called_value_2 = var_as_ctypes_type;
        CHECK_OBJECT(var_tp);
        tmp_args_element_value_1 = var_tp;
        frame_3010112a52ab7f68dcc268daf328a870->m_frame.f_lineno = 93;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_ctype_for;
            var_ctype_for = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_ctype_for);
        tmp_ass_subvalue_1 = var_ctype_for;
        if (var_dtypes_to_ctypes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_1 = var_dtypes_to_ctypes;
        if (var_np == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_1 = var_np;
        CHECK_OBJECT(var_tp);
        tmp_args_element_value_2 = var_tp;
        frame_3010112a52ab7f68dcc268daf328a870->m_frame.f_lineno = 94;
        tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[24], tmp_args_element_value_2);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[42]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_3010112a52ab7f68dcc268daf328a870, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_3010112a52ab7f68dcc268daf328a870, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_NotImplementedError;
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
    goto try_continue_handler_6;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 92;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3010112a52ab7f68dcc268daf328a870->m_frame) frame_3010112a52ab7f68dcc268daf328a870->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
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
    // try continue handler code:
    try_continue_handler_6:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto loop_start_1;
    // End of try:
    // End of try:
    try_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 91;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        if (var_dtypes_to_ctypes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_assattr_value_1 = var_dtypes_to_ctypes;
        CHECK_OBJECT(var_ctypeslib);
        tmp_assattr_target_1 = var_ctypeslib;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 84;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3010112a52ab7f68dcc268daf328a870->m_frame) frame_3010112a52ab7f68dcc268daf328a870->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_4;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_expression_value_4;
        if (var_ctypeslib == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = var_ctypeslib;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[35]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_3010112a52ab7f68dcc268daf328a870, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3010112a52ab7f68dcc268daf328a870->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3010112a52ab7f68dcc268daf328a870, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3010112a52ab7f68dcc268daf328a870,
        type_description_1,
        var_np,
        var_ctypeslib,
        var__typecodes,
        var_as_ctypes_type,
        var_dtypes_to_ctypes,
        var_tp,
        var_ctype_for
    );


    // Release cached frame if used for exception.
    if (frame_3010112a52ab7f68dcc268daf328a870 == cache_frame_3010112a52ab7f68dcc268daf328a870) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3010112a52ab7f68dcc268daf328a870);
        cache_frame_3010112a52ab7f68dcc268daf328a870 = NULL;
    }

    assertFrameObject(frame_3010112a52ab7f68dcc268daf328a870);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_np);
    var_np = NULL;
    Py_XDECREF(var_ctypeslib);
    var_ctypeslib = NULL;
    Py_XDECREF(var__typecodes);
    var__typecodes = NULL;
    Py_XDECREF(var_as_ctypes_type);
    var_as_ctypes_type = NULL;
    Py_XDECREF(var_dtypes_to_ctypes);
    var_dtypes_to_ctypes = NULL;
    Py_XDECREF(var_tp);
    var_tp = NULL;
    Py_XDECREF(var_ctype_for);
    var_ctype_for = NULL;
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

    Py_XDECREF(var_np);
    var_np = NULL;
    Py_XDECREF(var_ctypeslib);
    var_ctypeslib = NULL;
    Py_XDECREF(var__typecodes);
    var__typecodes = NULL;
    Py_XDECREF(var_as_ctypes_type);
    var_as_ctypes_type = NULL;
    Py_XDECREF(var_dtypes_to_ctypes);
    var_dtypes_to_ctypes = NULL;
    Py_XDECREF(var_tp);
    var_tp = NULL;
    Py_XDECREF(var_ctype_for);
    var_ctype_for = NULL;
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



static PyObject *MAKE_FUNCTION_comtypes$npsupport$$$function__1__make_variant_dtype() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$npsupport$$$function__1__make_variant_dtype,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bf528733384a926278414dbb4396f91f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$npsupport,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$npsupport$$$function__2_isndarray() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$npsupport$$$function__2_isndarray,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7064bed8eead52a31038611b2826cdf5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$npsupport,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$npsupport$$$function__3_isdatetime64() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$npsupport$$$function__3_isdatetime64,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b4998e87e2517f435df8689eb6e9268b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$npsupport,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$npsupport$$$function__4__check_ctypeslib_typecodes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$npsupport$$$function__4__check_ctypeslib_typecodes,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3010112a52ab7f68dcc268daf328a870,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$npsupport,
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

function_impl_code functable_comtypes$npsupport[] = {
    impl_comtypes$npsupport$$$function__1__make_variant_dtype,
    impl_comtypes$npsupport$$$function__2_isndarray,
    impl_comtypes$npsupport$$$function__3_isdatetime64,
    impl_comtypes$npsupport$$$function__4__check_ctypeslib_typecodes,
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

    function_impl_code *current = functable_comtypes$npsupport;
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

    if (offset > sizeof(functable_comtypes$npsupport) || offset < 0) {
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
        functable_comtypes$npsupport[offset],
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
        module_comtypes$npsupport,
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
PyObject *modulecode_comtypes$npsupport(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("comtypes.npsupport");

    // Store the module for future use.
    module_comtypes$npsupport = module;

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
        PRINT_STRING("comtypes.npsupport: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.npsupport: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.npsupport: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcomtypes$npsupport\n");

    moduledict_comtypes$npsupport = MODULE_DICT(module_comtypes$npsupport);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_comtypes$npsupport,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_comtypes$npsupport,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[65]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_comtypes$npsupport,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$npsupport,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$npsupport,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_comtypes$npsupport);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_comtypes$npsupport);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_comtypes$npsupport, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_698f9c3d6eeeb29de875050bbca2b981;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_2);
    }
    frame_698f9c3d6eeeb29de875050bbca2b981 = MAKE_MODULE_FRAME(codeobj_698f9c3d6eeeb29de875050bbca2b981, module_comtypes$npsupport);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_698f9c3d6eeeb29de875050bbca2b981);
    assert(Py_REFCNT(frame_698f9c3d6eeeb29de875050bbca2b981) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[45];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[47]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[47]);

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
        UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_4);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[23];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$npsupport;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[17];
        frame_698f9c3d6eeeb29de875050bbca2b981->m_frame.f_lineno = 5;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_5);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_698f9c3d6eeeb29de875050bbca2b981, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_698f9c3d6eeeb29de875050bbca2b981, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
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
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_6);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 4;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_698f9c3d6eeeb29de875050bbca2b981->m_frame) frame_698f9c3d6eeeb29de875050bbca2b981->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_cmp_expr_left_2 == NULL)) {
            tmp_cmp_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        assert(!(tmp_cmp_expr_left_2 == NULL));
        tmp_cmp_expr_right_2 = Py_None;
        tmp_assign_source_7 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? Py_True : Py_False;
        UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_True;
        UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_comtypes$npsupport$$$function__1__make_variant_dtype();

        UPDATE_STRING_DICT1(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_comtypes$npsupport$$$function__2_isndarray();

        UPDATE_STRING_DICT1(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_comtypes$npsupport$$$function__3_isdatetime64();

        UPDATE_STRING_DICT1(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_comtypes$npsupport$$$function__4__check_ctypeslib_typecodes();

        UPDATE_STRING_DICT1(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_None;
        UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_None;
        UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_None;
        UPDATE_STRING_DICT0(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_16);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_mvar_value_1 == NULL));
        tmp_condition_result_2 = CHECK_IF_TRUE(tmp_mvar_value_1) == 1;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_698f9c3d6eeeb29de875050bbca2b981->m_frame.f_lineno = 107;
        tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_17);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_3;
        }
        frame_698f9c3d6eeeb29de875050bbca2b981->m_frame.f_lineno = 111;
        tmp_assign_source_18 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_18);
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_698f9c3d6eeeb29de875050bbca2b981, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_698f9c3d6eeeb29de875050bbca2b981, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
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
        exception_lineno = 110;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_698f9c3d6eeeb29de875050bbca2b981->m_frame) frame_698f9c3d6eeeb29de875050bbca2b981->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_no_3:;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_assign_source_19;
        tmp_assign_source_19 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[23];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_comtypes$npsupport;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[59];
        tmp_level_value_2 = mod_consts[17];
        frame_698f9c3d6eeeb29de875050bbca2b981->m_frame.f_lineno = 117;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_5;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$npsupport,
                mod_consts[29],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_20);
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

    {
        nuitka_bool tmp_assign_source_21;
        tmp_assign_source_21 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_21;
    }
    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_698f9c3d6eeeb29de875050bbca2b981, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_698f9c3d6eeeb29de875050bbca2b981, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
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
        exception_lineno = 116;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_698f9c3d6eeeb29de875050bbca2b981->m_frame) frame_698f9c3d6eeeb29de875050bbca2b981->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_6;
    branch_no_4:;
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

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_try_except_1__unhandled_indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_7;
        }
        frame_698f9c3d6eeeb29de875050bbca2b981->m_frame.f_lineno = 123;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[60]);

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$npsupport, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_22);
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

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_698f9c3d6eeeb29de875050bbca2b981, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_698f9c3d6eeeb29de875050bbca2b981, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_6 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        assert(!(tmp_res == -1));
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
        exception_lineno = 121;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_698f9c3d6eeeb29de875050bbca2b981->m_frame) frame_698f9c3d6eeeb29de875050bbca2b981->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_8;
    branch_no_6:;
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

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    branch_no_5:;
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_698f9c3d6eeeb29de875050bbca2b981, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_698f9c3d6eeeb29de875050bbca2b981->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_698f9c3d6eeeb29de875050bbca2b981, exception_lineno);
    }



    assertFrameObject(frame_698f9c3d6eeeb29de875050bbca2b981);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("comtypes.npsupport", false);

    Py_INCREF(module_comtypes$npsupport);
    return module_comtypes$npsupport;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$npsupport, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("comtypes$npsupport", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
