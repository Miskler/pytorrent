/* Generated code for Python module 'numpy.lib.utils'
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

/* The "module_numpy$lib$utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$utils;
PyDictObject *moduledict_numpy$lib$utils;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[359];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[359];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("numpy.lib.utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 359; i++) {
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
void checkModuleConstants_numpy$lib$utils(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 359; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8ef13c8063e3366d933f74bfbce7b717;
static PyCodeObject *codeobj_ab9443c1735a0b37fd75fd6be215029e;
static PyCodeObject *codeobj_01df65d4d3abc58f87d72dda3177c638;
static PyCodeObject *codeobj_7996b427dc04e0ec84d53eb9b06aeaaa;
static PyCodeObject *codeobj_af7d4e5463dfcb52a9687838191489dc;
static PyCodeObject *codeobj_629ff26ce1ad7099163d5fbe36349fe6;
static PyCodeObject *codeobj_9cdcda21851f05f2cb7fad8e15b25420;
static PyCodeObject *codeobj_f6a86b3b5ca122b9219400dfea1f49ed;
static PyCodeObject *codeobj_49c9d912f8ae115fed0ae917b4480bf1;
static PyCodeObject *codeobj_12bba6daef77b002676d7d22b0ede197;
static PyCodeObject *codeobj_709f72af68384afb12afc4fb08cbfc9a;
static PyCodeObject *codeobj_ff3b0347c1d4e7f1734ac1fb54c54f90;
static PyCodeObject *codeobj_4d83f32de42d190e21d3b44cc266c121;
static PyCodeObject *codeobj_9b9324fe212bbcd49e111e58e78ddafb;
static PyCodeObject *codeobj_966e628c568f91f6939a903c49958ec7;
static PyCodeObject *codeobj_c1f15982dc6c36aa698db1a4188943ed;
static PyCodeObject *codeobj_4ab5c6df6febbc8b697ae6c43872a830;
static PyCodeObject *codeobj_0f29b80c6b58fc11e0bfa393fbf249f3;
static PyCodeObject *codeobj_ff067e0a7ec6eed8bb4bc60e2c8d6aa5;
static PyCodeObject *codeobj_f47a29c492d2c3775c37b749aac75a16;
static PyCodeObject *codeobj_e026e9e7b0d6c2e00ec46e2009f1e71c;
static PyCodeObject *codeobj_93597cab761773e33af96108d13a49f3;
static PyCodeObject *codeobj_0abc1f6ee2125ee05fd4224659e5d4ea;
static PyCodeObject *codeobj_d9608459b9c1cd333f53fd62a16f955b;
static PyCodeObject *codeobj_92af46e18b6c7f6a499f2205e01dc1f7;
static PyCodeObject *codeobj_6fd6c02c5d77016db26034b49efdfbfe;
static PyCodeObject *codeobj_7e72cd11a0ca026a310ca131b09e3a84;
static PyCodeObject *codeobj_b5ae7b847100d75976520ad1d86360cd;
static PyCodeObject *codeobj_25d3d6fcfa4eb2fd115b9fca51ec6dcf;
static PyCodeObject *codeobj_fca1ff7f44a67480c7268c05de037535;
static PyCodeObject *codeobj_c34ce0985d8a7ae3d6a533ec88dab24c;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[284]; CHECK_OBJECT(module_filename_obj);
    codeobj_8ef13c8063e3366d933f74bfbce7b717 = MAKE_CODE_OBJECT(module_filename_obj, 758, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[208], mod_consts[208], mod_consts[324], NULL, 1, 0, 0);
    codeobj_ab9443c1735a0b37fd75fd6be215029e = MAKE_CODE_OBJECT(module_filename_obj, 451, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[325], NULL, 1, 0, 0);
    codeobj_01df65d4d3abc58f87d72dda3177c638 = MAKE_CODE_OBJECT(module_filename_obj, 794, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[326], mod_consts[326], mod_consts[327], NULL, 1, 0, 0);
    codeobj_7996b427dc04e0ec84d53eb9b06aeaaa = MAKE_CODE_OBJECT(module_filename_obj, 620, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[326], mod_consts[326], mod_consts[328], NULL, 1, 0, 0);
    codeobj_af7d4e5463dfcb52a9687838191489dc = MAKE_CODE_OBJECT(module_filename_obj, 772, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[326], mod_consts[326], mod_consts[329], NULL, 1, 0, 0);
    codeobj_629ff26ce1ad7099163d5fbe36349fe6 = MAKE_CODE_OBJECT(module_filename_obj, 774, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[326], mod_consts[326], mod_consts[330], NULL, 1, 0, 0);
    codeobj_9cdcda21851f05f2cb7fad8e15b25420 = MAKE_CODE_OBJECT(module_filename_obj, 962, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[326], mod_consts[326], mod_consts[331], NULL, 1, 0, 0);
    codeobj_f6a86b3b5ca122b9219400dfea1f49ed = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[332], mod_consts[332], NULL, NULL, 0, 0, 0);
    codeobj_49c9d912f8ae115fed0ae917b4480bf1 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[251], mod_consts[251], mod_consts[333], NULL, 2, 0, 0);
    codeobj_12bba6daef77b002676d7d22b0ede197 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[166], mod_consts[166], mod_consts[334], NULL, 4, 0, 0);
    codeobj_709f72af68384afb12afc4fb08cbfc9a = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[335], NULL, 1, 0, 0);
    codeobj_ff3b0347c1d4e7f1734ac1fb54c54f90 = MAKE_CODE_OBJECT(module_filename_obj, 957, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[244], mod_consts[244], mod_consts[336], NULL, 1, 0, 0);
    codeobj_4d83f32de42d190e21d3b44cc266c121 = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[146], mod_consts[146], mod_consts[337], NULL, 2, 0, 0);
    codeobj_9b9324fe212bbcd49e111e58e78ddafb = MAKE_CODE_OBJECT(module_filename_obj, 818, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[338], NULL, 3, 0, 0);
    codeobj_966e628c568f91f6939a903c49958ec7 = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[339], NULL, 1, 0, 0);
    codeobj_c1f15982dc6c36aa698db1a4188943ed = MAKE_CODE_OBJECT(module_filename_obj, 1021, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[322], mod_consts[322], mod_consts[340], NULL, 3, 0, 0);
    codeobj_4ab5c6df6febbc8b697ae6c43872a830 = MAKE_CODE_OBJECT(module_filename_obj, 1057, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[323], mod_consts[323], mod_consts[341], NULL, 0, 0, 0);
    codeobj_0f29b80c6b58fc11e0bfa393fbf249f3 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[342], NULL, 2, 0, 0);
    codeobj_ff067e0a7ec6eed8bb4bc60e2c8d6aa5 = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[343], NULL, 3, 0, 0);
    codeobj_f47a29c492d2c3775c37b749aac75a16 = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[310], mod_consts[310], mod_consts[344], NULL, 1, 0, 0);
    codeobj_e026e9e7b0d6c2e00ec46e2009f1e71c = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[308], mod_consts[308], mod_consts[345], NULL, 0, 0, 0);
    codeobj_93597cab761773e33af96108d13a49f3 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[309], mod_consts[309], mod_consts[346], NULL, 1, 0, 0);
    codeobj_0abc1f6ee2125ee05fd4224659e5d4ea = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[300], mod_consts[300], mod_consts[347], NULL, 0, 0, 0);
    codeobj_d9608459b9c1cd333f53fd62a16f955b = MAKE_CODE_OBJECT(module_filename_obj, 486, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[348], NULL, 4, 0, 0);
    codeobj_92af46e18b6c7f6a499f2205e01dc1f7 = MAKE_CODE_OBJECT(module_filename_obj, 695, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[320], mod_consts[320], mod_consts[349], NULL, 5, 0, 0);
    codeobj_6fd6c02c5d77016db26034b49efdfbfe = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[18], mod_consts[18], mod_consts[350], mod_consts[351], 0, 0, 0);
    codeobj_7e72cd11a0ca026a310ca131b09e3a84 = MAKE_CODE_OBJECT(module_filename_obj, 768, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[189], mod_consts[189], mod_consts[352], mod_consts[353], 4, 0, 0);
    codeobj_b5ae7b847100d75976520ad1d86360cd = MAKE_CODE_OBJECT(module_filename_obj, 784, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[191], mod_consts[191], mod_consts[354], mod_consts[355], 1, 0, 0);
    codeobj_25d3d6fcfa4eb2fd115b9fca51ec6dcf = MAKE_CODE_OBJECT(module_filename_obj, 967, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[321], mod_consts[321], mod_consts[356], NULL, 1, 0, 0);
    codeobj_fca1ff7f44a67480c7268c05de037535 = MAKE_CODE_OBJECT(module_filename_obj, 636, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[315], mod_consts[315], mod_consts[357], NULL, 2, 0, 0);
    codeobj_c34ce0985d8a7ae3d6a533ec88dab24c = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[312], mod_consts[312], mod_consts[358], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_numpy$lib$utils$$$function__15_lookfor$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__15_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__10__split_line();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__11__makenamedict(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__12__info(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__12__info$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__13_info(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__14_source(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__15_lookfor(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__15_lookfor$$$function__1_relevance(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__15_lookfor$$$function__2_relevance_value(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__16__lookfor_generate_cache();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__17__getmembers();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__18_safe_eval();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__19__median_nancheck();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__1_get_include();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__20__opt_info();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__2__set_function_name();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__3___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__4___call__();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__4___call__$$$function__1_newfunc(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__5__get_indent();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__6_deprecate();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__7_deprecate_with_doc();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__8_byte_bounds();


static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__9_who(PyObject *defaults);


// The module function definitions.
static PyObject *impl_numpy$lib$utils$$$function__1_get_include(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_numpy = NULL;
    PyObject *var_d = NULL;
    PyObject *var_core = NULL;
    struct Nuitka_FrameObject *frame_0abc1f6ee2125ee05fd4224659e5d4ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0abc1f6ee2125ee05fd4224659e5d4ea = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0abc1f6ee2125ee05fd4224659e5d4ea)) {
        Py_XDECREF(cache_frame_0abc1f6ee2125ee05fd4224659e5d4ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0abc1f6ee2125ee05fd4224659e5d4ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0abc1f6ee2125ee05fd4224659e5d4ea = MAKE_FUNCTION_FRAME(codeobj_0abc1f6ee2125ee05fd4224659e5d4ea, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0abc1f6ee2125ee05fd4224659e5d4ea->m_type_description == NULL);
    frame_0abc1f6ee2125ee05fd4224659e5d4ea = cache_frame_0abc1f6ee2125ee05fd4224659e5d4ea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0abc1f6ee2125ee05fd4224659e5d4ea);
    assert(Py_REFCNT(frame_0abc1f6ee2125ee05fd4224659e5d4ea) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        frame_0abc1f6ee2125ee05fd4224659e5d4ea->m_frame.f_lineno = 37;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_numpy == NULL);
        var_numpy = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_numpy);
        tmp_expression_value_1 = var_numpy;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_2 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_2 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_numpy);
        tmp_expression_value_4 = var_numpy;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_0abc1f6ee2125ee05fd4224659e5d4ea->m_frame.f_lineno = 40;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[6];
        tmp_args_element_value_4 = mod_consts[7];
        frame_0abc1f6ee2125ee05fd4224659e5d4ea->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[8];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[1];
        frame_0abc1f6ee2125ee05fd4224659e5d4ea->m_frame.f_lineno = 43;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$lib$utils,
                mod_consts[6],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_core == NULL);
        var_core = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_5 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_5 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_6 == NULL));
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[4]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_core);
        tmp_expression_value_7 = var_core;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[5]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_0abc1f6ee2125ee05fd4224659e5d4ea->m_frame.f_lineno = 44;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[7];
        frame_0abc1f6ee2125ee05fd4224659e5d4ea->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_7};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_4;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0abc1f6ee2125ee05fd4224659e5d4ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0abc1f6ee2125ee05fd4224659e5d4ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0abc1f6ee2125ee05fd4224659e5d4ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0abc1f6ee2125ee05fd4224659e5d4ea,
        type_description_1,
        var_numpy,
        var_d,
        var_core
    );


    // Release cached frame if used for exception.
    if (frame_0abc1f6ee2125ee05fd4224659e5d4ea == cache_frame_0abc1f6ee2125ee05fd4224659e5d4ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0abc1f6ee2125ee05fd4224659e5d4ea);
        cache_frame_0abc1f6ee2125ee05fd4224659e5d4ea = NULL;
    }

    assertFrameObject(frame_0abc1f6ee2125ee05fd4224659e5d4ea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_d);
    tmp_return_value = var_d;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_numpy);
    Py_DECREF(var_numpy);
    var_numpy = NULL;
    CHECK_OBJECT(var_d);
    Py_DECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_core);
    var_core = NULL;
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

    Py_XDECREF(var_numpy);
    var_numpy = NULL;
    Py_XDECREF(var_core);
    var_core = NULL;
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


static PyObject *impl_numpy$lib$utils$$$function__2__set_function_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_0f29b80c6b58fc11e0bfa393fbf249f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0f29b80c6b58fc11e0bfa393fbf249f3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0f29b80c6b58fc11e0bfa393fbf249f3)) {
        Py_XDECREF(cache_frame_0f29b80c6b58fc11e0bfa393fbf249f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f29b80c6b58fc11e0bfa393fbf249f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f29b80c6b58fc11e0bfa393fbf249f3 = MAKE_FUNCTION_FRAME(codeobj_0f29b80c6b58fc11e0bfa393fbf249f3, module_numpy$lib$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0f29b80c6b58fc11e0bfa393fbf249f3->m_type_description == NULL);
    frame_0f29b80c6b58fc11e0bfa393fbf249f3 = cache_frame_0f29b80c6b58fc11e0bfa393fbf249f3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0f29b80c6b58fc11e0bfa393fbf249f3);
    assert(Py_REFCNT(frame_0f29b80c6b58fc11e0bfa393fbf249f3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_func);
        tmp_assattr_target_1 = par_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f29b80c6b58fc11e0bfa393fbf249f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f29b80c6b58fc11e0bfa393fbf249f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f29b80c6b58fc11e0bfa393fbf249f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f29b80c6b58fc11e0bfa393fbf249f3,
        type_description_1,
        par_func,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_0f29b80c6b58fc11e0bfa393fbf249f3 == cache_frame_0f29b80c6b58fc11e0bfa393fbf249f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0f29b80c6b58fc11e0bfa393fbf249f3);
        cache_frame_0f29b80c6b58fc11e0bfa393fbf249f3 = NULL;
    }

    assertFrameObject(frame_0f29b80c6b58fc11e0bfa393fbf249f3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_func);
    tmp_return_value = par_func;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_old_name = python_pars[1];
    PyObject *par_new_name = python_pars[2];
    PyObject *par_message = python_pars[3];
    struct Nuitka_FrameObject *frame_12bba6daef77b002676d7d22b0ede197;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_12bba6daef77b002676d7d22b0ede197 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12bba6daef77b002676d7d22b0ede197)) {
        Py_XDECREF(cache_frame_12bba6daef77b002676d7d22b0ede197);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12bba6daef77b002676d7d22b0ede197 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12bba6daef77b002676d7d22b0ede197 = MAKE_FUNCTION_FRAME(codeobj_12bba6daef77b002676d7d22b0ede197, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_12bba6daef77b002676d7d22b0ede197->m_type_description == NULL);
    frame_12bba6daef77b002676d7d22b0ede197 = cache_frame_12bba6daef77b002676d7d22b0ede197;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_12bba6daef77b002676d7d22b0ede197);
    assert(Py_REFCNT(frame_12bba6daef77b002676d7d22b0ede197) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_old_name);
        tmp_assattr_value_1 = par_old_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_new_name);
        tmp_assattr_value_2 = par_new_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_message);
        tmp_assattr_value_3 = par_message;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[13], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12bba6daef77b002676d7d22b0ede197, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12bba6daef77b002676d7d22b0ede197->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12bba6daef77b002676d7d22b0ede197, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12bba6daef77b002676d7d22b0ede197,
        type_description_1,
        par_self,
        par_old_name,
        par_new_name,
        par_message
    );


    // Release cached frame if used for exception.
    if (frame_12bba6daef77b002676d7d22b0ede197 == cache_frame_12bba6daef77b002676d7d22b0ede197) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_12bba6daef77b002676d7d22b0ede197);
        cache_frame_12bba6daef77b002676d7d22b0ede197 = NULL;
    }

    assertFrameObject(frame_12bba6daef77b002676d7d22b0ede197);

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
    CHECK_OBJECT(par_old_name);
    Py_DECREF(par_old_name);
    CHECK_OBJECT(par_new_name);
    Py_DECREF(par_new_name);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_old_name);
    Py_DECREF(par_old_name);
    CHECK_OBJECT(par_new_name);
    Py_DECREF(par_new_name);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__4___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    PyObject *var_old_name = NULL;
    PyObject *var_new_name = NULL;
    PyObject *var_message = NULL;
    struct Nuitka_CellObject *var_depdoc = Nuitka_Cell_Empty();
    PyObject *var_newfunc = NULL;
    PyObject *var_doc = NULL;
    PyObject *var_lines = NULL;
    PyObject *var_indent = NULL;
    PyObject *var_skip = NULL;
    PyObject *var_line = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_49c9d912f8ae115fed0ae917b4480bf1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_49c9d912f8ae115fed0ae917b4480bf1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_49c9d912f8ae115fed0ae917b4480bf1)) {
        Py_XDECREF(cache_frame_49c9d912f8ae115fed0ae917b4480bf1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49c9d912f8ae115fed0ae917b4480bf1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49c9d912f8ae115fed0ae917b4480bf1 = MAKE_FUNCTION_FRAME(codeobj_49c9d912f8ae115fed0ae917b4480bf1, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49c9d912f8ae115fed0ae917b4480bf1->m_type_description == NULL);
    frame_49c9d912f8ae115fed0ae917b4480bf1 = cache_frame_49c9d912f8ae115fed0ae917b4480bf1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_49c9d912f8ae115fed0ae917b4480bf1);
    assert(Py_REFCNT(frame_49c9d912f8ae115fed0ae917b4480bf1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_old_name == NULL);
        var_old_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_name == NULL);
        var_new_name = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[13]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_old_name);
        tmp_cmp_expr_left_1 = var_old_name;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(Nuitka_Cell_GET(par_func));
        tmp_expression_value_4 = Nuitka_Cell_GET(par_func);
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ocooooocooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_old_name;
            assert(old != NULL);
            var_old_name = tmp_assign_source_4;
            Py_DECREF(old);
        }

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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_49c9d912f8ae115fed0ae917b4480bf1, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_49c9d912f8ae115fed0ae917b4480bf1, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_AttributeError;
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
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_func));
        tmp_expression_value_5 = Nuitka_Cell_GET(par_func);
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ocooooocooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_old_name;
            assert(old != NULL);
            var_old_name = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 80;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_49c9d912f8ae115fed0ae917b4480bf1->m_frame) frame_49c9d912f8ae115fed0ae917b4480bf1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocooooocooooooo";
    goto try_except_handler_3;
    branch_end_2:;
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
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_new_name);
        tmp_cmp_expr_left_3 = var_new_name;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[14];
        CHECK_OBJECT(var_old_name);
        tmp_mod_expr_right_1 = var_old_name;
        tmp_assign_source_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_depdoc) == NULL);
        PyCell_SET(var_depdoc, tmp_assign_source_6);

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_2 = mod_consts[15];
        CHECK_OBJECT(var_old_name);
        tmp_tuple_element_1 = var_old_name;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_new_name);
        tmp_tuple_element_1 = var_new_name;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_1);
        tmp_assign_source_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_depdoc) == NULL);
        PyCell_SET(var_depdoc, tmp_assign_source_7);

    }
    branch_end_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_message);
        tmp_cmp_expr_left_4 = var_message;
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_depdoc));
        tmp_iadd_expr_left_1 = Nuitka_Cell_GET(var_depdoc);
        tmp_add_expr_left_1 = mod_consts[16];
        CHECK_OBJECT(var_message);
        tmp_add_expr_right_1 = var_message;
        tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_1;
        PyCell_SET(var_depdoc, tmp_assign_source_8);

    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_9;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = var_depdoc;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_func;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_9 = MAKE_FUNCTION_numpy$lib$utils$$$function__4___call__$$$function__1_newfunc(tmp_closure_1);

        assert(var_newfunc == NULL);
        var_newfunc = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_newfunc);
        tmp_args_element_value_1 = var_newfunc;
        CHECK_OBJECT(var_old_name);
        tmp_args_element_value_2 = var_old_name;
        frame_49c9d912f8ae115fed0ae917b4480bf1->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_newfunc;
            assert(old != NULL);
            var_newfunc = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(par_func));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_func);
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[21]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_doc == NULL);
        var_doc = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_doc);
        tmp_cmp_expr_left_5 = var_doc;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(Nuitka_Cell_GET(var_depdoc));
        tmp_assign_source_12 = Nuitka_Cell_GET(var_depdoc);
        {
            PyObject *old = var_doc;
            assert(old != NULL);
            var_doc = tmp_assign_source_12;
            Py_INCREF(var_doc);
            Py_DECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_doc);
        tmp_expression_value_8 = var_doc;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[22]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        frame_49c9d912f8ae115fed0ae917b4480bf1->m_frame.f_lineno = 103;
        tmp_expression_value_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[23]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        frame_49c9d912f8ae115fed0ae917b4480bf1->m_frame.f_lineno = 103;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[24]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lines == NULL);
        var_lines = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lines);
        tmp_expression_value_9 = var_lines;
        tmp_subscript_value_1 = mod_consts[26];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        frame_49c9d912f8ae115fed0ae917b4480bf1->m_frame.f_lineno = 104;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indent == NULL);
        var_indent = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_lines);
        tmp_expression_value_11 = var_lines;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_2, 0);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[27]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        frame_49c9d912f8ae115fed0ae917b4480bf1->m_frame.f_lineno = 105;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 105;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_indent);
        tmp_mult_expr_left_1 = var_indent;
        tmp_mult_expr_right_1 = mod_consts[28];
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_UNICODE(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_doc);
        tmp_add_expr_right_2 = var_doc;
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_doc;
            assert(old != NULL);
            var_doc = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_add_expr_left_3;
        nuitka_digit tmp_add_expr_right_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_lines);
        tmp_expression_value_12 = var_lines;
        tmp_subscript_value_3 = mod_consts[1];
        tmp_len_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_3, 0);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = 1;
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        assert(!(tmp_assign_source_16 == NULL));
        assert(var_skip == NULL);
        var_skip = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_lines);
        tmp_expression_value_13 = var_lines;
        tmp_subscript_value_4 = mod_consts[26];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_4);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooocooooooo";
                exception_lineno = 112;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_19 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_19;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_line);
        tmp_len_arg_2 = var_line;
        tmp_cmp_expr_left_6 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ocooooocooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_indent);
        tmp_cmp_expr_right_6 = var_indent;
        tmp_condition_result_7 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ocooooocooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    goto loop_end_1;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_add_expr_left_4;
        nuitka_digit tmp_add_expr_right_4;
        PyObject *tmp_len_arg_3;
        if (var_skip == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "ocooooocooooooo";
            goto try_except_handler_4;
        }

        tmp_iadd_expr_left_2 = var_skip;
        CHECK_OBJECT(var_line);
        tmp_len_arg_3 = var_line;
        tmp_add_expr_left_4 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_add_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ocooooocooooooo";
            goto try_except_handler_4;
        }
        tmp_add_expr_right_4 = 1;
        tmp_iadd_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        assert(!(tmp_iadd_expr_right_2 == NULL));
        tmp_result = INPLACE_OPERATION_ADD_LONG_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        assert(!(tmp_result == false));
        tmp_assign_source_20 = tmp_iadd_expr_left_2;
        var_skip = tmp_assign_source_20;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 112;
        type_description_1 = "ocooooocooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(var_doc);
        tmp_expression_value_14 = var_doc;
        if (var_skip == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_1 = var_skip;
        tmp_stop_value_1 = Py_None;
        tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_5 == NULL));
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_doc;
            assert(old != NULL);
            var_doc = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[31]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_depdoc));
        tmp_args_element_value_4 = Nuitka_Cell_GET(var_depdoc);
        tmp_mult_expr_left_2 = mod_consts[28];
        CHECK_OBJECT(var_indent);
        tmp_mult_expr_right_2 = var_indent;
        tmp_args_element_value_5 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 117;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        frame_49c9d912f8ae115fed0ae917b4480bf1->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_depdoc);
            PyCell_SET(var_depdoc, tmp_assign_source_22);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_list_element_1;
        tmp_str_arg_value_1 = mod_consts[32];
        CHECK_OBJECT(Nuitka_Cell_GET(var_depdoc));
        tmp_list_element_1 = Nuitka_Cell_GET(var_depdoc);
        tmp_iterable_value_1 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_iterable_value_1, 0, tmp_list_element_1);
        CHECK_OBJECT(var_doc);
        tmp_list_element_1 = var_doc;
        PyList_SET_ITEM0(tmp_iterable_value_1, 1, tmp_list_element_1);
        tmp_assign_source_23 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_doc;
            assert(old != NULL);
            var_doc = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    branch_end_5:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_doc);
        tmp_assattr_value_1 = var_doc;
        CHECK_OBJECT(var_newfunc);
        tmp_assattr_target_1 = var_newfunc;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_assign_source_24;
        tmp_assign_source_24 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(Nuitka_Cell_GET(par_func));
        tmp_expression_value_16 = Nuitka_Cell_GET(par_func);
        tmp_assign_source_25 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_16);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ocooooocooooooo";
            goto try_except_handler_5;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_25;
    }
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

    {
        nuitka_bool tmp_assign_source_26;
        tmp_assign_source_26 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_26;
    }
    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_49c9d912f8ae115fed0ae917b4480bf1, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_49c9d912f8ae115fed0ae917b4480bf1, exception_keeper_lineno_4);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 120;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_49c9d912f8ae115fed0ae917b4480bf1->m_frame) frame_49c9d912f8ae115fed0ae917b4480bf1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocooooocooooooo";
    goto try_except_handler_6;
    branch_no_8:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
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
    try_end_5:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    {
        bool tmp_condition_result_9;
        nuitka_bool tmp_cmp_expr_left_8;
        nuitka_bool tmp_cmp_expr_right_8;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_8 = tmp_try_except_1__unhandled_indicator;
        tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_newfunc);
        tmp_expression_value_18 = var_newfunc;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_18);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[33]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_d == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = var_d;
        frame_49c9d912f8ae115fed0ae917b4480bf1->m_frame.f_lineno = 125;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ocooooocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_9:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_49c9d912f8ae115fed0ae917b4480bf1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49c9d912f8ae115fed0ae917b4480bf1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49c9d912f8ae115fed0ae917b4480bf1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49c9d912f8ae115fed0ae917b4480bf1,
        type_description_1,
        par_self,
        par_func,
        par_args,
        par_kwargs,
        var_old_name,
        var_new_name,
        var_message,
        var_depdoc,
        var_newfunc,
        var_doc,
        var_lines,
        var_indent,
        var_skip,
        var_line,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_49c9d912f8ae115fed0ae917b4480bf1 == cache_frame_49c9d912f8ae115fed0ae917b4480bf1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49c9d912f8ae115fed0ae917b4480bf1);
        cache_frame_49c9d912f8ae115fed0ae917b4480bf1 = NULL;
    }

    assertFrameObject(frame_49c9d912f8ae115fed0ae917b4480bf1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_newfunc);
    tmp_return_value = var_newfunc;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_old_name);
    Py_DECREF(var_old_name);
    var_old_name = NULL;
    CHECK_OBJECT(var_new_name);
    Py_DECREF(var_new_name);
    var_new_name = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    CHECK_OBJECT(var_depdoc);
    Py_DECREF(var_depdoc);
    var_depdoc = NULL;
    CHECK_OBJECT(var_newfunc);
    Py_DECREF(var_newfunc);
    var_newfunc = NULL;
    CHECK_OBJECT(var_doc);
    Py_DECREF(var_doc);
    var_doc = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_indent);
    var_indent = NULL;
    Py_XDECREF(var_skip);
    var_skip = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
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

    Py_XDECREF(var_old_name);
    var_old_name = NULL;
    Py_XDECREF(var_new_name);
    var_new_name = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    CHECK_OBJECT(var_depdoc);
    Py_DECREF(var_depdoc);
    var_depdoc = NULL;
    Py_XDECREF(var_newfunc);
    var_newfunc = NULL;
    Py_XDECREF(var_doc);
    var_doc = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_indent);
    var_indent = NULL;
    Py_XDECREF(var_skip);
    var_skip = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__4___call__$$$function__1_newfunc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwds = python_pars[1];
    struct Nuitka_FrameObject *frame_6fd6c02c5d77016db26034b49efdfbfe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6fd6c02c5d77016db26034b49efdfbfe = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6fd6c02c5d77016db26034b49efdfbfe)) {
        Py_XDECREF(cache_frame_6fd6c02c5d77016db26034b49efdfbfe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fd6c02c5d77016db26034b49efdfbfe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fd6c02c5d77016db26034b49efdfbfe = MAKE_FUNCTION_FRAME(codeobj_6fd6c02c5d77016db26034b49efdfbfe, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6fd6c02c5d77016db26034b49efdfbfe->m_type_description == NULL);
    frame_6fd6c02c5d77016db26034b49efdfbfe = cache_frame_6fd6c02c5d77016db26034b49efdfbfe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6fd6c02c5d77016db26034b49efdfbfe);
    assert(Py_REFCNT(frame_6fd6c02c5d77016db26034b49efdfbfe) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oocc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[40]);
        frame_6fd6c02c5d77016db26034b49efdfbfe->m_frame.f_lineno = 95;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwds);
        tmp_dircall_arg3_1 = par_kwds;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oocc";
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
        exception_tb = MAKE_TRACEBACK(frame_6fd6c02c5d77016db26034b49efdfbfe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fd6c02c5d77016db26034b49efdfbfe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fd6c02c5d77016db26034b49efdfbfe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fd6c02c5d77016db26034b49efdfbfe,
        type_description_1,
        par_args,
        par_kwds,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_6fd6c02c5d77016db26034b49efdfbfe == cache_frame_6fd6c02c5d77016db26034b49efdfbfe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6fd6c02c5d77016db26034b49efdfbfe);
        cache_frame_6fd6c02c5d77016db26034b49efdfbfe = NULL;
    }

    assertFrameObject(frame_6fd6c02c5d77016db26034b49efdfbfe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwds);
    Py_DECREF(par_kwds);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwds);
    Py_DECREF(par_kwds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__5__get_indent(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lines = python_pars[0];
    PyObject *var_indent = NULL;
    PyObject *var_line = NULL;
    PyObject *var_content = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_709f72af68384afb12afc4fb08cbfc9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_709f72af68384afb12afc4fb08cbfc9a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[42];
        assert(var_indent == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_indent = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_709f72af68384afb12afc4fb08cbfc9a)) {
        Py_XDECREF(cache_frame_709f72af68384afb12afc4fb08cbfc9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_709f72af68384afb12afc4fb08cbfc9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_709f72af68384afb12afc4fb08cbfc9a = MAKE_FUNCTION_FRAME(codeobj_709f72af68384afb12afc4fb08cbfc9a, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_709f72af68384afb12afc4fb08cbfc9a->m_type_description == NULL);
    frame_709f72af68384afb12afc4fb08cbfc9a = cache_frame_709f72af68384afb12afc4fb08cbfc9a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_709f72af68384afb12afc4fb08cbfc9a);
    assert(Py_REFCNT(frame_709f72af68384afb12afc4fb08cbfc9a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_lines);
        tmp_iter_arg_1 = par_lines;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 134;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_4;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_line);
        tmp_expression_value_1 = var_line;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_709f72af68384afb12afc4fb08cbfc9a->m_frame.f_lineno = 135;
        tmp_len_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_content;
            var_content = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        CHECK_OBJECT(var_content);
        tmp_condition_result_1 = CHECK_IF_TRUE(var_content) == 1;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_len_arg_2;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[43]);
        assert(tmp_called_value_2 != NULL);
        if (var_indent == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = var_indent;
        CHECK_OBJECT(var_line);
        tmp_len_arg_2 = var_line;
        tmp_sub_expr_left_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_content);
        tmp_sub_expr_right_1 = var_content;
        tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        assert(!(tmp_args_element_value_2 == NULL));
        frame_709f72af68384afb12afc4fb08cbfc9a->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_indent;
            var_indent = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 134;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_indent == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_indent;
        tmp_cmp_expr_right_1 = mod_consts[42];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[1];
        {
            PyObject *old = var_indent;
            var_indent = tmp_assign_source_7;
            Py_INCREF(var_indent);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    if (var_indent == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 140;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_indent;
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
        exception_tb = MAKE_TRACEBACK(frame_709f72af68384afb12afc4fb08cbfc9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_709f72af68384afb12afc4fb08cbfc9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_709f72af68384afb12afc4fb08cbfc9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_709f72af68384afb12afc4fb08cbfc9a,
        type_description_1,
        par_lines,
        var_indent,
        var_line,
        var_content
    );


    // Release cached frame if used for exception.
    if (frame_709f72af68384afb12afc4fb08cbfc9a == cache_frame_709f72af68384afb12afc4fb08cbfc9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_709f72af68384afb12afc4fb08cbfc9a);
        cache_frame_709f72af68384afb12afc4fb08cbfc9a = NULL;
    }

    assertFrameObject(frame_709f72af68384afb12afc4fb08cbfc9a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_indent);
    var_indent = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_content);
    var_content = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_indent);
    var_indent = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_content);
    var_content = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__6_deprecate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_fn = NULL;
    struct Nuitka_FrameObject *frame_e026e9e7b0d6c2e00ec46e2009f1e71c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e026e9e7b0d6c2e00ec46e2009f1e71c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e026e9e7b0d6c2e00ec46e2009f1e71c)) {
        Py_XDECREF(cache_frame_e026e9e7b0d6c2e00ec46e2009f1e71c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e026e9e7b0d6c2e00ec46e2009f1e71c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e026e9e7b0d6c2e00ec46e2009f1e71c = MAKE_FUNCTION_FRAME(codeobj_e026e9e7b0d6c2e00ec46e2009f1e71c, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e026e9e7b0d6c2e00ec46e2009f1e71c->m_type_description == NULL);
    frame_e026e9e7b0d6c2e00ec46e2009f1e71c = cache_frame_e026e9e7b0d6c2e00ec46e2009f1e71c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e026e9e7b0d6c2e00ec46e2009f1e71c);
    assert(Py_REFCNT(frame_e026e9e7b0d6c2e00ec46e2009f1e71c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        CHECK_OBJECT(par_args);
        tmp_condition_result_1 = CHECK_IF_TRUE(par_args) == 1;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_args);
        tmp_expression_value_1 = par_args;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_fn == NULL);
        var_fn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_args);
        tmp_expression_value_2 = par_args;
        tmp_subscript_value_2 = mod_consts[26];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_args;
            assert(old != NULL);
            par_args = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_args_element_value_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_called_value_1 = impl___main__$$$function__8_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fn);
        tmp_args_element_value_1 = var_fn;
        frame_e026e9e7b0d6c2e00ec46e2009f1e71c->m_frame.f_lineno = 191;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_2 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_e026e9e7b0d6c2e00ec46e2009f1e71c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e026e9e7b0d6c2e00ec46e2009f1e71c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e026e9e7b0d6c2e00ec46e2009f1e71c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e026e9e7b0d6c2e00ec46e2009f1e71c,
        type_description_1,
        par_args,
        par_kwargs,
        var_fn
    );


    // Release cached frame if used for exception.
    if (frame_e026e9e7b0d6c2e00ec46e2009f1e71c == cache_frame_e026e9e7b0d6c2e00ec46e2009f1e71c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e026e9e7b0d6c2e00ec46e2009f1e71c);
        cache_frame_e026e9e7b0d6c2e00ec46e2009f1e71c = NULL;
    }

    assertFrameObject(frame_e026e9e7b0d6c2e00ec46e2009f1e71c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    Py_XDECREF(var_fn);
    var_fn = NULL;
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

    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    Py_XDECREF(var_fn);
    var_fn = NULL;
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
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__7_deprecate_with_doc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    struct Nuitka_FrameObject *frame_93597cab761773e33af96108d13a49f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_93597cab761773e33af96108d13a49f3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_93597cab761773e33af96108d13a49f3)) {
        Py_XDECREF(cache_frame_93597cab761773e33af96108d13a49f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_93597cab761773e33af96108d13a49f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_93597cab761773e33af96108d13a49f3 = MAKE_FUNCTION_FRAME(codeobj_93597cab761773e33af96108d13a49f3, module_numpy$lib$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_93597cab761773e33af96108d13a49f3->m_type_description == NULL);
    frame_93597cab761773e33af96108d13a49f3 = cache_frame_93597cab761773e33af96108d13a49f3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_93597cab761773e33af96108d13a49f3);
    assert(Py_REFCNT(frame_93597cab761773e33af96108d13a49f3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_msg);
        tmp_kw_call_value_0_1 = par_msg;
        frame_93597cab761773e33af96108d13a49f3->m_frame.f_lineno = 220;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[47]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
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
        exception_tb = MAKE_TRACEBACK(frame_93597cab761773e33af96108d13a49f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_93597cab761773e33af96108d13a49f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_93597cab761773e33af96108d13a49f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_93597cab761773e33af96108d13a49f3,
        type_description_1,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_93597cab761773e33af96108d13a49f3 == cache_frame_93597cab761773e33af96108d13a49f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_93597cab761773e33af96108d13a49f3);
        cache_frame_93597cab761773e33af96108d13a49f3 = NULL;
    }

    assertFrameObject(frame_93597cab761773e33af96108d13a49f3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__8_byte_bounds(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *var_ai = NULL;
    PyObject *var_a_data = NULL;
    PyObject *var_astrides = NULL;
    PyObject *var_ashape = NULL;
    PyObject *var_bytes_a = NULL;
    PyObject *var_a_low = NULL;
    PyObject *var_a_high = NULL;
    PyObject *var_shape = NULL;
    PyObject *var_stride = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f47a29c492d2c3775c37b749aac75a16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f47a29c492d2c3775c37b749aac75a16 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f47a29c492d2c3775c37b749aac75a16)) {
        Py_XDECREF(cache_frame_f47a29c492d2c3775c37b749aac75a16);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f47a29c492d2c3775c37b749aac75a16 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f47a29c492d2c3775c37b749aac75a16 = MAKE_FUNCTION_FRAME(codeobj_f47a29c492d2c3775c37b749aac75a16, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f47a29c492d2c3775c37b749aac75a16->m_type_description == NULL);
    frame_f47a29c492d2c3775c37b749aac75a16 = cache_frame_f47a29c492d2c3775c37b749aac75a16;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f47a29c492d2c3775c37b749aac75a16);
    assert(Py_REFCNT(frame_f47a29c492d2c3775c37b749aac75a16) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_a);
        tmp_expression_value_1 = par_a;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[49]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ai == NULL);
        var_ai = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_ai);
        tmp_expression_value_3 = var_ai;
        tmp_subscript_value_1 = mod_consts[50];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[1];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_a_data == NULL);
        var_a_data = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_ai);
        tmp_expression_value_4 = var_ai;
        tmp_subscript_value_3 = mod_consts[51];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_astrides == NULL);
        var_astrides = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_ai);
        tmp_expression_value_5 = var_ai;
        tmp_subscript_value_4 = mod_consts[52];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ashape == NULL);
        var_ashape = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        frame_f47a29c492d2c3775c37b749aac75a16->m_frame.f_lineno = 263;
        tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[54]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[55]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bytes_a == NULL);
        var_bytes_a = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(var_a_data);
        tmp_assign_source_6 = var_a_data;
        assert(tmp_assign_unpack_1__assign_source == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_7 = tmp_assign_unpack_1__assign_source;
        assert(var_a_low == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_a_low = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_8 = tmp_assign_unpack_1__assign_source;
        assert(var_a_high == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_a_high = tmp_assign_source_8;
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_astrides);
        tmp_cmp_expr_left_1 = var_astrides;
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_a_high);
        tmp_iadd_expr_left_1 = var_a_high;
        CHECK_OBJECT(par_a);
        tmp_expression_value_8 = par_a;
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[56]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bytes_a);
        tmp_mult_expr_right_1 = var_bytes_a;
        tmp_iadd_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_iadd_expr_left_1;
        var_a_high = tmp_assign_source_9;

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(var_ashape);
        tmp_args_element_value_2 = var_ashape;
        CHECK_OBJECT(var_astrides);
        tmp_args_element_value_3 = var_astrides;
        frame_f47a29c492d2c3775c37b749aac75a16->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 270;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 270;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 270;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_14;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 270;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[57];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 270;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_shape;
            var_shape = tmp_assign_source_15;
            Py_INCREF(var_shape);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_stride;
            var_stride = tmp_assign_source_16;
            Py_INCREF(var_stride);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_stride);
        tmp_cmp_expr_left_2 = var_stride;
        tmp_cmp_expr_right_2 = mod_consts[1];
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (var_a_low == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 272;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_2 = var_a_low;
        CHECK_OBJECT(var_shape);
        tmp_sub_expr_left_1 = var_shape;
        tmp_sub_expr_right_1 = mod_consts[59];
        tmp_mult_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_stride);
        tmp_mult_expr_right_2 = var_stride;
        tmp_iadd_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_17 = tmp_iadd_expr_left_2;
        var_a_low = tmp_assign_source_17;

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        if (var_a_high == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_3 = var_a_high;
        CHECK_OBJECT(var_shape);
        tmp_sub_expr_left_2 = var_shape;
        tmp_sub_expr_right_2 = mod_consts[59];
        tmp_mult_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_stride);
        tmp_mult_expr_right_3 = var_stride;
        tmp_iadd_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_18 = tmp_iadd_expr_left_3;
        var_a_high = tmp_assign_source_18;

    }
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 270;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        if (var_a_high == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 275;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_4 = var_a_high;
        CHECK_OBJECT(var_bytes_a);
        tmp_iadd_expr_right_4 = var_bytes_a;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = tmp_iadd_expr_left_4;
        var_a_high = tmp_assign_source_19;

    }
    branch_end_1:;
    {
        PyObject *tmp_tuple_element_1;
        if (var_a_low == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 276;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_a_low;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_a_high);
        tmp_tuple_element_1 = var_a_high;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_f47a29c492d2c3775c37b749aac75a16, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f47a29c492d2c3775c37b749aac75a16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f47a29c492d2c3775c37b749aac75a16, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f47a29c492d2c3775c37b749aac75a16,
        type_description_1,
        par_a,
        var_ai,
        var_a_data,
        var_astrides,
        var_ashape,
        var_bytes_a,
        var_a_low,
        var_a_high,
        var_shape,
        var_stride
    );


    // Release cached frame if used for exception.
    if (frame_f47a29c492d2c3775c37b749aac75a16 == cache_frame_f47a29c492d2c3775c37b749aac75a16) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f47a29c492d2c3775c37b749aac75a16);
        cache_frame_f47a29c492d2c3775c37b749aac75a16 = NULL;
    }

    assertFrameObject(frame_f47a29c492d2c3775c37b749aac75a16);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ai);
    Py_DECREF(var_ai);
    var_ai = NULL;
    CHECK_OBJECT(var_a_data);
    Py_DECREF(var_a_data);
    var_a_data = NULL;
    Py_XDECREF(var_astrides);
    var_astrides = NULL;
    Py_XDECREF(var_ashape);
    var_ashape = NULL;
    Py_XDECREF(var_bytes_a);
    var_bytes_a = NULL;
    Py_XDECREF(var_a_low);
    var_a_low = NULL;
    CHECK_OBJECT(var_a_high);
    Py_DECREF(var_a_high);
    var_a_high = NULL;
    Py_XDECREF(var_shape);
    var_shape = NULL;
    Py_XDECREF(var_stride);
    var_stride = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_ai);
    var_ai = NULL;
    Py_XDECREF(var_a_data);
    var_a_data = NULL;
    Py_XDECREF(var_astrides);
    var_astrides = NULL;
    Py_XDECREF(var_ashape);
    var_ashape = NULL;
    Py_XDECREF(var_bytes_a);
    var_bytes_a = NULL;
    Py_XDECREF(var_a_low);
    var_a_low = NULL;
    Py_XDECREF(var_a_high);
    var_a_high = NULL;
    Py_XDECREF(var_shape);
    var_shape = NULL;
    Py_XDECREF(var_stride);
    var_stride = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__9_who(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_vardict = python_pars[0];
    PyObject *var_frame = NULL;
    PyObject *var_sta = NULL;
    PyObject *var_cache = NULL;
    PyObject *var_name = NULL;
    PyObject *var_var = NULL;
    PyObject *var_idv = NULL;
    PyObject *var_namestr = NULL;
    PyObject *var_original = NULL;
    PyObject *var_shapestr = NULL;
    PyObject *var_bytestr = NULL;
    PyObject *var_maxname = NULL;
    PyObject *var_maxshape = NULL;
    PyObject *var_maxbyte = NULL;
    PyObject *var_totalbytes = NULL;
    PyObject *var_val = NULL;
    PyObject *var_sp1 = NULL;
    PyObject *var_sp2 = NULL;
    PyObject *var_sp3 = NULL;
    PyObject *var_prval = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_c34ce0985d8a7ae3d6a533ec88dab24c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_c34ce0985d8a7ae3d6a533ec88dab24c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c34ce0985d8a7ae3d6a533ec88dab24c)) {
        Py_XDECREF(cache_frame_c34ce0985d8a7ae3d6a533ec88dab24c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c34ce0985d8a7ae3d6a533ec88dab24c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c34ce0985d8a7ae3d6a533ec88dab24c = MAKE_FUNCTION_FRAME(codeobj_c34ce0985d8a7ae3d6a533ec88dab24c, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_type_description == NULL);
    frame_c34ce0985d8a7ae3d6a533ec88dab24c = cache_frame_c34ce0985d8a7ae3d6a533ec88dab24c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c34ce0985d8a7ae3d6a533ec88dab24c);
    assert(Py_REFCNT(frame_c34ce0985d8a7ae3d6a533ec88dab24c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_vardict);
        tmp_cmp_expr_left_1 = par_vardict;
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_frame.f_lineno = 329;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[63]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[64]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_frame == NULL);
        var_frame = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_frame);
        tmp_expression_value_2 = var_frame;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[65]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_vardict;
            assert(old != NULL);
            par_vardict = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        assert(var_sta == NULL);
        var_sta = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        assert(var_cache == NULL);
        var_cache = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_vardict);
        tmp_expression_value_3 = par_vardict;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[66]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_frame.f_lineno = 333;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 333;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_7;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_vardict);
        tmp_expression_value_4 = par_vardict;
        CHECK_OBJECT(var_name);
        tmp_subscript_value_1 = var_name;
        tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_vardict);
        tmp_expression_value_5 = par_vardict;
        CHECK_OBJECT(var_name);
        tmp_subscript_value_2 = var_name;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_var;
            var_var = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT(var_var);
        tmp_id_arg_1 = var_var;
        tmp_assign_source_9 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_assign_source_9 == NULL));
        {
            PyObject *old = var_idv;
            var_idv = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_idv);
        tmp_cmp_expr_left_2 = var_idv;
        if (var_cache == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = var_cache;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[66]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_frame.f_lineno = 337;
        tmp_cmp_expr_right_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_name);
        tmp_add_expr_left_1 = var_name;
        tmp_mod_expr_left_1 = mod_consts[69];
        if (var_cache == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 338;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = var_cache;
        CHECK_OBJECT(var_idv);
        tmp_subscript_value_3 = var_idv;
        tmp_mod_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_namestr;
            var_namestr = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[1];
        {
            PyObject *old = var_original;
            var_original = tmp_assign_source_11;
            Py_INCREF(var_original);
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_name);
        tmp_ass_subvalue_1 = var_name;
        if (var_cache == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_cache;
        CHECK_OBJECT(var_idv);
        tmp_ass_subscript_1 = var_idv;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(var_name);
        tmp_assign_source_12 = var_name;
        {
            PyObject *old = var_namestr;
            var_namestr = tmp_assign_source_12;
            Py_INCREF(var_namestr);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[59];
        {
            PyObject *old = var_original;
            var_original = tmp_assign_source_13;
            Py_INCREF(var_original);
            Py_XDECREF(old);
        }

    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_8;
        tmp_str_arg_value_1 = mod_consts[70];
        tmp_called_value_3 = (PyObject *)&PyMap_Type;
        tmp_args_element_value_1 = (PyObject *)&PyUnicode_Type;
        CHECK_OBJECT(var_var);
        tmp_expression_value_8 = var_var;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[52]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_shapestr;
            var_shapestr = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_var);
        tmp_expression_value_9 = var_var;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[71]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_15 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bytestr;
            var_bytestr = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_element_1;
        if (var_sta == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_10 = var_sta;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[73]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_namestr);
        tmp_list_element_1 = var_namestr;
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyList_SET_ITEM0(tmp_args_element_value_3, 0, tmp_list_element_1);
            CHECK_OBJECT(var_shapestr);
            tmp_list_element_1 = var_shapestr;
            PyList_SET_ITEM0(tmp_args_element_value_3, 1, tmp_list_element_1);
            CHECK_OBJECT(var_bytestr);
            tmp_list_element_1 = var_bytestr;
            PyList_SET_ITEM0(tmp_args_element_value_3, 2, tmp_list_element_1);
            CHECK_OBJECT(var_var);
            tmp_expression_value_12 = var_var;
            tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[54]);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[74]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "oooooooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_3, 3, tmp_list_element_1);
            CHECK_OBJECT(var_original);
            tmp_list_element_1 = var_original;
            PyList_SET_ITEM0(tmp_args_element_value_3, 4, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        goto try_except_handler_2;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_frame.f_lineno = 346;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 333;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[1];
        assert(var_maxname == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_maxname = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[1];
        assert(var_maxshape == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_maxshape = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[1];
        assert(var_maxbyte == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_maxbyte = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[1];
        assert(var_totalbytes == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_totalbytes = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_2;
        if (var_sta == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_2 = var_sta;
        tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_20;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_21 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 353;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_22 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_22;
            Py_INCREF(var_val);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_4;
        if (var_maxname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_3 = var_maxname;
        CHECK_OBJECT(var_val);
        tmp_expression_value_13 = var_val;
        tmp_subscript_value_4 = mod_consts[1];
        tmp_len_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_4, 0);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_3 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_val);
        tmp_expression_value_14 = var_val;
        tmp_subscript_value_5 = mod_consts[1];
        tmp_len_arg_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_5, 0);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_23 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_maxname;
            var_maxname = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_6;
        if (var_maxshape == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_4 = var_maxshape;
        CHECK_OBJECT(var_val);
        tmp_expression_value_15 = var_val;
        tmp_subscript_value_6 = mod_consts[59];
        tmp_len_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_6, 1);
        if (tmp_len_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_4 = BUILTIN_LEN(tmp_len_arg_3);
        Py_DECREF(tmp_len_arg_3);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_val);
        tmp_expression_value_16 = var_val;
        tmp_subscript_value_7 = mod_consts[59];
        tmp_len_arg_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_7, 1);
        if (tmp_len_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_24 = BUILTIN_LEN(tmp_len_arg_4);
        Py_DECREF(tmp_len_arg_4);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_maxshape;
            var_maxshape = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_len_arg_5;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_8;
        if (var_maxbyte == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_5 = var_maxbyte;
        CHECK_OBJECT(var_val);
        tmp_expression_value_17 = var_val;
        tmp_subscript_value_8 = mod_consts[78];
        tmp_len_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_8, 2);
        if (tmp_len_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_5 = BUILTIN_LEN(tmp_len_arg_5);
        Py_DECREF(tmp_len_arg_5);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_6 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_len_arg_6;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_val);
        tmp_expression_value_18 = var_val;
        tmp_subscript_value_9 = mod_consts[78];
        tmp_len_arg_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_9, 2);
        if (tmp_len_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_25 = BUILTIN_LEN(tmp_len_arg_6);
        Py_DECREF(tmp_len_arg_6);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_maxbyte;
            var_maxbyte = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_val);
        tmp_expression_value_19 = var_val;
        tmp_subscript_value_10 = mod_consts[79];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_19, tmp_subscript_value_10, 4);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 360;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_11;
        if (var_totalbytes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 361;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_iadd_expr_left_1 = var_totalbytes;
        CHECK_OBJECT(var_val);
        tmp_expression_value_20 = var_val;
        tmp_subscript_value_11 = mod_consts[78];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_20, tmp_subscript_value_11, 2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_iadd_expr_right_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_26 = tmp_iadd_expr_left_1;
        var_totalbytes = tmp_assign_source_26;

    }
    branch_no_7:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 353;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_6;
        nuitka_digit tmp_cmp_expr_right_6;
        PyObject *tmp_len_arg_7;
        if (var_sta == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_7 = var_sta;
        tmp_cmp_expr_left_6 = BUILTIN_LEN(tmp_len_arg_7);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = 0;
        tmp_condition_result_8 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[81]);
        assert(tmp_called_value_5 != NULL);
        tmp_args_element_value_4 = mod_consts[82];
        if (var_maxname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_maxname;
        frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sp1 == NULL);
        var_sp1 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[81]);
        assert(tmp_called_value_6 != NULL);
        tmp_args_element_value_6 = mod_consts[82];
        if (var_maxshape == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = var_maxshape;
        frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_frame.f_lineno = 365;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sp2 == NULL);
        var_sp2 = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts[81]);
        assert(tmp_called_value_7 != NULL);
        tmp_args_element_value_8 = mod_consts[82];
        if (var_maxbyte == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_maxbyte;
        frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sp3 == NULL);
        var_sp3 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mod_expr_left_2 = mod_consts[83];
        CHECK_OBJECT(var_sp1);
        tmp_mult_expr_left_1 = var_sp1;
        tmp_mult_expr_right_1 = mod_consts[28];
        tmp_tuple_element_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_UNICODE(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_mult_expr_left_2;
            PyObject *tmp_mult_expr_right_2;
            PyObject *tmp_mult_expr_left_3;
            PyObject *tmp_mult_expr_right_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_sp2);
            tmp_mult_expr_left_2 = var_sp2;
            tmp_mult_expr_right_2 = mod_consts[28];
            tmp_tuple_element_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_UNICODE(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_sp3);
            tmp_mult_expr_left_3 = var_sp3;
            tmp_mult_expr_right_3 = mod_consts[28];
            tmp_tuple_element_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_UNICODE(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_30 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prval == NULL);
        var_prval = tmp_assign_source_30;
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        nuitka_digit tmp_add_expr_right_5;
        PyObject *tmp_len_arg_8;
        tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_8 != NULL);
        CHECK_OBJECT(var_prval);
        tmp_add_expr_left_4 = var_prval;
        tmp_add_expr_right_4 = mod_consts[16];
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        assert(!(tmp_add_expr_left_3 == NULL));
        tmp_mult_expr_left_4 = mod_consts[85];
        CHECK_OBJECT(var_prval);
        tmp_len_arg_8 = var_prval;
        tmp_add_expr_left_5 = BUILTIN_LEN(tmp_len_arg_8);
        assert(!(tmp_add_expr_left_5 == NULL));
        tmp_add_expr_right_5 = 5;
        tmp_mult_expr_right_4 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        assert(!(tmp_mult_expr_right_4 == NULL));
        tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_UNICODE_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_right_4);
        assert(!(tmp_add_expr_right_3 == NULL));
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        assert(!(tmp_add_expr_left_2 == NULL));
        tmp_add_expr_right_2 = mod_consts[16];
        tmp_args_element_value_10 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        assert(!(tmp_args_element_value_10 == NULL));
        frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_frame.f_lineno = 368;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_3;
        if (var_sta == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_3 = var_sta;
        tmp_assign_source_31 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_31;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_32 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 370;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_33 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_33;
            Py_INCREF(var_val);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_12;
        tmp_called_value_9 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_9 != NULL);
        tmp_mod_expr_left_3 = mod_consts[86];
        CHECK_OBJECT(var_val);
        tmp_expression_value_21 = var_val;
        tmp_subscript_value_12 = mod_consts[1];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_12, 0);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_mult_expr_left_5;
            PyObject *tmp_mult_expr_right_5;
            PyObject *tmp_add_expr_left_6;
            PyObject *tmp_add_expr_right_6;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_len_arg_9;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_mult_expr_left_6;
            PyObject *tmp_mult_expr_right_6;
            PyObject *tmp_add_expr_left_7;
            PyObject *tmp_add_expr_right_7;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_len_arg_10;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_mult_expr_left_7;
            PyObject *tmp_mult_expr_right_7;
            PyObject *tmp_add_expr_left_8;
            PyObject *tmp_add_expr_right_8;
            PyObject *tmp_sub_expr_left_3;
            PyObject *tmp_sub_expr_right_3;
            PyObject *tmp_len_arg_11;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_2);
            tmp_mult_expr_left_5 = mod_consts[28];
            if (var_sp1 == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 371;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_sub_expr_left_1 = var_sp1;
            CHECK_OBJECT(var_val);
            tmp_expression_value_22 = var_val;
            tmp_subscript_value_13 = mod_consts[1];
            tmp_len_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_22, tmp_subscript_value_13, 0);
            if (tmp_len_arg_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_sub_expr_right_1 = BUILTIN_LEN(tmp_len_arg_9);
            Py_DECREF(tmp_len_arg_9);
            if (tmp_sub_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_add_expr_left_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_right_1);
            if (tmp_add_expr_left_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_add_expr_right_6 = mod_consts[79];
            tmp_mult_expr_right_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
            Py_DECREF(tmp_add_expr_left_6);
            if (tmp_mult_expr_right_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
            Py_DECREF(tmp_mult_expr_right_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_2);
            CHECK_OBJECT(var_val);
            tmp_expression_value_23 = var_val;
            tmp_subscript_value_14 = mod_consts[59];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_23, tmp_subscript_value_14, 1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 2, tmp_tuple_element_2);
            tmp_mult_expr_left_6 = mod_consts[28];
            if (var_sp2 == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 372;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_sub_expr_left_2 = var_sp2;
            CHECK_OBJECT(var_val);
            tmp_expression_value_24 = var_val;
            tmp_subscript_value_15 = mod_consts[59];
            tmp_len_arg_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_24, tmp_subscript_value_15, 1);
            if (tmp_len_arg_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_sub_expr_right_2 = BUILTIN_LEN(tmp_len_arg_10);
            Py_DECREF(tmp_len_arg_10);
            if (tmp_sub_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_add_expr_left_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            Py_DECREF(tmp_sub_expr_right_2);
            if (tmp_add_expr_left_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_add_expr_right_7 = mod_consts[89];
            tmp_mult_expr_right_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_7, tmp_add_expr_right_7);
            Py_DECREF(tmp_add_expr_left_7);
            if (tmp_mult_expr_right_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
            Py_DECREF(tmp_mult_expr_right_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 3, tmp_tuple_element_2);
            CHECK_OBJECT(var_val);
            tmp_expression_value_25 = var_val;
            tmp_subscript_value_16 = mod_consts[78];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_25, tmp_subscript_value_16, 2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 4, tmp_tuple_element_2);
            tmp_mult_expr_left_7 = mod_consts[28];
            if (var_sp3 == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 373;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_sub_expr_left_3 = var_sp3;
            CHECK_OBJECT(var_val);
            tmp_expression_value_26 = var_val;
            tmp_subscript_value_17 = mod_consts[78];
            tmp_len_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_26, tmp_subscript_value_17, 2);
            if (tmp_len_arg_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_sub_expr_right_3 = BUILTIN_LEN(tmp_len_arg_11);
            Py_DECREF(tmp_len_arg_11);
            if (tmp_sub_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_add_expr_left_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
            Py_DECREF(tmp_sub_expr_right_3);
            if (tmp_add_expr_left_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_add_expr_right_8 = mod_consts[89];
            tmp_mult_expr_right_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_8, tmp_add_expr_right_8);
            Py_DECREF(tmp_add_expr_left_8);
            if (tmp_mult_expr_right_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
            Py_DECREF(tmp_mult_expr_right_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 5, tmp_tuple_element_2);
            CHECK_OBJECT(var_val);
            tmp_expression_value_27 = var_val;
            tmp_subscript_value_18 = mod_consts[91];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_27, tmp_subscript_value_18, 3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 6, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_frame.f_lineno = 371;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 370;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        tmp_called_value_10 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_10 != NULL);
        tmp_mod_expr_left_4 = mod_consts[92];
        if (var_totalbytes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_4 = var_totalbytes;
        tmp_args_element_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_frame.f_lineno = 375;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c34ce0985d8a7ae3d6a533ec88dab24c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c34ce0985d8a7ae3d6a533ec88dab24c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c34ce0985d8a7ae3d6a533ec88dab24c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c34ce0985d8a7ae3d6a533ec88dab24c,
        type_description_1,
        par_vardict,
        var_frame,
        var_sta,
        var_cache,
        var_name,
        var_var,
        var_idv,
        var_namestr,
        var_original,
        var_shapestr,
        var_bytestr,
        var_maxname,
        var_maxshape,
        var_maxbyte,
        var_totalbytes,
        var_val,
        var_sp1,
        var_sp2,
        var_sp3,
        var_prval
    );


    // Release cached frame if used for exception.
    if (frame_c34ce0985d8a7ae3d6a533ec88dab24c == cache_frame_c34ce0985d8a7ae3d6a533ec88dab24c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c34ce0985d8a7ae3d6a533ec88dab24c);
        cache_frame_c34ce0985d8a7ae3d6a533ec88dab24c = NULL;
    }

    assertFrameObject(frame_c34ce0985d8a7ae3d6a533ec88dab24c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_vardict);
    Py_DECREF(par_vardict);
    par_vardict = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_sta);
    var_sta = NULL;
    Py_XDECREF(var_cache);
    var_cache = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_var);
    var_var = NULL;
    Py_XDECREF(var_idv);
    var_idv = NULL;
    Py_XDECREF(var_namestr);
    var_namestr = NULL;
    Py_XDECREF(var_original);
    var_original = NULL;
    Py_XDECREF(var_shapestr);
    var_shapestr = NULL;
    Py_XDECREF(var_bytestr);
    var_bytestr = NULL;
    Py_XDECREF(var_maxname);
    var_maxname = NULL;
    Py_XDECREF(var_maxshape);
    var_maxshape = NULL;
    Py_XDECREF(var_maxbyte);
    var_maxbyte = NULL;
    Py_XDECREF(var_totalbytes);
    var_totalbytes = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_sp1);
    var_sp1 = NULL;
    Py_XDECREF(var_sp2);
    var_sp2 = NULL;
    Py_XDECREF(var_sp3);
    var_sp3 = NULL;
    Py_XDECREF(var_prval);
    var_prval = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_vardict);
    par_vardict = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_sta);
    var_sta = NULL;
    Py_XDECREF(var_cache);
    var_cache = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_var);
    var_var = NULL;
    Py_XDECREF(var_idv);
    var_idv = NULL;
    Py_XDECREF(var_namestr);
    var_namestr = NULL;
    Py_XDECREF(var_original);
    var_original = NULL;
    Py_XDECREF(var_shapestr);
    var_shapestr = NULL;
    Py_XDECREF(var_bytestr);
    var_bytestr = NULL;
    Py_XDECREF(var_maxname);
    var_maxname = NULL;
    Py_XDECREF(var_maxshape);
    var_maxshape = NULL;
    Py_XDECREF(var_maxbyte);
    var_maxbyte = NULL;
    Py_XDECREF(var_totalbytes);
    var_totalbytes = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_sp1);
    var_sp1 = NULL;
    Py_XDECREF(var_sp2);
    var_sp2 = NULL;
    Py_XDECREF(var_sp3);
    var_sp3 = NULL;
    Py_XDECREF(var_prval);
    var_prval = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_numpy$lib$utils$$$function__10__split_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_arguments = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *var_firstwidth = NULL;
    PyObject *var_k = NULL;
    PyObject *var_newstr = NULL;
    PyObject *var_sepstr = NULL;
    PyObject *var_arglist = NULL;
    PyObject *var_argument = NULL;
    PyObject *var_addstr = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5)) {
        Py_XDECREF(cache_frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5 = MAKE_FUNCTION_FRAME(codeobj_ff067e0a7ec6eed8bb4bc60e2c8d6aa5, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5->m_type_description == NULL);
    frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5 = cache_frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5);
    assert(Py_REFCNT(frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_name);
        tmp_len_arg_1 = par_name;
        tmp_assign_source_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_firstwidth == NULL);
        var_firstwidth = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(var_firstwidth);
        tmp_assign_source_2 = var_firstwidth;
        assert(var_k == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_k = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(par_name);
        tmp_assign_source_3 = par_name;
        assert(var_newstr == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_newstr = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[94];
        assert(var_sepstr == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_sepstr = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_arguments);
        tmp_expression_value_1 = par_arguments;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sepstr);
        tmp_args_element_value_1 = var_sepstr;
        frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5->m_frame.f_lineno = 392;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arglist == NULL);
        var_arglist = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_arglist);
        tmp_iter_arg_1 = var_arglist;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
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
                type_description_1 = "oooooooooo";
                exception_lineno = 393;
                goto try_except_handler_2;
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
            PyObject *old = var_argument;
            var_argument = tmp_assign_source_8;
            Py_INCREF(var_argument);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_k == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = var_k;
        if (var_firstwidth == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = var_firstwidth;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[97];
        {
            PyObject *old = var_addstr;
            var_addstr = tmp_assign_source_9;
            Py_INCREF(var_addstr);
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        if (var_sepstr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 397;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_10 = var_sepstr;
        {
            PyObject *old = var_addstr;
            var_addstr = tmp_assign_source_10;
            Py_INCREF(var_addstr);
            Py_XDECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_len_arg_3;
        if (var_k == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_2 = var_k;
        CHECK_OBJECT(var_argument);
        tmp_len_arg_2 = var_argument;
        tmp_add_expr_right_2 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_addstr);
        tmp_len_arg_3 = var_addstr;
        tmp_add_expr_right_1 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 398;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_k);
        tmp_cmp_expr_left_2 = var_k;
        CHECK_OBJECT(par_width);
        tmp_cmp_expr_right_2 = par_width;
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_len_arg_4;
        if (var_firstwidth == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_4 = var_firstwidth;
        tmp_add_expr_right_4 = mod_consts[59];
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_argument);
        tmp_len_arg_4 = var_argument;
        tmp_add_expr_right_3 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 400;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_k;
            assert(old != NULL);
            var_k = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        if (var_newstr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_7 = var_newstr;
        tmp_add_expr_right_7 = mod_consts[100];
        tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_add_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_left_1 = mod_consts[28];
        if (var_firstwidth == NULL) {
            Py_DECREF(tmp_add_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_8 = var_firstwidth;
        tmp_add_expr_right_8 = mod_consts[78];
        tmp_mult_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_6 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_add_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_add_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_argument);
        tmp_add_expr_right_5 = var_argument;
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_newstr;
            var_newstr = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        if (var_newstr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_10 = var_newstr;
        CHECK_OBJECT(var_addstr);
        tmp_add_expr_right_10 = var_addstr;
        tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_add_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_argument);
        tmp_add_expr_right_9 = var_argument;
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_newstr;
            var_newstr = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 393;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_newstr == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 404;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_newstr;
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
        exception_tb = MAKE_TRACEBACK(frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5,
        type_description_1,
        par_name,
        par_arguments,
        par_width,
        var_firstwidth,
        var_k,
        var_newstr,
        var_sepstr,
        var_arglist,
        var_argument,
        var_addstr
    );


    // Release cached frame if used for exception.
    if (frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5 == cache_frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5);
        cache_frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5 = NULL;
    }

    assertFrameObject(frame_ff067e0a7ec6eed8bb4bc60e2c8d6aa5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_firstwidth);
    var_firstwidth = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_newstr);
    var_newstr = NULL;
    Py_XDECREF(var_sepstr);
    var_sepstr = NULL;
    CHECK_OBJECT(var_arglist);
    Py_DECREF(var_arglist);
    var_arglist = NULL;
    Py_XDECREF(var_argument);
    var_argument = NULL;
    Py_XDECREF(var_addstr);
    var_addstr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_firstwidth);
    var_firstwidth = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_newstr);
    var_newstr = NULL;
    Py_XDECREF(var_sepstr);
    var_sepstr = NULL;
    Py_XDECREF(var_arglist);
    var_arglist = NULL;
    Py_XDECREF(var_argument);
    var_argument = NULL;
    Py_XDECREF(var_addstr);
    var_addstr = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_arguments);
    Py_DECREF(par_arguments);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_arguments);
    Py_DECREF(par_arguments);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__11__makenamedict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_module = python_pars[0];
    PyObject *var_thedict = NULL;
    PyObject *var_dictlist = NULL;
    PyObject *var_totraverse = NULL;
    PyObject *var_thisdict = NULL;
    PyObject *var_x = NULL;
    PyObject *var_modname = NULL;
    PyObject *var_moddict = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_966e628c568f91f6939a903c49958ec7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *locals_numpy$lib$utils$$$function__11__makenamedict = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_966e628c568f91f6939a903c49958ec7 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_966e628c568f91f6939a903c49958ec7)) {
        Py_XDECREF(cache_frame_966e628c568f91f6939a903c49958ec7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_966e628c568f91f6939a903c49958ec7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_966e628c568f91f6939a903c49958ec7 = MAKE_FUNCTION_FRAME(codeobj_966e628c568f91f6939a903c49958ec7, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_966e628c568f91f6939a903c49958ec7->m_type_description == NULL);
    frame_966e628c568f91f6939a903c49958ec7 = cache_frame_966e628c568f91f6939a903c49958ec7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_966e628c568f91f6939a903c49958ec7);
    assert(Py_REFCNT(frame_966e628c568f91f6939a903c49958ec7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        CHECK_OBJECT(par_module);
        tmp_name_value_1 = par_module;
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$utils;
        if (locals_numpy$lib$utils$$$function__11__makenamedict == NULL) locals_numpy$lib$utils$$$function__11__makenamedict = MAKE_DICT_EMPTY();
        tmp_locals_arg_value_1 = locals_numpy$lib$utils$$$function__11__makenamedict;
        Py_INCREF(tmp_locals_arg_value_1);
        if (par_module != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_module);
            value = par_module;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_locals_arg_value_1, (Nuitka_StringObject *)mod_consts[101], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_locals_arg_value_1, mod_consts[101]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        tmp_fromlist_value_1 = MAKE_LIST_EMPTY(0);
        frame_966e628c568f91f6939a903c49958ec7->m_frame.f_lineno = 412;
        tmp_assign_source_1 = IMPORT_MODULE4(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1);
        Py_DECREF(tmp_locals_arg_value_1);
        Py_DECREF(tmp_fromlist_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_module;
            assert(old != NULL);
            par_module = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_module);
        tmp_expression_value_1 = par_module;
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_module);
        tmp_expression_value_2 = par_module;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_2);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 413;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        Py_DECREF(tmp_dict_key_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooooooo";
            goto dict_build_exception_1;
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_thedict == NULL);
        var_thedict = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_module);
        tmp_expression_value_3 = par_module;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
        assert(var_dictlist == NULL);
        var_dictlist = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_list_element_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_module);
        tmp_expression_value_4 = par_module;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_4);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_4, 0, tmp_list_element_2);
        assert(var_totraverse == NULL);
        var_totraverse = tmp_assign_source_4;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        if (var_totraverse == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = var_totraverse;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        if (var_totraverse == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = var_totraverse;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[103]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_966e628c568f91f6939a903c49958ec7->m_frame.f_lineno = 419;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[104]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_thisdict;
            var_thisdict = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_thisdict);
        tmp_expression_value_6 = var_thisdict;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[66]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_966e628c568f91f6939a903c49958ec7->m_frame.f_lineno = 420;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 420;
                goto try_except_handler_2;
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
            PyObject *old = var_x;
            var_x = tmp_assign_source_8;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_thisdict);
        tmp_expression_value_7 = var_thisdict;
        CHECK_OBJECT(var_x);
        tmp_subscript_value_1 = var_x;
        tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_1);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 421;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[106]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 421;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_thisdict);
        tmp_expression_value_10 = var_thisdict;
        CHECK_OBJECT(var_x);
        tmp_subscript_value_2 = var_x;
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_2);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_modname;
            var_modname = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_modname);
        tmp_cmp_expr_left_2 = var_modname;
        if (var_dictlist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_2 = var_dictlist;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_thisdict);
        tmp_expression_value_12 = var_thisdict;
        CHECK_OBJECT(var_x);
        tmp_subscript_value_3 = var_x;
        tmp_expression_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_3);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_11);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_moddict;
            var_moddict = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (var_dictlist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_13 = var_dictlist;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[73]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_modname);
        tmp_args_element_value_1 = var_modname;
        frame_966e628c568f91f6939a903c49958ec7->m_frame.f_lineno = 425;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        if (var_totraverse == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_14 = var_totraverse;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[73]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_moddict);
        tmp_args_element_value_2 = var_moddict;
        frame_966e628c568f91f6939a903c49958ec7->m_frame.f_lineno = 426;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_moddict);
        tmp_ass_subvalue_1 = var_moddict;
        if (var_thedict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_thedict;
        CHECK_OBJECT(var_modname);
        tmp_ass_subscript_1 = var_modname;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_3:;
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 420;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 416;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_tuple_element_1;
        if (var_thedict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 428;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_thedict;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_dictlist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 428;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_dictlist;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_966e628c568f91f6939a903c49958ec7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_966e628c568f91f6939a903c49958ec7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_966e628c568f91f6939a903c49958ec7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_966e628c568f91f6939a903c49958ec7,
        type_description_1,
        par_module,
        var_thedict,
        var_dictlist,
        var_totraverse,
        var_thisdict,
        var_x,
        var_modname,
        var_moddict
    );


    // Release cached frame if used for exception.
    if (frame_966e628c568f91f6939a903c49958ec7 == cache_frame_966e628c568f91f6939a903c49958ec7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_966e628c568f91f6939a903c49958ec7);
        cache_frame_966e628c568f91f6939a903c49958ec7 = NULL;
    }

    assertFrameObject(frame_966e628c568f91f6939a903c49958ec7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_module);
    Py_DECREF(par_module);
    par_module = NULL;
    Py_XDECREF(var_thedict);
    var_thedict = NULL;
    Py_XDECREF(var_dictlist);
    var_dictlist = NULL;
    Py_XDECREF(var_totraverse);
    var_totraverse = NULL;
    Py_XDECREF(var_thisdict);
    var_thisdict = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_modname);
    var_modname = NULL;
    Py_XDECREF(var_moddict);
    var_moddict = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_module);
    par_module = NULL;
    Py_XDECREF(var_thedict);
    var_thedict = NULL;
    Py_XDECREF(var_dictlist);
    var_dictlist = NULL;
    Py_XDECREF(var_totraverse);
    var_totraverse = NULL;
    Py_XDECREF(var_thisdict);
    var_thisdict = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_modname);
    var_modname = NULL;
    Py_XDECREF(var_moddict);
    var_moddict = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    Py_XDECREF(locals_numpy$lib$utils$$$function__11__makenamedict);

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_numpy$lib$utils$$$function__11__makenamedict);


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__12__info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *par_output = python_pars[1];
    PyObject *var_bp = NULL;
    PyObject *var_cls = NULL;
    PyObject *var_nm = NULL;
    PyObject *var_strides = NULL;
    PyObject *var_endian = NULL;
    PyObject *var_byteswap = NULL;
    struct Nuitka_FrameObject *frame_4d83f32de42d190e21d3b44cc266c121;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4d83f32de42d190e21d3b44cc266c121 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$utils$$$function__12__info$$$function__1_lambda();

        assert(var_bp == NULL);
        var_bp = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_4d83f32de42d190e21d3b44cc266c121)) {
        Py_XDECREF(cache_frame_4d83f32de42d190e21d3b44cc266c121);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d83f32de42d190e21d3b44cc266c121 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d83f32de42d190e21d3b44cc266c121 = MAKE_FUNCTION_FRAME(codeobj_4d83f32de42d190e21d3b44cc266c121, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d83f32de42d190e21d3b44cc266c121->m_type_description == NULL);
    frame_4d83f32de42d190e21d3b44cc266c121 = cache_frame_4d83f32de42d190e21d3b44cc266c121;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4d83f32de42d190e21d3b44cc266c121);
    assert(Py_REFCNT(frame_4d83f32de42d190e21d3b44cc266c121) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_obj);
        tmp_getattr_target_1 = par_obj;
        tmp_getattr_attr_1 = mod_consts[111];
        CHECK_OBJECT(par_obj);
        tmp_type_arg_1 = par_obj;
        tmp_getattr_default_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_getattr_default_1 == NULL));
        tmp_assign_source_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_default_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cls == NULL);
        var_cls = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        CHECK_OBJECT(var_cls);
        tmp_getattr_target_2 = var_cls;
        tmp_getattr_attr_2 = mod_consts[10];
        CHECK_OBJECT(var_cls);
        tmp_getattr_default_2 = var_cls;
        tmp_assign_source_3 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nm == NULL);
        var_nm = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_1 = par_obj;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[51]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_strides == NULL);
        var_strides = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_3 = par_obj;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[54]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[112]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_endian == NULL);
        var_endian = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_output);
        tmp_cmp_expr_left_1 = par_output;
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
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_assign_source_6 == NULL));
        {
            PyObject *old = par_output;
            assert(old != NULL);
            par_output = tmp_assign_source_6;
            Py_INCREF(par_output);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_1 != NULL);
        tmp_kw_call_arg_value_0_1 = mod_consts[113];
        CHECK_OBJECT(var_nm);
        tmp_kw_call_arg_value_1_1 = var_nm;
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_1 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 460;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[114]);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_2 != NULL);
        tmp_kw_call_arg_value_0_2 = mod_consts[115];
        CHECK_OBJECT(par_obj);
        tmp_expression_value_4 = par_obj;
        tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[52]);
        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_2 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 461;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_3 != NULL);
        tmp_kw_call_arg_value_0_3 = mod_consts[116];
        CHECK_OBJECT(var_strides);
        tmp_kw_call_arg_value_1_3 = var_strides;
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_3 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 462;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[114]);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_dict_value_0_4;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_4 != NULL);
        tmp_kw_call_arg_value_0_4 = mod_consts[117];
        CHECK_OBJECT(par_obj);
        tmp_expression_value_5 = par_obj;
        tmp_kw_call_arg_value_1_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[55]);
        if (tmp_kw_call_arg_value_1_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_4 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 463;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_dict_value_0_5;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_5 != NULL);
        tmp_kw_call_arg_value_0_5 = mod_consts[118];
        CHECK_OBJECT(var_bp);
        tmp_called_value_6 = var_bp;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_7 = par_obj;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[119]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[120]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 464;
        tmp_kw_call_arg_value_1_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_kw_call_arg_value_1_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_5 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 464;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_arg_value_1_6;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_dict_value_0_6;
        tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_7 != NULL);
        tmp_kw_call_arg_value_0_6 = mod_consts[121];
        CHECK_OBJECT(var_bp);
        tmp_called_value_8 = var_bp;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_9 = par_obj;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[119]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[122]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 465;
        tmp_kw_call_arg_value_1_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_arg_value_1_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_6 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 465;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_arg_value_1_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_dict_value_0_7;
        tmp_called_value_9 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_9 != NULL);
        tmp_kw_call_arg_value_0_7 = mod_consts[123];
        CHECK_OBJECT(par_obj);
        tmp_expression_value_11 = par_obj;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[119]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[124]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_kw_call_arg_value_1_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_7 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 466;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_9, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_hex_arg_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_dict_value_0_8;
        tmp_called_value_10 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_10 != NULL);
        tmp_mod_expr_left_1 = mod_consts[125];
        CHECK_OBJECT(par_obj);
        tmp_expression_value_14 = par_obj;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[126]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[127]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_hex_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[128]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_hex_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BUILTIN_HEX(tmp_hex_arg_1);
        Py_DECREF(tmp_hex_arg_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[97];
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_kw_call_arg_value_0_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_8 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 467;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_8};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_10, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_8);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_11 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_11 != NULL);
        tmp_kw_call_value_0_1 = mod_consts[28];
        CHECK_OBJECT(par_output);
        tmp_kw_call_value_1_1 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 471;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
            tmp_call_result_9 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_11, mod_consts[129], kw_values, mod_consts[130]);
        }

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_endian);
        tmp_cmp_expr_left_2 = var_endian;
        tmp_cmp_expr_right_2 = MAKE_LIST2(mod_consts[131],mod_consts[85]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_call_dict_value_0_9;
        tmp_called_value_12 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_12 != NULL);
        tmp_mod_expr_left_2 = mod_consts[132];
        tmp_tuple_element_2 = mod_consts[97];
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_15;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[112]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_1 = "ooNNoooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[97];
            PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_kw_call_arg_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_9 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 473;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_9};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_12, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_9);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_False;
        assert(var_byteswap == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_byteswap = tmp_assign_source_7;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_endian);
        tmp_cmp_expr_left_3 = var_endian;
        tmp_cmp_expr_right_3 = mod_consts[133];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_11;
        PyObject *tmp_kw_call_value_0_2;
        tmp_called_value_13 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_13 != NULL);
        CHECK_OBJECT(par_output);
        tmp_kw_call_value_0_2 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 476;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_call_result_11 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_13, mod_consts[134], kw_values, mod_consts[114]);
        }

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[112]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[135];
        tmp_assign_source_8 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_byteswap == NULL);
        var_byteswap = tmp_assign_source_8;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_12;
        PyObject *tmp_kw_call_value_0_3;
        tmp_called_value_14 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_14 != NULL);
        CHECK_OBJECT(par_output);
        tmp_kw_call_value_0_3 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 479;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_call_result_12 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_14, mod_consts[136], kw_values, mod_consts[114]);
        }

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[112]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[137];
        tmp_assign_source_9 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_byteswap == NULL);
        var_byteswap = tmp_assign_source_9;
    }
    branch_end_3:;
    branch_end_2:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_13;
        PyObject *tmp_kw_call_arg_value_0_10;
        PyObject *tmp_kw_call_arg_value_1_8;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kw_call_dict_value_0_10;
        tmp_called_value_15 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_15 != NULL);
        tmp_kw_call_arg_value_0_10 = mod_consts[138];
        CHECK_OBJECT(var_bp);
        tmp_called_value_16 = var_bp;
        CHECK_OBJECT(var_byteswap);
        tmp_args_element_value_3 = var_byteswap;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 481;
        tmp_kw_call_arg_value_1_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_3);
        if (tmp_kw_call_arg_value_1_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_10 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 481;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_10, tmp_kw_call_arg_value_1_8};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_10};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_15, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_8);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_14;
        PyObject *tmp_kw_call_arg_value_0_11;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_dict_value_0_11;
        tmp_called_value_17 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_17 != NULL);
        tmp_mod_expr_left_3 = mod_consts[139];
        CHECK_OBJECT(par_obj);
        tmp_expression_value_18 = par_obj;
        tmp_mod_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[54]);
        if (tmp_mod_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_kw_call_arg_value_0_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_11 = par_output;
        frame_4d83f32de42d190e21d3b44cc266c121->m_frame.f_lineno = 482;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_11};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_11};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_17, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_11);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooNNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d83f32de42d190e21d3b44cc266c121, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d83f32de42d190e21d3b44cc266c121->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d83f32de42d190e21d3b44cc266c121, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d83f32de42d190e21d3b44cc266c121,
        type_description_1,
        par_obj,
        par_output,
        NULL,
        NULL,
        var_bp,
        var_cls,
        var_nm,
        var_strides,
        var_endian,
        var_byteswap
    );


    // Release cached frame if used for exception.
    if (frame_4d83f32de42d190e21d3b44cc266c121 == cache_frame_4d83f32de42d190e21d3b44cc266c121) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d83f32de42d190e21d3b44cc266c121);
        cache_frame_4d83f32de42d190e21d3b44cc266c121 = NULL;
    }

    assertFrameObject(frame_4d83f32de42d190e21d3b44cc266c121);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);
    par_output = NULL;
    CHECK_OBJECT(var_bp);
    Py_DECREF(var_bp);
    var_bp = NULL;
    CHECK_OBJECT(var_cls);
    Py_DECREF(var_cls);
    var_cls = NULL;
    CHECK_OBJECT(var_nm);
    Py_DECREF(var_nm);
    var_nm = NULL;
    CHECK_OBJECT(var_strides);
    Py_DECREF(var_strides);
    var_strides = NULL;
    CHECK_OBJECT(var_endian);
    Py_DECREF(var_endian);
    var_endian = NULL;
    CHECK_OBJECT(var_byteswap);
    Py_DECREF(var_byteswap);
    var_byteswap = NULL;
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

    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);
    par_output = NULL;
    CHECK_OBJECT(var_bp);
    Py_DECREF(var_bp);
    var_bp = NULL;
    Py_XDECREF(var_cls);
    var_cls = NULL;
    Py_XDECREF(var_nm);
    var_nm = NULL;
    Py_XDECREF(var_strides);
    var_strides = NULL;
    Py_XDECREF(var_endian);
    var_endian = NULL;
    Py_XDECREF(var_byteswap);
    var_byteswap = NULL;
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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__12__info$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__13_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_object = python_pars[0];
    PyObject *par_maxwidth = python_pars[1];
    PyObject *par_output = python_pars[2];
    PyObject *par_toplevel = python_pars[3];
    PyObject *var_inspect = NULL;
    PyObject *var_numfound = NULL;
    PyObject *var_objlist = NULL;
    PyObject *var_namestr = NULL;
    PyObject *var_obj = NULL;
    PyObject *var_name = NULL;
    PyObject *var_arguments = NULL;
    PyObject *var_argstr = NULL;
    PyObject *var_doc1 = NULL;
    PyObject *var_methods = NULL;
    PyObject *var_public_methods = NULL;
    PyObject *var_meth = NULL;
    PyObject *var_thisobj = NULL;
    PyObject *var_methstr = NULL;
    PyObject *var_other = NULL;
    PyObject *outline_0_var_meth = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d9608459b9c1cd333f53fd62a16f955b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
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
    struct Nuitka_FrameObject *frame_7996b427dc04e0ec84d53eb9b06aeaaa_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_7996b427dc04e0ec84d53eb9b06aeaaa_2 = NULL;
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
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    static struct Nuitka_FrameObject *cache_frame_d9608459b9c1cd333f53fd62a16f955b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d9608459b9c1cd333f53fd62a16f955b)) {
        Py_XDECREF(cache_frame_d9608459b9c1cd333f53fd62a16f955b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9608459b9c1cd333f53fd62a16f955b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9608459b9c1cd333f53fd62a16f955b = MAKE_FUNCTION_FRAME(codeobj_d9608459b9c1cd333f53fd62a16f955b, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d9608459b9c1cd333f53fd62a16f955b->m_type_description == NULL);
    frame_d9608459b9c1cd333f53fd62a16f955b = cache_frame_d9608459b9c1cd333f53fd62a16f955b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d9608459b9c1cd333f53fd62a16f955b);
    assert(Py_REFCNT(frame_d9608459b9c1cd333f53fd62a16f955b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[141];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 539;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inspect == NULL);
        var_inspect = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_2;
        CHECK_OBJECT(par_object);
        tmp_expression_value_1 = par_object;
        tmp_attribute_value_1 = mod_consts[142];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_object);
        tmp_expression_value_2 = par_object;
        tmp_attribute_value_2 = mod_consts[143];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_object);
        tmp_expression_value_3 = par_object;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[143]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_object;
            assert(old != NULL);
            par_object = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_3;
        CHECK_OBJECT(par_object);
        tmp_expression_value_4 = par_object;
        tmp_attribute_value_3 = mod_consts[144];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_4, tmp_attribute_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "ooooooooooooooooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_object);
        tmp_expression_value_5 = par_object;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[144]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_object;
            assert(old != NULL);
            par_object = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_end_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_output);
        tmp_cmp_expr_left_1 = par_output;
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
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_assign_source_4 == NULL));
        {
            PyObject *old = par_output;
            assert(old != NULL);
            par_output = tmp_assign_source_4;
            Py_INCREF(par_output);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_object);
        tmp_cmp_expr_left_2 = par_object;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 551;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_object);
        tmp_isinstance_inst_1 = par_object;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_object);
        tmp_kw_call_arg_value_0_1 = par_object;
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_1 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 553;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[147]);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_object);
        tmp_isinstance_inst_2 = par_object;
        tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_cmp_expr_left_3 == NULL)) {
            tmp_cmp_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_toplevel);
        tmp_args_element_value_2 = par_toplevel;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 556;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 556;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 556;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 556;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[57];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 556;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_8);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_9);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    branch_no_7:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[1];
        assert(var_numfound == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_numfound = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_LIST_EMPTY(0);
        assert(var_objlist == NULL);
        var_objlist = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_iter_arg_2 == NULL)) {
            tmp_iter_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 559;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_14 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_namestr;
            var_namestr = tmp_assign_source_14;
            Py_INCREF(var_namestr);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_namestr);
        tmp_subscript_value_1 = var_namestr;
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_1);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_object);
        tmp_subscript_value_2 = par_object;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_obj;
            var_obj = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT(var_obj);
        tmp_id_arg_1 = var_obj;
        tmp_cmp_expr_left_4 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_cmp_expr_left_4 == NULL));
        if (var_objlist == NULL) {
            Py_DECREF(tmp_cmp_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 562;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_cmp_expr_right_4 = var_objlist;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_8 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_4 != NULL);
        tmp_mod_expr_left_1 = mod_consts[152];
        CHECK_OBJECT(var_namestr);
        tmp_mod_expr_right_1 = var_namestr;
        tmp_kw_call_arg_value_0_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_2 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 563;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_id_arg_2;
        if (var_objlist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 568;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_8 = var_objlist;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[73]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_obj);
        tmp_id_arg_2 = var_obj;
        tmp_args_element_value_3 = PyLong_FromVoidPtr(tmp_id_arg_2);
        assert(!(tmp_args_element_value_3 == NULL));
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 568;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_kw_call_dict_value_0_3;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_6 != NULL);
        tmp_mod_expr_left_2 = mod_consts[153];
        CHECK_OBJECT(var_namestr);
        tmp_mod_expr_right_2 = var_namestr;
        tmp_kw_call_arg_value_0_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_3 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 569;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_3);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_obj);
        tmp_args_element_value_4 = var_obj;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 570;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_kw_call_dict_value_0_4;
        tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_8 != NULL);
        tmp_mult_expr_left_1 = mod_consts[154];
        if (par_maxwidth == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[155]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_mult_expr_right_1 = par_maxwidth;
        tmp_kw_call_arg_value_0_4 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_kw_call_arg_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_4 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 571;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_4);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_numfound == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[156]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_iadd_expr_left_1 = var_numfound;
        tmp_iadd_expr_right_1 = mod_consts[59];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_16 = tmp_iadd_expr_left_1;
        var_numfound = tmp_assign_source_16;

    }
    goto try_end_3;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_d9608459b9c1cd333f53fd62a16f955b, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_d9608459b9c1cd333f53fd62a16f955b, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 560;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d9608459b9c1cd333f53fd62a16f955b->m_frame) frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_6;
    branch_no_9:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 559;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        if (var_numfound == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[156]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 575;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_6 = var_numfound;
        tmp_cmp_expr_right_6 = mod_consts[1];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_kw_call_dict_value_0_5;
        tmp_called_value_9 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_9 != NULL);
        tmp_mod_expr_left_3 = mod_consts[157];
        CHECK_OBJECT(par_object);
        tmp_mod_expr_right_3 = par_object;
        tmp_kw_call_arg_value_0_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_kw_call_arg_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_5 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 576;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_9, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_5);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_kw_call_dict_value_0_6;
        tmp_called_value_10 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_10 != NULL);
        tmp_mod_expr_left_4 = mod_consts[158];
        if (var_numfound == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[156]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 579;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_4 = var_numfound;
        tmp_kw_call_arg_value_0_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        if (tmp_kw_call_arg_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_6 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 578;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_10, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_6);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_end_10:;
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_5;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_6;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_inspect);
        tmp_called_instance_1 = var_inspect;
        CHECK_OBJECT(par_object);
        tmp_args_element_value_5 = par_object;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 583;
        tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[159], tmp_args_element_value_5);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_10);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_10);

            exception_lineno = 583;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_10);
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_inspect);
        tmp_called_instance_2 = var_inspect;
        CHECK_OBJECT(par_object);
        tmp_args_element_value_6 = par_object;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 583;
        tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[160], tmp_args_element_value_6);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_11);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_11);

            exception_lineno = 583;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_11);
        tmp_condition_result_11 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_11 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_object);
        tmp_expression_value_9 = par_object;
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_inspect);
        tmp_called_instance_3 = var_inspect;
        CHECK_OBJECT(par_object);
        tmp_args_element_value_7 = par_object;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 586;
        tmp_unicode_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[161], tmp_args_element_value_7);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_18 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(var_arguments == NULL);
        var_arguments = tmp_assign_source_18;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
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
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_d9608459b9c1cd333f53fd62a16f955b, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_d9608459b9c1cd333f53fd62a16f955b, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[162];
        assert(var_arguments == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_arguments = tmp_assign_source_19;
    }
    goto branch_end_12;
    branch_no_12:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 585;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d9608459b9c1cd333f53fd62a16f955b->m_frame) frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_8;
    branch_end_12:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_6;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_6:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_name);
        tmp_add_expr_left_1 = var_name;
        CHECK_OBJECT(var_arguments);
        tmp_add_expr_right_1 = var_arguments;
        tmp_len_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_8 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_maxwidth);
        tmp_cmp_expr_right_8 = par_maxwidth;
        tmp_condition_result_13 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_8 = var_name;
        CHECK_OBJECT(var_arguments);
        tmp_args_element_value_9 = var_arguments;
        CHECK_OBJECT(par_maxwidth);
        tmp_args_element_value_10 = par_maxwidth;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 591;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_11, call_args);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_argstr == NULL);
        var_argstr = tmp_assign_source_20;
    }
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(var_name);
        tmp_add_expr_left_2 = var_name;
        CHECK_OBJECT(var_arguments);
        tmp_add_expr_right_2 = var_arguments;
        tmp_assign_source_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_argstr == NULL);
        var_argstr = tmp_assign_source_21;
    }
    branch_end_13:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_12;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_kw_call_dict_value_0_7;
        tmp_called_value_12 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_12 != NULL);
        tmp_add_expr_left_4 = mod_consts[28];
        CHECK_OBJECT(var_argstr);
        tmp_add_expr_right_4 = var_argstr;
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[16];
        tmp_kw_call_arg_value_0_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_kw_call_arg_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_7 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 595;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_12, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_7);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_13;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_kw_call_dict_value_0_8;
        tmp_called_value_13 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_13 != NULL);
        CHECK_OBJECT(var_inspect);
        tmp_called_instance_4 = var_inspect;
        CHECK_OBJECT(par_object);
        tmp_args_element_value_11 = par_object;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 596;
        tmp_kw_call_arg_value_0_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[164], tmp_args_element_value_11);
        if (tmp_kw_call_arg_value_0_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_8 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 596;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_8};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_13, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_8);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_12;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_inspect);
        tmp_called_instance_5 = var_inspect;
        CHECK_OBJECT(par_object);
        tmp_args_element_value_12 = par_object;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 598;
        tmp_call_result_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[165], tmp_args_element_value_12);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_14);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_14);

            exception_lineno = 598;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_14);
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_object);
        tmp_expression_value_10 = par_object;
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[10]);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(var_inspect);
        tmp_called_instance_6 = var_inspect;
        CHECK_OBJECT(par_object);
        tmp_args_element_value_13 = par_object;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 601;
        tmp_unicode_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[161], tmp_args_element_value_13);
        if (tmp_unicode_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_23 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
        Py_DECREF(tmp_unicode_arg_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(var_arguments == NULL);
        var_arguments = tmp_assign_source_23;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
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
        exception_keeper_tb_8 = MAKE_TRACEBACK(frame_d9608459b9c1cd333f53fd62a16f955b, exception_keeper_lineno_8);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_keeper_tb_8 = ADD_TRACEBACK(exception_keeper_tb_8, frame_d9608459b9c1cd333f53fd62a16f955b, exception_keeper_lineno_8);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8);
    // Tried code:
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_9 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[162];
        assert(var_arguments == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_arguments = tmp_assign_source_24;
    }
    goto branch_end_15;
    branch_no_15:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 600;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d9608459b9c1cd333f53fd62a16f955b->m_frame) frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_10;
    branch_end_15:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    goto try_end_8;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_8:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        CHECK_OBJECT(var_name);
        tmp_add_expr_left_5 = var_name;
        CHECK_OBJECT(var_arguments);
        tmp_add_expr_right_5 = var_arguments;
        tmp_len_arg_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_10 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_maxwidth);
        tmp_cmp_expr_right_10 = par_maxwidth;
        tmp_condition_result_16 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_14 = var_name;
        CHECK_OBJECT(var_arguments);
        tmp_args_element_value_15 = var_arguments;
        CHECK_OBJECT(par_maxwidth);
        tmp_args_element_value_16 = par_maxwidth;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 606;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_14, call_args);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_argstr == NULL);
        var_argstr = tmp_assign_source_25;
    }
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        CHECK_OBJECT(var_name);
        tmp_add_expr_left_6 = var_name;
        CHECK_OBJECT(var_arguments);
        tmp_add_expr_right_6 = var_arguments;
        tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_argstr == NULL);
        var_argstr = tmp_assign_source_26;
    }
    branch_end_16:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_15;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_kw_call_dict_value_0_9;
        tmp_called_value_15 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_15 != NULL);
        tmp_add_expr_left_8 = mod_consts[28];
        CHECK_OBJECT(var_argstr);
        tmp_add_expr_right_8 = var_argstr;
        tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_add_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_7 = mod_consts[16];
        tmp_kw_call_arg_value_0_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        if (tmp_kw_call_arg_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_9 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 610;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_9};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_15, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_9);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(var_inspect);
        tmp_called_instance_7 = var_inspect;
        CHECK_OBJECT(par_object);
        tmp_args_element_value_17 = par_object;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 611;
        tmp_assign_source_27 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[164], tmp_args_element_value_17);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_doc1 == NULL);
        var_doc1 = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(var_doc1);
        tmp_cmp_expr_left_11 = var_doc1;
        tmp_cmp_expr_right_11 = Py_None;
        tmp_condition_result_17 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_attribute_value_4;
        CHECK_OBJECT(par_object);
        tmp_expression_value_11 = par_object;
        tmp_attribute_value_4 = mod_consts[166];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_11, tmp_attribute_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_16;
        PyObject *tmp_kw_call_arg_value_0_10;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_dict_value_0_10;
        tmp_called_value_16 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_16 != NULL);
        CHECK_OBJECT(var_inspect);
        tmp_expression_value_12 = var_inspect;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[164]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_object);
        tmp_expression_value_13 = par_object;
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[166]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 614;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 614;
        tmp_kw_call_arg_value_0_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_kw_call_arg_value_0_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_10 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 614;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_10};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_10};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_16, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_10);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    branch_no_18:;
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_17;
        PyObject *tmp_kw_call_arg_value_0_11;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_kw_call_dict_value_0_11;
        tmp_called_value_18 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_18 != NULL);
        CHECK_OBJECT(var_inspect);
        tmp_called_instance_8 = var_inspect;
        CHECK_OBJECT(par_object);
        tmp_args_element_value_19 = par_object;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 616;
        tmp_kw_call_arg_value_0_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[164], tmp_args_element_value_19);
        if (tmp_kw_call_arg_value_0_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 616;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_11 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 616;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_11};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_11};
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_18, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_11);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 616;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    branch_end_17:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_20;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_object);
        tmp_args_element_value_20 = par_object;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 618;
        tmp_assign_source_28 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[168], tmp_args_element_value_20);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_methods == NULL);
        var_methods = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_methods);
            tmp_iter_arg_3 = var_methods;
            tmp_assign_source_30 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_1 = "ooooooooooooooooooo";
                goto try_except_handler_11;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_31;
        }
        if (isFrameUnusable(cache_frame_7996b427dc04e0ec84d53eb9b06aeaaa_2)) {
            Py_XDECREF(cache_frame_7996b427dc04e0ec84d53eb9b06aeaaa_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7996b427dc04e0ec84d53eb9b06aeaaa_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7996b427dc04e0ec84d53eb9b06aeaaa_2 = MAKE_FUNCTION_FRAME(codeobj_7996b427dc04e0ec84d53eb9b06aeaaa, module_numpy$lib$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_7996b427dc04e0ec84d53eb9b06aeaaa_2->m_type_description == NULL);
        frame_7996b427dc04e0ec84d53eb9b06aeaaa_2 = cache_frame_7996b427dc04e0ec84d53eb9b06aeaaa_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7996b427dc04e0ec84d53eb9b06aeaaa_2);
        assert(Py_REFCNT(frame_7996b427dc04e0ec84d53eb9b06aeaaa_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_32 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 620;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_32;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_33 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_meth;
                outline_0_var_meth = tmp_assign_source_33;
                Py_INCREF(outline_0_var_meth);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_3;
            CHECK_OBJECT(outline_0_var_meth);
            tmp_expression_value_14 = outline_0_var_meth;
            tmp_subscript_value_3 = mod_consts[1];
            tmp_cmp_expr_left_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_3, 0);
            if (tmp_cmp_expr_left_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_cmp_expr_right_12 = mod_consts[169];
            tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            Py_DECREF(tmp_cmp_expr_left_12);
            if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
        }
        branch_yes_19:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_meth);
            tmp_append_value_1 = outline_0_var_meth;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
        }
        branch_no_19:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_29 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_29);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_11;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7996b427dc04e0ec84d53eb9b06aeaaa_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7996b427dc04e0ec84d53eb9b06aeaaa_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7996b427dc04e0ec84d53eb9b06aeaaa_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7996b427dc04e0ec84d53eb9b06aeaaa_2,
            type_description_2,
            outline_0_var_meth
        );


        // Release cached frame if used for exception.
        if (frame_7996b427dc04e0ec84d53eb9b06aeaaa_2 == cache_frame_7996b427dc04e0ec84d53eb9b06aeaaa_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_7996b427dc04e0ec84d53eb9b06aeaaa_2);
            cache_frame_7996b427dc04e0ec84d53eb9b06aeaaa_2 = NULL;
        }

        assertFrameObject(frame_7996b427dc04e0ec84d53eb9b06aeaaa_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_11;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_XDECREF(outline_0_var_meth);
        outline_0_var_meth = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_meth);
        outline_0_var_meth = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 620;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_public_methods == NULL);
        var_public_methods = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_public_methods);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_public_methods);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_18;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_19 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_19 != NULL);
        CHECK_OBJECT(par_output);
        tmp_kw_call_value_0_1 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 622;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_18 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_19, mod_consts[170], kw_values, mod_consts[114]);
        }

        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 622;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(var_public_methods);
        tmp_iter_arg_4 = var_public_methods;
        tmp_assign_source_34 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_34;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_35 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_35 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 623;
                goto try_except_handler_13;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_36 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_meth;
            var_meth = tmp_assign_source_36;
            Py_INCREF(var_meth);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_object);
        tmp_getattr_target_1 = par_object;
        CHECK_OBJECT(var_meth);
        tmp_getattr_attr_1 = var_meth;
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_37 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = var_thisobj;
            var_thisobj = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(var_thisobj);
        tmp_cmp_expr_left_13 = var_thisobj;
        tmp_cmp_expr_right_13 = Py_None;
        tmp_condition_result_21 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_21;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_22;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[171]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_14;
        }
        if (var_inspect == NULL) {
            Py_DECREF(tmp_called_value_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 627;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_called_instance_10 = var_inspect;
        CHECK_OBJECT(var_thisobj);
        tmp_args_element_value_22 = var_thisobj;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 627;
        tmp_or_left_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[164], tmp_args_element_value_22);
        if (tmp_or_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 627;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 627;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_14;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        tmp_or_right_value_3 = mod_consts[172];
        Py_INCREF(tmp_or_right_value_3);
        tmp_args_element_value_21 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_args_element_value_21 = tmp_or_left_value_3;
        or_end_3:;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 626;
        tmp_iter_arg_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_38 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_39 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 626;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_40 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_40 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 626;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 626;
                    goto try_except_handler_15;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[57];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 626;
            goto try_except_handler_15;
        }
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_14;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_13;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_41 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_methstr;
            var_methstr = tmp_assign_source_41;
            Py_INCREF(var_methstr);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_42 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_other;
            var_other = tmp_assign_source_42;
            Py_INCREF(var_other);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    branch_no_21:;
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_19;
        PyObject *tmp_kw_call_arg_value_0_12;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_dict_value_0_12;
        tmp_called_value_21 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_21 != NULL);
        tmp_mod_expr_left_5 = mod_consts[173];
        CHECK_OBJECT(var_meth);
        tmp_tuple_element_1 = var_meth;
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_5, 0, tmp_tuple_element_1);
        if (var_methstr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[174]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 629;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_methstr;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_5, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_kw_call_arg_value_0_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_12 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 629;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_12};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_12};
            tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_21, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_12);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_19);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 623;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_13;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_no_20:;
    goto branch_end_14;
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_attribute_value_5;
        CHECK_OBJECT(par_object);
        tmp_expression_value_16 = par_object;
        tmp_attribute_value_5 = mod_consts[21];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_16, tmp_attribute_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_20;
        PyObject *tmp_kw_call_arg_value_0_13;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_kw_call_dict_value_0_13;
        tmp_called_value_22 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_22 != NULL);
        CHECK_OBJECT(var_inspect);
        tmp_called_instance_11 = var_inspect;
        CHECK_OBJECT(par_object);
        tmp_args_element_value_23 = par_object;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 632;
        tmp_kw_call_arg_value_0_13 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[164], tmp_args_element_value_23);
        if (tmp_kw_call_arg_value_0_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 632;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_13 = par_output;
        frame_d9608459b9c1cd333f53fd62a16f955b->m_frame.f_lineno = 632;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_13};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_13};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_22, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_13);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 632;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    branch_no_22:;
    branch_end_14:;
    branch_end_11:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d9608459b9c1cd333f53fd62a16f955b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9608459b9c1cd333f53fd62a16f955b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9608459b9c1cd333f53fd62a16f955b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9608459b9c1cd333f53fd62a16f955b,
        type_description_1,
        par_object,
        par_maxwidth,
        par_output,
        par_toplevel,
        var_inspect,
        var_numfound,
        var_objlist,
        var_namestr,
        var_obj,
        var_name,
        var_arguments,
        var_argstr,
        var_doc1,
        var_methods,
        var_public_methods,
        var_meth,
        var_thisobj,
        var_methstr,
        var_other
    );


    // Release cached frame if used for exception.
    if (frame_d9608459b9c1cd333f53fd62a16f955b == cache_frame_d9608459b9c1cd333f53fd62a16f955b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d9608459b9c1cd333f53fd62a16f955b);
        cache_frame_d9608459b9c1cd333f53fd62a16f955b = NULL;
    }

    assertFrameObject(frame_d9608459b9c1cd333f53fd62a16f955b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_object);
    par_object = NULL;
    Py_XDECREF(par_output);
    par_output = NULL;
    Py_XDECREF(var_inspect);
    var_inspect = NULL;
    Py_XDECREF(var_numfound);
    var_numfound = NULL;
    Py_XDECREF(var_objlist);
    var_objlist = NULL;
    Py_XDECREF(var_namestr);
    var_namestr = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_arguments);
    var_arguments = NULL;
    Py_XDECREF(var_argstr);
    var_argstr = NULL;
    Py_XDECREF(var_doc1);
    var_doc1 = NULL;
    Py_XDECREF(var_methods);
    var_methods = NULL;
    Py_XDECREF(var_public_methods);
    var_public_methods = NULL;
    Py_XDECREF(var_meth);
    var_meth = NULL;
    Py_XDECREF(var_thisobj);
    var_thisobj = NULL;
    Py_XDECREF(var_methstr);
    var_methstr = NULL;
    Py_XDECREF(var_other);
    var_other = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_object);
    par_object = NULL;
    Py_XDECREF(par_output);
    par_output = NULL;
    Py_XDECREF(var_inspect);
    var_inspect = NULL;
    Py_XDECREF(var_numfound);
    var_numfound = NULL;
    Py_XDECREF(var_objlist);
    var_objlist = NULL;
    Py_XDECREF(var_namestr);
    var_namestr = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_arguments);
    var_arguments = NULL;
    Py_XDECREF(var_argstr);
    var_argstr = NULL;
    Py_XDECREF(var_doc1);
    var_doc1 = NULL;
    Py_XDECREF(var_methods);
    var_methods = NULL;
    Py_XDECREF(var_public_methods);
    var_public_methods = NULL;
    Py_XDECREF(var_meth);
    var_meth = NULL;
    Py_XDECREF(var_thisobj);
    var_thisobj = NULL;
    Py_XDECREF(var_methstr);
    var_methstr = NULL;
    Py_XDECREF(var_other);
    var_other = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_maxwidth);
    Py_DECREF(par_maxwidth);
    CHECK_OBJECT(par_toplevel);
    Py_DECREF(par_toplevel);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_maxwidth);
    Py_DECREF(par_maxwidth);
    CHECK_OBJECT(par_toplevel);
    Py_DECREF(par_toplevel);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__14_source(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_object = python_pars[0];
    PyObject *par_output = python_pars[1];
    PyObject *var_inspect = NULL;
    struct Nuitka_FrameObject *frame_fca1ff7f44a67480c7268c05de037535;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_fca1ff7f44a67480c7268c05de037535 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fca1ff7f44a67480c7268c05de037535)) {
        Py_XDECREF(cache_frame_fca1ff7f44a67480c7268c05de037535);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fca1ff7f44a67480c7268c05de037535 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fca1ff7f44a67480c7268c05de037535 = MAKE_FUNCTION_FRAME(codeobj_fca1ff7f44a67480c7268c05de037535, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fca1ff7f44a67480c7268c05de037535->m_type_description == NULL);
    frame_fca1ff7f44a67480c7268c05de037535 = cache_frame_fca1ff7f44a67480c7268c05de037535;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fca1ff7f44a67480c7268c05de037535);
    assert(Py_REFCNT(frame_fca1ff7f44a67480c7268c05de037535) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[141];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        frame_fca1ff7f44a67480c7268c05de037535->m_frame.f_lineno = 676;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_inspect == NULL);
        var_inspect = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[176];
        CHECK_OBJECT(var_inspect);
        tmp_called_instance_1 = var_inspect;
        CHECK_OBJECT(par_object);
        tmp_args_element_value_1 = par_object;
        frame_fca1ff7f44a67480c7268c05de037535->m_frame.f_lineno = 678;
        tmp_mod_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[177], tmp_args_element_value_1);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_1 = par_output;
        frame_fca1ff7f44a67480c7268c05de037535->m_frame.f_lineno = 678;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(var_inspect);
        tmp_called_instance_2 = var_inspect;
        CHECK_OBJECT(par_object);
        tmp_args_element_value_2 = par_object;
        frame_fca1ff7f44a67480c7268c05de037535->m_frame.f_lineno = 679;
        tmp_kw_call_arg_value_0_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[178], tmp_args_element_value_2);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_output);
        tmp_kw_call_dict_value_0_2 = par_output;
        frame_fca1ff7f44a67480c7268c05de037535->m_frame.f_lineno = 679;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_fca1ff7f44a67480c7268c05de037535, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_fca1ff7f44a67480c7268c05de037535, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(par_output);
        tmp_kw_call_value_0_1 = par_output;
        frame_fca1ff7f44a67480c7268c05de037535->m_frame.f_lineno = 681;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_3, mod_consts[179], kw_values, mod_consts[114]);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 677;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fca1ff7f44a67480c7268c05de037535->m_frame) frame_fca1ff7f44a67480c7268c05de037535->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fca1ff7f44a67480c7268c05de037535, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fca1ff7f44a67480c7268c05de037535->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fca1ff7f44a67480c7268c05de037535, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fca1ff7f44a67480c7268c05de037535,
        type_description_1,
        par_object,
        par_output,
        var_inspect
    );


    // Release cached frame if used for exception.
    if (frame_fca1ff7f44a67480c7268c05de037535 == cache_frame_fca1ff7f44a67480c7268c05de037535) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fca1ff7f44a67480c7268c05de037535);
        cache_frame_fca1ff7f44a67480c7268c05de037535 = NULL;
    }

    assertFrameObject(frame_fca1ff7f44a67480c7268c05de037535);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_inspect);
    Py_DECREF(var_inspect);
    var_inspect = NULL;
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

    Py_XDECREF(var_inspect);
    var_inspect = NULL;
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
    CHECK_OBJECT(par_object);
    Py_DECREF(par_object);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_object);
    Py_DECREF(par_object);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__15_lookfor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_what = python_pars[0];
    PyObject *par_module = python_pars[1];
    PyObject *par_import_modules = python_pars[2];
    PyObject *par_regenerate = python_pars[3];
    PyObject *par_output = python_pars[4];
    struct Nuitka_CellObject *var_cache = Nuitka_Cell_Empty();
    PyObject *var_found = NULL;
    struct Nuitka_CellObject *var_whats = Nuitka_Cell_Empty();
    PyObject *var_name = NULL;
    PyObject *var_docstring = NULL;
    PyObject *var_kind = NULL;
    PyObject *var_index = NULL;
    struct Nuitka_CellObject *var_doc = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_kind_relevance = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_relevance = Nuitka_Cell_Empty();
    PyObject *var_relevance_value = NULL;
    PyObject *var_s = NULL;
    PyObject *var_help_text = NULL;
    PyObject *var_ix = NULL;
    PyObject *var_doclines = NULL;
    PyObject *var_first_doc = NULL;
    PyObject *var_pager = NULL;
    PyObject *outline_0_var_line = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_92af46e18b6c7f6a499f2205e01dc1f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    struct Nuitka_FrameObject *frame_01df65d4d3abc58f87d72dda3177c638_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_01df65d4d3abc58f87d72dda3177c638_2 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_92af46e18b6c7f6a499f2205e01dc1f7 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_92af46e18b6c7f6a499f2205e01dc1f7)) {
        Py_XDECREF(cache_frame_92af46e18b6c7f6a499f2205e01dc1f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_92af46e18b6c7f6a499f2205e01dc1f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_92af46e18b6c7f6a499f2205e01dc1f7 = MAKE_FUNCTION_FRAME(codeobj_92af46e18b6c7f6a499f2205e01dc1f7, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_92af46e18b6c7f6a499f2205e01dc1f7->m_type_description == NULL);
    frame_92af46e18b6c7f6a499f2205e01dc1f7 = cache_frame_92af46e18b6c7f6a499f2205e01dc1f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_92af46e18b6c7f6a499f2205e01dc1f7);
    assert(Py_REFCNT(frame_92af46e18b6c7f6a499f2205e01dc1f7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_module);
        tmp_args_element_value_1 = par_module;
        CHECK_OBJECT(par_import_modules);
        tmp_args_element_value_2 = par_import_modules;
        CHECK_OBJECT(par_regenerate);
        tmp_args_element_value_3 = par_regenerate;
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 744;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_cache) == NULL);
        PyCell_SET(var_cache, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_found == NULL);
        var_found = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_what);
        tmp_unicode_arg_1 = par_what;
        tmp_expression_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 749;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[182]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 749;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 749;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 749;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 749;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 749;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 749;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_whats) == NULL);
        PyCell_SET(var_whats, tmp_assign_source_3);

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_whats));
        tmp_operand_value_1 = Nuitka_Cell_GET(var_whats);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 750;
            type_description_1 = "ooooococoooocccooooooo";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_cache));
        tmp_expression_value_3 = Nuitka_Cell_GET(var_cache);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[183]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 753;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooococoooocccooooooo";
                exception_lineno = 753;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooococoooocccooooooo";
            exception_lineno = 753;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooococoooocccooooooo";
            exception_lineno = 753;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "ooooococoooocccooooooo";
                    exception_lineno = 753;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[57];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooococoooocccooooooo";
            exception_lineno = 753;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_9;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_iter_arg_3 = tmp_tuple_unpack_1__element_2;
        tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_3, 0, 3);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooococoooocccooooooo";
            exception_lineno = 753;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_4, 1, 3);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooococoooocccooooooo";
            exception_lineno = 753;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_5, 2, 3);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooococoooocccooooooo";
            exception_lineno = 753;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooococoooocccooooooo";
                    exception_lineno = 753;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[184];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooococoooocccooooooo";
            exception_lineno = 753;
            goto try_except_handler_6;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    goto try_end_3;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_docstring;
            var_docstring = tmp_assign_source_14;
            Py_INCREF(var_docstring);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_kind;
            var_kind = tmp_assign_source_15;
            Py_INCREF(var_kind);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_16;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_kind);
        tmp_cmp_expr_left_1 = var_kind;
        tmp_cmp_expr_right_1 = mod_consts[185];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 754;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_docstring);
        tmp_expression_value_4 = var_docstring;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[182]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 757;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_2;
        }
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 757;
        tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 757;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_doc);
            PyCell_SET(var_doc, tmp_assign_source_17);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_all_arg_1;
        PyObject *tmp_capi_result_1;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_iter_arg_4;
            if (Nuitka_Cell_GET(var_whats) == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[186]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 758;
                type_description_1 = "ooooococoooocccooooooo";
                goto try_except_handler_2;
            }

            tmp_iter_arg_4 = Nuitka_Cell_GET(var_whats);
            tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 758;
                type_description_1 = "ooooococoooocccooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_genexpr_1__$0;
                tmp_genexpr_1__$0 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = var_doc;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_all_arg_1 = MAKE_GENERATOR_numpy$lib$utils$$$function__15_lookfor$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_7;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_capi_result_1 = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        if (var_found == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[187]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 759;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_found;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[73]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 759;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_4 = var_name;
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 759;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 759;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 753;
        type_description_1 = "ooooococoooocccooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = DICT_COPY(mod_consts[188]);
        assert(Nuitka_Cell_GET(var_kind_relevance) == NULL);
        PyCell_SET(var_kind_relevance, tmp_assign_source_19);

    }
    {
        PyObject *tmp_assign_source_20;
        struct Nuitka_CellObject *tmp_closure_2[2];

        tmp_closure_2[0] = var_kind_relevance;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_whats;
        Py_INCREF(tmp_closure_2[1]);

        tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$utils$$$function__15_lookfor$$$function__1_relevance(tmp_closure_2);

        assert(Nuitka_Cell_GET(var_relevance) == NULL);
        PyCell_SET(var_relevance, tmp_assign_source_20);

    }
    {
        PyObject *tmp_assign_source_21;
        struct Nuitka_CellObject *tmp_closure_3[2];

        tmp_closure_3[0] = var_cache;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = var_relevance;
        Py_INCREF(tmp_closure_3[1]);

        tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$utils$$$function__15_lookfor$$$function__2_relevance_value(tmp_closure_3);

        assert(var_relevance_value == NULL);
        var_relevance_value = tmp_assign_source_21;
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_1;
        if (var_found == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[187]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 786;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_found;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[193]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_relevance_value);
        tmp_kw_call_value_0_1 = var_relevance_value;
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 786;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, kw_values, mod_consts[194]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_mod_expr_left_1 = mod_consts[195];
        tmp_str_arg_value_1 = mod_consts[28];
        if (Nuitka_Cell_GET(var_whats) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[186]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 789;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = Nuitka_Cell_GET(var_whats);
        tmp_mod_expr_right_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 789;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_UNICODE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 789;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_s);
        tmp_list_element_1 = var_s;
        tmp_assign_source_23 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_len_arg_1;
            PyList_SET_ITEM0(tmp_assign_source_23, 0, tmp_list_element_1);
            tmp_mult_expr_left_1 = mod_consts[154];
            CHECK_OBJECT(var_s);
            tmp_len_arg_1 = var_s;
            tmp_mult_expr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
            assert(!(tmp_mult_expr_right_1 == NULL));
            tmp_list_element_1 = BINARY_OPERATION_MULT_OBJECT_UNICODE_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_right_1);
            assert(!(tmp_list_element_1 == NULL));
            PyList_SET_ITEM(tmp_assign_source_23, 1, tmp_list_element_1);
        }
        assert(var_help_text == NULL);
        var_help_text = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        if (var_found == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[187]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 791;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_found;
        tmp_subscript_value_1 = mod_consts[196];
        tmp_iter_arg_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_1);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 791;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 791;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_24;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_25 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooococoooocccooooooo";
                exception_lineno = 791;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_26 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_26;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        if (Nuitka_Cell_GET(var_cache) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 792;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(var_cache);
        CHECK_OBJECT(var_name);
        tmp_subscript_value_2 = var_name;
        tmp_iter_arg_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_2);
        if (tmp_iter_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 792;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 792;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT(tmp_unpack_6, 0, 3);
        if (tmp_assign_source_28 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooococoooocccooooooo";
            exception_lineno = 792;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tmp_unpack_7, 1, 3);
        if (tmp_assign_source_29 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooococoooocccooooooo";
            exception_lineno = 792;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_8, 2, 3);
        if (tmp_assign_source_30 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooococoooocccooooooo";
            exception_lineno = 792;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_3;
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooococoooocccooooooo";
                    exception_lineno = 792;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[184];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooococoooocccooooooo";
            exception_lineno = 792;
            goto try_except_handler_10;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_9;
    // End of try:
    try_end_6:;
    goto try_end_7;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_31 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = Nuitka_Cell_GET(var_doc);
            PyCell_SET(var_doc, tmp_assign_source_31);
            Py_INCREF(tmp_assign_source_31);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_32 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_kind;
            var_kind = tmp_assign_source_32;
            Py_INCREF(var_kind);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_33 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_ix;
            var_ix = tmp_assign_source_33;
            Py_INCREF(var_ix);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_34;
        // Tried code:
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_10;
            CHECK_OBJECT(Nuitka_Cell_GET(var_doc));
            tmp_expression_value_10 = Nuitka_Cell_GET(var_doc);
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[197]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 794;
                type_description_1 = "ooooococoooocccooooooo";
                goto try_except_handler_11;
            }
            frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 794;
            tmp_expression_value_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
            Py_DECREF(tmp_called_value_9);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 794;
                type_description_1 = "ooooococoooocccooooooo";
                goto try_except_handler_11;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[23]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 794;
                type_description_1 = "ooooococoooocccooooooo";
                goto try_except_handler_11;
            }
            frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 794;
            tmp_iter_arg_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[24]);

            Py_DECREF(tmp_called_value_8);
            if (tmp_iter_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 794;
                type_description_1 = "ooooococoooocccooooooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_35 = MAKE_ITERATOR(tmp_iter_arg_7);
            Py_DECREF(tmp_iter_arg_7);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 794;
                type_description_1 = "ooooococoooocccooooooo";
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_35;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_36;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_01df65d4d3abc58f87d72dda3177c638_2)) {
            Py_XDECREF(cache_frame_01df65d4d3abc58f87d72dda3177c638_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_01df65d4d3abc58f87d72dda3177c638_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_01df65d4d3abc58f87d72dda3177c638_2 = MAKE_FUNCTION_FRAME(codeobj_01df65d4d3abc58f87d72dda3177c638, module_numpy$lib$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_01df65d4d3abc58f87d72dda3177c638_2->m_type_description == NULL);
        frame_01df65d4d3abc58f87d72dda3177c638_2 = cache_frame_01df65d4d3abc58f87d72dda3177c638_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_01df65d4d3abc58f87d72dda3177c638_2);
        assert(Py_REFCNT(frame_01df65d4d3abc58f87d72dda3177c638_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_37;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_3 = tmp_listcomp_1__$0;
            tmp_assign_source_37 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_37 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 794;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_37;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_38;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_38 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_line;
                outline_0_var_line = tmp_assign_source_38;
                Py_INCREF(outline_0_var_line);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_call_result_3;
            int tmp_truth_name_1;
            CHECK_OBJECT(outline_0_var_line);
            tmp_expression_value_11 = outline_0_var_line;
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[197]);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 795;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            frame_01df65d4d3abc58f87d72dda3177c638_2->m_frame.f_lineno = 795;
            tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_10);
            Py_DECREF(tmp_called_value_10);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 795;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_3);

                exception_lineno = 795;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_3);
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_12;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_line);
            tmp_expression_value_12 = outline_0_var_line;
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[197]);
            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 794;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            frame_01df65d4d3abc58f87d72dda3177c638_2->m_frame.f_lineno = 794;
            tmp_append_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
            Py_DECREF(tmp_called_value_11);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 794;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 794;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
        }
        branch_no_4:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 794;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_34 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_11;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_01df65d4d3abc58f87d72dda3177c638_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_01df65d4d3abc58f87d72dda3177c638_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_01df65d4d3abc58f87d72dda3177c638_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_01df65d4d3abc58f87d72dda3177c638_2,
            type_description_2,
            outline_0_var_line
        );


        // Release cached frame if used for exception.
        if (frame_01df65d4d3abc58f87d72dda3177c638_2 == cache_frame_01df65d4d3abc58f87d72dda3177c638_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_01df65d4d3abc58f87d72dda3177c638_2);
            cache_frame_01df65d4d3abc58f87d72dda3177c638_2 = NULL;
        }

        assertFrameObject(frame_01df65d4d3abc58f87d72dda3177c638_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooococoooocccooooooo";
        goto try_except_handler_11;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_XDECREF(outline_0_var_line);
        outline_0_var_line = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_0_var_line);
        outline_0_var_line = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 794;
        goto try_except_handler_8;
        outline_result_2:;
        {
            PyObject *old = var_doclines;
            var_doclines = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_doclines);
        tmp_expression_value_14 = var_doclines;
        tmp_subscript_value_3 = mod_consts[1];
        tmp_expression_value_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_3, 0);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 799;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_13;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[197]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 799;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_13;
        }
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 799;
        tmp_assign_source_39 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        Py_DECREF(tmp_called_value_12);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 799;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = var_first_doc;
            var_first_doc = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        int tmp_truth_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 800;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT(var_first_doc);
        tmp_args_element_value_5 = var_first_doc;
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 800;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[199], tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 800;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_13;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 800;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_doclines);
        tmp_expression_value_16 = var_doclines;
        tmp_subscript_value_4 = mod_consts[59];
        tmp_expression_value_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_4, 1);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 801;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_13;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[197]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 801;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_13;
        }
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 801;
        tmp_assign_source_40 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
        Py_DECREF(tmp_called_value_13);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 801;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = var_first_doc;
            assert(old != NULL);
            var_first_doc = tmp_assign_source_40;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_10 == NULL) {
        exception_keeper_tb_10 = MAKE_TRACEBACK(frame_92af46e18b6c7f6a499f2205e01dc1f7, exception_keeper_lineno_10);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_keeper_tb_10 = ADD_TRACEBACK(exception_keeper_tb_10, frame_92af46e18b6c7f6a499f2205e01dc1f7, exception_keeper_lineno_10);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_IndexError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[97];
        {
            PyObject *old = var_first_doc;
            var_first_doc = tmp_assign_source_41;
            Py_INCREF(var_first_doc);
            Py_XDECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 798;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame) frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooococoooocccooooooo";
    goto try_except_handler_14;
    branch_end_6:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_8;
    // End of try:
    try_end_9:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_8;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_1;
        if (var_help_text == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 804;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_17 = var_help_text;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[73]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 804;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_8;
        }
        tmp_mod_expr_left_2 = mod_consts[201];
        CHECK_OBJECT(var_name);
        tmp_tuple_element_1 = var_name;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_1);
        if (var_first_doc == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[202]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 804;
            type_description_1 = "ooooococoooocccooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_first_doc;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 804;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_8;
        }
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 804;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 804;
            type_description_1 = "ooooococoooocccooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 791;
        type_description_1 = "ooooococoooocccooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        if (var_found == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[187]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 806;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = var_found;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 806;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_6;
        if (var_help_text == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 807;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = var_help_text;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[73]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 807;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 807;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[203]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 807;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_output);
        tmp_cmp_expr_left_3 = par_output;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_iterable_value_2;
        CHECK_OBJECT(par_output);
        tmp_expression_value_19 = par_output;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[204]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_str_arg_value_2 = mod_consts[16];
        if (var_help_text == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 811;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_2 = var_help_text;
        tmp_args_element_value_7 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 811;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 811;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto branch_end_8;
    branch_no_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_4;
        nuitka_digit tmp_cmp_expr_right_4;
        PyObject *tmp_len_arg_2;
        if (var_help_text == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 812;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = var_help_text;
        tmp_cmp_expr_left_4 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 812;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = 10;
        tmp_condition_result_9 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 813;
        tmp_assign_source_42 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[205]);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pager == NULL);
        var_pager = tmp_assign_source_42;
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_str_arg_value_3;
        PyObject *tmp_iterable_value_3;
        CHECK_OBJECT(var_pager);
        tmp_called_value_17 = var_pager;
        tmp_str_arg_value_3 = mod_consts[16];
        if (var_help_text == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 814;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_3 = var_help_text;
        tmp_args_element_value_8 = UNICODE_JOIN(tmp_str_arg_value_3, tmp_iterable_value_3);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 814;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 814;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 814;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_str_arg_value_4;
        PyObject *tmp_iterable_value_4;
        tmp_called_value_18 = LOOKUP_BUILTIN(mod_consts[84]);
        assert(tmp_called_value_18 != NULL);
        tmp_str_arg_value_4 = mod_consts[16];
        if (var_help_text == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 816;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_4 = var_help_text;
        tmp_args_element_value_9 = UNICODE_JOIN(tmp_str_arg_value_4, tmp_iterable_value_4);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 816;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame.f_lineno = 816;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 816;
            type_description_1 = "ooooococoooocccooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_end_9:;
    branch_end_8:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_92af46e18b6c7f6a499f2205e01dc1f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_92af46e18b6c7f6a499f2205e01dc1f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_92af46e18b6c7f6a499f2205e01dc1f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_92af46e18b6c7f6a499f2205e01dc1f7,
        type_description_1,
        par_what,
        par_module,
        par_import_modules,
        par_regenerate,
        par_output,
        var_cache,
        var_found,
        var_whats,
        var_name,
        var_docstring,
        var_kind,
        var_index,
        var_doc,
        var_kind_relevance,
        var_relevance,
        var_relevance_value,
        var_s,
        var_help_text,
        var_ix,
        var_doclines,
        var_first_doc,
        var_pager
    );


    // Release cached frame if used for exception.
    if (frame_92af46e18b6c7f6a499f2205e01dc1f7 == cache_frame_92af46e18b6c7f6a499f2205e01dc1f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_92af46e18b6c7f6a499f2205e01dc1f7);
        cache_frame_92af46e18b6c7f6a499f2205e01dc1f7 = NULL;
    }

    assertFrameObject(frame_92af46e18b6c7f6a499f2205e01dc1f7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cache);
    Py_DECREF(var_cache);
    var_cache = NULL;
    Py_XDECREF(var_found);
    var_found = NULL;
    CHECK_OBJECT(var_whats);
    Py_DECREF(var_whats);
    var_whats = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_docstring);
    var_docstring = NULL;
    Py_XDECREF(var_kind);
    var_kind = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    CHECK_OBJECT(var_doc);
    Py_DECREF(var_doc);
    var_doc = NULL;
    CHECK_OBJECT(var_kind_relevance);
    Py_DECREF(var_kind_relevance);
    var_kind_relevance = NULL;
    CHECK_OBJECT(var_relevance);
    Py_DECREF(var_relevance);
    var_relevance = NULL;
    Py_XDECREF(var_relevance_value);
    var_relevance_value = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_help_text);
    var_help_text = NULL;
    Py_XDECREF(var_ix);
    var_ix = NULL;
    Py_XDECREF(var_doclines);
    var_doclines = NULL;
    Py_XDECREF(var_first_doc);
    var_first_doc = NULL;
    Py_XDECREF(var_pager);
    var_pager = NULL;
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

    CHECK_OBJECT(var_cache);
    Py_DECREF(var_cache);
    var_cache = NULL;
    Py_XDECREF(var_found);
    var_found = NULL;
    CHECK_OBJECT(var_whats);
    Py_DECREF(var_whats);
    var_whats = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_docstring);
    var_docstring = NULL;
    Py_XDECREF(var_kind);
    var_kind = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    CHECK_OBJECT(var_doc);
    Py_DECREF(var_doc);
    var_doc = NULL;
    CHECK_OBJECT(var_kind_relevance);
    Py_DECREF(var_kind_relevance);
    var_kind_relevance = NULL;
    CHECK_OBJECT(var_relevance);
    Py_DECREF(var_relevance);
    var_relevance = NULL;
    Py_XDECREF(var_relevance_value);
    var_relevance_value = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_help_text);
    var_help_text = NULL;
    Py_XDECREF(var_ix);
    var_ix = NULL;
    Py_XDECREF(var_doclines);
    var_doclines = NULL;
    Py_XDECREF(var_first_doc);
    var_first_doc = NULL;
    Py_XDECREF(var_pager);
    var_pager = NULL;
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
    CHECK_OBJECT(par_what);
    Py_DECREF(par_what);
    CHECK_OBJECT(par_module);
    Py_DECREF(par_module);
    CHECK_OBJECT(par_import_modules);
    Py_DECREF(par_import_modules);
    CHECK_OBJECT(par_regenerate);
    Py_DECREF(par_regenerate);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_what);
    Py_DECREF(par_what);
    CHECK_OBJECT(par_module);
    Py_DECREF(par_module);
    CHECK_OBJECT(par_import_modules);
    Py_DECREF(par_import_modules);
    CHECK_OBJECT(par_regenerate);
    Py_DECREF(par_regenerate);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct numpy$lib$utils$$$function__15_lookfor$$$genexpr__1_genexpr_locals {
    PyObject *var_w;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *numpy$lib$utils$$$function__15_lookfor$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct numpy$lib$utils$$$function__15_lookfor$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$lib$utils$$$function__15_lookfor$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_w = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_8ef13c8063e3366d933f74bfbce7b717, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 758;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_w;
            generator_heap->var_w = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_w);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_cmp_expr_left_1 = generator_heap->var_w;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[207]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 758;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 758;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 758;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 758;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            NULL,
            generator_heap->var_w,
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
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_w);
    generator_heap->var_w = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_w);
    generator_heap->var_w = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$lib$utils$$$function__15_lookfor$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$lib$utils$$$function__15_lookfor$$$genexpr__1_genexpr_context,
        module_numpy$lib$utils,
        mod_consts[208],
#if PYTHON_VERSION >= 0x350
        mod_consts[209],
#endif
        codeobj_8ef13c8063e3366d933f74bfbce7b717,
        closure,
        2,
#if 1
        sizeof(struct numpy$lib$utils$$$function__15_lookfor$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_numpy$lib$utils$$$function__15_lookfor$$$function__1_relevance(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_docstr = python_pars[1];
    PyObject *par_kind = python_pars[2];
    PyObject *par_index = python_pars[3];
    PyObject *var_r = NULL;
    PyObject *var_first_doc = NULL;
    PyObject *outline_0_var_w = NULL;
    PyObject *outline_1_var_w = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_7e72cd11a0ca026a310ca131b09e3a84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_af7d4e5463dfcb52a9687838191489dc_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_af7d4e5463dfcb52a9687838191489dc_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_629ff26ce1ad7099163d5fbe36349fe6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_629ff26ce1ad7099163d5fbe36349fe6_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_7e72cd11a0ca026a310ca131b09e3a84 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7e72cd11a0ca026a310ca131b09e3a84)) {
        Py_XDECREF(cache_frame_7e72cd11a0ca026a310ca131b09e3a84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e72cd11a0ca026a310ca131b09e3a84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e72cd11a0ca026a310ca131b09e3a84 = MAKE_FUNCTION_FRAME(codeobj_7e72cd11a0ca026a310ca131b09e3a84, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7e72cd11a0ca026a310ca131b09e3a84->m_type_description == NULL);
    frame_7e72cd11a0ca026a310ca131b09e3a84 = cache_frame_7e72cd11a0ca026a310ca131b09e3a84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7e72cd11a0ca026a310ca131b09e3a84);
    assert(Py_REFCNT(frame_7e72cd11a0ca026a310ca131b09e3a84) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_str_arg_value_1 = mod_consts[16];
        CHECK_OBJECT(par_docstr);
        tmp_expression_value_4 = par_docstr;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[182]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        frame_7e72cd11a0ca026a310ca131b09e3a84->m_frame.f_lineno = 771;
        tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[197]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        frame_7e72cd11a0ca026a310ca131b09e3a84->m_frame.f_lineno = 771;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[23]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        frame_7e72cd11a0ca026a310ca131b09e3a84->m_frame.f_lineno = 771;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[24]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[210];
        tmp_iterable_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        assert(var_first_doc == NULL);
        var_first_doc = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_sum_sequence_1;
        tmp_iadd_expr_left_1 = mod_consts[1];
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[186]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 772;
                type_description_1 = "oooooocc";
                goto try_except_handler_2;
            }

            tmp_iter_arg_1 = Nuitka_Cell_GET(self->m_closure[1]);
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 772;
                type_description_1 = "oooooocc";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_af7d4e5463dfcb52a9687838191489dc_2)) {
            Py_XDECREF(cache_frame_af7d4e5463dfcb52a9687838191489dc_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_af7d4e5463dfcb52a9687838191489dc_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_af7d4e5463dfcb52a9687838191489dc_2 = MAKE_FUNCTION_FRAME(codeobj_af7d4e5463dfcb52a9687838191489dc, module_numpy$lib$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_af7d4e5463dfcb52a9687838191489dc_2->m_type_description == NULL);
        frame_af7d4e5463dfcb52a9687838191489dc_2 = cache_frame_af7d4e5463dfcb52a9687838191489dc_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_af7d4e5463dfcb52a9687838191489dc_2);
        assert(Py_REFCNT(frame_af7d4e5463dfcb52a9687838191489dc_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 772;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_w;
                outline_0_var_w = tmp_assign_source_6;
                Py_INCREF(outline_0_var_w);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(outline_0_var_w);
            tmp_cmp_expr_left_1 = outline_0_var_w;
            CHECK_OBJECT(var_first_doc);
            tmp_cmp_expr_right_1 = var_first_doc;
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 772;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_condition_result_1 = (tmp_res == 1) ? true : false;
            if (tmp_condition_result_1 != false) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_append_value_1 = mod_consts[211];
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 772;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_sum_sequence_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_sum_sequence_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_af7d4e5463dfcb52a9687838191489dc_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_af7d4e5463dfcb52a9687838191489dc_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_af7d4e5463dfcb52a9687838191489dc_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_af7d4e5463dfcb52a9687838191489dc_2,
            type_description_2,
            outline_0_var_w,
            var_first_doc
        );


        // Release cached frame if used for exception.
        if (frame_af7d4e5463dfcb52a9687838191489dc_2 == cache_frame_af7d4e5463dfcb52a9687838191489dc_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_af7d4e5463dfcb52a9687838191489dc_2);
            cache_frame_af7d4e5463dfcb52a9687838191489dc_2 = NULL;
        }

        assertFrameObject(frame_af7d4e5463dfcb52a9687838191489dc_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooocc";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_w);
        outline_0_var_w = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_w);
        outline_0_var_w = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 772;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_iadd_expr_right_1 = BUILTIN_SUM1(tmp_sum_sequence_1);
        Py_DECREF(tmp_sum_sequence_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_1);
        tmp_result = INPLACE_OPERATION_ADD_LONG_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        assert(var_r == NULL);
        var_r = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_sum_sequence_2;
        CHECK_OBJECT(var_r);
        tmp_iadd_expr_left_2 = var_r;
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[186]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 774;
                type_description_1 = "oooooocc";
                goto try_except_handler_4;
            }

            tmp_iter_arg_2 = Nuitka_Cell_GET(self->m_closure[1]);
            tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 774;
                type_description_1 = "oooooocc";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_9;
        }
        if (isFrameUnusable(cache_frame_629ff26ce1ad7099163d5fbe36349fe6_3)) {
            Py_XDECREF(cache_frame_629ff26ce1ad7099163d5fbe36349fe6_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_629ff26ce1ad7099163d5fbe36349fe6_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_629ff26ce1ad7099163d5fbe36349fe6_3 = MAKE_FUNCTION_FRAME(codeobj_629ff26ce1ad7099163d5fbe36349fe6, module_numpy$lib$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_629ff26ce1ad7099163d5fbe36349fe6_3->m_type_description == NULL);
        frame_629ff26ce1ad7099163d5fbe36349fe6_3 = cache_frame_629ff26ce1ad7099163d5fbe36349fe6_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_629ff26ce1ad7099163d5fbe36349fe6_3);
        assert(Py_REFCNT(frame_629ff26ce1ad7099163d5fbe36349fe6_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_10 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 774;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_11 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_w;
                outline_1_var_w = tmp_assign_source_11;
                Py_INCREF(outline_1_var_w);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_2;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(outline_1_var_w);
            tmp_cmp_expr_left_2 = outline_1_var_w;
            CHECK_OBJECT(par_name);
            tmp_cmp_expr_right_2 = par_name;
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 774;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_condition_result_2 = (tmp_res == 1) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_append_value_2 = mod_consts[212];
            tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 774;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        branch_no_2:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_sum_sequence_2 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_sum_sequence_2);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_629ff26ce1ad7099163d5fbe36349fe6_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_629ff26ce1ad7099163d5fbe36349fe6_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_629ff26ce1ad7099163d5fbe36349fe6_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_629ff26ce1ad7099163d5fbe36349fe6_3,
            type_description_2,
            outline_1_var_w,
            par_name
        );


        // Release cached frame if used for exception.
        if (frame_629ff26ce1ad7099163d5fbe36349fe6_3 == cache_frame_629ff26ce1ad7099163d5fbe36349fe6_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_629ff26ce1ad7099163d5fbe36349fe6_3);
            cache_frame_629ff26ce1ad7099163d5fbe36349fe6_3 = NULL;
        }

        assertFrameObject(frame_629ff26ce1ad7099163d5fbe36349fe6_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooocc";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_w);
        outline_1_var_w = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_w);
        outline_1_var_w = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 774;
        goto frame_exception_exit_1;
        outline_result_2:;
        tmp_iadd_expr_right_2 = BUILTIN_SUM1(tmp_sum_sequence_2);
        Py_DECREF(tmp_sum_sequence_2);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_iadd_expr_left_2;
        var_r = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_r);
        tmp_iadd_expr_left_3 = var_r;
        CHECK_OBJECT(par_name);
        tmp_len_arg_1 = par_name;
        tmp_operand_value_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 776;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 776;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = mod_consts[89];
        tmp_iadd_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 776;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 776;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = tmp_iadd_expr_left_3;
        var_r = tmp_assign_source_12;

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_r);
        tmp_iadd_expr_left_4 = var_r;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[213]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 778;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[214]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 778;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kind);
        tmp_args_element_value_1 = par_kind;
        tmp_args_element_value_2 = mod_consts[215];
        frame_7e72cd11a0ca026a310ca131b09e3a84->m_frame.f_lineno = 778;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iadd_expr_right_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_iadd_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 778;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        Py_DECREF(tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 778;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = tmp_iadd_expr_left_4;
        var_r = tmp_assign_source_13;

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_r);
        tmp_iadd_expr_left_5 = var_r;
        CHECK_OBJECT(par_name);
        tmp_expression_value_6 = par_name;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[216]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        frame_7e72cd11a0ca026a310ca131b09e3a84->m_frame.f_lineno = 780;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[217]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[82];
        tmp_iadd_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_iadd_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        Py_DECREF(tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = tmp_iadd_expr_left_5;
        var_r = tmp_assign_source_14;

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_r);
        tmp_iadd_expr_left_6 = var_r;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[81]);
        assert(tmp_called_value_6 != NULL);
        CHECK_OBJECT(par_index);
        tmp_operand_value_3 = par_index;
        tmp_truediv_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[218];
        tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[219];
        frame_7e72cd11a0ca026a310ca131b09e3a84->m_frame.f_lineno = 781;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iadd_expr_right_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_iadd_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        Py_DECREF(tmp_iadd_expr_right_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = tmp_iadd_expr_left_6;
        var_r = tmp_assign_source_15;

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7e72cd11a0ca026a310ca131b09e3a84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e72cd11a0ca026a310ca131b09e3a84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e72cd11a0ca026a310ca131b09e3a84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e72cd11a0ca026a310ca131b09e3a84,
        type_description_1,
        par_name,
        par_docstr,
        par_kind,
        par_index,
        var_r,
        var_first_doc,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_7e72cd11a0ca026a310ca131b09e3a84 == cache_frame_7e72cd11a0ca026a310ca131b09e3a84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7e72cd11a0ca026a310ca131b09e3a84);
        cache_frame_7e72cd11a0ca026a310ca131b09e3a84 = NULL;
    }

    assertFrameObject(frame_7e72cd11a0ca026a310ca131b09e3a84);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    CHECK_OBJECT(var_r);
    tmp_return_value = var_r;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_r);
    Py_DECREF(var_r);
    var_r = NULL;
    CHECK_OBJECT(var_first_doc);
    Py_DECREF(var_first_doc);
    var_first_doc = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_first_doc);
    var_first_doc = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_docstr);
    Py_DECREF(par_docstr);
    CHECK_OBJECT(par_kind);
    Py_DECREF(par_kind);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_docstr);
    Py_DECREF(par_docstr);
    CHECK_OBJECT(par_kind);
    Py_DECREF(par_kind);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__15_lookfor$$$function__2_relevance_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    struct Nuitka_FrameObject *frame_b5ae7b847100d75976520ad1d86360cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b5ae7b847100d75976520ad1d86360cd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b5ae7b847100d75976520ad1d86360cd)) {
        Py_XDECREF(cache_frame_b5ae7b847100d75976520ad1d86360cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5ae7b847100d75976520ad1d86360cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5ae7b847100d75976520ad1d86360cd = MAKE_FUNCTION_FRAME(codeobj_b5ae7b847100d75976520ad1d86360cd, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5ae7b847100d75976520ad1d86360cd->m_type_description == NULL);
    frame_b5ae7b847100d75976520ad1d86360cd = cache_frame_b5ae7b847100d75976520ad1d86360cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5ae7b847100d75976520ad1d86360cd);
    assert(Py_REFCNT(frame_b5ae7b847100d75976520ad1d86360cd) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[189]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 785;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_a);
        tmp_tuple_element_1 = par_a;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 785;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_a);
        tmp_subscript_value_1 = par_a;
        tmp_dircall_arg3_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_dircall_arg3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 785;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__15_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;
            type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_b5ae7b847100d75976520ad1d86360cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5ae7b847100d75976520ad1d86360cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5ae7b847100d75976520ad1d86360cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5ae7b847100d75976520ad1d86360cd,
        type_description_1,
        par_a,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b5ae7b847100d75976520ad1d86360cd == cache_frame_b5ae7b847100d75976520ad1d86360cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5ae7b847100d75976520ad1d86360cd);
        cache_frame_b5ae7b847100d75976520ad1d86360cd = NULL;
    }

    assertFrameObject(frame_b5ae7b847100d75976520ad1d86360cd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__16__lookfor_generate_cache(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_module = python_pars[0];
    PyObject *par_import_modules = python_pars[1];
    PyObject *par_regenerate = python_pars[2];
    PyObject *var_inspect = NULL;
    PyObject *var_StringIO = NULL;
    PyObject *var_cache = NULL;
    PyObject *var_mod = NULL;
    PyObject *var_seen = NULL;
    PyObject *var_index = NULL;
    PyObject *var_stack = NULL;
    PyObject *var_name = NULL;
    PyObject *var_item = NULL;
    PyObject *var_kind = NULL;
    PyObject *var__all = NULL;
    PyObject *var_pth = NULL;
    PyObject *var_mod_path = NULL;
    PyObject *var_this_py = NULL;
    PyObject *var_init_py = NULL;
    PyObject *var_to_import = NULL;
    PyObject *var_old_stdout = NULL;
    PyObject *var_old_stderr = NULL;
    PyObject *var_n = NULL;
    PyObject *var_v = NULL;
    PyObject *var_item_name = NULL;
    PyObject *var_mod_name = NULL;
    PyObject *var_doc = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9b9324fe212bbcd49e111e58e78ddafb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_iterator_attempt;
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
    struct Nuitka_ExceptionStackItem exception_preserved_4;
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
    struct Nuitka_ExceptionStackItem exception_preserved_5;
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
    struct Nuitka_ExceptionStackItem exception_preserved_6;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    static struct Nuitka_FrameObject *cache_frame_9b9324fe212bbcd49e111e58e78ddafb = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9b9324fe212bbcd49e111e58e78ddafb)) {
        Py_XDECREF(cache_frame_9b9324fe212bbcd49e111e58e78ddafb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b9324fe212bbcd49e111e58e78ddafb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b9324fe212bbcd49e111e58e78ddafb = MAKE_FUNCTION_FRAME(codeobj_9b9324fe212bbcd49e111e58e78ddafb, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b9324fe212bbcd49e111e58e78ddafb->m_type_description == NULL);
    frame_9b9324fe212bbcd49e111e58e78ddafb = cache_frame_9b9324fe212bbcd49e111e58e78ddafb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b9324fe212bbcd49e111e58e78ddafb);
    assert(Py_REFCNT(frame_9b9324fe212bbcd49e111e58e78ddafb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[141];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 839;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 839;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inspect == NULL);
        var_inspect = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_IO();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$lib$utils,
                mod_consts[220],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[220]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 841;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_StringIO == NULL);
        var_StringIO = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_module);
        tmp_cmp_expr_left_1 = par_module;
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
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[0];
        {
            PyObject *old = par_module;
            assert(old != NULL);
            par_module = tmp_assign_source_3;
            Py_INCREF(par_module);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_module);
        tmp_isinstance_inst_1 = par_module;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 846;
            type_description_1 = "oooooooooooooooooooooooooo";
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
    // Tried code:
    {
        PyObject *tmp_name_value_2;
        PyObject *tmp_imported_value_1;
        CHECK_OBJECT(par_module);
        tmp_name_value_2 = par_module;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 848;
        tmp_imported_value_1 = IMPORT_MODULE1(tmp_name_value_2);
        if (tmp_imported_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 848;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_imported_value_1);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_9b9324fe212bbcd49e111e58e78ddafb, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_9b9324fe212bbcd49e111e58e78ddafb, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_ImportError;
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
    tmp_return_value = MAKE_DICT_EMPTY();
    goto try_return_handler_3;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 847;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame) frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_3;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[221]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 851;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_module);
        tmp_subscript_value_1 = par_module;
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 851;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_module;
            assert(old != NULL);
            par_module = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(par_module);
        tmp_isinstance_inst_2 = par_module;
        tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 852;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 852;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_module);
        tmp_isinstance_inst_3 = par_module;
        tmp_isinstance_cls_3 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 852;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_4 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY();
        assert(var_cache == NULL);
        var_cache = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_module);
        tmp_iter_arg_1 = par_module;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 854;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
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
                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 854;
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
            PyObject *old = var_mod;
            var_mod = tmp_assign_source_8;
            Py_INCREF(var_mod);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (var_cache == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 855;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_3 = var_cache;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 855;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_mod);
        tmp_args_element_value_2 = var_mod;
        if (par_import_modules == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[222]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 855;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_3 = par_import_modules;
        if (par_regenerate == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[223]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 856;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_4 = par_regenerate;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 855;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 855;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 855;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 854;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_cache == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 857;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_cache;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    branch_end_2:;
    {
        bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_id_arg_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_module);
        tmp_id_arg_1 = par_module;
        tmp_cmp_expr_left_3 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_cmp_expr_left_3 == NULL));
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 859;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 859;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_regenerate);
        tmp_operand_value_1 = par_regenerate;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 859;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_id_arg_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 860;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_module);
        tmp_id_arg_2 = par_module;
        tmp_subscript_value_2 = PyLong_FromVoidPtr(tmp_id_arg_2);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 860;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(var_cache == NULL);
        var_cache = tmp_assign_source_9;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_id_arg_3;
        CHECK_OBJECT(var_cache);
        tmp_ass_subvalue_1 = var_cache;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 864;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_module);
        tmp_id_arg_3 = par_module;
        tmp_ass_subscript_1 = PyLong_FromVoidPtr(tmp_id_arg_3);
        assert(!(tmp_ass_subscript_1 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 864;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(var_seen == NULL);
        var_seen = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[1];
        assert(var_index == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_index = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_module);
        tmp_expression_value_5 = par_module;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 867;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_module);
        tmp_tuple_element_1 = par_module;
        PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_1);
        tmp_assign_source_12 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_12, 0, tmp_list_element_1);
        assert(var_stack == NULL);
        var_stack = tmp_assign_source_12;
    }
    loop_start_2:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        if (var_stack == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[225]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 868;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = var_stack;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 868;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    goto loop_end_2;
    branch_no_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        if (var_stack == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[225]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 869;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_6 = var_stack;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[103]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 869;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[104]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 869;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 869;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_15;
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

                    type_description_1 = "oooooooooooooooooooooooooo";
                    exception_lineno = 869;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[57];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 869;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_16;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_item;
            var_item = tmp_assign_source_17;
            Py_INCREF(var_item);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_id_arg_4;
        CHECK_OBJECT(var_item);
        tmp_id_arg_4 = var_item;
        tmp_cmp_expr_left_4 = PyLong_FromVoidPtr(tmp_id_arg_4);
        assert(!(tmp_cmp_expr_left_4 == NULL));
        if (var_seen == NULL) {
            Py_DECREF(tmp_cmp_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[226]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 870;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_4 = var_seen;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 870;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    goto loop_start_2;
    branch_no_7:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_id_arg_5;
        tmp_ass_subvalue_2 = Py_True;
        if (var_seen == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[226]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 872;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_seen;
        CHECK_OBJECT(var_item);
        tmp_id_arg_5 = var_item;
        tmp_ass_subscript_2 = PyLong_FromVoidPtr(tmp_id_arg_5);
        assert(!(tmp_ass_subscript_2 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 872;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iadd_expr_left_1;
        nuitka_digit tmp_iadd_expr_right_1;
        if (var_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[227]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 874;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_1 = var_index;
        tmp_iadd_expr_right_1 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_18 = tmp_iadd_expr_left_1;
        var_index = tmp_assign_source_18;

    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[228];
        {
            PyObject *old = var_kind;
            var_kind = tmp_assign_source_19;
            Py_INCREF(var_kind);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        int tmp_truth_name_1;
        if (var_inspect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 877;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = var_inspect;
        CHECK_OBJECT(var_item);
        tmp_args_element_value_5 = var_item;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 877;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[229], tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 877;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 877;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[101];
        {
            PyObject *old = var_kind;
            assert(old != NULL);
            var_kind = tmp_assign_source_20;
            Py_INCREF(var_kind);
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_item);
        tmp_expression_value_7 = var_item;
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[230]);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 880;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var__all;
            var__all = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
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
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_9b9324fe212bbcd49e111e58e78ddafb, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_9b9324fe212bbcd49e111e58e78ddafb, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = Py_None;
        {
            PyObject *old = var__all;
            var__all = tmp_assign_source_22;
            Py_INCREF(var__all);
            Py_XDECREF(old);
        }

    }
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 879;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame) frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_8;
    branch_end_9:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_import_modules);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_import_modules);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_item);
        tmp_expression_value_8 = var_item;
        tmp_attribute_value_1 = mod_consts[231];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_8, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_10 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_10 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_item);
        tmp_expression_value_9 = var_item;
        tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[231]);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 886;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 886;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_24 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 886;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_25 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_pth;
            var_pth = tmp_assign_source_25;
            Py_INCREF(var_pth);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 887;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_pth);
        tmp_args_element_value_6 = var_pth;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 887;
        tmp_iter_arg_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[233], tmp_args_element_value_6);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 887;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_26 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 887;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_27 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 887;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_28 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_mod_path;
            var_mod_path = tmp_assign_source_28;
            Py_INCREF(var_mod_path);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 888;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[234]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 888;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[3]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 888;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        if (var_pth == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[235]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 888;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_7 = var_pth;
        CHECK_OBJECT(var_mod_path);
        tmp_args_element_value_8 = var_mod_path;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 888;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 888;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_this_py;
            var_this_py = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 889;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[234]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 889;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[3]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 889;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        if (var_pth == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[235]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 889;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_9 = var_pth;
        CHECK_OBJECT(var_mod_path);
        tmp_args_element_value_10 = var_mod_path;
        tmp_args_element_value_11 = mod_consts[236];
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 889;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 889;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_init_py;
            var_init_py = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_12;
        int tmp_truth_name_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_4;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 890;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[234]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 890;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_this_py);
        tmp_args_element_value_12 = var_this_py;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 890;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[237], tmp_args_element_value_12);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 890;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 890;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_and_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 890;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_mod_path);
        tmp_expression_value_15 = var_mod_path;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[238]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 891;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 891;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[239]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 891;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 891;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_and_right_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        tmp_condition_result_11 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_11 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_mod_path);
        tmp_expression_value_16 = var_mod_path;
        tmp_subscript_value_3 = mod_consts[240];
        tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 892;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_to_import;
            var_to_import = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_13;
        int tmp_truth_name_5;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 893;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[234]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 893;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_init_py);
        tmp_args_element_value_13 = var_init_py;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 893;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[237], tmp_args_element_value_13);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 893;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 893;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_12 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(var_mod_path);
        tmp_assign_source_32 = var_mod_path;
        {
            PyObject *old = var_to_import;
            var_to_import = tmp_assign_source_32;
            Py_INCREF(var_to_import);
            Py_XDECREF(old);
        }

    }
    goto branch_end_12;
    branch_no_12:;
    goto loop_start_4;
    branch_end_12:;
    branch_end_11:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_to_import);
        tmp_cmp_expr_left_6 = var_to_import;
        tmp_cmp_expr_right_6 = mod_consts[166];
        tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 897;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    goto loop_start_4;
    branch_no_13:;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 901;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[241]);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 901;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_old_stdout;
            var_old_stdout = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 902;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[242]);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 902;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_old_stderr;
            var_old_stderr = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_assattr_target_1;
        if (var_StringIO == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[220]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 904;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_value_7 = var_StringIO;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 904;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 904;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 904;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[241], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 904;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_8;
        PyObject *tmp_assattr_target_2;
        if (var_StringIO == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[220]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 905;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_value_8 = var_StringIO;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 905;
        tmp_assattr_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 905;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_2);

            exception_lineno = 905;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[242], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 905;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
    }
    {
        PyObject *tmp_name_value_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_imported_value_2;
        tmp_mod_expr_left_1 = mod_consts[243];
        CHECK_OBJECT(var_name);
        tmp_tuple_element_2 = var_name;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_to_import);
        tmp_tuple_element_2 = var_to_import;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        tmp_name_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_name_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 906;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 906;
        tmp_imported_value_2 = IMPORT_MODULE1(tmp_name_value_3);
        Py_DECREF(tmp_name_value_3);
        if (tmp_imported_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 906;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_imported_value_2);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_12:;
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
        exception_keeper_tb_8 = MAKE_TRACEBACK(frame_9b9324fe212bbcd49e111e58e78ddafb, exception_keeper_lineno_8);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_keeper_tb_8 = ADD_TRACEBACK(exception_keeper_tb_8, frame_9b9324fe212bbcd49e111e58e78ddafb, exception_keeper_lineno_8);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8);
    // Tried code:
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_old_stdout);
        tmp_assattr_value_3 = var_old_stdout;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 908;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[241], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 908;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_old_stderr);
        tmp_assattr_value_4 = var_old_stderr;
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 909;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[242], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 909;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 903;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame) frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_13;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_13:;
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

    goto try_except_handler_11;
    // End of try:
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(var_old_stdout);
        tmp_assattr_value_5 = var_old_stdout;
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 908;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[241], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 908;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(var_old_stderr);
        tmp_assattr_value_6 = var_old_stderr;
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 909;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[242], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 909;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_10 == NULL) {
        exception_keeper_tb_10 = MAKE_TRACEBACK(frame_9b9324fe212bbcd49e111e58e78ddafb, exception_keeper_lineno_10);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_keeper_tb_10 = ADD_TRACEBACK(exception_keeper_tb_10, frame_9b9324fe212bbcd49e111e58e78ddafb, exception_keeper_lineno_10);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    // Tried code:
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_KeyboardInterrupt;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 912;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame) frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_14;
    goto branch_end_14;
    branch_no_14:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_8 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    goto try_continue_handler_14;
    goto branch_end_15;
    branch_no_15:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 900;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame) frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_14;
    branch_end_15:;
    branch_end_14:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_10;
    // try continue handler code:
    try_continue_handler_14:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    goto loop_start_4;
    // End of try:
    // End of try:
    try_end_8:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 887;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_9;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 886;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[244]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[244]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_item);
        tmp_args_element_value_14 = var_item;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 918;
        tmp_iter_arg_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_14);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_36 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_36 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 918;
                goto try_except_handler_15;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_iter_arg_6 = tmp_for_loop_4__iter_value;
        tmp_assign_source_37 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_38 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_38 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 918;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_39 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 918;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooooooooo";
                    exception_lineno = 918;
                    goto try_except_handler_17;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[57];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 918;
            goto try_except_handler_17;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_16;
    // End of try:
    try_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_15;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_40 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_40;
            Py_INCREF(var_n);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_41 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_41;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_v);
        tmp_getattr_target_1 = var_v;
        tmp_getattr_attr_1 = mod_consts[10];
        tmp_mod_expr_left_2 = mod_consts[243];
        if (var_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 920;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_tuple_element_3 = var_name;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_3 = var_n;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_3);
        tmp_getattr_default_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_getattr_default_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 920;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_assign_source_42 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_default_1);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 920;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_item_name;
            var_item_name = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        CHECK_OBJECT(var_v);
        tmp_getattr_target_2 = var_v;
        tmp_getattr_attr_2 = mod_consts[245];
        tmp_getattr_default_2 = Py_None;
        tmp_assign_source_43 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 921;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_mod_name;
            var_mod_name = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 5.
    exception_preserved_5 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_16 == NULL) {
        exception_keeper_tb_16 = MAKE_TRACEBACK(frame_9b9324fe212bbcd49e111e58e78ddafb, exception_keeper_lineno_16);
    } else if (exception_keeper_lineno_16 != 0) {
        exception_keeper_tb_16 = ADD_TRACEBACK(exception_keeper_tb_16, frame_9b9324fe212bbcd49e111e58e78ddafb, exception_keeper_lineno_16);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16);
    // Tried code:
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_9 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_16 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_4;
        tmp_mod_expr_left_3 = mod_consts[243];
        if (var_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 925;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_tuple_element_4 = var_name;
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_4 = var_n;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 1, tmp_tuple_element_4);
        tmp_assign_source_44 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        {
            PyObject *old = var_item_name;
            var_item_name = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = Py_None;
        {
            PyObject *old = var_mod_name;
            var_mod_name = tmp_assign_source_45;
            Py_INCREF(var_mod_name);
            Py_XDECREF(old);
        }

    }
    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 919;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame) frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_19;
    branch_end_16:;
    goto try_end_14;
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

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_15;
    // End of try:
    try_end_14:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    goto try_end_13;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_13:;
    {
        nuitka_bool tmp_condition_result_17;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        int tmp_truth_name_6;
        tmp_cmp_expr_left_10 = mod_consts[246];
        CHECK_OBJECT(var_item_name);
        tmp_cmp_expr_right_10 = var_item_name;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_10, tmp_cmp_expr_left_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_and_left_value_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(var_mod_name);
        tmp_truth_name_6 = CHECK_IF_TRUE(var_mod_name);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_and_right_value_4 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_17 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_17 = tmp_and_left_value_4;
        and_end_4:;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_5;
        tmp_mod_expr_left_4 = mod_consts[243];
        CHECK_OBJECT(var_mod_name);
        tmp_tuple_element_5 = var_mod_name;
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_4, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_item_name);
        tmp_tuple_element_5 = var_item_name;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_4, 1, tmp_tuple_element_5);
        tmp_assign_source_46 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 928;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = var_item_name;
            assert(old != NULL);
            var_item_name = tmp_assign_source_46;
            Py_DECREF(old);
        }

    }
    branch_no_17:;
    {
        bool tmp_condition_result_18;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_item_name);
        tmp_expression_value_20 = var_item_name;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[247]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 930;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if (var_name == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 930;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_add_expr_left_1 = var_name;
        tmp_add_expr_right_1 = mod_consts[246];
        tmp_args_element_value_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 930;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 930;
        tmp_operand_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 930;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 930;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_condition_result_18 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(var_v);
        tmp_isinstance_inst_4 = var_v;
        tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[248]);

        if (unlikely(tmp_isinstance_cls_4 == NULL)) {
            tmp_isinstance_cls_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[248]);
        }

        if (tmp_isinstance_cls_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 932;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 932;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 932;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    goto loop_start_5;
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        bool tmp_condition_result_20;
        PyObject *tmp_operand_value_5;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_16;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        if (var_inspect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 937;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_5 = var_inspect;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_16 = var_v;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 937;
        tmp_or_left_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[229], tmp_args_element_value_16);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 937;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 937;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        CHECK_OBJECT(var__all);
        tmp_cmp_expr_left_11 = var__all;
        tmp_cmp_expr_right_11 = Py_None;
        tmp_or_left_value_3 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? Py_True : Py_False;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(var_n);
        tmp_cmp_expr_left_12 = var_n;
        CHECK_OBJECT(var__all);
        tmp_cmp_expr_right_12 = var__all;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_12, tmp_cmp_expr_left_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 937;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_or_right_value_3 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        Py_INCREF(tmp_or_right_value_2);
        tmp_operand_value_5 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_operand_value_5 = tmp_or_left_value_2;
        or_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 937;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_condition_result_20 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    goto loop_start_5;
    branch_no_20:;
    branch_end_18:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_7;
        if (var_stack == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[225]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 939;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_21 = var_stack;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[73]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_mod_expr_left_5 = mod_consts[243];
        if (var_name == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 939;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_tuple_element_7 = var_name;
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_5, 0, tmp_tuple_element_7);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_7 = var_n;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_5, 1, tmp_tuple_element_7);
        tmp_tuple_element_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 939;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_element_value_17, 0, tmp_tuple_element_6);
        if (var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[249]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 939;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_6 = var_v;
        PyTuple_SET_ITEM0(tmp_args_element_value_17, 1, tmp_tuple_element_6);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_17);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 939;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_6);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 918;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto try_except_handler_15;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_18;
        int tmp_truth_name_7;
        if (var_inspect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 940;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = var_inspect;
        CHECK_OBJECT(var_item);
        tmp_args_element_value_18 = var_item;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 940;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[165], tmp_args_element_value_18);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 940;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_7);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_7);

            exception_lineno = 940;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_21 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_7);
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[250];
        {
            PyObject *old = var_kind;
            assert(old != NULL);
            var_kind = tmp_assign_source_47;
            Py_INCREF(var_kind);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[244]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[244]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 942;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_item);
        tmp_args_element_value_19 = var_item;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 942;
        tmp_iter_arg_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_19);
        if (tmp_iter_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 942;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_48 = MAKE_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 942;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_49 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_49 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 942;
                goto try_except_handler_20;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iter_arg_8;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_iter_arg_8 = tmp_for_loop_5__iter_value;
        tmp_assign_source_50 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 942;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_51 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 942;
            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_52 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 942;
            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooooooooo";
                    exception_lineno = 942;
                    goto try_except_handler_22;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[57];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 942;
            goto try_except_handler_22;
        }
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_21;
    // End of try:
    try_end_16:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_20;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_53 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_53;
            Py_INCREF(var_n);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_54 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_54;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_9;
        if (var_stack == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[225]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 943;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_expression_value_22 = var_stack;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[73]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 943;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_mod_expr_left_6 = mod_consts[243];
        CHECK_OBJECT(var_name);
        tmp_tuple_element_9 = var_name;
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_6, 0, tmp_tuple_element_9);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_9 = var_n;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_6, 1, tmp_tuple_element_9);
        tmp_tuple_element_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 943;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_args_element_value_20 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_element_value_20, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_v);
        tmp_tuple_element_8 = var_v;
        PyTuple_SET_ITEM0(tmp_args_element_value_20, 1, tmp_tuple_element_8);
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 943;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 943;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_8);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 942;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto try_except_handler_20;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    goto branch_end_21;
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_attribute_value_2;
        CHECK_OBJECT(var_item);
        tmp_expression_value_23 = var_item;
        tmp_attribute_value_2 = mod_consts[251];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_23, tmp_attribute_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 944;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[41];
        {
            PyObject *old = var_kind;
            assert(old != NULL);
            var_kind = tmp_assign_source_55;
            Py_INCREF(var_kind);
            Py_DECREF(old);
        }

    }
    branch_no_22:;
    branch_end_21:;
    branch_end_8:;
    // Tried code:
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_21;
        if (var_inspect == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 948;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_called_instance_7 = var_inspect;
        CHECK_OBJECT(var_item);
        tmp_args_element_value_21 = var_item;
        frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = 948;
        tmp_assign_source_56 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[164], tmp_args_element_value_21);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 948;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_doc;
            var_doc = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 6.
    exception_preserved_6 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_22 == NULL) {
        exception_keeper_tb_22 = MAKE_TRACEBACK(frame_9b9324fe212bbcd49e111e58e78ddafb, exception_keeper_lineno_22);
    } else if (exception_keeper_lineno_22 != 0) {
        exception_keeper_tb_22 = ADD_TRACEBACK(exception_keeper_tb_22, frame_9b9324fe212bbcd49e111e58e78ddafb, exception_keeper_lineno_22);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_22, &exception_keeper_value_22, &exception_keeper_tb_22);
    // Tried code:
    {
        bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        tmp_cmp_expr_left_13 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_13 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = Py_None;
        {
            PyObject *old = var_doc;
            var_doc = tmp_assign_source_57;
            Py_INCREF(var_doc);
            Py_XDECREF(old);
        }

    }
    goto branch_end_23;
    branch_no_23:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 947;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame) frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_24;
    branch_end_23:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(&exception_preserved_6);

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(&exception_preserved_6);

    goto try_end_19;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_19:;
    {
        bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(var_doc);
        tmp_cmp_expr_left_14 = var_doc;
        tmp_cmp_expr_right_14 = Py_None;
        tmp_condition_result_24 = (tmp_cmp_expr_left_14 != tmp_cmp_expr_right_14) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_doc);
        tmp_tuple_element_10 = var_doc;
        tmp_ass_subvalue_3 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_ass_subvalue_3, 0, tmp_tuple_element_10);
        CHECK_OBJECT(var_kind);
        tmp_tuple_element_10 = var_kind;
        PyTuple_SET_ITEM0(tmp_ass_subvalue_3, 1, tmp_tuple_element_10);
        CHECK_OBJECT(var_index);
        tmp_tuple_element_10 = var_index;
        PyTuple_SET_ITEM0(tmp_ass_subvalue_3, 2, tmp_tuple_element_10);
        if (var_cache == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 953;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = var_cache;
        if (var_name == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 953;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_3 = var_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 953;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_24:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 868;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    if (var_cache == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 955;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_cache;
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
        exception_tb = MAKE_TRACEBACK(frame_9b9324fe212bbcd49e111e58e78ddafb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b9324fe212bbcd49e111e58e78ddafb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b9324fe212bbcd49e111e58e78ddafb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b9324fe212bbcd49e111e58e78ddafb,
        type_description_1,
        par_module,
        par_import_modules,
        par_regenerate,
        var_inspect,
        var_StringIO,
        var_cache,
        var_mod,
        var_seen,
        var_index,
        var_stack,
        var_name,
        var_item,
        var_kind,
        var__all,
        var_pth,
        var_mod_path,
        var_this_py,
        var_init_py,
        var_to_import,
        var_old_stdout,
        var_old_stderr,
        var_n,
        var_v,
        var_item_name,
        var_mod_name,
        var_doc
    );


    // Release cached frame if used for exception.
    if (frame_9b9324fe212bbcd49e111e58e78ddafb == cache_frame_9b9324fe212bbcd49e111e58e78ddafb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b9324fe212bbcd49e111e58e78ddafb);
        cache_frame_9b9324fe212bbcd49e111e58e78ddafb = NULL;
    }

    assertFrameObject(frame_9b9324fe212bbcd49e111e58e78ddafb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_module);
    par_module = NULL;
    Py_XDECREF(var_inspect);
    var_inspect = NULL;
    Py_XDECREF(var_StringIO);
    var_StringIO = NULL;
    Py_XDECREF(var_cache);
    var_cache = NULL;
    Py_XDECREF(var_mod);
    var_mod = NULL;
    Py_XDECREF(var_seen);
    var_seen = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_stack);
    var_stack = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    Py_XDECREF(var_kind);
    var_kind = NULL;
    Py_XDECREF(var__all);
    var__all = NULL;
    Py_XDECREF(var_pth);
    var_pth = NULL;
    Py_XDECREF(var_mod_path);
    var_mod_path = NULL;
    Py_XDECREF(var_this_py);
    var_this_py = NULL;
    Py_XDECREF(var_init_py);
    var_init_py = NULL;
    Py_XDECREF(var_to_import);
    var_to_import = NULL;
    Py_XDECREF(var_old_stdout);
    var_old_stdout = NULL;
    Py_XDECREF(var_old_stderr);
    var_old_stderr = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_item_name);
    var_item_name = NULL;
    Py_XDECREF(var_mod_name);
    var_mod_name = NULL;
    Py_XDECREF(var_doc);
    var_doc = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_module);
    par_module = NULL;
    Py_XDECREF(var_inspect);
    var_inspect = NULL;
    Py_XDECREF(var_StringIO);
    var_StringIO = NULL;
    Py_XDECREF(var_cache);
    var_cache = NULL;
    Py_XDECREF(var_mod);
    var_mod = NULL;
    Py_XDECREF(var_seen);
    var_seen = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_stack);
    var_stack = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    Py_XDECREF(var_kind);
    var_kind = NULL;
    Py_XDECREF(var__all);
    var__all = NULL;
    Py_XDECREF(var_pth);
    var_pth = NULL;
    Py_XDECREF(var_mod_path);
    var_mod_path = NULL;
    Py_XDECREF(var_this_py);
    var_this_py = NULL;
    Py_XDECREF(var_init_py);
    var_init_py = NULL;
    Py_XDECREF(var_to_import);
    var_to_import = NULL;
    Py_XDECREF(var_old_stdout);
    var_old_stdout = NULL;
    Py_XDECREF(var_old_stderr);
    var_old_stderr = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_item_name);
    var_item_name = NULL;
    Py_XDECREF(var_mod_name);
    var_mod_name = NULL;
    Py_XDECREF(var_doc);
    var_doc = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_import_modules);
    Py_DECREF(par_import_modules);
    CHECK_OBJECT(par_regenerate);
    Py_DECREF(par_regenerate);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_import_modules);
    Py_DECREF(par_import_modules);
    CHECK_OBJECT(par_regenerate);
    Py_DECREF(par_regenerate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__17__getmembers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_item = python_pars[0];
    PyObject *var_inspect = NULL;
    PyObject *var_members = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_ff3b0347c1d4e7f1734ac1fb54c54f90;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    struct Nuitka_FrameObject *frame_9cdcda21851f05f2cb7fad8e15b25420_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_9cdcda21851f05f2cb7fad8e15b25420_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_ff3b0347c1d4e7f1734ac1fb54c54f90 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ff3b0347c1d4e7f1734ac1fb54c54f90)) {
        Py_XDECREF(cache_frame_ff3b0347c1d4e7f1734ac1fb54c54f90);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff3b0347c1d4e7f1734ac1fb54c54f90 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff3b0347c1d4e7f1734ac1fb54c54f90 = MAKE_FUNCTION_FRAME(codeobj_ff3b0347c1d4e7f1734ac1fb54c54f90, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff3b0347c1d4e7f1734ac1fb54c54f90->m_type_description == NULL);
    frame_ff3b0347c1d4e7f1734ac1fb54c54f90 = cache_frame_ff3b0347c1d4e7f1734ac1fb54c54f90;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff3b0347c1d4e7f1734ac1fb54c54f90);
    assert(Py_REFCNT(frame_ff3b0347c1d4e7f1734ac1fb54c54f90) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[141];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        frame_ff3b0347c1d4e7f1734ac1fb54c54f90->m_frame.f_lineno = 958;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 958;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_inspect == NULL);
        var_inspect = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_inspect);
        tmp_called_instance_1 = var_inspect;
        CHECK_OBJECT(par_item);
        tmp_args_element_value_1 = par_item;
        frame_ff3b0347c1d4e7f1734ac1fb54c54f90->m_frame.f_lineno = 960;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[253], tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 960;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_members == NULL);
        var_members = tmp_assign_source_2;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ff3b0347c1d4e7f1734ac1fb54c54f90, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ff3b0347c1d4e7f1734ac1fb54c54f90, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
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
        PyObject *tmp_assign_source_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_dir_arg_1;
            if (par_item == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[254]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 962;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }

            tmp_dir_arg_1 = par_item;
            tmp_iter_arg_1 = PyObject_Dir(tmp_dir_arg_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 962;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 962;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_5;
        }
        if (isFrameUnusable(cache_frame_9cdcda21851f05f2cb7fad8e15b25420_2)) {
            Py_XDECREF(cache_frame_9cdcda21851f05f2cb7fad8e15b25420_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9cdcda21851f05f2cb7fad8e15b25420_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9cdcda21851f05f2cb7fad8e15b25420_2 = MAKE_FUNCTION_FRAME(codeobj_9cdcda21851f05f2cb7fad8e15b25420, module_numpy$lib$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_9cdcda21851f05f2cb7fad8e15b25420_2->m_type_description == NULL);
        frame_9cdcda21851f05f2cb7fad8e15b25420_2 = cache_frame_9cdcda21851f05f2cb7fad8e15b25420_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9cdcda21851f05f2cb7fad8e15b25420_2);
        assert(Py_REFCNT(frame_9cdcda21851f05f2cb7fad8e15b25420_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 962;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_7;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_attribute_value_1;
            if (par_item == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[254]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 963;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }

            tmp_expression_value_1 = par_item;
            CHECK_OBJECT(outline_0_var_x);
            tmp_attribute_value_1 = outline_0_var_x;
            tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 963;
                type_description_2 = "oo";
                goto try_except_handler_5;
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
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_x);
            tmp_tuple_element_1 = outline_0_var_x;
            tmp_append_value_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_1);
                if (par_item == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[254]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 962;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }

                tmp_getattr_target_1 = par_item;
                CHECK_OBJECT(outline_0_var_x);
                tmp_getattr_attr_1 = outline_0_var_x;
                tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 962;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_append_value_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_append_value_1);
            goto try_except_handler_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 962;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        branch_no_2:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_3 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_3);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9cdcda21851f05f2cb7fad8e15b25420_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9cdcda21851f05f2cb7fad8e15b25420_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9cdcda21851f05f2cb7fad8e15b25420_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9cdcda21851f05f2cb7fad8e15b25420_2,
            type_description_2,
            outline_0_var_x,
            par_item
        );


        // Release cached frame if used for exception.
        if (frame_9cdcda21851f05f2cb7fad8e15b25420_2 == cache_frame_9cdcda21851f05f2cb7fad8e15b25420_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_9cdcda21851f05f2cb7fad8e15b25420_2);
            cache_frame_9cdcda21851f05f2cb7fad8e15b25420_2 = NULL;
        }

        assertFrameObject(frame_9cdcda21851f05f2cb7fad8e15b25420_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 962;
        goto try_except_handler_3;
        outline_result_1:;
        assert(var_members == NULL);
        var_members = tmp_assign_source_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 959;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ff3b0347c1d4e7f1734ac1fb54c54f90->m_frame) frame_ff3b0347c1d4e7f1734ac1fb54c54f90->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ff3b0347c1d4e7f1734ac1fb54c54f90, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff3b0347c1d4e7f1734ac1fb54c54f90->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff3b0347c1d4e7f1734ac1fb54c54f90, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff3b0347c1d4e7f1734ac1fb54c54f90,
        type_description_1,
        par_item,
        var_inspect,
        var_members
    );


    // Release cached frame if used for exception.
    if (frame_ff3b0347c1d4e7f1734ac1fb54c54f90 == cache_frame_ff3b0347c1d4e7f1734ac1fb54c54f90) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff3b0347c1d4e7f1734ac1fb54c54f90);
        cache_frame_ff3b0347c1d4e7f1734ac1fb54c54f90 = NULL;
    }

    assertFrameObject(frame_ff3b0347c1d4e7f1734ac1fb54c54f90);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    CHECK_OBJECT(var_members);
    tmp_return_value = var_members;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_inspect);
    Py_DECREF(var_inspect);
    var_inspect = NULL;
    CHECK_OBJECT(var_members);
    Py_DECREF(var_members);
    var_members = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_inspect);
    var_inspect = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__18_safe_eval(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_source = python_pars[0];
    PyObject *var_ast = NULL;
    struct Nuitka_FrameObject *frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf)) {
        Py_XDECREF(cache_frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf = MAKE_FUNCTION_FRAME(codeobj_25d3d6fcfa4eb2fd115b9fca51ec6dcf, module_numpy$lib$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf->m_type_description == NULL);
    frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf = cache_frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf);
    assert(Py_REFCNT(frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[255];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf->m_frame.f_lineno = 1017;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1017;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_ast == NULL);
        var_ast = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_ast);
        tmp_called_instance_1 = var_ast;
        CHECK_OBJECT(par_source);
        tmp_args_element_value_1 = par_source;
        frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf->m_frame.f_lineno = 1018;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[256], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1018;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf,
        type_description_1,
        par_source,
        var_ast
    );


    // Release cached frame if used for exception.
    if (frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf == cache_frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf);
        cache_frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf = NULL;
    }

    assertFrameObject(frame_25d3d6fcfa4eb2fd115b9fca51ec6dcf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ast);
    Py_DECREF(var_ast);
    var_ast = NULL;
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

    Py_XDECREF(var_ast);
    var_ast = NULL;
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
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_source);
    Py_DECREF(par_source);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__19__median_nancheck(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_result = python_pars[1];
    PyObject *par_axis = python_pars[2];
    PyObject *var_n = NULL;
    struct Nuitka_FrameObject *frame_c1f15982dc6c36aa698db1a4188943ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c1f15982dc6c36aa698db1a4188943ed = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c1f15982dc6c36aa698db1a4188943ed)) {
        Py_XDECREF(cache_frame_c1f15982dc6c36aa698db1a4188943ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1f15982dc6c36aa698db1a4188943ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1f15982dc6c36aa698db1a4188943ed = MAKE_FUNCTION_FRAME(codeobj_c1f15982dc6c36aa698db1a4188943ed, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c1f15982dc6c36aa698db1a4188943ed->m_type_description == NULL);
    frame_c1f15982dc6c36aa698db1a4188943ed = cache_frame_c1f15982dc6c36aa698db1a4188943ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c1f15982dc6c36aa698db1a4188943ed);
    assert(Py_REFCNT(frame_c1f15982dc6c36aa698db1a4188943ed) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_data);
        tmp_expression_value_1 = par_data;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[56]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1042;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1042;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_result);
    tmp_return_value = par_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[258]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1044;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[259]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1044;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_expression_value_3 = par_data;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[260]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 1044;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_axis);
        tmp_kw_call_value_0_1 = par_axis;
        frame_c1f15982dc6c36aa698db1a4188943ed->m_frame.f_lineno = 1044;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, mod_consts[261], kw_values, mod_consts[262]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 1044;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c1f15982dc6c36aa698db1a4188943ed->m_frame.f_lineno = 1044;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1044;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_n == NULL);
        var_n = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[258]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[263]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n);
        tmp_args_element_value_2 = var_n;
        frame_c1f15982dc6c36aa698db1a4188943ed->m_frame.f_lineno = 1046;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[264], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 1046;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_n);
        tmp_called_instance_2 = var_n;
        frame_c1f15982dc6c36aa698db1a4188943ed->m_frame.f_lineno = 1047;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[265],
            PyTuple_GET_ITEM(mod_consts[266], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1047;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_n;
            assert(old != NULL);
            var_n = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_3;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[258]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1048;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[267]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1048;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var_n == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[268]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1048;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_n;
        frame_c1f15982dc6c36aa698db1a4188943ed->m_frame.f_lineno = 1048;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[269]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 1048;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c1f15982dc6c36aa698db1a4188943ed->m_frame.f_lineno = 1048;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1048;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[1];
        tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1048;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_result);
        tmp_isinstance_inst_1 = par_result;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[258]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[270]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_data);
        tmp_expression_value_8 = par_data;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[54]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1052;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[271]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1052;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[258]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 1052;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[272]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 1052;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c1f15982dc6c36aa698db1a4188943ed->m_frame.f_lineno = 1052;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1052;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[258]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1054;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[272]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1054;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_result);
        tmp_ass_subscribed_1 = par_result;
        if (var_n == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[268]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1054;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = var_n;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1054;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    if (par_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[273]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 1055;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_result;
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
        exception_tb = MAKE_TRACEBACK(frame_c1f15982dc6c36aa698db1a4188943ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1f15982dc6c36aa698db1a4188943ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1f15982dc6c36aa698db1a4188943ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1f15982dc6c36aa698db1a4188943ed,
        type_description_1,
        par_data,
        par_result,
        par_axis,
        var_n
    );


    // Release cached frame if used for exception.
    if (frame_c1f15982dc6c36aa698db1a4188943ed == cache_frame_c1f15982dc6c36aa698db1a4188943ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c1f15982dc6c36aa698db1a4188943ed);
        cache_frame_c1f15982dc6c36aa698db1a4188943ed = NULL;
    }

    assertFrameObject(frame_c1f15982dc6c36aa698db1a4188943ed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_n);
    var_n = NULL;
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

    Py_XDECREF(var_n);
    var_n = NULL;
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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_result);
    Py_DECREF(par_result);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_result);
    Py_DECREF(par_result);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$utils$$$function__20__opt_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var___cpu_features__ = NULL;
    PyObject *var___cpu_baseline__ = NULL;
    PyObject *var___cpu_dispatch__ = NULL;
    PyObject *var_enabled_features = NULL;
    PyObject *var_feature = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_4ab5c6df6febbc8b697ae6c43872a830;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_4ab5c6df6febbc8b697ae6c43872a830 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4ab5c6df6febbc8b697ae6c43872a830)) {
        Py_XDECREF(cache_frame_4ab5c6df6febbc8b697ae6c43872a830);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ab5c6df6febbc8b697ae6c43872a830 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ab5c6df6febbc8b697ae6c43872a830 = MAKE_FUNCTION_FRAME(codeobj_4ab5c6df6febbc8b697ae6c43872a830, module_numpy$lib$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ab5c6df6febbc8b697ae6c43872a830->m_type_description == NULL);
    frame_4ab5c6df6febbc8b697ae6c43872a830 = cache_frame_4ab5c6df6febbc8b697ae6c43872a830;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ab5c6df6febbc8b697ae6c43872a830);
    assert(Py_REFCNT(frame_4ab5c6df6febbc8b697ae6c43872a830) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[275];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[276];
        tmp_level_value_1 = mod_consts[1];
        frame_4ab5c6df6febbc8b697ae6c43872a830->m_frame.f_lineno = 1068;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1068;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$lib$utils,
                mod_consts[277],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[277]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1068;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var___cpu_features__ == NULL);
        var___cpu_features__ = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$lib$utils,
                mod_consts[278],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[278]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1068;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var___cpu_baseline__ == NULL);
        var___cpu_baseline__ = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_numpy$lib$utils,
                mod_consts[279],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[279]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1068;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var___cpu_dispatch__ == NULL);
        var___cpu_dispatch__ = tmp_assign_source_4;
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
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var___cpu_baseline__);
        tmp_len_arg_1 = var___cpu_baseline__;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1072;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_and_left_value_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var___cpu_dispatch__);
        tmp_len_arg_2 = var___cpu_dispatch__;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1072;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 0;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
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
    tmp_return_value = mod_consts[97];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[28];
        CHECK_OBJECT(var___cpu_baseline__);
        tmp_iterable_value_1 = var___cpu_baseline__;
        tmp_assign_source_5 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_enabled_features == NULL);
        var_enabled_features = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        if (var___cpu_dispatch__ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[279]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1076;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = var___cpu_dispatch__;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1076;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
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
                type_description_1 = "ooooo";
                exception_lineno = 1076;
                goto try_except_handler_3;
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
            PyObject *old = var_feature;
            var_feature = tmp_assign_source_8;
            Py_INCREF(var_feature);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var___cpu_features__);
        tmp_expression_value_1 = var___cpu_features__;
        CHECK_OBJECT(var_feature);
        tmp_subscript_value_1 = var_feature;
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1077;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 1077;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        if (var_enabled_features == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[280]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1078;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_iadd_expr_left_1 = var_enabled_features;
        tmp_tuple_element_1 = mod_consts[28];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_feature);
            tmp_format_value_1 = var_feature;
            tmp_format_spec_1 = mod_consts[97];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1078;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[281];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_iadd_expr_right_1 = PyUnicode_Join(mod_consts[97], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1078;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1078;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_9 = tmp_iadd_expr_left_1;
        var_enabled_features = tmp_assign_source_9;

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        if (var_enabled_features == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[280]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1080;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_iadd_expr_left_2 = var_enabled_features;
        tmp_tuple_element_2 = mod_consts[28];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_feature);
            tmp_format_value_2 = var_feature;
            tmp_format_spec_2 = mod_consts[97];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1080;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[282];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_iadd_expr_right_2 = PyUnicode_Join(mod_consts[97], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1080;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1080;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_10 = tmp_iadd_expr_left_2;
        var_enabled_features = tmp_assign_source_10;

    }
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 1076;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_enabled_features == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[280]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 1082;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_enabled_features;
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
        exception_tb = MAKE_TRACEBACK(frame_4ab5c6df6febbc8b697ae6c43872a830, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ab5c6df6febbc8b697ae6c43872a830->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ab5c6df6febbc8b697ae6c43872a830, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ab5c6df6febbc8b697ae6c43872a830,
        type_description_1,
        var___cpu_features__,
        var___cpu_baseline__,
        var___cpu_dispatch__,
        var_enabled_features,
        var_feature
    );


    // Release cached frame if used for exception.
    if (frame_4ab5c6df6febbc8b697ae6c43872a830 == cache_frame_4ab5c6df6febbc8b697ae6c43872a830) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ab5c6df6febbc8b697ae6c43872a830);
        cache_frame_4ab5c6df6febbc8b697ae6c43872a830 = NULL;
    }

    assertFrameObject(frame_4ab5c6df6febbc8b697ae6c43872a830);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var___cpu_features__);
    Py_DECREF(var___cpu_features__);
    var___cpu_features__ = NULL;
    CHECK_OBJECT(var___cpu_baseline__);
    Py_DECREF(var___cpu_baseline__);
    var___cpu_baseline__ = NULL;
    Py_XDECREF(var___cpu_dispatch__);
    var___cpu_dispatch__ = NULL;
    Py_XDECREF(var_enabled_features);
    var_enabled_features = NULL;
    Py_XDECREF(var_feature);
    var_feature = NULL;
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

    Py_XDECREF(var___cpu_features__);
    var___cpu_features__ = NULL;
    Py_XDECREF(var___cpu_baseline__);
    var___cpu_baseline__ = NULL;
    Py_XDECREF(var___cpu_dispatch__);
    var___cpu_dispatch__ = NULL;
    Py_XDECREF(var_enabled_features);
    var_enabled_features = NULL;
    Py_XDECREF(var_feature);
    var_feature = NULL;
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



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__10__split_line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__10__split_line,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ff067e0a7ec6eed8bb4bc60e2c8d6aa5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__11__makenamedict(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__11__makenamedict,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_966e628c568f91f6939a903c49958ec7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__12__info(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__12__info,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4d83f32de42d190e21d3b44cc266c121,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[140],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__12__info$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__12__info$$$function__1_lambda,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_ab9443c1735a0b37fd75fd6be215029e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__13_info(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__13_info,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d9608459b9c1cd333f53fd62a16f955b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[175],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__14_source(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__14_source,
        mod_consts[315],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fca1ff7f44a67480c7268c05de037535,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[180],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__15_lookfor(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__15_lookfor,
        mod_consts[320],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_92af46e18b6c7f6a499f2205e01dc1f7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[206],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__15_lookfor$$$function__1_relevance(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__15_lookfor$$$function__1_relevance,
        mod_consts[189],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_7e72cd11a0ca026a310ca131b09e3a84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__15_lookfor$$$function__2_relevance_value(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__15_lookfor$$$function__2_relevance_value,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_b5ae7b847100d75976520ad1d86360cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__16__lookfor_generate_cache() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__16__lookfor_generate_cache,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9b9324fe212bbcd49e111e58e78ddafb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[252],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__17__getmembers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__17__getmembers,
        mod_consts[244],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ff3b0347c1d4e7f1734ac1fb54c54f90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__18_safe_eval() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__18_safe_eval,
        mod_consts[321],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_25d3d6fcfa4eb2fd115b9fca51ec6dcf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[257],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__19__median_nancheck() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__19__median_nancheck,
        mod_consts[322],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c1f15982dc6c36aa698db1a4188943ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[274],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__1_get_include() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__1_get_include,
        mod_consts[300],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0abc1f6ee2125ee05fd4224659e5d4ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__20__opt_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__20__opt_info,
        mod_consts[323],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4ab5c6df6febbc8b697ae6c43872a830,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[283],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__2__set_function_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__2__set_function_name,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0f29b80c6b58fc11e0bfa393fbf249f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__3___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__3___init__,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[305],
#endif
        codeobj_12bba6daef77b002676d7d22b0ede197,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__4___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__4___call__,
        mod_consts[251],
#if PYTHON_VERSION >= 0x300
        mod_consts[306],
#endif
        codeobj_49c9d912f8ae115fed0ae917b4480bf1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__4___call__$$$function__1_newfunc(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__4___call__$$$function__1_newfunc,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[19],
#endif
        codeobj_6fd6c02c5d77016db26034b49efdfbfe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[17],
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__5__get_indent() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__5__get_indent,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_709f72af68384afb12afc4fb08cbfc9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__6_deprecate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__6_deprecate,
        mod_consts[308],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e026e9e7b0d6c2e00ec46e2009f1e71c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__7_deprecate_with_doc() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__7_deprecate_with_doc,
        mod_consts[309],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_93597cab761773e33af96108d13a49f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[48],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__8_byte_bounds() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__8_byte_bounds,
        mod_consts[310],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f47a29c492d2c3775c37b749aac75a16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$utils$$$function__9_who(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$utils$$$function__9_who,
        mod_consts[312],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c34ce0985d8a7ae3d6a533ec88dab24c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$utils,
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

function_impl_code functable_numpy$lib$utils[] = {
    impl_numpy$lib$utils$$$function__4___call__$$$function__1_newfunc,
    impl_numpy$lib$utils$$$function__12__info$$$function__1_lambda,
    impl_numpy$lib$utils$$$function__15_lookfor$$$function__1_relevance,
    impl_numpy$lib$utils$$$function__15_lookfor$$$function__2_relevance_value,
    impl_numpy$lib$utils$$$function__1_get_include,
    impl_numpy$lib$utils$$$function__2__set_function_name,
    impl_numpy$lib$utils$$$function__3___init__,
    impl_numpy$lib$utils$$$function__4___call__,
    impl_numpy$lib$utils$$$function__5__get_indent,
    impl_numpy$lib$utils$$$function__6_deprecate,
    impl_numpy$lib$utils$$$function__7_deprecate_with_doc,
    impl_numpy$lib$utils$$$function__8_byte_bounds,
    impl_numpy$lib$utils$$$function__9_who,
    impl_numpy$lib$utils$$$function__10__split_line,
    impl_numpy$lib$utils$$$function__11__makenamedict,
    impl_numpy$lib$utils$$$function__12__info,
    impl_numpy$lib$utils$$$function__13_info,
    impl_numpy$lib$utils$$$function__14_source,
    impl_numpy$lib$utils$$$function__15_lookfor,
    impl_numpy$lib$utils$$$function__16__lookfor_generate_cache,
    impl_numpy$lib$utils$$$function__17__getmembers,
    impl_numpy$lib$utils$$$function__18_safe_eval,
    impl_numpy$lib$utils$$$function__19__median_nancheck,
    impl_numpy$lib$utils$$$function__20__opt_info,
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

    function_impl_code *current = functable_numpy$lib$utils;
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

    if (offset > sizeof(functable_numpy$lib$utils) || offset < 0) {
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
        functable_numpy$lib$utils[offset],
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
        module_numpy$lib$utils,
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
PyObject *modulecode_numpy$lib$utils(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy.lib.utils");

    // Store the module for future use.
    module_numpy$lib$utils = module;

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
        PRINT_STRING("numpy.lib.utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy.lib.utils: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy.lib.utils: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnumpy$lib$utils\n");

    moduledict_numpy$lib$utils = MODULE_DICT(module_numpy$lib$utils);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[97]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_numpy$lib$utils);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_f6a86b3b5ca122b9219400dfea1f49ed;
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
    PyObject *locals_numpy$lib$utils$$$class__1__Deprecate_53 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[284];
        UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_2);
    }
    frame_f6a86b3b5ca122b9219400dfea1f49ed = MAKE_MODULE_FRAME(codeobj_f6a86b3b5ca122b9219400dfea1f49ed, module_numpy$lib$utils);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f6a86b3b5ca122b9219400dfea1f49ed);
    assert(Py_REFCNT(frame_f6a86b3b5ca122b9219400dfea1f49ed) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[284];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[286], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[287], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[30];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_TYPES();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[289];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[1];
        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[36];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[1];
        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[290];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[291];
        tmp_level_value_4 = mod_consts[1];
        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 8;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$lib$utils,
                mod_consts[292],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[292]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$lib$utils,
                mod_consts[293],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[293]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_numpy$lib$utils,
                mod_consts[294],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[294]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[295];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[296];
        tmp_level_value_5 = mod_consts[1];
        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 9;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_numpy$lib$utils,
                mod_consts[297],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[297]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[8];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[298];
        tmp_level_value_6 = mod_consts[1];
        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 10;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_numpy$lib$utils,
                mod_consts[67],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[67]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_numpy$lib$utils,
                mod_consts[248],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[248]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_numpy$lib$utils,
                mod_consts[53],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[53]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_18);
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
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[0];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_numpy$lib$utils;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = mod_consts[1];
        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 11;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_LIST12(mod_consts[299]);
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$utils$$$function__1_get_include();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_numpy$lib$utils$$$function__2__set_function_name();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_numpy$lib$utils$$$class__1__Deprecate_53 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[301];
        tmp_res = PyDict_SetItem(locals_numpy$lib$utils$$$class__1__Deprecate_53, mod_consts[245], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[302];
        tmp_res = PyDict_SetItem(locals_numpy$lib$utils$$$class__1__Deprecate_53, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[45];
        tmp_res = PyDict_SetItem(locals_numpy$lib$utils$$$class__1__Deprecate_53, mod_consts[303], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[304];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_numpy$lib$utils$$$function__3___init__(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_numpy$lib$utils$$$class__1__Deprecate_53, mod_consts[166], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$utils$$$function__4___call__();

        tmp_res = PyDict_SetItem(locals_numpy$lib$utils$$$class__1__Deprecate_53, mod_consts[251], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[45];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[307];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_numpy$lib$utils$$$class__1__Deprecate_53;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 53;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_25 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_numpy$lib$utils$$$class__1__Deprecate_53);
        locals_numpy$lib$utils$$$class__1__Deprecate_53 = NULL;
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

        Py_DECREF(locals_numpy$lib$utils$$$class__1__Deprecate_53);
        locals_numpy$lib$utils$$$class__1__Deprecate_53 = NULL;
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
        exception_lineno = 53;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_25);
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
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_numpy$lib$utils$$$function__5__get_indent();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$utils$$$function__6_deprecate();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_numpy$lib$utils$$$function__7_deprecate_with_doc();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_numpy$lib$utils$$$function__8_byte_bounds();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[311];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_31 = MAKE_FUNCTION_numpy$lib$utils$$$function__9_who(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_numpy$lib$utils$$$function__10__split_line();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[313];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_35 = MAKE_FUNCTION_numpy$lib$utils$$$function__11__makenamedict(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[311];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_36 = MAKE_FUNCTION_numpy$lib$utils$$$function__12__info(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_defaults_5;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[297]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 485;
        tmp_called_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[313]);

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = mod_consts[314];
        Py_INCREF(tmp_defaults_5);


        tmp_args_element_value_1 = MAKE_FUNCTION_numpy$lib$utils$$$function__13_info(tmp_defaults_5);

        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 485;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_defaults_6;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[297]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 635;
        tmp_called_value_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[313]);

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_tuple_element_2 == NULL));
        tmp_defaults_6 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_6, 0, tmp_tuple_element_2);


        tmp_args_element_value_2 = MAKE_FUNCTION_numpy$lib$utils$$$function__14_source(tmp_defaults_6);

        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 635;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[289]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[289]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[316]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[317];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[289]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[289]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 691;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[318]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 691;

            goto frame_exception_exit_1;
        }
        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 691;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_defaults_7;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[297]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 694;

            goto frame_exception_exit_1;
        }
        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 694;
        tmp_called_value_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[313]);

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 694;

            goto frame_exception_exit_1;
        }
        tmp_defaults_7 = mod_consts[319];
        Py_INCREF(tmp_defaults_7);


        tmp_args_element_value_5 = MAKE_FUNCTION_numpy$lib$utils$$$function__15_lookfor(tmp_defaults_7);

        frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame.f_lineno = 694;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 694;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_41);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f6a86b3b5ca122b9219400dfea1f49ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6a86b3b5ca122b9219400dfea1f49ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6a86b3b5ca122b9219400dfea1f49ed, exception_lineno);
    }



    assertFrameObject(frame_f6a86b3b5ca122b9219400dfea1f49ed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_numpy$lib$utils$$$function__16__lookfor_generate_cache();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_numpy$lib$utils$$$function__17__getmembers();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_numpy$lib$utils$$$function__18_safe_eval();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_numpy$lib$utils$$$function__19__median_nancheck();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_numpy$lib$utils$$$function__20__opt_info();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$utils, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_46);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy.lib.utils", false);

    Py_INCREF(module_numpy$lib$utils);
    return module_numpy$lib$utils;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$lib$utils", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
