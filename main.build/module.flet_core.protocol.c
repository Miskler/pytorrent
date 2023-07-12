/* Generated code for Python module 'flet_core.protocol'
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

/* The "module_flet_core$protocol" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$protocol;
PyDictObject *moduledict_flet_core$protocol;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[146];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[146];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.protocol"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 146; i++) {
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
void checkModuleConstants_flet_core$protocol(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 146; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5b3e07acb4f2a60902841bbd0cf59353;
static PyCodeObject *codeobj_79dd78714470f3340871997f06770f70;
static PyCodeObject *codeobj_757b40e64d361f33a07fb037605e8dd2;
static PyCodeObject *codeobj_a23938272d762f0c89fe8a32e56ee550;
static PyCodeObject *codeobj_09c5046b62283e792abf5ffb396156c0;
static PyCodeObject *codeobj_9619253f7bd9107da149c11e5b415915;
static PyCodeObject *codeobj_14c02a1c1367a6ba6e89a90b8dc93dbf;
static PyCodeObject *codeobj_9a7244886de9d1fd17ca127cbe583092;
static PyCodeObject *codeobj_cd1f5e426dd129f04b3f5137a3eb795f;
static PyCodeObject *codeobj_aedde037fc38a8f513af7fd51afa76c9;
static PyCodeObject *codeobj_b5e8795cc63cf273260ce990c913de2b;
static PyCodeObject *codeobj_27e8a525ad3bf5aaae45ec18012a47b1;
static PyCodeObject *codeobj_e35ac8b5088b4e24e6ea5000dd57bd6c;
static PyCodeObject *codeobj_173b3cc02cebb99bc355853fb9c5d4c5;
static PyCodeObject *codeobj_fc9cce8c77ac860e08664091b360ce78;
static PyCodeObject *codeobj_7b842050373174bbc73ac8b2575c69bc;
static PyCodeObject *codeobj_81f0df2469d9e448f01186a69d05af1c;
static PyCodeObject *codeobj_ea0bb258ec9c208307b6f126f70d75d1;
static PyCodeObject *codeobj_4ce9f8da44d5172d01a3fd806a636396;
static PyCodeObject *codeobj_0f6e2c70884f612d142f40cbb179a65c;
static PyCodeObject *codeobj_ef40bc32cafd822dab2a3927b5635f03;
static PyCodeObject *codeobj_a653b79f12ab7d4356f971762acb62cd;
static PyCodeObject *codeobj_8b3032daf58c967fe63832167cb53421;
static PyCodeObject *codeobj_c57a460c7bfd4737c8f4ebe3a32e5929;
static PyCodeObject *codeobj_f0508676a60d40da892872474f1691fc;
static PyCodeObject *codeobj_86a7edb14153fa3a8a85ec02f6b98a4b;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[21]; CHECK_OBJECT(module_filename_obj);
    codeobj_5b3e07acb4f2a60902841bbd0cf59353 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], NULL, NULL, 0, 0, 0);
    codeobj_79dd78714470f3340871997f06770f70 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[142], mod_consts[142], NULL, NULL, 0, 0, 0);
    codeobj_757b40e64d361f33a07fb037605e8dd2 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_NOFREE, mod_consts[133], mod_consts[133], mod_consts[143], NULL, 0, 0, 0);
    codeobj_a23938272d762f0c89fe8a32e56ee550 = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[143], NULL, 0, 0, 0);
    codeobj_09c5046b62283e792abf5ffb396156c0 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[143], NULL, 0, 0, 0);
    codeobj_9619253f7bd9107da149c11e5b415915 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[143], NULL, 0, 0, 0);
    codeobj_14c02a1c1367a6ba6e89a90b8dc93dbf = MAKE_CODE_OBJECT(module_filename_obj, 6, CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[143], NULL, 0, 0, 0);
    codeobj_9a7244886de9d1fd17ca127cbe583092 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[143], NULL, 0, 0, 0);
    codeobj_cd1f5e426dd129f04b3f5137a3eb795f = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[143], NULL, 0, 0, 0);
    codeobj_aedde037fc38a8f513af7fd51afa76c9 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[143], NULL, 0, 0, 0);
    codeobj_b5e8795cc63cf273260ce990c913de2b = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[143], NULL, 0, 0, 0);
    codeobj_27e8a525ad3bf5aaae45ec18012a47b1 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[143], NULL, 0, 0, 0);
    codeobj_e35ac8b5088b4e24e6ea5000dd57bd6c = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[143], NULL, 0, 0, 0);
    codeobj_173b3cc02cebb99bc355853fb9c5d4c5 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[143], NULL, 0, 0, 0);
    codeobj_fc9cce8c77ac860e08664091b360ce78 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[143], NULL, 0, 0, 0);
    codeobj_7b842050373174bbc73ac8b2575c69bc = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[143], NULL, 0, 0, 0);
    codeobj_81f0df2469d9e448f01186a69d05af1c = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[143], NULL, 0, 0, 0);
    codeobj_ea0bb258ec9c208307b6f126f70d75d1 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[143], NULL, 0, 0, 0);
    codeobj_4ce9f8da44d5172d01a3fd806a636396 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[143], NULL, 0, 0, 0);
    codeobj_0f6e2c70884f612d142f40cbb179a65c = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[143], NULL, 0, 0, 0);
    codeobj_ef40bc32cafd822dab2a3927b5635f03 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[143], NULL, 0, 0, 0);
    codeobj_a653b79f12ab7d4356f971762acb62cd = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[143], NULL, 0, 0, 0);
    codeobj_8b3032daf58c967fe63832167cb53421 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[143], NULL, 0, 0, 0);
    codeobj_c57a460c7bfd4737c8f4ebe3a32e5929 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_NOFREE, mod_consts[137], mod_consts[137], mod_consts[143], NULL, 0, 0, 0);
    codeobj_f0508676a60d40da892872474f1691fc = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[144], NULL, 1, 0, 0);
    codeobj_86a7edb14153fa3a8a85ec02f6b98a4b = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[145], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$protocol$$$function__1_default();


static PyObject *MAKE_FUNCTION_flet_core$protocol$$$function__2___str__();


static PyObject *MAKE_FUNCTION_flet_core$protocol$$$function__3_lambda();


// The module function definitions.
static PyObject *impl_flet_core$protocol$$$function__1_default(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *var_d = NULL;
    struct Nuitka_FrameObject *frame_86a7edb14153fa3a8a85ec02f6b98a4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_86a7edb14153fa3a8a85ec02f6b98a4b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_86a7edb14153fa3a8a85ec02f6b98a4b)) {
        Py_XDECREF(cache_frame_86a7edb14153fa3a8a85ec02f6b98a4b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_86a7edb14153fa3a8a85ec02f6b98a4b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_86a7edb14153fa3a8a85ec02f6b98a4b = MAKE_FUNCTION_FRAME(codeobj_86a7edb14153fa3a8a85ec02f6b98a4b, module_flet_core$protocol, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_86a7edb14153fa3a8a85ec02f6b98a4b->m_type_description == NULL);
    frame_86a7edb14153fa3a8a85ec02f6b98a4b = cache_frame_86a7edb14153fa3a8a85ec02f6b98a4b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_86a7edb14153fa3a8a85ec02f6b98a4b);
    assert(Py_REFCNT(frame_86a7edb14153fa3a8a85ec02f6b98a4b) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_obj);
        tmp_isinstance_inst_1 = par_obj;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_1 = par_obj;
        tmp_return_value = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_obj);
        tmp_isinstance_inst_2 = par_obj;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_2 = par_obj;
        tmp_return_value = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(par_obj);
        tmp_isinstance_inst_3 = par_obj;
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(var_d == NULL);
        var_d = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_3 = par_obj;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_4 = par_obj;
        tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_d);
        tmp_dictset_dict = var_d;
        tmp_dictset_key = mod_consts[5];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_5 = par_obj;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[6]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_6 = par_obj;
        tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[6]);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (var_d == NULL) {
            Py_DECREF(tmp_dictset_value);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dictset_dict = var_d;
        tmp_dictset_key = mod_consts[8];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_8;
        bool tmp_tmp_and_right_value_1_cbool_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_7 = par_obj;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[9]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_8 = par_obj;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[9]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = 0;
        tmp_tmp_and_right_value_1_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        tmp_and_right_value_1 = tmp_tmp_and_right_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_9 = par_obj;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[9]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (var_d == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_d;
        tmp_ass_subscript_1 = mod_consts[10];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_cmp_expr_left_4;
        nuitka_digit tmp_cmp_expr_right_4;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_11;
        bool tmp_tmp_and_right_value_2_cbool_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_10 = par_obj;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[11]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_11 = par_obj;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[11]);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_4 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = 0;
        tmp_tmp_and_right_value_2_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        tmp_and_right_value_2 = tmp_tmp_and_right_value_2_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_7 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_7 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_12 = par_obj;
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[11]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (var_d == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_d;
        tmp_ass_subscript_2 = mod_consts[12];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        PyObject *tmp_cmp_expr_left_5;
        nuitka_digit tmp_cmp_expr_right_5;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_expression_value_14;
        bool tmp_tmp_and_right_value_3_cbool_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_13 = par_obj;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[13]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_14 = par_obj;
        tmp_len_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[13]);
        if (tmp_len_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_5 = BUILTIN_LEN(tmp_len_arg_3);
        Py_DECREF(tmp_len_arg_3);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = 0;
        tmp_tmp_and_right_value_3_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        tmp_and_right_value_3 = tmp_tmp_and_right_value_3_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_8 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_8 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_15 = par_obj;
        tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[13]);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (var_d == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = var_d;
        tmp_ass_subscript_3 = mod_consts[14];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_8:;
    if (var_d == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_d;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(par_obj);
        tmp_isinstance_inst_4 = par_obj;
        tmp_isinstance_cls_4 = (PyObject *)&PyBaseObject_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_16 = par_obj;
        tmp_return_value = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_16);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_9:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[16]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_2 = par_obj;
        frame_86a7edb14153fa3a8a85ec02f6b98a4b->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[17],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_86a7edb14153fa3a8a85ec02f6b98a4b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_86a7edb14153fa3a8a85ec02f6b98a4b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_86a7edb14153fa3a8a85ec02f6b98a4b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_86a7edb14153fa3a8a85ec02f6b98a4b,
        type_description_1,
        par_self,
        par_obj,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_86a7edb14153fa3a8a85ec02f6b98a4b == cache_frame_86a7edb14153fa3a8a85ec02f6b98a4b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_86a7edb14153fa3a8a85ec02f6b98a4b);
        cache_frame_86a7edb14153fa3a8a85ec02f6b98a4b = NULL;
    }

    assertFrameObject(frame_86a7edb14153fa3a8a85ec02f6b98a4b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_d);
    var_d = NULL;
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

    Py_XDECREF(var_d);
    var_d = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$protocol$$$function__2___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f0508676a60d40da892872474f1691fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f0508676a60d40da892872474f1691fc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f0508676a60d40da892872474f1691fc)) {
        Py_XDECREF(cache_frame_f0508676a60d40da892872474f1691fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0508676a60d40da892872474f1691fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0508676a60d40da892872474f1691fc = MAKE_FUNCTION_FRAME(codeobj_f0508676a60d40da892872474f1691fc, module_flet_core$protocol, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0508676a60d40da892872474f1691fc->m_type_description == NULL);
    frame_f0508676a60d40da892872474f1691fc = cache_frame_f0508676a60d40da892872474f1691fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f0508676a60d40da892872474f1691fc);
    assert(Py_REFCNT(frame_f0508676a60d40da892872474f1691fc) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[18];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[18];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[18];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[18], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
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
        exception_tb = MAKE_TRACEBACK(frame_f0508676a60d40da892872474f1691fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0508676a60d40da892872474f1691fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0508676a60d40da892872474f1691fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0508676a60d40da892872474f1691fc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f0508676a60d40da892872474f1691fc == cache_frame_f0508676a60d40da892872474f1691fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0508676a60d40da892872474f1691fc);
        cache_frame_f0508676a60d40da892872474f1691fc = NULL;
    }

    assertFrameObject(frame_f0508676a60d40da892872474f1691fc);

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


static PyObject *impl_flet_core$protocol$$$function__3_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto function_return_exit;

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



static PyObject *MAKE_FUNCTION_flet_core$protocol$$$function__1_default() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$protocol$$$function__1_default,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_86a7edb14153fa3a8a85ec02f6b98a4b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$protocol$$$function__2___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$protocol$$$function__2___str__,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_f0508676a60d40da892872474f1691fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$protocol$$$function__3_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$protocol$$$function__3_lambda,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_5b3e07acb4f2a60902841bbd0cf59353,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$protocol,
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

function_impl_code functable_flet_core$protocol[] = {
    impl_flet_core$protocol$$$function__1_default,
    impl_flet_core$protocol$$$function__2___str__,
    impl_flet_core$protocol$$$function__3_lambda,
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

    function_impl_code *current = functable_flet_core$protocol;
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

    if (offset > sizeof(functable_flet_core$protocol) || offset < 0) {
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
        functable_flet_core$protocol[offset],
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
        module_flet_core$protocol,
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
PyObject *modulecode_flet_core$protocol(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.protocol");

    // Store the module for future use.
    module_flet_core$protocol = module;

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
        PRINT_STRING("flet_core.protocol: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.protocol: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.protocol: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$protocol\n");

    moduledict_flet_core$protocol = MODULE_DICT(module_flet_core$protocol);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$protocol,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$protocol,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[18]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$protocol,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$protocol,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$protocol,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$protocol);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$protocol, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$protocol, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$protocol, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$protocol);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *outline_20_var___class__ = NULL;
    PyObject *outline_21_var___class__ = NULL;
    PyObject *outline_22_var___class__ = NULL;
    PyObject *outline_23_var___class__ = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_class_creation_22__prepared = NULL;
    PyObject *tmp_class_creation_23__class_decl_dict = NULL;
    PyObject *tmp_class_creation_23__prepared = NULL;
    PyObject *tmp_class_creation_24__class_decl_dict = NULL;
    PyObject *tmp_class_creation_24__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
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
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_79dd78714470f3340871997f06770f70;
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
    PyObject *locals_flet_core$protocol$$$class__1_CommandEncoder_6 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_14c02a1c1367a6ba6e89a90b8dc93dbf_2;
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
    PyObject *locals_flet_core$protocol$$$class__2_Actions_30 = NULL;
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
    PyObject *locals_flet_core$protocol$$$class__3_Command_39 = NULL;
    struct Nuitka_FrameObject *frame_9619253f7bd9107da149c11e5b415915_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_flet_core$protocol$$$class__4_Message_51 = NULL;
    struct Nuitka_FrameObject *frame_cd1f5e426dd129f04b3f5137a3eb795f_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58 = NULL;
    struct Nuitka_FrameObject *frame_aedde037fc38a8f513af7fd51afa76c9_5;
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
    PyObject *locals_flet_core$protocol$$$class__6_PageCommandResponsePayload_65 = NULL;
    struct Nuitka_FrameObject *frame_b5e8795cc63cf273260ce990c913de2b_6;
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
    PyObject *locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71 = NULL;
    struct Nuitka_FrameObject *frame_27e8a525ad3bf5aaae45ec18012a47b1_7;
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
    PyObject *locals_flet_core$protocol$$$class__8_PageCommandsBatchResponsePayload_78 = NULL;
    struct Nuitka_FrameObject *frame_e35ac8b5088b4e24e6ea5000dd57bd6c_8;
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
    PyObject *locals_flet_core$protocol$$$class__9_PageEventPayload_84 = NULL;
    struct Nuitka_FrameObject *frame_fc9cce8c77ac860e08664091b360ce78_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93 = NULL;
    struct Nuitka_FrameObject *frame_81f0df2469d9e448f01186a69d05af1c_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103 = NULL;
    struct Nuitka_FrameObject *frame_ea0bb258ec9c208307b6f126f70d75d1_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *locals_flet_core$protocol$$$class__12_PageSessionCreatedPayload_111 = NULL;
    struct Nuitka_FrameObject *frame_7b842050373174bbc73ac8b2575c69bc_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *locals_flet_core$protocol$$$class__13_ClientActions_121 = NULL;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *locals_flet_core$protocol$$$class__14_ClientMessage_134 = NULL;
    struct Nuitka_FrameObject *frame_09c5046b62283e792abf5ffb396156c0_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140 = NULL;
    struct Nuitka_FrameObject *frame_4ce9f8da44d5172d01a3fd806a636396_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *locals_flet_core$protocol$$$class__16_SessionPayload_156 = NULL;
    struct Nuitka_FrameObject *frame_8b3032daf58c967fe63832167cb53421_15;
    NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162 = NULL;
    struct Nuitka_FrameObject *frame_0f6e2c70884f612d142f40cbb179a65c_16;
    NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169 = NULL;
    struct Nuitka_FrameObject *frame_173b3cc02cebb99bc355853fb9c5d4c5_17;
    NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *locals_flet_core$protocol$$$class__19_SessionCrashedPayload_176 = NULL;
    struct Nuitka_FrameObject *frame_a653b79f12ab7d4356f971762acb62cd_18;
    NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181 = NULL;
    struct Nuitka_FrameObject *frame_9a7244886de9d1fd17ca127cbe583092_19;
    NUITKA_MAY_BE_UNUSED char const *type_description_19 = NULL;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188 = NULL;
    struct Nuitka_FrameObject *frame_757b40e64d361f33a07fb037605e8dd2_20;
    NUITKA_MAY_BE_UNUSED char const *type_description_20 = NULL;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *locals_flet_core$protocol$$$class__22_UpdateControlPropsPayload_194 = NULL;
    struct Nuitka_FrameObject *frame_c57a460c7bfd4737c8f4ebe3a32e5929_21;
    NUITKA_MAY_BE_UNUSED char const *type_description_21 = NULL;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *locals_flet_core$protocol$$$class__23_CleanControlPayload_199 = NULL;
    struct Nuitka_FrameObject *frame_a23938272d762f0c89fe8a32e56ee550_22;
    NUITKA_MAY_BE_UNUSED char const *type_description_22 = NULL;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
    PyObject *exception_keeper_type_70;
    PyObject *exception_keeper_value_70;
    PyTracebackObject *exception_keeper_tb_70;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
    PyObject *exception_keeper_type_71;
    PyObject *exception_keeper_value_71;
    PyTracebackObject *exception_keeper_tb_71;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
    PyObject *locals_flet_core$protocol$$$class__24_RemoveControlPayload_204 = NULL;
    struct Nuitka_FrameObject *frame_ef40bc32cafd822dab2a3927b5635f03_23;
    NUITKA_MAY_BE_UNUSED char const *type_description_23 = NULL;
    PyObject *exception_keeper_type_72;
    PyObject *exception_keeper_value_72;
    PyTracebackObject *exception_keeper_tb_72;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
    PyObject *exception_keeper_type_73;
    PyObject *exception_keeper_value_73;
    PyTracebackObject *exception_keeper_tb_73;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
    PyObject *exception_keeper_type_74;
    PyObject *exception_keeper_value_74;
    PyTracebackObject *exception_keeper_tb_74;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_2);
    }
    frame_79dd78714470f3340871997f06770f70 = MAKE_MODULE_FRAME(codeobj_79dd78714470f3340871997f06770f70, module_flet_core$protocol);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_79dd78714470f3340871997f06770f70);
    assert(Py_REFCNT(frame_79dd78714470f3340871997f06770f70) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[21];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[25], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$protocol;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[4];
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[27];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$protocol;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[28];
        tmp_level_value_2 = mod_consts[4];
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet_core$protocol,
                mod_consts[29],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[29]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$protocol,
                mod_consts[30],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[30]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_8 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_8);
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_3 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$protocol,
                mod_consts[31],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[31]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$protocol,
                mod_consts[32],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[32]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$protocol,
                mod_consts[33],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[33]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$protocol,
                mod_consts[34],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[34]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        tmp_assign_source_13 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_13, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_14 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

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
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[4];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_16 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[35]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[36];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 6;
        tmp_assign_source_17 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[37]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

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
        tmp_mod_expr_left_1 = mod_consts[38];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[39];
        tmp_getattr_default_1 = mod_consts[40];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[39]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

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


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 6;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$protocol$$$class__1_CommandEncoder_6 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyObject_SetItem(locals_flet_core$protocol$$$class__1_CommandEncoder_6, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyObject_SetItem(locals_flet_core$protocol$$$class__1_CommandEncoder_6, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_5;
        }
        frame_14c02a1c1367a6ba6e89a90b8dc93dbf_2 = MAKE_CLASS_FRAME(codeobj_14c02a1c1367a6ba6e89a90b8dc93dbf, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_14c02a1c1367a6ba6e89a90b8dc93dbf_2);
        assert(Py_REFCNT(frame_14c02a1c1367a6ba6e89a90b8dc93dbf_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_flet_core$protocol$$$function__1_default();

        tmp_res = PyObject_SetItem(locals_flet_core$protocol$$$class__1_CommandEncoder_6, mod_consts[17], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_14c02a1c1367a6ba6e89a90b8dc93dbf_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_14c02a1c1367a6ba6e89a90b8dc93dbf_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_14c02a1c1367a6ba6e89a90b8dc93dbf_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_14c02a1c1367a6ba6e89a90b8dc93dbf_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_14c02a1c1367a6ba6e89a90b8dc93dbf_2);

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


                exception_lineno = 6;

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
        tmp_res = PyObject_SetItem(locals_flet_core$protocol$$$class__1_CommandEncoder_6, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[36];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flet_core$protocol$$$class__1_CommandEncoder_6;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 6;
            tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_19 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_flet_core$protocol$$$class__1_CommandEncoder_6);
        locals_flet_core$protocol$$$class__1_CommandEncoder_6 = NULL;
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

        Py_DECREF(locals_flet_core$protocol$$$class__1_CommandEncoder_6);
        locals_flet_core$protocol$$$class__1_CommandEncoder_6 = NULL;
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
        exception_lineno = 6;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_19);
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
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$protocol$$$class__2_Actions_30 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__2_Actions_30, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[46];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__2_Actions_30, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[47];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__2_Actions_30, mod_consts[48], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__2_Actions_30, mod_consts[50], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__2_Actions_30, mod_consts[52], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__2_Actions_30, mod_consts[54], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__2_Actions_30, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[46];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_flet_core$protocol$$$class__2_Actions_30;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 30;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_23 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_flet_core$protocol$$$class__2_Actions_30);
        locals_flet_core$protocol$$$class__2_Actions_30 = NULL;
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

        Py_DECREF(locals_flet_core$protocol$$$class__2_Actions_30);
        locals_flet_core$protocol$$$class__2_Actions_30 = NULL;
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
        exception_lineno = 30;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_23);
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
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_flet_core$protocol$$$class__3_Command_39 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__3_Command_39, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[2];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__3_Command_39, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__3_Command_39, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_9619253f7bd9107da149c11e5b415915_3 = MAKE_CLASS_FRAME(codeobj_9619253f7bd9107da149c11e5b415915, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9619253f7bd9107da149c11e5b415915_3);
        assert(Py_REFCNT(frame_9619253f7bd9107da149c11e5b415915_3) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_1 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__3_Command_39, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_1 = mod_consts[3];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
            if (tmp_ass_subvalue_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscribed_2 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__3_Command_39, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_2 = mod_consts[6];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_5;
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_9619253f7bd9107da149c11e5b415915_3->m_frame.f_lineno = 42;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[60]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__3_Command_39, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
            if (tmp_ass_subvalue_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscribed_3 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__3_Command_39, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_3 = mod_consts[9];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_6;
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_9619253f7bd9107da149c11e5b415915_3->m_frame.f_lineno = 43;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[61], 0), mod_consts[60]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__3_Command_39, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_4 = mod_consts[62];
            tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
            if (tmp_ass_subvalue_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscribed_4 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__3_Command_39, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_4);

                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_4 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_7;
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_9619253f7bd9107da149c11e5b415915_3->m_frame.f_lineno = 44;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[60]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__3_Command_39, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_subscript_value_5 == NULL)) {
                tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_subscript_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
            if (tmp_ass_subvalue_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscribed_5 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__3_Command_39, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_5);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_5);

                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_5 = mod_consts[13];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            Py_DECREF(tmp_ass_subvalue_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9619253f7bd9107da149c11e5b415915_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9619253f7bd9107da149c11e5b415915_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9619253f7bd9107da149c11e5b415915_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9619253f7bd9107da149c11e5b415915_3,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_9619253f7bd9107da149c11e5b415915_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_11;
        skip_nested_handling_2:;


        tmp_dictset_value = MAKE_FUNCTION_flet_core$protocol$$$function__2___str__();

        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__3_Command_39, mod_consts[63], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_8 = (PyObject *)&PyType_Type;
            tmp_tuple_element_6 = mod_consts[2];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_flet_core$protocol$$$class__3_Command_39;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 39;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_args_element_value_1 = outline_2_var___class__;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_flet_core$protocol$$$class__3_Command_39);
        locals_flet_core$protocol$$$class__3_Command_39 = NULL;
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

        Py_DECREF(locals_flet_core$protocol$$$class__3_Command_39);
        locals_flet_core$protocol$$$class__3_Command_39 = NULL;
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
        exception_lineno = 39;
        goto try_except_handler_9;
        outline_result_3:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 38;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_27);
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

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_12;
        }
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_flet_core$protocol$$$class__4_Message_51 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__4_Message_51, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[0];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__4_Message_51, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__4_Message_51, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_cd1f5e426dd129f04b3f5137a3eb795f_4 = MAKE_CLASS_FRAME(codeobj_cd1f5e426dd129f04b3f5137a3eb795f, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_cd1f5e426dd129f04b3f5137a3eb795f_4);
        assert(Py_REFCNT(frame_cd1f5e426dd129f04b3f5137a3eb795f_4) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_6 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__4_Message_51, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_6 = mod_consts[65];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_7 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__4_Message_51, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_7 = mod_consts[66];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_ass_subvalue_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_ass_subvalue_8 == NULL)) {
                tmp_ass_subvalue_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_ass_subvalue_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscribed_8 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__4_Message_51, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_8 = mod_consts[67];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cd1f5e426dd129f04b3f5137a3eb795f_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cd1f5e426dd129f04b3f5137a3eb795f_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cd1f5e426dd129f04b3f5137a3eb795f_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cd1f5e426dd129f04b3f5137a3eb795f_4,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_cd1f5e426dd129f04b3f5137a3eb795f_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_14;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_10 = (PyObject *)&PyType_Type;
            tmp_tuple_element_7 = mod_consts[0];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_flet_core$protocol$$$class__4_Message_51;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_4__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 51;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_args_element_value_2 = outline_3_var___class__;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_flet_core$protocol$$$class__4_Message_51);
        locals_flet_core$protocol$$$class__4_Message_51 = NULL;
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

        Py_DECREF(locals_flet_core$protocol$$$class__4_Message_51);
        locals_flet_core$protocol$$$class__4_Message_51 = NULL;
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
        exception_lineno = 51;
        goto try_except_handler_12;
        outline_result_4:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 50;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_31);
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
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_34;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_15;
        }
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_aedde037fc38a8f513af7fd51afa76c9_5 = MAKE_CLASS_FRAME(codeobj_aedde037fc38a8f513af7fd51afa76c9, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_aedde037fc38a8f513af7fd51afa76c9_5);
        assert(Py_REFCNT(frame_aedde037fc38a8f513af7fd51afa76c9_5) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_ass_subvalue_9 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_9 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_9 = mod_consts[69];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            tmp_ass_subvalue_10 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_10 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_10 = mod_consts[70];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_ass_subvalue_11;
            PyObject *tmp_ass_subscribed_11;
            PyObject *tmp_ass_subscript_11;
            tmp_ass_subvalue_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_ass_subvalue_11 == NULL)) {
                tmp_ass_subvalue_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_ass_subvalue_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_11 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_11 = mod_consts[71];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_aedde037fc38a8f513af7fd51afa76c9_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_aedde037fc38a8f513af7fd51afa76c9_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_aedde037fc38a8f513af7fd51afa76c9_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_aedde037fc38a8f513af7fd51afa76c9_5,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_aedde037fc38a8f513af7fd51afa76c9_5);

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
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_6;
            tmp_called_value_12 = (PyObject *)&PyType_Type;
            tmp_tuple_element_8 = mod_consts[68];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_5__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 58;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto try_except_handler_17;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_args_element_value_3 = outline_4_var___class__;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58);
        locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58 = NULL;
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

        Py_DECREF(locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58);
        locals_flet_core$protocol$$$class__5_PageCommandRequestPayload_58 = NULL;
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
        exception_lineno = 58;
        goto try_except_handler_15;
        outline_result_5:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 57;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_35);
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

    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_18;
        }
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_flet_core$protocol$$$class__6_PageCommandResponsePayload_65 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__6_PageCommandResponsePayload_65, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__6_PageCommandResponsePayload_65, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__6_PageCommandResponsePayload_65, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_b5e8795cc63cf273260ce990c913de2b_6 = MAKE_CLASS_FRAME(codeobj_b5e8795cc63cf273260ce990c913de2b, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b5e8795cc63cf273260ce990c913de2b_6);
        assert(Py_REFCNT(frame_b5e8795cc63cf273260ce990c913de2b_6) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_12;
            PyObject *tmp_ass_subscribed_12;
            PyObject *tmp_ass_subscript_12;
            tmp_ass_subvalue_12 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_12 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__6_PageCommandResponsePayload_65, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_12 = mod_consts[73];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_13;
            PyObject *tmp_ass_subscribed_13;
            PyObject *tmp_ass_subscript_13;
            tmp_ass_subvalue_13 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_13 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__6_PageCommandResponsePayload_65, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_13 = mod_consts[74];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b5e8795cc63cf273260ce990c913de2b_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b5e8795cc63cf273260ce990c913de2b_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b5e8795cc63cf273260ce990c913de2b_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b5e8795cc63cf273260ce990c913de2b_6,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_b5e8795cc63cf273260ce990c913de2b_6);

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
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_7;
            tmp_called_value_14 = (PyObject *)&PyType_Type;
            tmp_tuple_element_9 = mod_consts[72];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_flet_core$protocol$$$class__6_PageCommandResponsePayload_65;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_6__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 65;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto try_except_handler_20;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_args_element_value_4 = outline_5_var___class__;
        Py_INCREF(tmp_args_element_value_4);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_flet_core$protocol$$$class__6_PageCommandResponsePayload_65);
        locals_flet_core$protocol$$$class__6_PageCommandResponsePayload_65 = NULL;
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

        Py_DECREF(locals_flet_core$protocol$$$class__6_PageCommandResponsePayload_65);
        locals_flet_core$protocol$$$class__6_PageCommandResponsePayload_65 = NULL;
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
        exception_lineno = 65;
        goto try_except_handler_18;
        outline_result_6:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 64;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_39);
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

    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_42;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_21;
        }
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[75];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_27e8a525ad3bf5aaae45ec18012a47b1_7 = MAKE_CLASS_FRAME(codeobj_27e8a525ad3bf5aaae45ec18012a47b1, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_27e8a525ad3bf5aaae45ec18012a47b1_7);
        assert(Py_REFCNT(frame_27e8a525ad3bf5aaae45ec18012a47b1_7) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_14;
            PyObject *tmp_ass_subscribed_14;
            PyObject *tmp_ass_subscript_14;
            tmp_ass_subvalue_14 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_14 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_14 = mod_consts[69];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_15;
            PyObject *tmp_ass_subscribed_15;
            PyObject *tmp_ass_subscript_15;
            tmp_ass_subvalue_15 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_15 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_15 = mod_consts[70];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_ass_subvalue_16;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_ass_subscribed_16;
            PyObject *tmp_ass_subscript_16;
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_subscript_value_6 == NULL)) {
                tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subvalue_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_6);
            if (tmp_ass_subvalue_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscribed_16 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_16);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_16);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_16 = mod_consts[13];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
            Py_DECREF(tmp_ass_subvalue_16);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_27e8a525ad3bf5aaae45ec18012a47b1_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_27e8a525ad3bf5aaae45ec18012a47b1_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_27e8a525ad3bf5aaae45ec18012a47b1_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_27e8a525ad3bf5aaae45ec18012a47b1_7,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_27e8a525ad3bf5aaae45ec18012a47b1_7);

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
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_8;
            tmp_called_value_16 = (PyObject *)&PyType_Type;
            tmp_tuple_element_10 = mod_consts[75];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_7__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 71;
            tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto try_except_handler_23;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_args_element_value_5 = outline_6_var___class__;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71);
        locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71 = NULL;
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

        Py_DECREF(locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71);
        locals_flet_core$protocol$$$class__7_PageCommandsBatchRequestPayload_71 = NULL;
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
        exception_lineno = 71;
        goto try_except_handler_21;
        outline_result_7:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 70;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_43);
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

    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_46;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_24;
        }
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_flet_core$protocol$$$class__8_PageCommandsBatchResponsePayload_78 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__8_PageCommandsBatchResponsePayload_78, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__8_PageCommandsBatchResponsePayload_78, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__8_PageCommandsBatchResponsePayload_78, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_e35ac8b5088b4e24e6ea5000dd57bd6c_8 = MAKE_CLASS_FRAME(codeobj_e35ac8b5088b4e24e6ea5000dd57bd6c, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e35ac8b5088b4e24e6ea5000dd57bd6c_8);
        assert(Py_REFCNT(frame_e35ac8b5088b4e24e6ea5000dd57bd6c_8) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_17;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_ass_subscribed_17;
            PyObject *tmp_ass_subscript_17;
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_7);
            if (tmp_ass_subvalue_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscribed_17 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__8_PageCommandsBatchResponsePayload_78, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_17);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_17);

                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_17 = mod_consts[77];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
            Py_DECREF(tmp_ass_subvalue_17);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_18;
            PyObject *tmp_ass_subscribed_18;
            PyObject *tmp_ass_subscript_18;
            tmp_ass_subvalue_18 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_18 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__8_PageCommandsBatchResponsePayload_78, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_18 = mod_consts[74];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
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
            exception_tb = MAKE_TRACEBACK(frame_e35ac8b5088b4e24e6ea5000dd57bd6c_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e35ac8b5088b4e24e6ea5000dd57bd6c_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e35ac8b5088b4e24e6ea5000dd57bd6c_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e35ac8b5088b4e24e6ea5000dd57bd6c_8,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_e35ac8b5088b4e24e6ea5000dd57bd6c_8);

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
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_9;
            tmp_called_value_18 = (PyObject *)&PyType_Type;
            tmp_tuple_element_11 = mod_consts[76];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_flet_core$protocol$$$class__8_PageCommandsBatchResponsePayload_78;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_8__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 78;
            tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto try_except_handler_26;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_args_element_value_6 = outline_7_var___class__;
        Py_INCREF(tmp_args_element_value_6);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_flet_core$protocol$$$class__8_PageCommandsBatchResponsePayload_78);
        locals_flet_core$protocol$$$class__8_PageCommandsBatchResponsePayload_78 = NULL;
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

        Py_DECREF(locals_flet_core$protocol$$$class__8_PageCommandsBatchResponsePayload_78);
        locals_flet_core$protocol$$$class__8_PageCommandsBatchResponsePayload_78 = NULL;
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
        exception_lineno = 78;
        goto try_except_handler_24;
        outline_result_8:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 77;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_47);
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
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_50;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_27;
        }
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_flet_core$protocol$$$class__9_PageEventPayload_84 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__9_PageEventPayload_84, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__9_PageEventPayload_84, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__9_PageEventPayload_84, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_fc9cce8c77ac860e08664091b360ce78_9 = MAKE_CLASS_FRAME(codeobj_fc9cce8c77ac860e08664091b360ce78, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_fc9cce8c77ac860e08664091b360ce78_9);
        assert(Py_REFCNT(frame_fc9cce8c77ac860e08664091b360ce78_9) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_19;
            PyObject *tmp_ass_subscribed_19;
            PyObject *tmp_ass_subscript_19;
            tmp_ass_subvalue_19 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_19 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__9_PageEventPayload_84, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_19 = mod_consts[69];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_20;
            PyObject *tmp_ass_subscribed_20;
            PyObject *tmp_ass_subscript_20;
            tmp_ass_subvalue_20 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_20 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__9_PageEventPayload_84, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_20 = mod_consts[70];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_21;
            PyObject *tmp_ass_subscribed_21;
            PyObject *tmp_ass_subscript_21;
            tmp_ass_subvalue_21 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_21 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__9_PageEventPayload_84, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_21 = mod_consts[79];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_22;
            PyObject *tmp_ass_subscribed_22;
            PyObject *tmp_ass_subscript_22;
            tmp_ass_subvalue_22 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_22 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__9_PageEventPayload_84, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_22 = mod_consts[80];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_23;
            PyObject *tmp_ass_subscribed_23;
            PyObject *tmp_ass_subscript_23;
            tmp_ass_subvalue_23 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_23 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__9_PageEventPayload_84, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_23 = mod_consts[81];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fc9cce8c77ac860e08664091b360ce78_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fc9cce8c77ac860e08664091b360ce78_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fc9cce8c77ac860e08664091b360ce78_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fc9cce8c77ac860e08664091b360ce78_9,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_fc9cce8c77ac860e08664091b360ce78_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_29;
        skip_nested_handling_8:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_10;
            tmp_called_value_20 = (PyObject *)&PyType_Type;
            tmp_tuple_element_12 = mod_consts[78];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_flet_core$protocol$$$class__9_PageEventPayload_84;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_9__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 84;
            tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_29;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_args_element_value_7 = outline_8_var___class__;
        Py_INCREF(tmp_args_element_value_7);
        goto try_return_handler_29;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        Py_DECREF(locals_flet_core$protocol$$$class__9_PageEventPayload_84);
        locals_flet_core$protocol$$$class__9_PageEventPayload_84 = NULL;
        goto try_return_handler_28;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__9_PageEventPayload_84);
        locals_flet_core$protocol$$$class__9_PageEventPayload_84 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 84;
        goto try_except_handler_27;
        outline_result_9:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 83;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_27;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_51);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_54;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_30;
        }
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_81f0df2469d9e448f01186a69d05af1c_10 = MAKE_CLASS_FRAME(codeobj_81f0df2469d9e448f01186a69d05af1c, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_81f0df2469d9e448f01186a69d05af1c_10);
        assert(Py_REFCNT(frame_81f0df2469d9e448f01186a69d05af1c_10) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_24;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_ass_subscribed_24;
            PyObject *tmp_ass_subscript_24;
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_subscript_value_8 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_8);
            if (tmp_ass_subvalue_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_ass_subscribed_24 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_24);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }

            if (tmp_ass_subscribed_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_24);

                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_ass_subscript_24 = mod_consts[83];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
            Py_DECREF(tmp_ass_subvalue_24);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_ass_subvalue_25;
            PyObject *tmp_ass_subscribed_25;
            PyObject *tmp_ass_subscript_25;
            tmp_ass_subvalue_25 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_25 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }

            if (tmp_ass_subscribed_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_ass_subscript_25 = mod_consts[69];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_ass_subvalue_26;
            PyObject *tmp_ass_subscribed_26;
            PyObject *tmp_ass_subscript_26;
            tmp_ass_subvalue_26 = (PyObject *)&PyBool_Type;
            tmp_ass_subscribed_26 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }

            if (tmp_ass_subscribed_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_ass_subscript_26 = mod_consts[84];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_ass_subvalue_27;
            PyObject *tmp_ass_subscribed_27;
            PyObject *tmp_ass_subscript_27;
            tmp_ass_subvalue_27 = (PyObject *)&PyBool_Type;
            tmp_ass_subscribed_27 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }

            if (tmp_ass_subscribed_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_ass_subscript_27 = mod_consts[85];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_ass_subvalue_28;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_ass_subscribed_28;
            PyObject *tmp_ass_subscript_28;
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_subscript_value_9 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_9);
            if (tmp_ass_subvalue_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_ass_subscribed_28 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_28);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }

            if (tmp_ass_subscribed_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_28);

                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_ass_subscript_28 = mod_consts[86];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
            Py_DECREF(tmp_ass_subvalue_28);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_ass_subvalue_29;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_ass_subscribed_29;
            PyObject *tmp_ass_subscript_29;
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_10);
            if (tmp_ass_subvalue_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_ass_subscribed_29 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_29);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }

            if (tmp_ass_subscribed_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_29);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_ass_subscript_29 = mod_consts[87];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
            Py_DECREF(tmp_ass_subvalue_29);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_81f0df2469d9e448f01186a69d05af1c_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_81f0df2469d9e448f01186a69d05af1c_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_81f0df2469d9e448f01186a69d05af1c_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_81f0df2469d9e448f01186a69d05af1c_10,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_81f0df2469d9e448f01186a69d05af1c_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_32;
        skip_nested_handling_9:;
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_11;
            tmp_called_value_22 = (PyObject *)&PyType_Type;
            tmp_tuple_element_13 = mod_consts[82];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_11 = tmp_class_creation_10__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 93;
            tmp_assign_source_56 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto try_except_handler_32;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_56;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_args_element_value_8 = outline_9_var___class__;
        Py_INCREF(tmp_args_element_value_8);
        goto try_return_handler_32;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        Py_DECREF(locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93);
        locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93 = NULL;
        goto try_return_handler_31;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93);
        locals_flet_core$protocol$$$class__10_RegisterHostClientRequestPayload_93 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto try_except_handler_31;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 93;
        goto try_except_handler_30;
        outline_result_10:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 92;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_55);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_58;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_33;
        }
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[88];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_ea0bb258ec9c208307b6f126f70d75d1_11 = MAKE_CLASS_FRAME(codeobj_ea0bb258ec9c208307b6f126f70d75d1, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ea0bb258ec9c208307b6f126f70d75d1_11);
        assert(Py_REFCNT(frame_ea0bb258ec9c208307b6f126f70d75d1_11) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_30;
            PyObject *tmp_ass_subscribed_30;
            PyObject *tmp_ass_subscript_30;
            tmp_ass_subvalue_30 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_30 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }

            if (tmp_ass_subscribed_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_ass_subscript_30 = mod_consts[83];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_ass_subvalue_31;
            PyObject *tmp_ass_subscribed_31;
            PyObject *tmp_ass_subscript_31;
            tmp_ass_subvalue_31 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_31 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }

            if (tmp_ass_subscribed_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_ass_subscript_31 = mod_consts[69];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_ass_subvalue_32;
            PyObject *tmp_ass_subscribed_32;
            PyObject *tmp_ass_subscript_32;
            tmp_ass_subvalue_32 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_32 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }

            if (tmp_ass_subscribed_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_ass_subscript_32 = mod_consts[70];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_ass_subvalue_33;
            PyObject *tmp_ass_subscribed_33;
            PyObject *tmp_ass_subscript_33;
            tmp_ass_subvalue_33 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_33 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }

            if (tmp_ass_subscribed_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_ass_subscript_33 = mod_consts[74];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ea0bb258ec9c208307b6f126f70d75d1_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ea0bb258ec9c208307b6f126f70d75d1_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ea0bb258ec9c208307b6f126f70d75d1_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ea0bb258ec9c208307b6f126f70d75d1_11,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_ea0bb258ec9c208307b6f126f70d75d1_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_35;
        skip_nested_handling_10:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_12;
            tmp_called_value_24 = (PyObject *)&PyType_Type;
            tmp_tuple_element_14 = mod_consts[88];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_11__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 103;
            tmp_assign_source_60 = CALL_FUNCTION(tmp_called_value_24, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto try_except_handler_35;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_args_element_value_9 = outline_10_var___class__;
        Py_INCREF(tmp_args_element_value_9);
        goto try_return_handler_35;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        Py_DECREF(locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103);
        locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103 = NULL;
        goto try_return_handler_34;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103);
        locals_flet_core$protocol$$$class__11_RegisterHostClientResponsePayload_103 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto try_except_handler_34;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 103;
        goto try_except_handler_33;
        outline_result_11:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 102;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_33;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_59);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_62;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_36;
        }
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_flet_core$protocol$$$class__12_PageSessionCreatedPayload_111 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__12_PageSessionCreatedPayload_111, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__12_PageSessionCreatedPayload_111, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__12_PageSessionCreatedPayload_111, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_7b842050373174bbc73ac8b2575c69bc_12 = MAKE_CLASS_FRAME(codeobj_7b842050373174bbc73ac8b2575c69bc, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7b842050373174bbc73ac8b2575c69bc_12);
        assert(Py_REFCNT(frame_7b842050373174bbc73ac8b2575c69bc_12) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_34;
            PyObject *tmp_ass_subscribed_34;
            PyObject *tmp_ass_subscript_34;
            tmp_ass_subvalue_34 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_34 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__12_PageSessionCreatedPayload_111, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }

            if (tmp_ass_subscribed_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_ass_subscript_34 = mod_consts[69];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_ass_subvalue_35;
            PyObject *tmp_ass_subscribed_35;
            PyObject *tmp_ass_subscript_35;
            tmp_ass_subvalue_35 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_35 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__12_PageSessionCreatedPayload_111, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }

            if (tmp_ass_subscribed_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_ass_subscript_35 = mod_consts[70];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7b842050373174bbc73ac8b2575c69bc_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7b842050373174bbc73ac8b2575c69bc_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7b842050373174bbc73ac8b2575c69bc_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7b842050373174bbc73ac8b2575c69bc_12,
            type_description_2,
            outline_11_var___class__
        );



        assertFrameObject(frame_7b842050373174bbc73ac8b2575c69bc_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_38;
        skip_nested_handling_11:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_13;
            tmp_called_value_26 = (PyObject *)&PyType_Type;
            tmp_tuple_element_15 = mod_consts[89];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_flet_core$protocol$$$class__12_PageSessionCreatedPayload_111;
            PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_13 = tmp_class_creation_12__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 111;
            tmp_assign_source_64 = CALL_FUNCTION(tmp_called_value_26, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto try_except_handler_38;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_64;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_args_element_value_10 = outline_11_var___class__;
        Py_INCREF(tmp_args_element_value_10);
        goto try_return_handler_38;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        Py_DECREF(locals_flet_core$protocol$$$class__12_PageSessionCreatedPayload_111);
        locals_flet_core$protocol$$$class__12_PageSessionCreatedPayload_111 = NULL;
        goto try_return_handler_37;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__12_PageSessionCreatedPayload_111);
        locals_flet_core$protocol$$$class__12_PageSessionCreatedPayload_111 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto try_except_handler_37;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 111;
        goto try_except_handler_36;
        outline_result_12:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 110;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_36;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_63);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_66;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_flet_core$protocol$$$class__13_ClientActions_121 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__13_ClientActions_121, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__13_ClientActions_121, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__13_ClientActions_121, mod_consts[92], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__13_ClientActions_121, mod_consts[94], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[95];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__13_ClientActions_121, mod_consts[96], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__13_ClientActions_121, mod_consts[98], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__13_ClientActions_121, mod_consts[100], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__13_ClientActions_121, mod_consts[102], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__13_ClientActions_121, mod_consts[104], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__13_ClientActions_121, mod_consts[106], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__13_ClientActions_121, mod_consts[108], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_14;
            tmp_called_value_27 = (PyObject *)&PyType_Type;
            tmp_tuple_element_16 = mod_consts[90];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_flet_core$protocol$$$class__13_ClientActions_121;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_13__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 121;
            tmp_assign_source_68 = CALL_FUNCTION(tmp_called_value_27, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto try_except_handler_41;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_68;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_67 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_67);
        goto try_return_handler_41;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        Py_DECREF(locals_flet_core$protocol$$$class__13_ClientActions_121);
        locals_flet_core$protocol$$$class__13_ClientActions_121 = NULL;
        goto try_return_handler_40;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__13_ClientActions_121);
        locals_flet_core$protocol$$$class__13_ClientActions_121 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto try_except_handler_40;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 121;
        goto try_except_handler_39;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_67);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_70;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_42;
        }
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_flet_core$protocol$$$class__14_ClientMessage_134 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__14_ClientMessage_134, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[1];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__14_ClientMessage_134, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__14_ClientMessage_134, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_09c5046b62283e792abf5ffb396156c0_13 = MAKE_CLASS_FRAME(codeobj_09c5046b62283e792abf5ffb396156c0, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_09c5046b62283e792abf5ffb396156c0_13);
        assert(Py_REFCNT(frame_09c5046b62283e792abf5ffb396156c0_13) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_36;
            PyObject *tmp_ass_subscribed_36;
            PyObject *tmp_ass_subscript_36;
            tmp_ass_subvalue_36 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_36 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__14_ClientMessage_134, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }

            if (tmp_ass_subscribed_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_ass_subscript_36 = mod_consts[66];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_ass_subvalue_37;
            PyObject *tmp_ass_subscribed_37;
            PyObject *tmp_ass_subscript_37;
            tmp_ass_subvalue_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_ass_subvalue_37 == NULL)) {
                tmp_ass_subvalue_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_ass_subvalue_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_ass_subscribed_37 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__14_ClientMessage_134, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }

            if (tmp_ass_subscribed_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_ass_subscript_37 = mod_consts[67];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;
        frame_exception_exit_13:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_09c5046b62283e792abf5ffb396156c0_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_09c5046b62283e792abf5ffb396156c0_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_09c5046b62283e792abf5ffb396156c0_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_09c5046b62283e792abf5ffb396156c0_13,
            type_description_2,
            outline_13_var___class__
        );



        assertFrameObject(frame_09c5046b62283e792abf5ffb396156c0_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;
        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_44;
        skip_nested_handling_12:;
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_15;
            tmp_called_value_29 = (PyObject *)&PyType_Type;
            tmp_tuple_element_17 = mod_consts[1];
            tmp_args_value_15 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = locals_flet_core$protocol$$$class__14_ClientMessage_134;
            PyTuple_SET_ITEM0(tmp_args_value_15, 2, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_15 = tmp_class_creation_14__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 134;
            tmp_assign_source_72 = CALL_FUNCTION(tmp_called_value_29, tmp_args_value_15, tmp_kwargs_value_15);
            Py_DECREF(tmp_args_value_15);
            if (tmp_assign_source_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto try_except_handler_44;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_72;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_args_element_value_11 = outline_13_var___class__;
        Py_INCREF(tmp_args_element_value_11);
        goto try_return_handler_44;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_44:;
        Py_DECREF(locals_flet_core$protocol$$$class__14_ClientMessage_134);
        locals_flet_core$protocol$$$class__14_ClientMessage_134 = NULL;
        goto try_return_handler_43;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__14_ClientMessage_134);
        locals_flet_core$protocol$$$class__14_ClientMessage_134 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto try_except_handler_43;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_43 = exception_type;
        exception_keeper_value_43 = exception_value;
        exception_keeper_tb_43 = exception_tb;
        exception_keeper_lineno_43 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;
        exception_lineno = exception_keeper_lineno_43;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 134;
        goto try_except_handler_42;
        outline_result_14:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 133;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_42;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_71);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_74;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_45;
        }
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_4ce9f8da44d5172d01a3fd806a636396_14 = MAKE_CLASS_FRAME(codeobj_4ce9f8da44d5172d01a3fd806a636396, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4ce9f8da44d5172d01a3fd806a636396_14);
        assert(Py_REFCNT(frame_4ce9f8da44d5172d01a3fd806a636396_14) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_38;
            PyObject *tmp_ass_subscribed_38;
            PyObject *tmp_ass_subscript_38;
            tmp_ass_subvalue_38 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_38 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_38 = mod_consts[69];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_ass_subvalue_39;
            PyObject *tmp_ass_subscribed_39;
            PyObject *tmp_ass_subscript_39;
            tmp_ass_subvalue_39 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_39 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_39 = mod_consts[110];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_ass_subvalue_40;
            PyObject *tmp_ass_subscribed_40;
            PyObject *tmp_ass_subscript_40;
            tmp_ass_subvalue_40 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_40 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_40 = mod_consts[111];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_ass_subvalue_41;
            PyObject *tmp_ass_subscribed_41;
            PyObject *tmp_ass_subscript_41;
            tmp_ass_subvalue_41 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_41 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_41 = mod_consts[112];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_ass_subvalue_42;
            PyObject *tmp_ass_subscribed_42;
            PyObject *tmp_ass_subscript_42;
            tmp_ass_subvalue_42 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_42 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_42 = mod_consts[113];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_ass_subvalue_43;
            PyObject *tmp_ass_subscribed_43;
            PyObject *tmp_ass_subscript_43;
            tmp_ass_subvalue_43 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_43 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_43 = mod_consts[114];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_ass_subvalue_44;
            PyObject *tmp_ass_subscribed_44;
            PyObject *tmp_ass_subscript_44;
            tmp_ass_subvalue_44 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_44 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_44 = mod_consts[115];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_ass_subvalue_45;
            PyObject *tmp_ass_subscribed_45;
            PyObject *tmp_ass_subscript_45;
            tmp_ass_subvalue_45 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_45 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_45 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_45 = mod_consts[116];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_ass_subvalue_46;
            PyObject *tmp_ass_subscribed_46;
            PyObject *tmp_ass_subscript_46;
            tmp_ass_subvalue_46 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_46 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_46 = mod_consts[117];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_ass_subvalue_47;
            PyObject *tmp_ass_subscribed_47;
            PyObject *tmp_ass_subscript_47;
            tmp_ass_subvalue_47 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_47 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_47 = mod_consts[118];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_ass_subvalue_48;
            PyObject *tmp_ass_subscribed_48;
            PyObject *tmp_ass_subscript_48;
            tmp_ass_subvalue_48 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_48 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_48 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_48 = mod_consts[119];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_ass_subvalue_49;
            PyObject *tmp_ass_subscribed_49;
            PyObject *tmp_ass_subscript_49;
            tmp_ass_subvalue_49 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_49 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_49 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_49 = mod_consts[120];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_13;
        frame_exception_exit_14:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4ce9f8da44d5172d01a3fd806a636396_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4ce9f8da44d5172d01a3fd806a636396_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4ce9f8da44d5172d01a3fd806a636396_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4ce9f8da44d5172d01a3fd806a636396_14,
            type_description_2,
            outline_14_var___class__
        );



        assertFrameObject(frame_4ce9f8da44d5172d01a3fd806a636396_14);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_13;
        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_47;
        skip_nested_handling_13:;
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_16;
            tmp_called_value_31 = (PyObject *)&PyType_Type;
            tmp_tuple_element_18 = mod_consts[109];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_15__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 140;
            tmp_assign_source_76 = CALL_FUNCTION(tmp_called_value_31, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto try_except_handler_47;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_76;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_args_element_value_12 = outline_14_var___class__;
        Py_INCREF(tmp_args_element_value_12);
        goto try_return_handler_47;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_47:;
        Py_DECREF(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140);
        locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140 = NULL;
        goto try_return_handler_46;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_45 = exception_type;
        exception_keeper_value_45 = exception_value;
        exception_keeper_tb_45 = exception_tb;
        exception_keeper_lineno_45 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140);
        locals_flet_core$protocol$$$class__15_RegisterWebClientRequestPayload_140 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;
        exception_lineno = exception_keeper_lineno_45;

        goto try_except_handler_46;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_46:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 140;
        goto try_except_handler_45;
        outline_result_15:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 139;
        tmp_assign_source_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_45;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_75);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_78;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_48;
        }
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_flet_core$protocol$$$class__16_SessionPayload_156 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__16_SessionPayload_156, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__16_SessionPayload_156, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__16_SessionPayload_156, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_8b3032daf58c967fe63832167cb53421_15 = MAKE_CLASS_FRAME(codeobj_8b3032daf58c967fe63832167cb53421, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8b3032daf58c967fe63832167cb53421_15);
        assert(Py_REFCNT(frame_8b3032daf58c967fe63832167cb53421_15) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_50;
            PyObject *tmp_ass_subscribed_50;
            PyObject *tmp_ass_subscript_50;
            tmp_ass_subvalue_50 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_50 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__16_SessionPayload_156, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }

            if (tmp_ass_subscribed_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
            tmp_ass_subscript_50 = mod_consts[65];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
        }
        {
            PyObject *tmp_ass_subvalue_51;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_ass_subscribed_51;
            PyObject *tmp_ass_subscript_51;
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
            tmp_tuple_element_19 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_tuple_element_20;
                PyTuple_SET_ITEM0(tmp_subscript_value_11, 0, tmp_tuple_element_19);
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_expression_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_20 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_20);
                tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[31]);

                if (unlikely(tmp_tuple_element_20 == NULL)) {
                    tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                }

                if (tmp_tuple_element_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_12, 1, tmp_tuple_element_20);
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_subscript_value_12);
                goto tuple_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_12);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_19);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_subscript_value_11);
            goto frame_exception_exit_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_ass_subvalue_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_11);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_ass_subvalue_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
            tmp_ass_subscribed_51 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__16_SessionPayload_156, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_51 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_51);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }

            if (tmp_ass_subscribed_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_51);

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
            tmp_ass_subscript_51 = mod_consts[122];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
            Py_DECREF(tmp_ass_subvalue_51);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_14;
        frame_exception_exit_15:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8b3032daf58c967fe63832167cb53421_15, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8b3032daf58c967fe63832167cb53421_15->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8b3032daf58c967fe63832167cb53421_15, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8b3032daf58c967fe63832167cb53421_15,
            type_description_2,
            outline_15_var___class__
        );



        assertFrameObject(frame_8b3032daf58c967fe63832167cb53421_15);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_14;
        frame_no_exception_14:;
        goto skip_nested_handling_14;
        nested_frame_exit_14:;

        goto try_except_handler_50;
        skip_nested_handling_14:;
        {
            PyObject *tmp_assign_source_80;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_17;
            tmp_called_value_33 = (PyObject *)&PyType_Type;
            tmp_tuple_element_21 = mod_consts[121];
            tmp_args_value_17 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_flet_core$protocol$$$class__16_SessionPayload_156;
            PyTuple_SET_ITEM0(tmp_args_value_17, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_value_17 = tmp_class_creation_16__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 156;
            tmp_assign_source_80 = CALL_FUNCTION(tmp_called_value_33, tmp_args_value_17, tmp_kwargs_value_17);
            Py_DECREF(tmp_args_value_17);
            if (tmp_assign_source_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto try_except_handler_50;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_80;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_args_element_value_13 = outline_15_var___class__;
        Py_INCREF(tmp_args_element_value_13);
        goto try_return_handler_50;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_50:;
        Py_DECREF(locals_flet_core$protocol$$$class__16_SessionPayload_156);
        locals_flet_core$protocol$$$class__16_SessionPayload_156 = NULL;
        goto try_return_handler_49;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__16_SessionPayload_156);
        locals_flet_core$protocol$$$class__16_SessionPayload_156 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_48;
        exception_value = exception_keeper_value_48;
        exception_tb = exception_keeper_tb_48;
        exception_lineno = exception_keeper_lineno_48;

        goto try_except_handler_49;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_49:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_49:;
        exception_keeper_type_49 = exception_type;
        exception_keeper_value_49 = exception_value;
        exception_keeper_tb_49 = exception_tb;
        exception_keeper_lineno_49 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;
        exception_lineno = exception_keeper_lineno_49;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 156;
        goto try_except_handler_48;
        outline_result_16:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 155;
        tmp_assign_source_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_48;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_79);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_50;
    exception_value = exception_keeper_value_50;
    exception_tb = exception_keeper_tb_50;
    exception_lineno = exception_keeper_lineno_50;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__class_decl_dict == NULL);
        tmp_class_creation_17__class_decl_dict = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_82;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_51;
        }
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_set_locals_17 = tmp_class_creation_17__prepared;
            locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_0f6e2c70884f612d142f40cbb179a65c_16 = MAKE_CLASS_FRAME(codeobj_0f6e2c70884f612d142f40cbb179a65c, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0f6e2c70884f612d142f40cbb179a65c_16);
        assert(Py_REFCNT(frame_0f6e2c70884f612d142f40cbb179a65c_16) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_52;
            PyObject *tmp_ass_subscribed_52;
            PyObject *tmp_ass_subscript_52;
            tmp_ass_subvalue_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_ass_subvalue_52 == NULL)) {
                tmp_ass_subvalue_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
            }

            assert(!(tmp_ass_subvalue_52 == NULL));
            tmp_ass_subscribed_52 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_16;
            }

            if (tmp_ass_subscribed_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_16;
            }
            tmp_ass_subscript_52 = mod_consts[124];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_16;
            }
        }
        {
            PyObject *tmp_ass_subvalue_53;
            PyObject *tmp_ass_subscribed_53;
            PyObject *tmp_ass_subscript_53;
            tmp_ass_subvalue_53 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_53 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_53 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_16;
            }

            if (tmp_ass_subscribed_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_16;
            }
            tmp_ass_subscript_53 = mod_consts[74];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_16;
            }
        }
        {
            PyObject *tmp_ass_subvalue_54;
            PyObject *tmp_ass_subscribed_54;
            PyObject *tmp_ass_subscript_54;
            tmp_ass_subvalue_54 = (PyObject *)&PyBool_Type;
            tmp_ass_subscribed_54 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_54 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_16;
            }

            if (tmp_ass_subscribed_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_16;
            }
            tmp_ass_subscript_54 = mod_consts[125];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_16;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_15;
        frame_exception_exit_16:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0f6e2c70884f612d142f40cbb179a65c_16, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0f6e2c70884f612d142f40cbb179a65c_16->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0f6e2c70884f612d142f40cbb179a65c_16, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0f6e2c70884f612d142f40cbb179a65c_16,
            type_description_2,
            outline_16_var___class__
        );



        assertFrameObject(frame_0f6e2c70884f612d142f40cbb179a65c_16);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_15;
        frame_no_exception_15:;
        goto skip_nested_handling_15;
        nested_frame_exit_15:;

        goto try_except_handler_53;
        skip_nested_handling_15:;
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_value_18;
            tmp_called_value_35 = (PyObject *)&PyType_Type;
            tmp_tuple_element_22 = mod_consts[123];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_17__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 162;
            tmp_assign_source_84 = CALL_FUNCTION(tmp_called_value_35, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto try_except_handler_53;
            }
            assert(outline_16_var___class__ == NULL);
            outline_16_var___class__ = tmp_assign_source_84;
        }
        CHECK_OBJECT(outline_16_var___class__);
        tmp_args_element_value_14 = outline_16_var___class__;
        Py_INCREF(tmp_args_element_value_14);
        goto try_return_handler_53;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_53:;
        Py_DECREF(locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162);
        locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162 = NULL;
        goto try_return_handler_52;
        // Exception handler code:
        try_except_handler_53:;
        exception_keeper_type_51 = exception_type;
        exception_keeper_value_51 = exception_value;
        exception_keeper_tb_51 = exception_tb;
        exception_keeper_lineno_51 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162);
        locals_flet_core$protocol$$$class__17_RegisterWebClientResponsePayload_162 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_51;
        exception_value = exception_keeper_value_51;
        exception_tb = exception_keeper_tb_51;
        exception_lineno = exception_keeper_lineno_51;

        goto try_except_handler_52;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_52:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_52:;
        exception_keeper_type_52 = exception_type;
        exception_keeper_value_52 = exception_value;
        exception_keeper_tb_52 = exception_tb;
        exception_keeper_lineno_52 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_52;
        exception_value = exception_keeper_value_52;
        exception_tb = exception_keeper_tb_52;
        exception_lineno = exception_keeper_lineno_52;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 162;
        goto try_except_handler_51;
        outline_result_17:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 161;
        tmp_assign_source_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_51;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_83);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    Py_DECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_17__prepared);
    Py_DECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    Py_DECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_17__prepared);
    Py_DECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__class_decl_dict == NULL);
        tmp_class_creation_18__class_decl_dict = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_86;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_54;
        }
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_set_locals_18 = tmp_class_creation_18__prepared;
            locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169 = tmp_set_locals_18;
            Py_INCREF(tmp_set_locals_18);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[126];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_173b3cc02cebb99bc355853fb9c5d4c5_17 = MAKE_CLASS_FRAME(codeobj_173b3cc02cebb99bc355853fb9c5d4c5, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_173b3cc02cebb99bc355853fb9c5d4c5_17);
        assert(Py_REFCNT(frame_173b3cc02cebb99bc355853fb9c5d4c5_17) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_55;
            PyObject *tmp_ass_subscribed_55;
            PyObject *tmp_ass_subscript_55;
            tmp_ass_subvalue_55 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_55 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_55 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }

            if (tmp_ass_subscribed_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
            tmp_ass_subscript_55 = mod_consts[79];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_55, tmp_ass_subscript_55, tmp_ass_subvalue_55);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }
        {
            PyObject *tmp_ass_subvalue_56;
            PyObject *tmp_ass_subscribed_56;
            PyObject *tmp_ass_subscript_56;
            tmp_ass_subvalue_56 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_56 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }

            if (tmp_ass_subscribed_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
            tmp_ass_subscript_56 = mod_consts[80];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_56, tmp_ass_subscript_56, tmp_ass_subvalue_56);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }
        {
            PyObject *tmp_ass_subvalue_57;
            PyObject *tmp_ass_subscribed_57;
            PyObject *tmp_ass_subscript_57;
            tmp_ass_subvalue_57 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_57 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_57 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }

            if (tmp_ass_subscribed_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
            tmp_ass_subscript_57 = mod_consts[81];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_57, tmp_ass_subscript_57, tmp_ass_subvalue_57);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_16;
        frame_exception_exit_17:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_173b3cc02cebb99bc355853fb9c5d4c5_17, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_173b3cc02cebb99bc355853fb9c5d4c5_17->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_173b3cc02cebb99bc355853fb9c5d4c5_17, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_173b3cc02cebb99bc355853fb9c5d4c5_17,
            type_description_2,
            outline_17_var___class__
        );



        assertFrameObject(frame_173b3cc02cebb99bc355853fb9c5d4c5_17);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_16;
        frame_no_exception_16:;
        goto skip_nested_handling_16;
        nested_frame_exit_16:;

        goto try_except_handler_56;
        skip_nested_handling_16:;
        {
            PyObject *tmp_assign_source_88;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_value_19;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_19;
            tmp_called_value_37 = (PyObject *)&PyType_Type;
            tmp_tuple_element_23 = mod_consts[126];
            tmp_args_value_19 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_23);
            tmp_tuple_element_23 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169;
            PyTuple_SET_ITEM0(tmp_args_value_19, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
            tmp_kwargs_value_19 = tmp_class_creation_18__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 169;
            tmp_assign_source_88 = CALL_FUNCTION(tmp_called_value_37, tmp_args_value_19, tmp_kwargs_value_19);
            Py_DECREF(tmp_args_value_19);
            if (tmp_assign_source_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto try_except_handler_56;
            }
            assert(outline_17_var___class__ == NULL);
            outline_17_var___class__ = tmp_assign_source_88;
        }
        CHECK_OBJECT(outline_17_var___class__);
        tmp_args_element_value_15 = outline_17_var___class__;
        Py_INCREF(tmp_args_element_value_15);
        goto try_return_handler_56;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_56:;
        Py_DECREF(locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169);
        locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169 = NULL;
        goto try_return_handler_55;
        // Exception handler code:
        try_except_handler_56:;
        exception_keeper_type_54 = exception_type;
        exception_keeper_value_54 = exception_value;
        exception_keeper_tb_54 = exception_tb;
        exception_keeper_lineno_54 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169);
        locals_flet_core$protocol$$$class__18_PageEventFromWebPayload_169 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_54;
        exception_value = exception_keeper_value_54;
        exception_tb = exception_keeper_tb_54;
        exception_lineno = exception_keeper_lineno_54;

        goto try_except_handler_55;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_55:;
        CHECK_OBJECT(outline_17_var___class__);
        Py_DECREF(outline_17_var___class__);
        outline_17_var___class__ = NULL;
        goto outline_result_18;
        // Exception handler code:
        try_except_handler_55:;
        exception_keeper_type_55 = exception_type;
        exception_keeper_value_55 = exception_value;
        exception_keeper_tb_55 = exception_tb;
        exception_keeper_lineno_55 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_55;
        exception_value = exception_keeper_value_55;
        exception_tb = exception_keeper_tb_55;
        exception_lineno = exception_keeper_lineno_55;

        goto outline_exception_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_18:;
        exception_lineno = 169;
        goto try_except_handler_54;
        outline_result_18:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 168;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_54;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_87);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
    Py_DECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_18__prepared);
    Py_DECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_56;
    exception_value = exception_keeper_value_56;
    exception_tb = exception_keeper_tb_56;
    exception_lineno = exception_keeper_lineno_56;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
    Py_DECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_18__prepared);
    Py_DECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__class_decl_dict == NULL);
        tmp_class_creation_19__class_decl_dict = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_90;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_57;
        }
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_set_locals_19 = tmp_class_creation_19__prepared;
            locals_flet_core$protocol$$$class__19_SessionCrashedPayload_176 = tmp_set_locals_19;
            Py_INCREF(tmp_set_locals_19);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__19_SessionCrashedPayload_176, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[127];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__19_SessionCrashedPayload_176, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__19_SessionCrashedPayload_176, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_a653b79f12ab7d4356f971762acb62cd_18 = MAKE_CLASS_FRAME(codeobj_a653b79f12ab7d4356f971762acb62cd, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a653b79f12ab7d4356f971762acb62cd_18);
        assert(Py_REFCNT(frame_a653b79f12ab7d4356f971762acb62cd_18) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_58;
            PyObject *tmp_ass_subscribed_58;
            PyObject *tmp_ass_subscript_58;
            tmp_ass_subvalue_58 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_58 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__19_SessionCrashedPayload_176, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_58 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }

            if (tmp_ass_subscribed_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }
            tmp_ass_subscript_58 = mod_consts[128];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_58, tmp_ass_subscript_58, tmp_ass_subvalue_58);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_18;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_17;
        frame_exception_exit_18:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a653b79f12ab7d4356f971762acb62cd_18, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a653b79f12ab7d4356f971762acb62cd_18->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a653b79f12ab7d4356f971762acb62cd_18, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a653b79f12ab7d4356f971762acb62cd_18,
            type_description_2,
            outline_18_var___class__
        );



        assertFrameObject(frame_a653b79f12ab7d4356f971762acb62cd_18);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_17;
        frame_no_exception_17:;
        goto skip_nested_handling_17;
        nested_frame_exit_17:;

        goto try_except_handler_59;
        skip_nested_handling_17:;
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_20;
            tmp_called_value_39 = (PyObject *)&PyType_Type;
            tmp_tuple_element_24 = mod_consts[127];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_flet_core$protocol$$$class__19_SessionCrashedPayload_176;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_19__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 176;
            tmp_assign_source_92 = CALL_FUNCTION(tmp_called_value_39, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto try_except_handler_59;
            }
            assert(outline_18_var___class__ == NULL);
            outline_18_var___class__ = tmp_assign_source_92;
        }
        CHECK_OBJECT(outline_18_var___class__);
        tmp_args_element_value_16 = outline_18_var___class__;
        Py_INCREF(tmp_args_element_value_16);
        goto try_return_handler_59;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_59:;
        Py_DECREF(locals_flet_core$protocol$$$class__19_SessionCrashedPayload_176);
        locals_flet_core$protocol$$$class__19_SessionCrashedPayload_176 = NULL;
        goto try_return_handler_58;
        // Exception handler code:
        try_except_handler_59:;
        exception_keeper_type_57 = exception_type;
        exception_keeper_value_57 = exception_value;
        exception_keeper_tb_57 = exception_tb;
        exception_keeper_lineno_57 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__19_SessionCrashedPayload_176);
        locals_flet_core$protocol$$$class__19_SessionCrashedPayload_176 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_57;
        exception_value = exception_keeper_value_57;
        exception_tb = exception_keeper_tb_57;
        exception_lineno = exception_keeper_lineno_57;

        goto try_except_handler_58;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_58:;
        CHECK_OBJECT(outline_18_var___class__);
        Py_DECREF(outline_18_var___class__);
        outline_18_var___class__ = NULL;
        goto outline_result_19;
        // Exception handler code:
        try_except_handler_58:;
        exception_keeper_type_58 = exception_type;
        exception_keeper_value_58 = exception_value;
        exception_keeper_tb_58 = exception_tb;
        exception_keeper_lineno_58 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_58;
        exception_value = exception_keeper_value_58;
        exception_tb = exception_keeper_tb_58;
        exception_lineno = exception_keeper_lineno_58;

        goto outline_exception_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_19:;
        exception_lineno = 176;
        goto try_except_handler_57;
        outline_result_19:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 175;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_57;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_91);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
    Py_DECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_19__prepared);
    Py_DECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
    Py_DECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_19__prepared);
    Py_DECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__class_decl_dict == NULL);
        tmp_class_creation_20__class_decl_dict = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_94;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_60;
        }
        {
            PyObject *tmp_set_locals_20;
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_set_locals_20 = tmp_class_creation_20__prepared;
            locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181 = tmp_set_locals_20;
            Py_INCREF(tmp_set_locals_20);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_9a7244886de9d1fd17ca127cbe583092_19 = MAKE_CLASS_FRAME(codeobj_9a7244886de9d1fd17ca127cbe583092, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9a7244886de9d1fd17ca127cbe583092_19);
        assert(Py_REFCNT(frame_9a7244886de9d1fd17ca127cbe583092_19) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_59;
            PyObject *tmp_ass_subscribed_59;
            PyObject *tmp_ass_subscript_59;
            tmp_ass_subvalue_59 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_59 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_59 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }

            if (tmp_ass_subscribed_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }
            tmp_ass_subscript_59 = mod_consts[130];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_59, tmp_ass_subscript_59, tmp_ass_subvalue_59);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }
        }
        {
            PyObject *tmp_ass_subvalue_60;
            PyObject *tmp_ass_subscribed_60;
            PyObject *tmp_ass_subscript_60;
            tmp_ass_subvalue_60 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_60 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_60 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }

            if (tmp_ass_subscribed_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }
            tmp_ass_subscript_60 = mod_consts[131];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_60, tmp_ass_subscript_60, tmp_ass_subvalue_60);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }
        }
        {
            PyObject *tmp_ass_subvalue_61;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_ass_subscribed_61;
            PyObject *tmp_ass_subscript_61;
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }
            tmp_subscript_value_13 = mod_consts[62];
            tmp_ass_subvalue_61 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_13);
            if (tmp_ass_subvalue_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }
            tmp_ass_subscribed_61 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_61 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_61);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }

            if (tmp_ass_subscribed_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_61);

                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }
            tmp_ass_subscript_61 = mod_consts[132];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_61, tmp_ass_subscript_61, tmp_ass_subvalue_61);
            Py_DECREF(tmp_ass_subvalue_61);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_18;
        frame_exception_exit_19:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9a7244886de9d1fd17ca127cbe583092_19, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9a7244886de9d1fd17ca127cbe583092_19->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9a7244886de9d1fd17ca127cbe583092_19, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9a7244886de9d1fd17ca127cbe583092_19,
            type_description_2,
            outline_19_var___class__
        );



        assertFrameObject(frame_9a7244886de9d1fd17ca127cbe583092_19);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_18;
        frame_no_exception_18:;
        goto skip_nested_handling_18;
        nested_frame_exit_18:;

        goto try_except_handler_62;
        skip_nested_handling_18:;
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_value_21;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_value_21;
            tmp_called_value_41 = (PyObject *)&PyType_Type;
            tmp_tuple_element_25 = mod_consts[129];
            tmp_args_value_21 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_25);
            tmp_tuple_element_25 = locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181;
            PyTuple_SET_ITEM0(tmp_args_value_21, 2, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
            tmp_kwargs_value_21 = tmp_class_creation_20__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 181;
            tmp_assign_source_96 = CALL_FUNCTION(tmp_called_value_41, tmp_args_value_21, tmp_kwargs_value_21);
            Py_DECREF(tmp_args_value_21);
            if (tmp_assign_source_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto try_except_handler_62;
            }
            assert(outline_19_var___class__ == NULL);
            outline_19_var___class__ = tmp_assign_source_96;
        }
        CHECK_OBJECT(outline_19_var___class__);
        tmp_args_element_value_17 = outline_19_var___class__;
        Py_INCREF(tmp_args_element_value_17);
        goto try_return_handler_62;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_62:;
        Py_DECREF(locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181);
        locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181 = NULL;
        goto try_return_handler_61;
        // Exception handler code:
        try_except_handler_62:;
        exception_keeper_type_60 = exception_type;
        exception_keeper_value_60 = exception_value;
        exception_keeper_tb_60 = exception_tb;
        exception_keeper_lineno_60 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181);
        locals_flet_core$protocol$$$class__20_InvokeMethodPayload_181 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_60;
        exception_value = exception_keeper_value_60;
        exception_tb = exception_keeper_tb_60;
        exception_lineno = exception_keeper_lineno_60;

        goto try_except_handler_61;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_61:;
        CHECK_OBJECT(outline_19_var___class__);
        Py_DECREF(outline_19_var___class__);
        outline_19_var___class__ = NULL;
        goto outline_result_20;
        // Exception handler code:
        try_except_handler_61:;
        exception_keeper_type_61 = exception_type;
        exception_keeper_value_61 = exception_value;
        exception_keeper_tb_61 = exception_tb;
        exception_keeper_lineno_61 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_61;
        exception_value = exception_keeper_value_61;
        exception_tb = exception_keeper_tb_61;
        exception_lineno = exception_keeper_lineno_61;

        goto outline_exception_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_20:;
        exception_lineno = 181;
        goto try_except_handler_60;
        outline_result_20:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 180;
        tmp_assign_source_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_60;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_95);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
    Py_DECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_20__prepared);
    Py_DECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_62;
    exception_value = exception_keeper_value_62;
    exception_tb = exception_keeper_tb_62;
    exception_lineno = exception_keeper_lineno_62;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
    Py_DECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_20__prepared);
    Py_DECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__class_decl_dict == NULL);
        tmp_class_creation_21__class_decl_dict = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_98;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_63;
        }
        {
            PyObject *tmp_set_locals_21;
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_set_locals_21 = tmp_class_creation_21__prepared;
            locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188 = tmp_set_locals_21;
            Py_INCREF(tmp_set_locals_21);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_757b40e64d361f33a07fb037605e8dd2_20 = MAKE_CLASS_FRAME(codeobj_757b40e64d361f33a07fb037605e8dd2, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_757b40e64d361f33a07fb037605e8dd2_20);
        assert(Py_REFCNT(frame_757b40e64d361f33a07fb037605e8dd2_20) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_62;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_ass_subscribed_62;
            PyObject *tmp_ass_subscript_62;
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
            tmp_tuple_element_26 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_15, 1, tmp_tuple_element_26);
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_subscript_value_15);
            goto frame_exception_exit_20;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_subscript_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_15);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_subscript_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
            tmp_ass_subvalue_62 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_14);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_ass_subvalue_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
            tmp_ass_subscribed_62 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_62 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_62);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }

            if (tmp_ass_subscribed_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_62);

                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
            tmp_ass_subscript_62 = mod_consts[122];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_62, tmp_ass_subscript_62, tmp_ass_subvalue_62);
            Py_DECREF(tmp_ass_subvalue_62);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
        }
        {
            PyObject *tmp_called_value_43;
            PyObject *tmp_kw_call_value_0_1;
            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_called_value_43 == NULL)) {
                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
            }

            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }


            tmp_kw_call_value_0_1 = MAKE_FUNCTION_flet_core$protocol$$$function__3_lambda();

            frame_757b40e64d361f33a07fb037605e8dd2_20->m_frame.f_lineno = 190;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_43, kw_values, mod_consts[60]);
            }

            Py_DECREF(tmp_kw_call_value_0_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
        }
        {
            PyObject *tmp_ass_subvalue_63;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_ass_subscribed_63;
            PyObject *tmp_ass_subscript_63;
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
            tmp_subscript_value_16 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_63 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_16);
            if (tmp_ass_subvalue_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
            tmp_ass_subscribed_63 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_63 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_63);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }

            if (tmp_ass_subscribed_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_63);

                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
            tmp_ass_subscript_63 = mod_consts[136];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_63, tmp_ass_subscript_63, tmp_ass_subvalue_63);
            Py_DECREF(tmp_ass_subvalue_63);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_19;
        frame_exception_exit_20:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_757b40e64d361f33a07fb037605e8dd2_20, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_757b40e64d361f33a07fb037605e8dd2_20->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_757b40e64d361f33a07fb037605e8dd2_20, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_757b40e64d361f33a07fb037605e8dd2_20,
            type_description_2,
            outline_20_var___class__
        );



        assertFrameObject(frame_757b40e64d361f33a07fb037605e8dd2_20);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_19;
        frame_no_exception_19:;
        goto skip_nested_handling_19;
        nested_frame_exit_19:;

        goto try_except_handler_65;
        skip_nested_handling_19:;
        {
            PyObject *tmp_assign_source_100;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_22;
            tmp_called_value_44 = (PyObject *)&PyType_Type;
            tmp_tuple_element_27 = mod_consts[133];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_27);
            tmp_tuple_element_27 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_21__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 188;
            tmp_assign_source_100 = CALL_FUNCTION(tmp_called_value_44, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto try_except_handler_65;
            }
            assert(outline_20_var___class__ == NULL);
            outline_20_var___class__ = tmp_assign_source_100;
        }
        CHECK_OBJECT(outline_20_var___class__);
        tmp_args_element_value_18 = outline_20_var___class__;
        Py_INCREF(tmp_args_element_value_18);
        goto try_return_handler_65;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_65:;
        Py_DECREF(locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188);
        locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188 = NULL;
        goto try_return_handler_64;
        // Exception handler code:
        try_except_handler_65:;
        exception_keeper_type_63 = exception_type;
        exception_keeper_value_63 = exception_value;
        exception_keeper_tb_63 = exception_tb;
        exception_keeper_lineno_63 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188);
        locals_flet_core$protocol$$$class__21_AddPageControlsPayload_188 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_63;
        exception_value = exception_keeper_value_63;
        exception_tb = exception_keeper_tb_63;
        exception_lineno = exception_keeper_lineno_63;

        goto try_except_handler_64;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_64:;
        CHECK_OBJECT(outline_20_var___class__);
        Py_DECREF(outline_20_var___class__);
        outline_20_var___class__ = NULL;
        goto outline_result_21;
        // Exception handler code:
        try_except_handler_64:;
        exception_keeper_type_64 = exception_type;
        exception_keeper_value_64 = exception_value;
        exception_keeper_tb_64 = exception_tb;
        exception_keeper_lineno_64 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_64;
        exception_value = exception_keeper_value_64;
        exception_tb = exception_keeper_tb_64;
        exception_lineno = exception_keeper_lineno_64;

        goto outline_exception_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_21:;
        exception_lineno = 188;
        goto try_except_handler_63;
        outline_result_21:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 187;
        tmp_assign_source_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_63;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_99);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_63:;
    exception_keeper_type_65 = exception_type;
    exception_keeper_value_65 = exception_value;
    exception_keeper_tb_65 = exception_tb;
    exception_keeper_lineno_65 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
    Py_DECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_21__prepared);
    Py_DECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_65;
    exception_value = exception_keeper_value_65;
    exception_tb = exception_keeper_tb_65;
    exception_lineno = exception_keeper_lineno_65;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
    Py_DECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_21__prepared);
    Py_DECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__class_decl_dict == NULL);
        tmp_class_creation_22__class_decl_dict = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_102;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_66;
        }
        {
            PyObject *tmp_set_locals_22;
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_set_locals_22 = tmp_class_creation_22__prepared;
            locals_flet_core$protocol$$$class__22_UpdateControlPropsPayload_194 = tmp_set_locals_22;
            Py_INCREF(tmp_set_locals_22);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__22_UpdateControlPropsPayload_194, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__22_UpdateControlPropsPayload_194, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__22_UpdateControlPropsPayload_194, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_c57a460c7bfd4737c8f4ebe3a32e5929_21 = MAKE_CLASS_FRAME(codeobj_c57a460c7bfd4737c8f4ebe3a32e5929, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c57a460c7bfd4737c8f4ebe3a32e5929_21);
        assert(Py_REFCNT(frame_c57a460c7bfd4737c8f4ebe3a32e5929_21) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_64;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_ass_subscribed_64;
            PyObject *tmp_ass_subscript_64;
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_21;
            }
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_21;
            }
            tmp_subscript_value_18 = mod_consts[62];
            tmp_subscript_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_18);
            if (tmp_subscript_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_21;
            }
            tmp_ass_subvalue_64 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_17);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_ass_subvalue_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_21;
            }
            tmp_ass_subscribed_64 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__22_UpdateControlPropsPayload_194, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_64 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_64);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_21;
            }

            if (tmp_ass_subscribed_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_64);

                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_21;
            }
            tmp_ass_subscript_64 = mod_consts[138];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_64, tmp_ass_subscript_64, tmp_ass_subvalue_64);
            Py_DECREF(tmp_ass_subvalue_64);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_21;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_20;
        frame_exception_exit_21:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c57a460c7bfd4737c8f4ebe3a32e5929_21, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c57a460c7bfd4737c8f4ebe3a32e5929_21->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c57a460c7bfd4737c8f4ebe3a32e5929_21, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c57a460c7bfd4737c8f4ebe3a32e5929_21,
            type_description_2,
            outline_21_var___class__
        );



        assertFrameObject(frame_c57a460c7bfd4737c8f4ebe3a32e5929_21);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_20;
        frame_no_exception_20:;
        goto skip_nested_handling_20;
        nested_frame_exit_20:;

        goto try_except_handler_68;
        skip_nested_handling_20:;
        {
            PyObject *tmp_assign_source_104;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_23;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_value_23;
            tmp_called_value_46 = (PyObject *)&PyType_Type;
            tmp_tuple_element_28 = mod_consts[137];
            tmp_args_value_23 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = locals_flet_core$protocol$$$class__22_UpdateControlPropsPayload_194;
            PyTuple_SET_ITEM0(tmp_args_value_23, 2, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
            tmp_kwargs_value_23 = tmp_class_creation_22__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 194;
            tmp_assign_source_104 = CALL_FUNCTION(tmp_called_value_46, tmp_args_value_23, tmp_kwargs_value_23);
            Py_DECREF(tmp_args_value_23);
            if (tmp_assign_source_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto try_except_handler_68;
            }
            assert(outline_21_var___class__ == NULL);
            outline_21_var___class__ = tmp_assign_source_104;
        }
        CHECK_OBJECT(outline_21_var___class__);
        tmp_args_element_value_19 = outline_21_var___class__;
        Py_INCREF(tmp_args_element_value_19);
        goto try_return_handler_68;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_68:;
        Py_DECREF(locals_flet_core$protocol$$$class__22_UpdateControlPropsPayload_194);
        locals_flet_core$protocol$$$class__22_UpdateControlPropsPayload_194 = NULL;
        goto try_return_handler_67;
        // Exception handler code:
        try_except_handler_68:;
        exception_keeper_type_66 = exception_type;
        exception_keeper_value_66 = exception_value;
        exception_keeper_tb_66 = exception_tb;
        exception_keeper_lineno_66 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__22_UpdateControlPropsPayload_194);
        locals_flet_core$protocol$$$class__22_UpdateControlPropsPayload_194 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_66;
        exception_value = exception_keeper_value_66;
        exception_tb = exception_keeper_tb_66;
        exception_lineno = exception_keeper_lineno_66;

        goto try_except_handler_67;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_67:;
        CHECK_OBJECT(outline_21_var___class__);
        Py_DECREF(outline_21_var___class__);
        outline_21_var___class__ = NULL;
        goto outline_result_22;
        // Exception handler code:
        try_except_handler_67:;
        exception_keeper_type_67 = exception_type;
        exception_keeper_value_67 = exception_value;
        exception_keeper_tb_67 = exception_tb;
        exception_keeper_lineno_67 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_67;
        exception_value = exception_keeper_value_67;
        exception_tb = exception_keeper_tb_67;
        exception_lineno = exception_keeper_lineno_67;

        goto outline_exception_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_22:;
        exception_lineno = 194;
        goto try_except_handler_66;
        outline_result_22:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 193;
        tmp_assign_source_103 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_66;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_103);
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_type_68 = exception_type;
    exception_keeper_value_68 = exception_value;
    exception_keeper_tb_68 = exception_tb;
    exception_keeper_lineno_68 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
    Py_DECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_22__prepared);
    Py_DECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_68;
    exception_value = exception_keeper_value_68;
    exception_tb = exception_keeper_tb_68;
    exception_lineno = exception_keeper_lineno_68;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
    Py_DECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_22__prepared);
    Py_DECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__class_decl_dict == NULL);
        tmp_class_creation_23__class_decl_dict = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_106;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_69;
        }
        {
            PyObject *tmp_set_locals_23;
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_set_locals_23 = tmp_class_creation_23__prepared;
            locals_flet_core$protocol$$$class__23_CleanControlPayload_199 = tmp_set_locals_23;
            Py_INCREF(tmp_set_locals_23);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__23_CleanControlPayload_199, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__23_CleanControlPayload_199, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__23_CleanControlPayload_199, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_a23938272d762f0c89fe8a32e56ee550_22 = MAKE_CLASS_FRAME(codeobj_a23938272d762f0c89fe8a32e56ee550, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a23938272d762f0c89fe8a32e56ee550_22);
        assert(Py_REFCNT(frame_a23938272d762f0c89fe8a32e56ee550_22) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_65;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_ass_subscribed_65;
            PyObject *tmp_ass_subscript_65;
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_22;
            }
            tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_65 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_19);
            if (tmp_ass_subvalue_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_22;
            }
            tmp_ass_subscribed_65 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__23_CleanControlPayload_199, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_65 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_65);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_22;
            }

            if (tmp_ass_subscribed_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_65);

                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_22;
            }
            tmp_ass_subscript_65 = mod_consts[140];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_65, tmp_ass_subscript_65, tmp_ass_subvalue_65);
            Py_DECREF(tmp_ass_subvalue_65);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_22;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_21;
        frame_exception_exit_22:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a23938272d762f0c89fe8a32e56ee550_22, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a23938272d762f0c89fe8a32e56ee550_22->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a23938272d762f0c89fe8a32e56ee550_22, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a23938272d762f0c89fe8a32e56ee550_22,
            type_description_2,
            outline_22_var___class__
        );



        assertFrameObject(frame_a23938272d762f0c89fe8a32e56ee550_22);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_21;
        frame_no_exception_21:;
        goto skip_nested_handling_21;
        nested_frame_exit_21:;

        goto try_except_handler_71;
        skip_nested_handling_21:;
        {
            PyObject *tmp_assign_source_108;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kwargs_value_24;
            tmp_called_value_48 = (PyObject *)&PyType_Type;
            tmp_tuple_element_29 = mod_consts[139];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_29);
            tmp_tuple_element_29 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_29);
            tmp_tuple_element_29 = locals_flet_core$protocol$$$class__23_CleanControlPayload_199;
            PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
            tmp_kwargs_value_24 = tmp_class_creation_23__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 199;
            tmp_assign_source_108 = CALL_FUNCTION(tmp_called_value_48, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto try_except_handler_71;
            }
            assert(outline_22_var___class__ == NULL);
            outline_22_var___class__ = tmp_assign_source_108;
        }
        CHECK_OBJECT(outline_22_var___class__);
        tmp_args_element_value_20 = outline_22_var___class__;
        Py_INCREF(tmp_args_element_value_20);
        goto try_return_handler_71;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_71:;
        Py_DECREF(locals_flet_core$protocol$$$class__23_CleanControlPayload_199);
        locals_flet_core$protocol$$$class__23_CleanControlPayload_199 = NULL;
        goto try_return_handler_70;
        // Exception handler code:
        try_except_handler_71:;
        exception_keeper_type_69 = exception_type;
        exception_keeper_value_69 = exception_value;
        exception_keeper_tb_69 = exception_tb;
        exception_keeper_lineno_69 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__23_CleanControlPayload_199);
        locals_flet_core$protocol$$$class__23_CleanControlPayload_199 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_69;
        exception_value = exception_keeper_value_69;
        exception_tb = exception_keeper_tb_69;
        exception_lineno = exception_keeper_lineno_69;

        goto try_except_handler_70;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_70:;
        CHECK_OBJECT(outline_22_var___class__);
        Py_DECREF(outline_22_var___class__);
        outline_22_var___class__ = NULL;
        goto outline_result_23;
        // Exception handler code:
        try_except_handler_70:;
        exception_keeper_type_70 = exception_type;
        exception_keeper_value_70 = exception_value;
        exception_keeper_tb_70 = exception_tb;
        exception_keeper_lineno_70 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_70;
        exception_value = exception_keeper_value_70;
        exception_tb = exception_keeper_tb_70;
        exception_lineno = exception_keeper_lineno_70;

        goto outline_exception_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_23:;
        exception_lineno = 199;
        goto try_except_handler_69;
        outline_result_23:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 198;
        tmp_assign_source_107 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_69;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_107);
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_69:;
    exception_keeper_type_71 = exception_type;
    exception_keeper_value_71 = exception_value;
    exception_keeper_tb_71 = exception_tb;
    exception_keeper_lineno_71 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
    Py_DECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_23__prepared);
    Py_DECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_71;
    exception_value = exception_keeper_value_71;
    exception_tb = exception_keeper_tb_71;
    exception_lineno = exception_keeper_lineno_71;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
    Py_DECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_23__prepared);
    Py_DECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__class_decl_dict == NULL);
        tmp_class_creation_24__class_decl_dict = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_110;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto try_except_handler_72;
        }
        {
            PyObject *tmp_set_locals_24;
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_set_locals_24 = tmp_class_creation_24__prepared;
            locals_flet_core$protocol$$$class__24_RemoveControlPayload_204 = tmp_set_locals_24;
            Py_INCREF(tmp_set_locals_24);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__24_RemoveControlPayload_204, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[141];
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__24_RemoveControlPayload_204, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$protocol$$$class__24_RemoveControlPayload_204, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_ef40bc32cafd822dab2a3927b5635f03_23 = MAKE_CLASS_FRAME(codeobj_ef40bc32cafd822dab2a3927b5635f03, module_flet_core$protocol, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ef40bc32cafd822dab2a3927b5635f03_23);
        assert(Py_REFCNT(frame_ef40bc32cafd822dab2a3927b5635f03_23) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_66;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_ass_subscribed_66;
            PyObject *tmp_ass_subscript_66;
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_23;
            }
            tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_66 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_20);
            if (tmp_ass_subvalue_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_23;
            }
            tmp_ass_subscribed_66 = DICT_GET_ITEM0(locals_flet_core$protocol$$$class__24_RemoveControlPayload_204, mod_consts[58]);

            if (unlikely(tmp_ass_subscribed_66 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_66);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[58]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_23;
            }

            if (tmp_ass_subscribed_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_66);

                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_23;
            }
            tmp_ass_subscript_66 = mod_consts[140];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_66, tmp_ass_subscript_66, tmp_ass_subvalue_66);
            Py_DECREF(tmp_ass_subvalue_66);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_23;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_22;
        frame_exception_exit_23:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ef40bc32cafd822dab2a3927b5635f03_23, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ef40bc32cafd822dab2a3927b5635f03_23->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ef40bc32cafd822dab2a3927b5635f03_23, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ef40bc32cafd822dab2a3927b5635f03_23,
            type_description_2,
            outline_23_var___class__
        );



        assertFrameObject(frame_ef40bc32cafd822dab2a3927b5635f03_23);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_22;
        frame_no_exception_22:;
        goto skip_nested_handling_22;
        nested_frame_exit_22:;

        goto try_except_handler_74;
        skip_nested_handling_22:;
        {
            PyObject *tmp_assign_source_112;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_value_25;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_value_25;
            tmp_called_value_50 = (PyObject *)&PyType_Type;
            tmp_tuple_element_30 = mod_consts[141];
            tmp_args_value_25 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = locals_flet_core$protocol$$$class__24_RemoveControlPayload_204;
            PyTuple_SET_ITEM0(tmp_args_value_25, 2, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
            tmp_kwargs_value_25 = tmp_class_creation_24__class_decl_dict;
            frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 204;
            tmp_assign_source_112 = CALL_FUNCTION(tmp_called_value_50, tmp_args_value_25, tmp_kwargs_value_25);
            Py_DECREF(tmp_args_value_25);
            if (tmp_assign_source_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto try_except_handler_74;
            }
            assert(outline_23_var___class__ == NULL);
            outline_23_var___class__ = tmp_assign_source_112;
        }
        CHECK_OBJECT(outline_23_var___class__);
        tmp_args_element_value_21 = outline_23_var___class__;
        Py_INCREF(tmp_args_element_value_21);
        goto try_return_handler_74;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_74:;
        Py_DECREF(locals_flet_core$protocol$$$class__24_RemoveControlPayload_204);
        locals_flet_core$protocol$$$class__24_RemoveControlPayload_204 = NULL;
        goto try_return_handler_73;
        // Exception handler code:
        try_except_handler_74:;
        exception_keeper_type_72 = exception_type;
        exception_keeper_value_72 = exception_value;
        exception_keeper_tb_72 = exception_tb;
        exception_keeper_lineno_72 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$protocol$$$class__24_RemoveControlPayload_204);
        locals_flet_core$protocol$$$class__24_RemoveControlPayload_204 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_72;
        exception_value = exception_keeper_value_72;
        exception_tb = exception_keeper_tb_72;
        exception_lineno = exception_keeper_lineno_72;

        goto try_except_handler_73;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_73:;
        CHECK_OBJECT(outline_23_var___class__);
        Py_DECREF(outline_23_var___class__);
        outline_23_var___class__ = NULL;
        goto outline_result_24;
        // Exception handler code:
        try_except_handler_73:;
        exception_keeper_type_73 = exception_type;
        exception_keeper_value_73 = exception_value;
        exception_keeper_tb_73 = exception_tb;
        exception_keeper_lineno_73 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_73;
        exception_value = exception_keeper_value_73;
        exception_tb = exception_keeper_tb_73;
        exception_lineno = exception_keeper_lineno_73;

        goto outline_exception_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_24:;
        exception_lineno = 204;
        goto try_except_handler_72;
        outline_result_24:;
        frame_79dd78714470f3340871997f06770f70->m_frame.f_lineno = 203;
        tmp_assign_source_111 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto try_except_handler_72;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$protocol, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_111);
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_72:;
    exception_keeper_type_74 = exception_type;
    exception_keeper_value_74 = exception_value;
    exception_keeper_tb_74 = exception_tb;
    exception_keeper_lineno_74 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
    Py_DECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_24__prepared);
    Py_DECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_74;
    exception_value = exception_keeper_value_74;
    exception_tb = exception_keeper_tb_74;
    exception_lineno = exception_keeper_lineno_74;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_23;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_79dd78714470f3340871997f06770f70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79dd78714470f3340871997f06770f70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79dd78714470f3340871997f06770f70, exception_lineno);
    }



    assertFrameObject(frame_79dd78714470f3340871997f06770f70);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_23:;
    CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
    Py_DECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_24__prepared);
    Py_DECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flet_core.protocol", false);

    Py_INCREF(module_flet_core$protocol);
    return module_flet_core$protocol;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$protocol, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$protocol", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
