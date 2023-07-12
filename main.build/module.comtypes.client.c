/* Generated code for Python module 'comtypes.client'
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

/* The "module_comtypes$client" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_comtypes$client;
PyDictObject *moduledict_comtypes$client;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[134];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[134];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("comtypes.client"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 134; i++) {
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
void checkModuleConstants_comtypes$client(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 134; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_61282d493db4c919ec45a4cc03c98145;
static PyCodeObject *codeobj_c80ebabffcc500d16a3b9a3e1db05278;
static PyCodeObject *codeobj_b10943f20791f25cdeb536fb06acc859;
static PyCodeObject *codeobj_bc6660c749f8bd495b90ee86c3abe4e3;
static PyCodeObject *codeobj_bb09f6eca9b2d63daf7c265aa5860b73;
static PyCodeObject *codeobj_efbfc1b4a117332aa521c29bbec00d79;
static PyCodeObject *codeobj_10ac68b96f80a9d5a193dedde107205c;
static PyCodeObject *codeobj_7e3c5127f7a1cf5ad1f89d2673812073;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[79]; CHECK_OBJECT(module_filename_obj);
    codeobj_61282d493db4c919ec45a4cc03c98145 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[125], mod_consts[125], NULL, NULL, 0, 0, 0);
    codeobj_c80ebabffcc500d16a3b9a3e1db05278 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[126], NULL, 3, 0, 0);
    codeobj_b10943f20791f25cdeb536fb06acc859 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[127], NULL, 6, 0, 0);
    codeobj_bc6660c749f8bd495b90ee86c3abe4e3 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[128], NULL, 3, 0, 0);
    codeobj_bb09f6eca9b2d63daf7c265aa5860b73 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[129], NULL, 1, 0, 0);
    codeobj_efbfc1b4a117332aa521c29bbec00d79 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[130], NULL, 4, 0, 0);
    codeobj_10ac68b96f80a9d5a193dedde107205c = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[131], NULL, 3, 0, 0);
    codeobj_7e3c5127f7a1cf5ad1f89d2673812073 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[132], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_comtypes$client$$$function__1_wrap_outparam();


static PyObject *MAKE_FUNCTION_comtypes$client$$$function__2_GetBestInterface();


static PyObject *MAKE_FUNCTION_comtypes$client$$$function__3_GetActiveObject(PyObject *defaults);


static PyObject *MAKE_FUNCTION_comtypes$client$$$function__4__manage();


static PyObject *MAKE_FUNCTION_comtypes$client$$$function__5_GetClassObject(PyObject *defaults);


static PyObject *MAKE_FUNCTION_comtypes$client$$$function__6_CreateObject(PyObject *defaults);


static PyObject *MAKE_FUNCTION_comtypes$client$$$function__7_CoGetObject(PyObject *defaults);


// The module function definitions.
static PyObject *impl_comtypes$client$$$function__1_wrap_outparam(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_punk = python_pars[0];
    struct Nuitka_FrameObject *frame_7e3c5127f7a1cf5ad1f89d2673812073;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7e3c5127f7a1cf5ad1f89d2673812073 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7e3c5127f7a1cf5ad1f89d2673812073)) {
        Py_XDECREF(cache_frame_7e3c5127f7a1cf5ad1f89d2673812073);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e3c5127f7a1cf5ad1f89d2673812073 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e3c5127f7a1cf5ad1f89d2673812073 = MAKE_FUNCTION_FRAME(codeobj_7e3c5127f7a1cf5ad1f89d2673812073, module_comtypes$client, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7e3c5127f7a1cf5ad1f89d2673812073->m_type_description == NULL);
    frame_7e3c5127f7a1cf5ad1f89d2673812073 = cache_frame_7e3c5127f7a1cf5ad1f89d2673812073;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7e3c5127f7a1cf5ad1f89d2673812073);
    assert(Py_REFCNT(frame_7e3c5127f7a1cf5ad1f89d2673812073) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[2];
        CHECK_OBJECT(par_punk);
        tmp_args_element_value_2 = par_punk;
        frame_7e3c5127f7a1cf5ad1f89d2673812073->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_punk);
        tmp_operand_value_1 = par_punk;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_punk);
        tmp_expression_value_1 = par_punk;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_punk);
        tmp_args_element_value_3 = par_punk;
        frame_7e3c5127f7a1cf5ad1f89d2673812073->m_frame.f_lineno = 45;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7e3c5127f7a1cf5ad1f89d2673812073, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e3c5127f7a1cf5ad1f89d2673812073->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e3c5127f7a1cf5ad1f89d2673812073, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e3c5127f7a1cf5ad1f89d2673812073,
        type_description_1,
        par_punk
    );


    // Release cached frame if used for exception.
    if (frame_7e3c5127f7a1cf5ad1f89d2673812073 == cache_frame_7e3c5127f7a1cf5ad1f89d2673812073) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7e3c5127f7a1cf5ad1f89d2673812073);
        cache_frame_7e3c5127f7a1cf5ad1f89d2673812073 = NULL;
    }

    assertFrameObject(frame_7e3c5127f7a1cf5ad1f89d2673812073);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_punk);
    tmp_return_value = par_punk;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_punk);
    Py_DECREF(par_punk);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_punk);
    Py_DECREF(par_punk);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$client$$$function__2_GetBestInterface(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_punk = python_pars[0];
    PyObject *var_pci = NULL;
    PyObject *var_tinfo = NULL;
    PyObject *var_ta = NULL;
    PyObject *var_index = NULL;
    PyObject *var_href = NULL;
    PyObject *var_pdisp = NULL;
    PyObject *var_typeattr = NULL;
    PyObject *var_itf_name = NULL;
    PyObject *var_tlib = NULL;
    PyObject *var_mod = NULL;
    PyObject *var_interface = NULL;
    PyObject *var_result = NULL;
    nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_bb09f6eca9b2d63daf7c265aa5860b73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    struct Nuitka_ExceptionStackItem exception_preserved_4;
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
    struct Nuitka_ExceptionStackItem exception_preserved_3;
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
    struct Nuitka_ExceptionStackItem exception_preserved_5;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_bb09f6eca9b2d63daf7c265aa5860b73 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bb09f6eca9b2d63daf7c265aa5860b73)) {
        Py_XDECREF(cache_frame_bb09f6eca9b2d63daf7c265aa5860b73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb09f6eca9b2d63daf7c265aa5860b73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb09f6eca9b2d63daf7c265aa5860b73 = MAKE_FUNCTION_FRAME(codeobj_bb09f6eca9b2d63daf7c265aa5860b73, module_comtypes$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb09f6eca9b2d63daf7c265aa5860b73->m_type_description == NULL);
    frame_bb09f6eca9b2d63daf7c265aa5860b73 = cache_frame_bb09f6eca9b2d63daf7c265aa5860b73;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bb09f6eca9b2d63daf7c265aa5860b73);
    assert(Py_REFCNT(frame_bb09f6eca9b2d63daf7c265aa5860b73) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_punk);
        tmp_operand_value_1 = par_punk;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooo";
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
    CHECK_OBJECT(par_punk);
    tmp_return_value = par_punk;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[8];
        CHECK_OBJECT(par_punk);
        tmp_args_element_value_2 = par_punk;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_punk);
        tmp_expression_value_1 = par_punk;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 63;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 63;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 63;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 63;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        assert(var_pci == NULL);
        var_pci = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 64;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_bb09f6eca9b2d63daf7c265aa5860b73, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_bb09f6eca9b2d63daf7c265aa5860b73, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[13]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 68;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[14], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_punk);
        tmp_expression_value_5 = par_punk;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[9]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[10]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[15]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 69;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_pci;
            var_pci = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 70;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 62;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame) frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_pci);
        tmp_called_instance_5 = var_pci;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 71;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[17]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_tinfo == NULL);
        var_tinfo = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_tinfo);
        tmp_called_instance_6 = var_tinfo;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 73;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[18]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_ta == NULL);
        var_ta = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_for_loop_1__break_indicator = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_8;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ta);
        tmp_expression_value_8 = var_ta;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[20]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 74;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_value_value_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_value_value_1);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 74;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
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

    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = exception_keeper_type_3;
        tmp_cmp_expr_right_2 = PyExc_StopIteration;
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
        nuitka_bool tmp_assign_source_8;
        tmp_assign_source_8 = NUITKA_BOOL_TRUE;
        tmp_for_loop_1__break_indicator = tmp_assign_source_8;
    }
    Py_DECREF(exception_keeper_type_3);
    Py_XDECREF(exception_keeper_value_3);
    Py_XDECREF(exception_keeper_tb_3);
    goto loop_end_1;
    goto branch_end_3;
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    branch_end_3:;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_9;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_6;
        if (var_tinfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_7 = var_tinfo;
        CHECK_OBJECT(var_index);
        tmp_args_element_value_6 = var_index;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 75;
        tmp_cmp_expr_left_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[22], tmp_args_element_value_6);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_3 = mod_consts[23];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_end_1;
    branch_no_4:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 74;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_for_loop_1__break_indicator;
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
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_ta);
        tmp_expression_value_9 = var_ta;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[20]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_5 = mod_consts[23];
        tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 80;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[25]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 80;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[26];
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_10;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_7;
        if (var_tinfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_10 = var_tinfo;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[27]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_index == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = var_index;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 84;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_href == NULL);
        var_href = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_8;
        if (var_tinfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_8 = var_tinfo;
        CHECK_OBJECT(var_href);
        tmp_args_element_value_8 = var_href;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 85;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[29], tmp_args_element_value_8);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_tinfo;
            var_tinfo = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
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

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_bb09f6eca9b2d63daf7c265aa5860b73, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_bb09f6eca9b2d63daf7c265aa5860b73, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_11;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[13]);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_5;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 87;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_5);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_punk);
        tmp_expression_value_12 = par_punk;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[9]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 89;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[5]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 89;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[6]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 89;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 89;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        assert(var_pdisp == NULL);
        var_pdisp = tmp_assign_source_13;
    }
    goto try_end_6;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_bb09f6eca9b2d63daf7c265aa5860b73, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_bb09f6eca9b2d63daf7c265aa5860b73, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_15;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[13]);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_args_element_value_10 = mod_consts[31];
        CHECK_OBJECT(par_punk);
        tmp_args_element_value_11 = par_punk;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_10,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_6);
    }
    CHECK_OBJECT(par_punk);
    tmp_return_value = par_punk;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_9;
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 88;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame) frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_9;
    branch_end_8:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_9:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_return_handler_7;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    // End of try:
    try_end_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_11;
        CHECK_OBJECT(var_pdisp);
        tmp_called_instance_11 = var_pdisp;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 94;
        tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[32],
            PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_tinfo;
            var_tinfo = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    goto try_end_7;
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

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_8 == NULL) {
        exception_keeper_tb_8 = MAKE_TRACEBACK(frame_bb09f6eca9b2d63daf7c265aa5860b73, exception_keeper_lineno_8);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_keeper_tb_8 = ADD_TRACEBACK(exception_keeper_tb_8, frame_bb09f6eca9b2d63daf7c265aa5860b73, exception_keeper_lineno_8);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_16;
        tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[13]);
        if (tmp_cmp_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_right_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[34]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[35]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT(var_pdisp);
        tmp_args_element_value_12 = var_pdisp;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 96;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[36], tmp_args_element_value_12);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_pdisp;
            assert(old != NULL);
            var_pdisp = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[1]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_mod_expr_left_1 = mod_consts[37];
        CHECK_OBJECT(var_pdisp);
        tmp_mod_expr_right_1 = var_pdisp;
        tmp_args_element_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 97;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_7);
    }
    CHECK_OBJECT(var_pdisp);
    tmp_return_value = var_pdisp;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_11;
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 93;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame) frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_11;
    branch_end_9:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_11:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    goto try_return_handler_7;
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

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_7;
    // End of try:
    // End of try:
    try_end_7:;
    goto branch_end_7;
    branch_no_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 61;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame) frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
    branch_end_7:;
    goto try_end_8;
    // Return handler code:
    try_return_handler_7:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_13;
        CHECK_OBJECT(var_tinfo);
        tmp_called_instance_13 = var_tinfo;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 99;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[18]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_typeattr == NULL);
        var_typeattr = tmp_assign_source_16;
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_21;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[1]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = mod_consts[38];
        CHECK_OBJECT(var_typeattr);
        tmp_expression_value_21 = var_typeattr;
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[39]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 100;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    // Tried code:
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(par_punk);
        tmp_expression_value_22 = par_punk;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[9]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[40]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_typeattr);
        tmp_expression_value_24 = var_typeattr;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[39]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_12;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 5.
    exception_preserved_5 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_11 == NULL) {
        exception_keeper_tb_11 = MAKE_TRACEBACK(frame_bb09f6eca9b2d63daf7c265aa5860b73, exception_keeper_lineno_11);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_keeper_tb_11 = ADD_TRACEBACK(exception_keeper_tb_11, frame_bb09f6eca9b2d63daf7c265aa5860b73, exception_keeper_lineno_11);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_25;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_cmp_expr_right_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[13]);
        if (tmp_cmp_expr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_right_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_10;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 104;
        tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_18;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[34]);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[35]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT(par_punk);
        tmp_args_element_value_18 = par_punk;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 105;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[36], tmp_args_element_value_18);
        Py_DECREF(tmp_called_instance_15);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        goto try_return_handler_13;
    }
    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 101;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame) frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_13;
    branch_end_10:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_13:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_tinfo);
        tmp_called_instance_16 = var_tinfo;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 107;
        tmp_expression_value_28 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_16,
            mod_consts[42],
            PyTuple_GET_ITEM(mod_consts[43], 0)
        );

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[26];
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_28, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_itf_name == NULL);
        var_itf_name = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_tinfo);
        tmp_called_instance_17 = var_tinfo;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 108;
        tmp_expression_value_29 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, mod_consts[44]);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[26];
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_29, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tlib == NULL);
        var_tlib = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tlib);
        tmp_args_element_value_19 = var_tlib;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 111;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_19);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mod == NULL);
        var_mod = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mod);
        tmp_args_element_value_20 = var_mod;
        CHECK_OBJECT(var_itf_name);
        tmp_args_element_value_21 = var_itf_name;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_interface == NULL);
        var_interface = tmp_assign_source_20;
    }
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[47];
        CHECK_OBJECT(var_interface);
        tmp_args_element_value_23 = var_interface;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_call_result_11 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_18,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_args_element_value_24;
        CHECK_OBJECT(par_punk);
        tmp_called_instance_19 = par_punk;
        CHECK_OBJECT(var_interface);
        tmp_args_element_value_24 = var_interface;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 127;
        tmp_assign_source_21 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_19, mod_consts[9], tmp_args_element_value_24);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_21;
    }
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[48];
        CHECK_OBJECT(var_result);
        tmp_args_element_value_26 = var_result;
        frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_12 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_20,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
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
        exception_tb = MAKE_TRACEBACK(frame_bb09f6eca9b2d63daf7c265aa5860b73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb09f6eca9b2d63daf7c265aa5860b73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb09f6eca9b2d63daf7c265aa5860b73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb09f6eca9b2d63daf7c265aa5860b73,
        type_description_1,
        par_punk,
        var_pci,
        var_tinfo,
        var_ta,
        var_index,
        var_href,
        var_pdisp,
        var_typeattr,
        var_itf_name,
        var_tlib,
        var_mod,
        var_interface,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_bb09f6eca9b2d63daf7c265aa5860b73 == cache_frame_bb09f6eca9b2d63daf7c265aa5860b73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb09f6eca9b2d63daf7c265aa5860b73);
        cache_frame_bb09f6eca9b2d63daf7c265aa5860b73 = NULL;
    }

    assertFrameObject(frame_bb09f6eca9b2d63daf7c265aa5860b73);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_pci);
    var_pci = NULL;
    Py_XDECREF(var_tinfo);
    var_tinfo = NULL;
    Py_XDECREF(var_ta);
    var_ta = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_href);
    var_href = NULL;
    Py_XDECREF(var_pdisp);
    var_pdisp = NULL;
    Py_XDECREF(var_typeattr);
    var_typeattr = NULL;
    Py_XDECREF(var_itf_name);
    var_itf_name = NULL;
    Py_XDECREF(var_tlib);
    var_tlib = NULL;
    Py_XDECREF(var_mod);
    var_mod = NULL;
    Py_XDECREF(var_interface);
    var_interface = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_pci);
    var_pci = NULL;
    Py_XDECREF(var_tinfo);
    var_tinfo = NULL;
    Py_XDECREF(var_ta);
    var_ta = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_href);
    var_href = NULL;
    Py_XDECREF(var_pdisp);
    var_pdisp = NULL;
    Py_XDECREF(var_typeattr);
    var_typeattr = NULL;
    Py_XDECREF(var_itf_name);
    var_itf_name = NULL;
    Py_XDECREF(var_tlib);
    var_tlib = NULL;
    Py_XDECREF(var_mod);
    var_mod = NULL;
    Py_XDECREF(var_interface);
    var_interface = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_punk);
    Py_DECREF(par_punk);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_punk);
    Py_DECREF(par_punk);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$client$$$function__3_GetActiveObject(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_progid = python_pars[0];
    PyObject *par_interface = python_pars[1];
    PyObject *par_dynamic = python_pars[2];
    PyObject *var_clsid = NULL;
    PyObject *var_obj = NULL;
    struct Nuitka_FrameObject *frame_bc6660c749f8bd495b90ee86c3abe4e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bc6660c749f8bd495b90ee86c3abe4e3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bc6660c749f8bd495b90ee86c3abe4e3)) {
        Py_XDECREF(cache_frame_bc6660c749f8bd495b90ee86c3abe4e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc6660c749f8bd495b90ee86c3abe4e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc6660c749f8bd495b90ee86c3abe4e3 = MAKE_FUNCTION_FRAME(codeobj_bc6660c749f8bd495b90ee86c3abe4e3, module_comtypes$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc6660c749f8bd495b90ee86c3abe4e3->m_type_description == NULL);
    frame_bc6660c749f8bd495b90ee86c3abe4e3 = cache_frame_bc6660c749f8bd495b90ee86c3abe4e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bc6660c749f8bd495b90ee86c3abe4e3);
    assert(Py_REFCNT(frame_bc6660c749f8bd495b90ee86c3abe4e3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[50]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_progid);
        tmp_args_element_value_1 = par_progid;
        frame_bc6660c749f8bd495b90ee86c3abe4e3->m_frame.f_lineno = 150;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[51], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_clsid == NULL);
        var_clsid = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_dynamic);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_dynamic);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_interface);
        tmp_cmp_expr_left_1 = par_interface;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_bc6660c749f8bd495b90ee86c3abe4e3->m_frame.f_lineno = 153;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[53]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 153;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_interface;
            assert(old != NULL);
            par_interface = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_interface);
        tmp_cmp_expr_left_2 = par_interface;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_progid);
        tmp_args_element_value_2 = par_progid;
        tmp_args_element_value_3 = mod_consts[54];
        tmp_args_element_value_4 = MAKE_LIST1(Py_None);
        frame_bc6660c749f8bd495b90ee86c3abe4e3->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_expression_value_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[26];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_interface;
            assert(old != NULL);
            par_interface = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[55]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_clsid);
        tmp_kw_call_arg_value_0_1 = var_clsid;
        CHECK_OBJECT(par_interface);
        tmp_kw_call_dict_value_0_1 = par_interface;
        frame_bc6660c749f8bd495b90ee86c3abe4e3->m_frame.f_lineno = 157;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[56]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_dynamic);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_dynamic);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[34]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[35]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_obj);
        tmp_args_element_value_5 = var_obj;
        frame_bc6660c749f8bd495b90ee86c3abe4e3->m_frame.f_lineno = 159;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[36], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_obj);
        tmp_kw_call_arg_value_0_2 = var_obj;
        CHECK_OBJECT(var_clsid);
        tmp_kw_call_arg_value_1_1 = var_clsid;
        CHECK_OBJECT(par_interface);
        tmp_kw_call_dict_value_0_2 = par_interface;
        frame_bc6660c749f8bd495b90ee86c3abe4e3->m_frame.f_lineno = 160;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[56]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_bc6660c749f8bd495b90ee86c3abe4e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc6660c749f8bd495b90ee86c3abe4e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc6660c749f8bd495b90ee86c3abe4e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc6660c749f8bd495b90ee86c3abe4e3,
        type_description_1,
        par_progid,
        par_interface,
        par_dynamic,
        var_clsid,
        var_obj
    );


    // Release cached frame if used for exception.
    if (frame_bc6660c749f8bd495b90ee86c3abe4e3 == cache_frame_bc6660c749f8bd495b90ee86c3abe4e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc6660c749f8bd495b90ee86c3abe4e3);
        cache_frame_bc6660c749f8bd495b90ee86c3abe4e3 = NULL;
    }

    assertFrameObject(frame_bc6660c749f8bd495b90ee86c3abe4e3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    par_interface = NULL;
    CHECK_OBJECT(var_clsid);
    Py_DECREF(var_clsid);
    var_clsid = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
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

    Py_XDECREF(par_interface);
    par_interface = NULL;
    Py_XDECREF(var_clsid);
    var_clsid = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
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
    CHECK_OBJECT(par_progid);
    Py_DECREF(par_progid);
    CHECK_OBJECT(par_dynamic);
    Py_DECREF(par_dynamic);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_progid);
    Py_DECREF(par_progid);
    CHECK_OBJECT(par_dynamic);
    Py_DECREF(par_dynamic);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$client$$$function__4__manage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *par_clsid = python_pars[1];
    PyObject *par_interface = python_pars[2];
    struct Nuitka_FrameObject *frame_10ac68b96f80a9d5a193dedde107205c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_10ac68b96f80a9d5a193dedde107205c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_10ac68b96f80a9d5a193dedde107205c)) {
        Py_XDECREF(cache_frame_10ac68b96f80a9d5a193dedde107205c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10ac68b96f80a9d5a193dedde107205c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10ac68b96f80a9d5a193dedde107205c = MAKE_FUNCTION_FRAME(codeobj_10ac68b96f80a9d5a193dedde107205c, module_comtypes$client, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_10ac68b96f80a9d5a193dedde107205c->m_type_description == NULL);
    frame_10ac68b96f80a9d5a193dedde107205c = cache_frame_10ac68b96f80a9d5a193dedde107205c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_10ac68b96f80a9d5a193dedde107205c);
    assert(Py_REFCNT(frame_10ac68b96f80a9d5a193dedde107205c) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clsid);
        tmp_args_element_value_1 = par_clsid;
        frame_10ac68b96f80a9d5a193dedde107205c->m_frame.f_lineno = 163;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_expression_value_1 = par_obj;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_1);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[60];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_interface);
        tmp_cmp_expr_left_1 = par_interface;
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_2 = par_obj;
        frame_10ac68b96f80a9d5a193dedde107205c->m_frame.f_lineno = 165;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_obj;
            assert(old != NULL);
            par_obj = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    if (par_obj == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 166;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_obj;
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
        exception_tb = MAKE_TRACEBACK(frame_10ac68b96f80a9d5a193dedde107205c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10ac68b96f80a9d5a193dedde107205c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10ac68b96f80a9d5a193dedde107205c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10ac68b96f80a9d5a193dedde107205c,
        type_description_1,
        par_obj,
        par_clsid,
        par_interface
    );


    // Release cached frame if used for exception.
    if (frame_10ac68b96f80a9d5a193dedde107205c == cache_frame_10ac68b96f80a9d5a193dedde107205c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_10ac68b96f80a9d5a193dedde107205c);
        cache_frame_10ac68b96f80a9d5a193dedde107205c = NULL;
    }

    assertFrameObject(frame_10ac68b96f80a9d5a193dedde107205c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_obj);
    par_obj = NULL;
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

    Py_XDECREF(par_obj);
    par_obj = NULL;
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
    CHECK_OBJECT(par_clsid);
    Py_DECREF(par_clsid);
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_clsid);
    Py_DECREF(par_clsid);
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$client$$$function__5_GetClassObject(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_progid = python_pars[0];
    PyObject *par_clsctx = python_pars[1];
    PyObject *par_pServerInfo = python_pars[2];
    PyObject *par_interface = python_pars[3];
    PyObject *var_clsid = NULL;
    struct Nuitka_FrameObject *frame_efbfc1b4a117332aa521c29bbec00d79;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_efbfc1b4a117332aa521c29bbec00d79 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_efbfc1b4a117332aa521c29bbec00d79)) {
        Py_XDECREF(cache_frame_efbfc1b4a117332aa521c29bbec00d79);

#if _DEBUG_REFCOUNTS
        if (cache_frame_efbfc1b4a117332aa521c29bbec00d79 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_efbfc1b4a117332aa521c29bbec00d79 = MAKE_FUNCTION_FRAME(codeobj_efbfc1b4a117332aa521c29bbec00d79, module_comtypes$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_efbfc1b4a117332aa521c29bbec00d79->m_type_description == NULL);
    frame_efbfc1b4a117332aa521c29bbec00d79 = cache_frame_efbfc1b4a117332aa521c29bbec00d79;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_efbfc1b4a117332aa521c29bbec00d79);
    assert(Py_REFCNT(frame_efbfc1b4a117332aa521c29bbec00d79) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[50]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_progid);
        tmp_args_element_value_1 = par_progid;
        frame_efbfc1b4a117332aa521c29bbec00d79->m_frame.f_lineno = 178;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[51], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_clsid == NULL);
        var_clsid = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_clsid);
        tmp_args_element_value_2 = var_clsid;
        CHECK_OBJECT(par_clsctx);
        tmp_args_element_value_3 = par_clsctx;
        CHECK_OBJECT(par_pServerInfo);
        tmp_args_element_value_4 = par_pServerInfo;
        CHECK_OBJECT(par_interface);
        tmp_args_element_value_5 = par_interface;
        frame_efbfc1b4a117332aa521c29bbec00d79->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_2,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_efbfc1b4a117332aa521c29bbec00d79, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_efbfc1b4a117332aa521c29bbec00d79->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_efbfc1b4a117332aa521c29bbec00d79, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_efbfc1b4a117332aa521c29bbec00d79,
        type_description_1,
        par_progid,
        par_clsctx,
        par_pServerInfo,
        par_interface,
        var_clsid
    );


    // Release cached frame if used for exception.
    if (frame_efbfc1b4a117332aa521c29bbec00d79 == cache_frame_efbfc1b4a117332aa521c29bbec00d79) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_efbfc1b4a117332aa521c29bbec00d79);
        cache_frame_efbfc1b4a117332aa521c29bbec00d79 = NULL;
    }

    assertFrameObject(frame_efbfc1b4a117332aa521c29bbec00d79);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_clsid);
    Py_DECREF(var_clsid);
    var_clsid = NULL;
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

    Py_XDECREF(var_clsid);
    var_clsid = NULL;
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
    CHECK_OBJECT(par_progid);
    Py_DECREF(par_progid);
    CHECK_OBJECT(par_clsctx);
    Py_DECREF(par_clsctx);
    CHECK_OBJECT(par_pServerInfo);
    Py_DECREF(par_pServerInfo);
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_progid);
    Py_DECREF(par_progid);
    CHECK_OBJECT(par_clsctx);
    Py_DECREF(par_clsctx);
    CHECK_OBJECT(par_pServerInfo);
    Py_DECREF(par_pServerInfo);
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$client$$$function__6_CreateObject(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_progid = python_pars[0];
    PyObject *par_clsctx = python_pars[1];
    PyObject *par_machine = python_pars[2];
    PyObject *par_interface = python_pars[3];
    PyObject *par_dynamic = python_pars[4];
    PyObject *par_pServerInfo = python_pars[5];
    PyObject *var_clsid = NULL;
    PyObject *var_obj = NULL;
    struct Nuitka_FrameObject *frame_b10943f20791f25cdeb536fb06acc859;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b10943f20791f25cdeb536fb06acc859 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b10943f20791f25cdeb536fb06acc859)) {
        Py_XDECREF(cache_frame_b10943f20791f25cdeb536fb06acc859);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b10943f20791f25cdeb536fb06acc859 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b10943f20791f25cdeb536fb06acc859 = MAKE_FUNCTION_FRAME(codeobj_b10943f20791f25cdeb536fb06acc859, module_comtypes$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b10943f20791f25cdeb536fb06acc859->m_type_description == NULL);
    frame_b10943f20791f25cdeb536fb06acc859 = cache_frame_b10943f20791f25cdeb536fb06acc859;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b10943f20791f25cdeb536fb06acc859);
    assert(Py_REFCNT(frame_b10943f20791f25cdeb536fb06acc859) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[50]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_progid);
        tmp_args_element_value_1 = par_progid;
        frame_b10943f20791f25cdeb536fb06acc859->m_frame.f_lineno = 204;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[51], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        assert(var_clsid == NULL);
        var_clsid = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[64];
        CHECK_OBJECT(par_progid);
        tmp_args_element_value_3 = par_progid;
        CHECK_OBJECT(var_clsid);
        tmp_args_element_value_4 = var_clsid;
        frame_b10943f20791f25cdeb536fb06acc859->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_dynamic);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_dynamic);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooN";
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
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_interface);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_interface);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        frame_b10943f20791f25cdeb536fb06acc859->m_frame.f_lineno = 208;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[53]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 208;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_interface;
            assert(old != NULL);
            par_interface = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_interface);
        tmp_cmp_expr_left_1 = par_interface;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_progid);
        tmp_args_element_value_5 = par_progid;
        tmp_args_element_value_6 = mod_consts[54];
        tmp_args_element_value_7 = MAKE_LIST1(Py_None);
        frame_b10943f20791f25cdeb536fb06acc859->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_expression_value_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[26];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_interface;
            assert(old != NULL);
            par_interface = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_end_1:;
    {
        bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_machine);
        tmp_cmp_expr_left_2 = par_machine;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_pServerInfo);
        tmp_cmp_expr_left_3 = par_pServerInfo;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[65];
        CHECK_OBJECT(var_clsid);
        tmp_args_element_value_9 = var_clsid;
        CHECK_OBJECT(par_clsctx);
        tmp_args_element_value_10 = par_clsctx;
        CHECK_OBJECT(par_interface);
        tmp_args_element_value_11 = par_interface;
        frame_b10943f20791f25cdeb536fb06acc859->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_3,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[66]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_clsid);
        tmp_kw_call_arg_value_0_1 = var_clsid;
        CHECK_OBJECT(par_clsctx);
        tmp_kw_call_dict_value_0_1 = par_clsctx;
        CHECK_OBJECT(par_interface);
        tmp_kw_call_dict_value_1_1 = par_interface;
        frame_b10943f20791f25cdeb536fb06acc859->m_frame.f_lineno = 215;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_4;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = mod_consts[68];
        CHECK_OBJECT(var_clsid);
        tmp_args_element_value_13 = var_clsid;
        CHECK_OBJECT(par_clsctx);
        tmp_args_element_value_14 = par_clsctx;
        CHECK_OBJECT(par_interface);
        tmp_args_element_value_15 = par_interface;
        CHECK_OBJECT(par_machine);
        tmp_args_element_value_16 = par_machine;
        CHECK_OBJECT(par_pServerInfo);
        tmp_args_element_value_17 = par_pServerInfo;
        frame_b10943f20791f25cdeb536fb06acc859->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS6(
                tmp_called_instance_4,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        bool tmp_condition_result_5;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_machine);
        tmp_cmp_expr_left_4 = par_machine;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_pServerInfo);
        tmp_cmp_expr_left_5 = par_pServerInfo;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_and_right_value_2 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        tmp_condition_result_5 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_5 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        frame_b10943f20791f25cdeb536fb06acc859->m_frame.f_lineno = 222;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[69]);

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 222;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[70]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_clsid);
        tmp_kw_call_arg_value_0_2 = var_clsid;
        CHECK_OBJECT(par_clsctx);
        tmp_kw_call_dict_value_0_2 = par_clsctx;
        CHECK_OBJECT(par_interface);
        tmp_kw_call_dict_value_1_2 = par_interface;
        CHECK_OBJECT(par_machine);
        tmp_kw_call_dict_value_2_1 = par_machine;
        CHECK_OBJECT(par_pServerInfo);
        tmp_kw_call_dict_value_3_1 = par_pServerInfo;
        frame_b10943f20791f25cdeb536fb06acc859->m_frame.f_lineno = 223;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_5;
    }
    branch_end_4:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_dynamic);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_dynamic);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_18;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[34]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[35]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_obj);
        tmp_args_element_value_18 = var_obj;
        frame_b10943f20791f25cdeb536fb06acc859->m_frame.f_lineno = 226;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[36], tmp_args_element_value_18);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_obj);
        tmp_kw_call_arg_value_0_3 = var_obj;
        CHECK_OBJECT(var_clsid);
        tmp_kw_call_arg_value_1_1 = var_clsid;
        if (par_interface == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 227;
            type_description_1 = "ooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_3 = par_interface;
        frame_b10943f20791f25cdeb536fb06acc859->m_frame.f_lineno = 227;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[56]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_b10943f20791f25cdeb536fb06acc859, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b10943f20791f25cdeb536fb06acc859->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b10943f20791f25cdeb536fb06acc859, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b10943f20791f25cdeb536fb06acc859,
        type_description_1,
        par_progid,
        par_clsctx,
        par_machine,
        par_interface,
        par_dynamic,
        par_pServerInfo,
        var_clsid,
        var_obj,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_b10943f20791f25cdeb536fb06acc859 == cache_frame_b10943f20791f25cdeb536fb06acc859) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b10943f20791f25cdeb536fb06acc859);
        cache_frame_b10943f20791f25cdeb536fb06acc859 = NULL;
    }

    assertFrameObject(frame_b10943f20791f25cdeb536fb06acc859);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_interface);
    par_interface = NULL;
    CHECK_OBJECT(var_clsid);
    Py_DECREF(var_clsid);
    var_clsid = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
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

    Py_XDECREF(par_interface);
    par_interface = NULL;
    Py_XDECREF(var_clsid);
    var_clsid = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
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
    CHECK_OBJECT(par_progid);
    Py_DECREF(par_progid);
    CHECK_OBJECT(par_clsctx);
    Py_DECREF(par_clsctx);
    CHECK_OBJECT(par_machine);
    Py_DECREF(par_machine);
    CHECK_OBJECT(par_dynamic);
    Py_DECREF(par_dynamic);
    CHECK_OBJECT(par_pServerInfo);
    Py_DECREF(par_pServerInfo);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_progid);
    Py_DECREF(par_progid);
    CHECK_OBJECT(par_clsctx);
    Py_DECREF(par_clsctx);
    CHECK_OBJECT(par_machine);
    Py_DECREF(par_machine);
    CHECK_OBJECT(par_dynamic);
    Py_DECREF(par_dynamic);
    CHECK_OBJECT(par_pServerInfo);
    Py_DECREF(par_pServerInfo);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$client$$$function__7_CoGetObject(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_displayname = python_pars[0];
    PyObject *par_interface = python_pars[1];
    PyObject *par_dynamic = python_pars[2];
    PyObject *var_punk = NULL;
    struct Nuitka_FrameObject *frame_c80ebabffcc500d16a3b9a3e1db05278;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c80ebabffcc500d16a3b9a3e1db05278 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c80ebabffcc500d16a3b9a3e1db05278)) {
        Py_XDECREF(cache_frame_c80ebabffcc500d16a3b9a3e1db05278);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c80ebabffcc500d16a3b9a3e1db05278 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c80ebabffcc500d16a3b9a3e1db05278 = MAKE_FUNCTION_FRAME(codeobj_c80ebabffcc500d16a3b9a3e1db05278, module_comtypes$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c80ebabffcc500d16a3b9a3e1db05278->m_type_description == NULL);
    frame_c80ebabffcc500d16a3b9a3e1db05278 = cache_frame_c80ebabffcc500d16a3b9a3e1db05278;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c80ebabffcc500d16a3b9a3e1db05278);
    assert(Py_REFCNT(frame_c80ebabffcc500d16a3b9a3e1db05278) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_dynamic);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_dynamic);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_interface);
        tmp_cmp_expr_left_1 = par_interface;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c80ebabffcc500d16a3b9a3e1db05278->m_frame.f_lineno = 236;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[53]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 236;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_interface;
            assert(old != NULL);
            par_interface = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_displayname);
        tmp_args_element_value_1 = par_displayname;
        CHECK_OBJECT(par_interface);
        tmp_args_element_value_2 = par_interface;
        frame_c80ebabffcc500d16a3b9a3e1db05278->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[74],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_punk == NULL);
        var_punk = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_dynamic);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_dynamic);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[34]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[35]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_punk);
        tmp_args_element_value_3 = var_punk;
        frame_c80ebabffcc500d16a3b9a3e1db05278->m_frame.f_lineno = 240;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[36], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_punk);
        tmp_kw_call_arg_value_0_1 = var_punk;
        tmp_kw_call_dict_value_0_1 = Py_None;
        CHECK_OBJECT(par_interface);
        tmp_kw_call_dict_value_1_1 = par_interface;
        frame_c80ebabffcc500d16a3b9a3e1db05278->m_frame.f_lineno = 241;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[75]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
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
        exception_tb = MAKE_TRACEBACK(frame_c80ebabffcc500d16a3b9a3e1db05278, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c80ebabffcc500d16a3b9a3e1db05278->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c80ebabffcc500d16a3b9a3e1db05278, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c80ebabffcc500d16a3b9a3e1db05278,
        type_description_1,
        par_displayname,
        par_interface,
        par_dynamic,
        var_punk
    );


    // Release cached frame if used for exception.
    if (frame_c80ebabffcc500d16a3b9a3e1db05278 == cache_frame_c80ebabffcc500d16a3b9a3e1db05278) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c80ebabffcc500d16a3b9a3e1db05278);
        cache_frame_c80ebabffcc500d16a3b9a3e1db05278 = NULL;
    }

    assertFrameObject(frame_c80ebabffcc500d16a3b9a3e1db05278);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    par_interface = NULL;
    Py_XDECREF(var_punk);
    var_punk = NULL;
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

    Py_XDECREF(par_interface);
    par_interface = NULL;
    Py_XDECREF(var_punk);
    var_punk = NULL;
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
    CHECK_OBJECT(par_displayname);
    Py_DECREF(par_displayname);
    CHECK_OBJECT(par_dynamic);
    Py_DECREF(par_dynamic);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_displayname);
    Py_DECREF(par_displayname);
    CHECK_OBJECT(par_dynamic);
    Py_DECREF(par_dynamic);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_comtypes$client$$$function__1_wrap_outparam() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$$$function__1_wrap_outparam,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7e3c5127f7a1cf5ad1f89d2673812073,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$client$$$function__2_GetBestInterface() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$$$function__2_GetBestInterface,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bb09f6eca9b2d63daf7c265aa5860b73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$client$$$function__3_GetActiveObject(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$$$function__3_GetActiveObject,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bc6660c749f8bd495b90ee86c3abe4e3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$client$$$function__4__manage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$$$function__4__manage,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_10ac68b96f80a9d5a193dedde107205c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$client$$$function__5_GetClassObject(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$$$function__5_GetClassObject,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_efbfc1b4a117332aa521c29bbec00d79,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$client$$$function__6_CreateObject(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$$$function__6_CreateObject,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b10943f20791f25cdeb536fb06acc859,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$client$$$function__7_CoGetObject(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$$$function__7_CoGetObject,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c80ebabffcc500d16a3b9a3e1db05278,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client,
        mod_consts[76],
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

function_impl_code functable_comtypes$client[] = {
    impl_comtypes$client$$$function__1_wrap_outparam,
    impl_comtypes$client$$$function__2_GetBestInterface,
    impl_comtypes$client$$$function__3_GetActiveObject,
    impl_comtypes$client$$$function__4__manage,
    impl_comtypes$client$$$function__5_GetClassObject,
    impl_comtypes$client$$$function__6_CreateObject,
    impl_comtypes$client$$$function__7_CoGetObject,
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

    function_impl_code *current = functable_comtypes$client;
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

    if (offset > sizeof(functable_comtypes$client) || offset < 0) {
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
        functable_comtypes$client[offset],
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
        module_comtypes$client,
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
PyObject *modulecode_comtypes$client(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("comtypes.client");

    // Store the module for future use.
    module_comtypes$client = module;

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
        PRINT_STRING("comtypes.client: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.client: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.client: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcomtypes$client\n");

    moduledict_comtypes$client = MODULE_DICT(module_comtypes$client);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_comtypes$client,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_comtypes$client,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[133]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_comtypes$client,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$client,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$client,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_comtypes$client);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_comtypes$client, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_comtypes$client, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_comtypes$client, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_comtypes$client);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_61282d493db4c919ec45a4cc03c98145;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST1(mod_consts[81]);
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_3);
    }
    frame_61282d493db4c919ec45a4cc03c98145 = MAKE_MODULE_FRAME(codeobj_61282d493db4c919ec45a4cc03c98145, module_comtypes$client);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_61282d493db4c919ec45a4cc03c98145);
    assert(Py_REFCNT(frame_61282d493db4c919ec45a4cc03c98145) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_subscript_value_1 = mod_consts[26];
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
        tmp_assattr_value_1 = mod_consts[79];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[84], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[85], tmp_assattr_value_2);
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
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[86], tmp_assattr_value_3);
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
        UPDATE_STRING_DICT0(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[4];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$client;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[26];
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 15;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_8);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[91];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_comtypes$client;
        tmp_locals_arg_value_2 = (PyObject *)moduledict_comtypes$client;
        tmp_fromlist_value_2 = mod_consts[92];
        tmp_level_value_2 = mod_consts[26];
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 16;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_comtypes$client, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[93];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_comtypes$client;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[26];
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 17;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[94];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_comtypes$client;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[26];
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 18;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[95];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_comtypes$client;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[26];
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 19;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[96];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_comtypes$client;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[97];
        tmp_level_value_6 = mod_consts[26];
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 21;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$client,
                mod_consts[98],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[98]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[99];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_comtypes$client;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[100];
        tmp_level_value_7 = mod_consts[26];
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 22;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_comtypes$client,
                mod_consts[101],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[101]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_comtypes$client,
                mod_consts[102],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[102]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_comtypes$client,
                mod_consts[103],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[103]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_16);
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
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[104];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_comtypes$client;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[105];
        tmp_level_value_8 = mod_consts[26];
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 23;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_comtypes$client,
                mod_consts[45],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[106];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_comtypes$client;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = Py_None;
        tmp_level_value_9 = mod_consts[26];
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 25;
        tmp_assign_source_18 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 26;
        tmp_assign_source_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[107],
            PyTuple_GET_ITEM(mod_consts[108], 0)
        );

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_LIST8(mod_consts[109]);
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[111];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_comtypes$client;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[112];
        tmp_level_value_10 = mod_consts[26];
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 32;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_comtypes$client,
                mod_consts[113],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[113]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 34;
        tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[115];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_comtypes$client;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = Py_None;
        tmp_level_value_11 = mod_consts[26];
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 35;
        tmp_assign_source_23 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_comtypes$client$$$function__1_wrap_outparam();

        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_comtypes$client$$$function__2_GetBestInterface();

        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assign_source_26 == NULL)) {
            tmp_assign_source_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_assign_source_26 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_assattr_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_assattr_value_4 == NULL)) {
            tmp_assattr_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        assert(!(tmp_assattr_value_4 == NULL));
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[118]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        frame_61282d493db4c919ec45a4cc03c98145->m_frame.f_lineno = 134;
        tmp_assattr_target_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[119], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_61282d493db4c919ec45a4cc03c98145, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61282d493db4c919ec45a4cc03c98145->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61282d493db4c919ec45a4cc03c98145, exception_lineno);
    }



    assertFrameObject(frame_61282d493db4c919ec45a4cc03c98145);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[120];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_27 = MAKE_FUNCTION_comtypes$client$$$function__3_GetActiveObject(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_comtypes$client$$$function__4__manage();

        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[121];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_29 = MAKE_FUNCTION_comtypes$client$$$function__5_GetClassObject(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[123];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_30 = MAKE_FUNCTION_comtypes$client$$$function__6_CreateObject(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[120];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_31 = MAKE_FUNCTION_comtypes$client$$$function__7_CoGetObject(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_comtypes$client, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_31);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("comtypes.client", false);

    Py_INCREF(module_comtypes$client);
    return module_comtypes$client;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$client, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("comtypes$client", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
