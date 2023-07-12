/* Generated code for Python module 'hpack.hpack'
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

/* The "module_hpack$hpack" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_hpack$hpack;
PyDictObject *moduledict_hpack$hpack;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[227];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[227];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("hpack.hpack"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 227; i++) {
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
void checkModuleConstants_hpack$hpack(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 227; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_12ec1ca31745a5b20a0d2637ef33697b;
static PyCodeObject *codeobj_0d936497345b7e8cd578e121308a5009;
static PyCodeObject *codeobj_f783f57bef85bb6ec3f7c20e1a6930c6;
static PyCodeObject *codeobj_01b53c47c62c4e2270188d9b5558752f;
static PyCodeObject *codeobj_851762171788330200136f4e1ff1156d;
static PyCodeObject *codeobj_4e1da3eccdbf370e9b101b453751504a;
static PyCodeObject *codeobj_3347af7e42cf2c393b98c04c9f7da658;
static PyCodeObject *codeobj_59d49020f39375b64a56d5d9ad1ae7d9;
static PyCodeObject *codeobj_125ac47a185d0dad6da1ad59fa6e6213;
static PyCodeObject *codeobj_8e690d9c28bc79947c877a8a98965b5b;
static PyCodeObject *codeobj_036e7029369dbf2a41dfc45942e907d9;
static PyCodeObject *codeobj_6f63533dfdecea34daa474682bca6a50;
static PyCodeObject *codeobj_4797e8f15524916990fce641d93da036;
static PyCodeObject *codeobj_11006d6eb4702e95c7cd01b63582acbe;
static PyCodeObject *codeobj_9503a25864e006b89721a664e0a8a807;
static PyCodeObject *codeobj_bbac6ebaaf619077febf076bd97c2d87;
static PyCodeObject *codeobj_62b34a3998558ef09c68972df4d5ca8e;
static PyCodeObject *codeobj_2b6de8bd0abdfe03742e317b94248b7d;
static PyCodeObject *codeobj_35a3daad194f9c344619cccb6c3ac635;
static PyCodeObject *codeobj_2aa038c9655a3869524c6b7861f649f6;
static PyCodeObject *codeobj_3054d0369a555433443603c4e80d0540;
static PyCodeObject *codeobj_f8c0c39ee29418b5549fabc7aec7a93f;
static PyCodeObject *codeobj_0dc5484c2db58b6d4c113fe22d4c1114;
static PyCodeObject *codeobj_ec0631e93092331eccaeae2f60849da9;
static PyCodeObject *codeobj_3a392fc45d9d2d13a3ac11075e066f73;
static PyCodeObject *codeobj_274133b2768a31b1954e55d1b2686f90;
static PyCodeObject *codeobj_c33ce4527df12cf9b18b25a79d675a26;
static PyCodeObject *codeobj_28441455946dd231ed07bd4c7b868355;
static PyCodeObject *codeobj_21a43f0d34f1fd2d3249885a5ab786b6;
static PyCodeObject *codeobj_02fd74b5456b6ee55d4a0d69c2544235;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[135]; CHECK_OBJECT(module_filename_obj);
    codeobj_12ec1ca31745a5b20a0d2637ef33697b = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[201], NULL, 1, 0, 0);
    codeobj_0d936497345b7e8cd578e121308a5009 = MAKE_CODE_OBJECT(module_filename_obj, 515, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[203], NULL, 1, 0, 0);
    codeobj_f783f57bef85bb6ec3f7c20e1a6930c6 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[204], NULL, 1, 0, 0);
    codeobj_01b53c47c62c4e2270188d9b5558752f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[205], mod_consts[205], NULL, NULL, 0, 0, 0);
    codeobj_851762171788330200136f4e1ff1156d = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_NOFREE, mod_consts[190], mod_consts[190], mod_consts[206], NULL, 0, 0, 0);
    codeobj_4e1da3eccdbf370e9b101b453751504a = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_NOFREE, mod_consts[167], mod_consts[167], mod_consts[206], NULL, 0, 0, 0);
    codeobj_3347af7e42cf2c393b98c04c9f7da658 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[207], NULL, 1, 0, 0);
    codeobj_59d49020f39375b64a56d5d9ad1ae7d9 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[208], NULL, 2, 0, 0);
    codeobj_125ac47a185d0dad6da1ad59fa6e6213 = MAKE_CODE_OBJECT(module_filename_obj, 519, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[207], NULL, 1, 0, 0);
    codeobj_8e690d9c28bc79947c877a8a98965b5b = MAKE_CODE_OBJECT(module_filename_obj, 542, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[209], NULL, 2, 0, 0);
    codeobj_036e7029369dbf2a41dfc45942e907d9 = MAKE_CODE_OBJECT(module_filename_obj, 557, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[210], NULL, 3, 0, 0);
    codeobj_6f63533dfdecea34daa474682bca6a50 = MAKE_CODE_OBJECT(module_filename_obj, 554, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[211], NULL, 2, 0, 0);
    codeobj_4797e8f15524916990fce641d93da036 = MAKE_CODE_OBJECT(module_filename_obj, 551, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[211], NULL, 2, 0, 0);
    codeobj_11006d6eb4702e95c7cd01b63582acbe = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[212], NULL, 1, 0, 0);
    codeobj_9503a25864e006b89721a664e0a8a807 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[213], NULL, 2, 0, 0);
    codeobj_bbac6ebaaf619077febf076bd97c2d87 = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[214], NULL, 5, 0, 0);
    codeobj_62b34a3998558ef09c68972df4d5ca8e = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[215], NULL, 5, 0, 0);
    codeobj_2b6de8bd0abdfe03742e317b94248b7d = MAKE_CODE_OBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[216], NULL, 1, 0, 0);
    codeobj_35a3daad194f9c344619cccb6c3ac635 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[217], NULL, 1, 0, 0);
    codeobj_2aa038c9655a3869524c6b7861f649f6 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[218], NULL, 2, 0, 0);
    codeobj_3054d0369a555433443603c4e80d0540 = MAKE_CODE_OBJECT(module_filename_obj, 529, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[219], NULL, 2, 0, 0);
    codeobj_f8c0c39ee29418b5549fabc7aec7a93f = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[220], NULL, 4, 0, 0);
    codeobj_0dc5484c2db58b6d4c113fe22d4c1114 = MAKE_CODE_OBJECT(module_filename_obj, 434, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[221], NULL, 3, 0, 0);
    codeobj_ec0631e93092331eccaeae2f60849da9 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[222], NULL, 2, 0, 0);
    codeobj_3a392fc45d9d2d13a3ac11075e066f73 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[223], NULL, 3, 0, 0);
    codeobj_274133b2768a31b1954e55d1b2686f90 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[224], NULL, 2, 0, 0);
    codeobj_c33ce4527df12cf9b18b25a79d675a26 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[207], NULL, 1, 0, 0);
    codeobj_28441455946dd231ed07bd4c7b868355 = MAKE_CODE_OBJECT(module_filename_obj, 424, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[207], NULL, 1, 0, 0);
    codeobj_21a43f0d34f1fd2d3249885a5ab786b6 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[225], NULL, 2, 0, 0);
    codeobj_02fd74b5456b6ee55d4a0d69c2544235 = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[225], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__10_add(PyObject *defaults);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__11__encode_indexed();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__12__encode_literal(PyObject *defaults);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__13__encode_indexed_literal(PyObject *defaults);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__14__encode_table_size_change();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__15___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__16_header_table_size();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__17_header_table_size();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__18_decode(PyObject *defaults);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__19__assert_valid_table_size();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__1__unicode_if_needed();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__20__update_encoding_context();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__21__decode_indexed();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__22__decode_literal_no_index();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__23__decode_literal_index();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__24__decode_literal();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__2_encode_integer();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__3_decode_integer();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__4__dict_to_iterable();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__5__to_bytes();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__6___init__();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__7_header_table_size();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__8_header_table_size();


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__9_encode(PyObject *defaults);


// The module function definitions.
static PyObject *impl_hpack$hpack$$$function__1__unicode_if_needed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_header = python_pars[0];
    PyObject *par_raw = python_pars[1];
    PyObject *var_name = NULL;
    PyObject *var_value = NULL;
    struct Nuitka_FrameObject *frame_2aa038c9655a3869524c6b7861f649f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2aa038c9655a3869524c6b7861f649f6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2aa038c9655a3869524c6b7861f649f6)) {
        Py_XDECREF(cache_frame_2aa038c9655a3869524c6b7861f649f6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2aa038c9655a3869524c6b7861f649f6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2aa038c9655a3869524c6b7861f649f6 = MAKE_FUNCTION_FRAME(codeobj_2aa038c9655a3869524c6b7861f649f6, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2aa038c9655a3869524c6b7861f649f6->m_type_description == NULL);
    frame_2aa038c9655a3869524c6b7861f649f6 = cache_frame_2aa038c9655a3869524c6b7861f649f6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2aa038c9655a3869524c6b7861f649f6);
    assert(Py_REFCNT(frame_2aa038c9655a3869524c6b7861f649f6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_header);
        tmp_expression_value_1 = par_header;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2aa038c9655a3869524c6b7861f649f6->m_frame.f_lineno = 49;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_header);
        tmp_expression_value_2 = par_header;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2aa038c9655a3869524c6b7861f649f6->m_frame.f_lineno = 50;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_raw);
        tmp_operand_value_1 = par_raw;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
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
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_name);
        tmp_expression_value_3 = var_name;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2aa038c9655a3869524c6b7861f649f6->m_frame.f_lineno = 52;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[4]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_name;
            assert(old != NULL);
            var_name = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_value);
        tmp_expression_value_4 = var_value;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2aa038c9655a3869524c6b7861f649f6->m_frame.f_lineno = 53;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[4]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_header);
        tmp_expression_value_5 = par_header;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_5);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_3 = var_name;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_4 = var_value;
        frame_2aa038c9655a3869524c6b7861f649f6->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
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
        exception_tb = MAKE_TRACEBACK(frame_2aa038c9655a3869524c6b7861f649f6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2aa038c9655a3869524c6b7861f649f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2aa038c9655a3869524c6b7861f649f6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2aa038c9655a3869524c6b7861f649f6,
        type_description_1,
        par_header,
        par_raw,
        var_name,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_2aa038c9655a3869524c6b7861f649f6 == cache_frame_2aa038c9655a3869524c6b7861f649f6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2aa038c9655a3869524c6b7861f649f6);
        cache_frame_2aa038c9655a3869524c6b7861f649f6 = NULL;
    }

    assertFrameObject(frame_2aa038c9655a3869524c6b7861f649f6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_name);
    Py_DECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_value);
    Py_DECREF(var_value);
    var_value = NULL;
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

    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
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
    CHECK_OBJECT(par_header);
    Py_DECREF(par_header);
    CHECK_OBJECT(par_raw);
    Py_DECREF(par_raw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_header);
    Py_DECREF(par_header);
    CHECK_OBJECT(par_raw);
    Py_DECREF(par_raw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__2_encode_integer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_integer = python_pars[0];
    PyObject *par_prefix_bits = python_pars[1];
    PyObject *var_max_number = NULL;
    PyObject *var_elements = NULL;
    struct Nuitka_FrameObject *frame_274133b2768a31b1954e55d1b2686f90;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_274133b2768a31b1954e55d1b2686f90 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_274133b2768a31b1954e55d1b2686f90)) {
        Py_XDECREF(cache_frame_274133b2768a31b1954e55d1b2686f90);

#if _DEBUG_REFCOUNTS
        if (cache_frame_274133b2768a31b1954e55d1b2686f90 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_274133b2768a31b1954e55d1b2686f90 = MAKE_FUNCTION_FRAME(codeobj_274133b2768a31b1954e55d1b2686f90, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_274133b2768a31b1954e55d1b2686f90->m_type_description == NULL);
    frame_274133b2768a31b1954e55d1b2686f90 = cache_frame_274133b2768a31b1954e55d1b2686f90;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_274133b2768a31b1954e55d1b2686f90);
    assert(Py_REFCNT(frame_274133b2768a31b1954e55d1b2686f90) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[8];
        CHECK_OBJECT(par_integer);
        tmp_args_element_value_2 = par_integer;
        CHECK_OBJECT(par_prefix_bits);
        tmp_args_element_value_3 = par_prefix_bits;
        frame_274133b2768a31b1954e55d1b2686f90->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[7],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_integer);
        tmp_cmp_expr_left_1 = par_integer;
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[9];
        CHECK_OBJECT(par_integer);
        tmp_mod_expr_right_1 = par_integer;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_274133b2768a31b1954e55d1b2686f90->m_frame.f_lineno = 65;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 65;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_prefix_bits);
        tmp_cmp_expr_left_2 = par_prefix_bits;
        tmp_cmp_expr_right_2 = mod_consts[2];
        tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_prefix_bits);
        tmp_cmp_expr_left_3 = par_prefix_bits;
        tmp_cmp_expr_right_3 = mod_consts[10];
        tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = mod_consts[11];
        CHECK_OBJECT(par_prefix_bits);
        tmp_mod_expr_right_2 = par_prefix_bits;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_274133b2768a31b1954e55d1b2686f90->m_frame.f_lineno = 70;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 70;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prefix_bits);
        tmp_subscript_value_1 = par_prefix_bits;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_max_number == NULL);
        var_max_number = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_integer);
        tmp_cmp_expr_left_4 = par_integer;
        CHECK_OBJECT(var_max_number);
        tmp_cmp_expr_right_4 = var_max_number;
        tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
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
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_integer);
        tmp_list_element_1 = par_integer;
        tmp_bytearray_arg_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_bytearray_arg_1, 0, tmp_list_element_1);
        tmp_return_value = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
        Py_DECREF(tmp_bytearray_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT(var_max_number);
        tmp_list_element_2 = var_max_number;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_2, 0, tmp_list_element_2);
        assert(var_elements == NULL);
        var_elements = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        CHECK_OBJECT(par_integer);
        tmp_isub_expr_left_1 = par_integer;
        CHECK_OBJECT(var_max_number);
        tmp_isub_expr_right_1 = var_max_number;
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_isub_expr_left_1;
        par_integer = tmp_assign_source_3;

    }
    loop_start_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        if (par_integer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_5 = par_integer;
        tmp_cmp_expr_right_5 = mod_consts[14];
        tmp_operand_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_end_1;
    branch_no_4:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        if (var_elements == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = var_elements;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_integer == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_bitand_expr_left_1 = par_integer;
        tmp_bitand_expr_right_1 = mod_consts[17];
        tmp_add_expr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[14];
        tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_274133b2768a31b1954e55d1b2686f90->m_frame.f_lineno = 83;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_irshift_expr_left_1;
        PyObject *tmp_irshift_expr_right_1;
        if (par_integer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_irshift_expr_left_1 = par_integer;
        tmp_irshift_expr_right_1 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_RSHIFT_OBJECT_LONG(&tmp_irshift_expr_left_1, tmp_irshift_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_irshift_expr_left_1;
        par_integer = tmp_assign_source_4;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 82;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        if (var_elements == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = var_elements;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[16]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_integer == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = par_integer;
        frame_274133b2768a31b1954e55d1b2686f90->m_frame.f_lineno = 86;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_bytearray_arg_2;
        if (var_elements == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_bytearray_arg_2 = var_elements;
        tmp_return_value = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_274133b2768a31b1954e55d1b2686f90, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_274133b2768a31b1954e55d1b2686f90->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_274133b2768a31b1954e55d1b2686f90, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_274133b2768a31b1954e55d1b2686f90,
        type_description_1,
        par_integer,
        par_prefix_bits,
        var_max_number,
        var_elements
    );


    // Release cached frame if used for exception.
    if (frame_274133b2768a31b1954e55d1b2686f90 == cache_frame_274133b2768a31b1954e55d1b2686f90) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_274133b2768a31b1954e55d1b2686f90);
        cache_frame_274133b2768a31b1954e55d1b2686f90 = NULL;
    }

    assertFrameObject(frame_274133b2768a31b1954e55d1b2686f90);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_integer);
    par_integer = NULL;
    Py_XDECREF(var_max_number);
    var_max_number = NULL;
    Py_XDECREF(var_elements);
    var_elements = NULL;
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

    Py_XDECREF(par_integer);
    par_integer = NULL;
    Py_XDECREF(var_max_number);
    var_max_number = NULL;
    Py_XDECREF(var_elements);
    var_elements = NULL;
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
    CHECK_OBJECT(par_prefix_bits);
    Py_DECREF(par_prefix_bits);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_prefix_bits);
    Py_DECREF(par_prefix_bits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__3_decode_integer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_prefix_bits = python_pars[1];
    PyObject *var_max_number = NULL;
    PyObject *var_index = NULL;
    PyObject *var_shift = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_number = NULL;
    PyObject *var_next_byte = NULL;
    struct Nuitka_FrameObject *frame_ec0631e93092331eccaeae2f60849da9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ec0631e93092331eccaeae2f60849da9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ec0631e93092331eccaeae2f60849da9)) {
        Py_XDECREF(cache_frame_ec0631e93092331eccaeae2f60849da9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec0631e93092331eccaeae2f60849da9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec0631e93092331eccaeae2f60849da9 = MAKE_FUNCTION_FRAME(codeobj_ec0631e93092331eccaeae2f60849da9, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec0631e93092331eccaeae2f60849da9->m_type_description == NULL);
    frame_ec0631e93092331eccaeae2f60849da9 = cache_frame_ec0631e93092331eccaeae2f60849da9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ec0631e93092331eccaeae2f60849da9);
    assert(Py_REFCNT(frame_ec0631e93092331eccaeae2f60849da9) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_prefix_bits);
        tmp_cmp_expr_left_1 = par_prefix_bits;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_prefix_bits);
        tmp_cmp_expr_left_2 = par_prefix_bits;
        tmp_cmp_expr_right_2 = mod_consts[10];
        tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[11];
        CHECK_OBJECT(par_prefix_bits);
        tmp_mod_expr_right_1 = par_prefix_bits;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ec0631e93092331eccaeae2f60849da9->m_frame.f_lineno = 99;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 99;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prefix_bits);
        tmp_subscript_value_1 = par_prefix_bits;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_max_number == NULL);
        var_max_number = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[2];
        assert(var_index == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_index = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[1];
        assert(var_shift == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_shift = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        tmp_rshift_expr_left_1 = mod_consts[20];
        tmp_sub_expr_left_1 = mod_consts[10];
        CHECK_OBJECT(par_prefix_bits);
        tmp_sub_expr_right_1 = par_prefix_bits;
        tmp_rshift_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_rshift_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_RSHIFT_OBJECT_LONG_OBJECT(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask == NULL);
        var_mask = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_data);
        tmp_expression_value_2 = par_data;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_ec0631e93092331eccaeae2f60849da9->m_frame.f_lineno = 109;
        tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_mask);
        tmp_bitand_expr_right_1 = var_mask;
        tmp_assign_source_5 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(var_number == NULL);
        var_number = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_number);
        tmp_cmp_expr_left_3 = var_number;
        CHECK_OBJECT(var_max_number);
        tmp_cmp_expr_right_3 = var_max_number;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    loop_start_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_data);
        tmp_expression_value_3 = par_data;
        if (var_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_value_3 = var_index;
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_ec0631e93092331eccaeae2f60849da9->m_frame.f_lineno = 112;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_next_byte;
            var_next_byte = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iadd_expr_left_1;
        nuitka_digit tmp_iadd_expr_right_1;
        if (var_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_index;
        tmp_iadd_expr_right_1 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_7 = tmp_iadd_expr_left_1;
        var_index = tmp_assign_source_7;

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_next_byte);
        tmp_cmp_expr_left_4 = var_next_byte;
        tmp_cmp_expr_right_4 = mod_consts[14];
        tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_lshift_expr_left_1;
        PyObject *tmp_lshift_expr_right_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        if (var_number == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_2 = var_number;
        CHECK_OBJECT(var_next_byte);
        tmp_sub_expr_left_2 = var_next_byte;
        tmp_sub_expr_right_2 = mod_consts[14];
        tmp_lshift_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_lshift_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (var_shift == NULL) {
            Py_DECREF(tmp_lshift_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_lshift_expr_right_1 = var_shift;
        tmp_iadd_expr_right_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_OBJECT(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
        Py_DECREF(tmp_lshift_expr_left_1);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_2;
        var_number = tmp_assign_source_8;

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_lshift_expr_left_2;
        PyObject *tmp_lshift_expr_right_2;
        if (var_number == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_3 = var_number;
        CHECK_OBJECT(var_next_byte);
        tmp_lshift_expr_left_2 = var_next_byte;
        if (var_shift == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_lshift_expr_right_2 = var_shift;
        tmp_iadd_expr_right_3 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_OBJECT(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = tmp_iadd_expr_left_3;
        var_number = tmp_assign_source_9;

    }
    goto loop_end_1;
    branch_end_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        if (var_shift == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_4 = var_shift;
        tmp_iadd_expr_right_4 = mod_consts[18];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = tmp_iadd_expr_left_4;
        var_shift = tmp_assign_source_10;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 111;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    branch_no_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ec0631e93092331eccaeae2f60849da9, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ec0631e93092331eccaeae2f60849da9, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_IndexError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_mod_expr_left_2 = mod_consts[26];
        CHECK_OBJECT(par_data);
        tmp_mod_expr_right_2 = par_data;
        tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        frame_ec0631e93092331eccaeae2f60849da9->m_frame.f_lineno = 123;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 123;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 108;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ec0631e93092331eccaeae2f60849da9->m_frame) frame_ec0631e93092331eccaeae2f60849da9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_3;
    branch_end_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[27];
        CHECK_OBJECT(var_number);
        tmp_args_element_value_5 = var_number;
        CHECK_OBJECT(var_index);
        tmp_args_element_value_6 = var_index;
        frame_ec0631e93092331eccaeae2f60849da9->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[7],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ec0631e93092331eccaeae2f60849da9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec0631e93092331eccaeae2f60849da9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec0631e93092331eccaeae2f60849da9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec0631e93092331eccaeae2f60849da9,
        type_description_1,
        par_data,
        par_prefix_bits,
        var_max_number,
        var_index,
        var_shift,
        var_mask,
        var_number,
        var_next_byte
    );


    // Release cached frame if used for exception.
    if (frame_ec0631e93092331eccaeae2f60849da9 == cache_frame_ec0631e93092331eccaeae2f60849da9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec0631e93092331eccaeae2f60849da9);
        cache_frame_ec0631e93092331eccaeae2f60849da9 = NULL;
    }

    assertFrameObject(frame_ec0631e93092331eccaeae2f60849da9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_number);
        tmp_tuple_element_1 = var_number;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_index);
        tmp_tuple_element_1 = var_index;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_max_number);
    Py_DECREF(var_max_number);
    var_max_number = NULL;
    CHECK_OBJECT(var_index);
    Py_DECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_shift);
    var_shift = NULL;
    CHECK_OBJECT(var_mask);
    Py_DECREF(var_mask);
    var_mask = NULL;
    CHECK_OBJECT(var_number);
    Py_DECREF(var_number);
    var_number = NULL;
    Py_XDECREF(var_next_byte);
    var_next_byte = NULL;
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

    Py_XDECREF(var_max_number);
    var_max_number = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_shift);
    var_shift = NULL;
    Py_XDECREF(var_mask);
    var_mask = NULL;
    Py_XDECREF(var_number);
    var_number = NULL;
    Py_XDECREF(var_next_byte);
    var_next_byte = NULL;
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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_prefix_bits);
    Py_DECREF(par_prefix_bits);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_prefix_bits);
    Py_DECREF(par_prefix_bits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__4__dict_to_iterable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_header_dict = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_header_dict;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_header_dict);
    Py_DECREF(par_header_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable_locals {
    PyObject *var_keys;
    PyObject *var_key;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable_locals *generator_heap = (struct hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_keys = NULL;
    generator_heap->var_key = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_11006d6eb4702e95c7cd01b63582acbe, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[30]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 138;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 138;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 138;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        generator_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        generator_heap->exception_lineno = 138;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[31]);
        assert(tmp_called_value_1 != NULL);
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[30]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 140;
        tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }


        tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda();

        generator->m_frame->m_frame.f_lineno = 139;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[35]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 139;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_keys == NULL);
        generator_heap->var_keys = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->var_keys);
        tmp_iter_arg_1 = generator_heap->var_keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "coo";
                generator_heap->exception_lineno = 143;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_key;
            generator_heap->var_key = tmp_assign_source_4;
            Py_INCREF(generator_heap->var_key);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_tuple_element_1 = generator_heap->var_key;
        tmp_expression_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM0(tmp_expression_value_2, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[30]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 144;
                generator_heap->type_description_1 = "coo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
            CHECK_OBJECT(generator_heap->var_key);
            tmp_subscript_value_1 = generator_heap->var_key;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 144;
                generator_heap->type_description_1 = "coo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_expression_value_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_2;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 143;
        generator_heap->type_description_1 = "coo";
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

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
            generator->m_closure[0],
            generator_heap->var_keys,
            generator_heap->var_key
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

    Py_XDECREF(generator_heap->var_keys);
    generator_heap->var_keys = NULL;
    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    CHECK_OBJECT(generator_heap->var_keys);
    Py_DECREF(generator_heap->var_keys);
    generator_heap->var_keys = NULL;
    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable_context,
        module_hpack$hpack,
        mod_consts[36],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_11006d6eb4702e95c7cd01b63582acbe,
        closure,
        1,
#if 1
        sizeof(struct hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable_locals)
#else
        0
#endif
    );
}


static PyObject *impl_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_k = python_pars[0];
    struct Nuitka_FrameObject *frame_12ec1ca31745a5b20a0d2637ef33697b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_12ec1ca31745a5b20a0d2637ef33697b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12ec1ca31745a5b20a0d2637ef33697b)) {
        Py_XDECREF(cache_frame_12ec1ca31745a5b20a0d2637ef33697b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12ec1ca31745a5b20a0d2637ef33697b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12ec1ca31745a5b20a0d2637ef33697b = MAKE_FUNCTION_FRAME(codeobj_12ec1ca31745a5b20a0d2637ef33697b, module_hpack$hpack, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_12ec1ca31745a5b20a0d2637ef33697b->m_type_description == NULL);
    frame_12ec1ca31745a5b20a0d2637ef33697b = cache_frame_12ec1ca31745a5b20a0d2637ef33697b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_12ec1ca31745a5b20a0d2637ef33697b);
    assert(Py_REFCNT(frame_12ec1ca31745a5b20a0d2637ef33697b) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_k);
        tmp_args_element_value_1 = par_k;
        frame_12ec1ca31745a5b20a0d2637ef33697b->m_frame.f_lineno = 141;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_12ec1ca31745a5b20a0d2637ef33697b->m_frame.f_lineno = 141;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[39]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_12ec1ca31745a5b20a0d2637ef33697b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12ec1ca31745a5b20a0d2637ef33697b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12ec1ca31745a5b20a0d2637ef33697b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12ec1ca31745a5b20a0d2637ef33697b,
        type_description_1,
        par_k
    );


    // Release cached frame if used for exception.
    if (frame_12ec1ca31745a5b20a0d2637ef33697b == cache_frame_12ec1ca31745a5b20a0d2637ef33697b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_12ec1ca31745a5b20a0d2637ef33697b);
        cache_frame_12ec1ca31745a5b20a0d2637ef33697b = NULL;
    }

    assertFrameObject(frame_12ec1ca31745a5b20a0d2637ef33697b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_k);
    Py_DECREF(par_k);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_k);
    Py_DECREF(par_k);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__5__to_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[0];
    struct Nuitka_FrameObject *frame_35a3daad194f9c344619cccb6c3ac635;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_35a3daad194f9c344619cccb6c3ac635 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_35a3daad194f9c344619cccb6c3ac635)) {
        Py_XDECREF(cache_frame_35a3daad194f9c344619cccb6c3ac635);

#if _DEBUG_REFCOUNTS
        if (cache_frame_35a3daad194f9c344619cccb6c3ac635 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_35a3daad194f9c344619cccb6c3ac635 = MAKE_FUNCTION_FRAME(codeobj_35a3daad194f9c344619cccb6c3ac635, module_hpack$hpack, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_35a3daad194f9c344619cccb6c3ac635->m_type_description == NULL);
    frame_35a3daad194f9c344619cccb6c3ac635 = cache_frame_35a3daad194f9c344619cccb6c3ac635;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_35a3daad194f9c344619cccb6c3ac635);
    assert(Py_REFCNT(frame_35a3daad194f9c344619cccb6c3ac635) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_string);
        tmp_isinstance_inst_1 = par_string;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_string);
        tmp_unicode_arg_1 = par_string;
        tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_string;
            assert(old != NULL);
            par_string = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_string);
        tmp_isinstance_inst_2 = par_string;
        tmp_isinstance_cls_2 = (PyObject *)&PyBytes_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_string);
        tmp_return_value = par_string;
        Py_INCREF(tmp_return_value);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_string);
        tmp_expression_value_1 = par_string;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_35a3daad194f9c344619cccb6c3ac635->m_frame.f_lineno = 154;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[4]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_35a3daad194f9c344619cccb6c3ac635, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_35a3daad194f9c344619cccb6c3ac635->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35a3daad194f9c344619cccb6c3ac635, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_35a3daad194f9c344619cccb6c3ac635,
        type_description_1,
        par_string
    );


    // Release cached frame if used for exception.
    if (frame_35a3daad194f9c344619cccb6c3ac635 == cache_frame_35a3daad194f9c344619cccb6c3ac635) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_35a3daad194f9c344619cccb6c3ac635);
        cache_frame_35a3daad194f9c344619cccb6c3ac635 = NULL;
    }

    assertFrameObject(frame_35a3daad194f9c344619cccb6c3ac635);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_string);
    par_string = NULL;
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

    Py_XDECREF(par_string);
    par_string = NULL;
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


static PyObject *impl_hpack$hpack$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3347af7e42cf2c393b98c04c9f7da658;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_3347af7e42cf2c393b98c04c9f7da658 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3347af7e42cf2c393b98c04c9f7da658)) {
        Py_XDECREF(cache_frame_3347af7e42cf2c393b98c04c9f7da658);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3347af7e42cf2c393b98c04c9f7da658 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3347af7e42cf2c393b98c04c9f7da658 = MAKE_FUNCTION_FRAME(codeobj_3347af7e42cf2c393b98c04c9f7da658, module_hpack$hpack, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3347af7e42cf2c393b98c04c9f7da658->m_type_description == NULL);
    frame_3347af7e42cf2c393b98c04c9f7da658 = cache_frame_3347af7e42cf2c393b98c04c9f7da658;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3347af7e42cf2c393b98c04c9f7da658);
    assert(Py_REFCNT(frame_3347af7e42cf2c393b98c04c9f7da658) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3347af7e42cf2c393b98c04c9f7da658->m_frame.f_lineno = 164;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[44], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3347af7e42cf2c393b98c04c9f7da658->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[48], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[49], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3347af7e42cf2c393b98c04c9f7da658, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3347af7e42cf2c393b98c04c9f7da658->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3347af7e42cf2c393b98c04c9f7da658, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3347af7e42cf2c393b98c04c9f7da658,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3347af7e42cf2c393b98c04c9f7da658 == cache_frame_3347af7e42cf2c393b98c04c9f7da658) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3347af7e42cf2c393b98c04c9f7da658);
        cache_frame_3347af7e42cf2c393b98c04c9f7da658 = NULL;
    }

    assertFrameObject(frame_3347af7e42cf2c393b98c04c9f7da658);

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


static PyObject *impl_hpack$hpack$$$function__7_header_table_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c33ce4527df12cf9b18b25a79d675a26;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c33ce4527df12cf9b18b25a79d675a26 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c33ce4527df12cf9b18b25a79d675a26)) {
        Py_XDECREF(cache_frame_c33ce4527df12cf9b18b25a79d675a26);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c33ce4527df12cf9b18b25a79d675a26 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c33ce4527df12cf9b18b25a79d675a26 = MAKE_FUNCTION_FRAME(codeobj_c33ce4527df12cf9b18b25a79d675a26, module_hpack$hpack, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c33ce4527df12cf9b18b25a79d675a26->m_type_description == NULL);
    frame_c33ce4527df12cf9b18b25a79d675a26 = cache_frame_c33ce4527df12cf9b18b25a79d675a26;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c33ce4527df12cf9b18b25a79d675a26);
    assert(Py_REFCNT(frame_c33ce4527df12cf9b18b25a79d675a26) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[50]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
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
        exception_tb = MAKE_TRACEBACK(frame_c33ce4527df12cf9b18b25a79d675a26, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c33ce4527df12cf9b18b25a79d675a26->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c33ce4527df12cf9b18b25a79d675a26, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c33ce4527df12cf9b18b25a79d675a26,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c33ce4527df12cf9b18b25a79d675a26 == cache_frame_c33ce4527df12cf9b18b25a79d675a26) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c33ce4527df12cf9b18b25a79d675a26);
        cache_frame_c33ce4527df12cf9b18b25a79d675a26 = NULL;
    }

    assertFrameObject(frame_c33ce4527df12cf9b18b25a79d675a26);

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


static PyObject *impl_hpack$hpack$$$function__8_header_table_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_21a43f0d34f1fd2d3249885a5ab786b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_21a43f0d34f1fd2d3249885a5ab786b6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21a43f0d34f1fd2d3249885a5ab786b6)) {
        Py_XDECREF(cache_frame_21a43f0d34f1fd2d3249885a5ab786b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21a43f0d34f1fd2d3249885a5ab786b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21a43f0d34f1fd2d3249885a5ab786b6 = MAKE_FUNCTION_FRAME(codeobj_21a43f0d34f1fd2d3249885a5ab786b6, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21a43f0d34f1fd2d3249885a5ab786b6->m_type_description == NULL);
    frame_21a43f0d34f1fd2d3249885a5ab786b6 = cache_frame_21a43f0d34f1fd2d3249885a5ab786b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_21a43f0d34f1fd2d3249885a5ab786b6);
    assert(Py_REFCNT(frame_21a43f0d34f1fd2d3249885a5ab786b6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[50], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[44]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[52]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[49]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[16]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_21a43f0d34f1fd2d3249885a5ab786b6->m_frame.f_lineno = 181;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21a43f0d34f1fd2d3249885a5ab786b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21a43f0d34f1fd2d3249885a5ab786b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21a43f0d34f1fd2d3249885a5ab786b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21a43f0d34f1fd2d3249885a5ab786b6,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_21a43f0d34f1fd2d3249885a5ab786b6 == cache_frame_21a43f0d34f1fd2d3249885a5ab786b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21a43f0d34f1fd2d3249885a5ab786b6);
        cache_frame_21a43f0d34f1fd2d3249885a5ab786b6 = NULL;
    }

    assertFrameObject(frame_21a43f0d34f1fd2d3249885a5ab786b6);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__9_encode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_headers = python_pars[1];
    PyObject *par_huffman = python_pars[2];
    PyObject *var_header_block = NULL;
    PyObject *var_header = NULL;
    PyObject *var_sensitive = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_3a392fc45d9d2d13a3ac11075e066f73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_3a392fc45d9d2d13a3ac11075e066f73 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3a392fc45d9d2d13a3ac11075e066f73)) {
        Py_XDECREF(cache_frame_3a392fc45d9d2d13a3ac11075e066f73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a392fc45d9d2d13a3ac11075e066f73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a392fc45d9d2d13a3ac11075e066f73 = MAKE_FUNCTION_FRAME(codeobj_3a392fc45d9d2d13a3ac11075e066f73, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a392fc45d9d2d13a3ac11075e066f73->m_type_description == NULL);
    frame_3a392fc45d9d2d13a3ac11075e066f73 = cache_frame_3a392fc45d9d2d13a3ac11075e066f73;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3a392fc45d9d2d13a3ac11075e066f73);
    assert(Py_REFCNT(frame_3a392fc45d9d2d13a3ac11075e066f73) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[53];
        CHECK_OBJECT(par_headers);
        tmp_args_element_value_2 = par_headers;
        frame_3a392fc45d9d2d13a3ac11075e066f73->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[7],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_header_block == NULL);
        var_header_block = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_headers);
        tmp_isinstance_inst_1 = par_headers;
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_headers);
        tmp_args_element_value_3 = par_headers;
        frame_3a392fc45d9d2d13a3ac11075e066f73->m_frame.f_lineno = 240;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_headers;
            assert(old != NULL);
            par_headers = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 244;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_header_block);
        tmp_list_arg_value_1 = var_header_block;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_3a392fc45d9d2d13a3ac11075e066f73->m_frame.f_lineno = 245;
        tmp_item_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[54]);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_3;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[44]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[52], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        if (par_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = par_headers;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 249;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_header;
            var_header = tmp_assign_source_5;
            Py_INCREF(var_header);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_False;
        {
            PyObject *old = var_sensitive;
            var_sensitive = tmp_assign_source_6;
            Py_INCREF(var_sensitive);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_header);
        tmp_isinstance_inst_2 = var_header;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_header);
        tmp_expression_value_4 = var_header;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[57]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = (tmp_res == 0) ? Py_True : Py_False;
        {
            PyObject *old = var_sensitive;
            assert(old != NULL);
            var_sensitive = tmp_assign_source_7;
            Py_INCREF(var_sensitive);
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_header);
        tmp_len_arg_1 = var_header;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = 2;
        tmp_condition_result_4 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_header);
        tmp_expression_value_5 = var_header;
        tmp_subscript_value_1 = mod_consts[58];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_sensitive;
            assert(old != NULL);
            var_sensitive = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    branch_end_3:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (var_header == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = var_header;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_3a392fc45d9d2d13a3ac11075e066f73->m_frame.f_lineno = 256;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_assign_source_9, 0, tmp_tuple_element_1);
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            if (var_header == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 256;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_7 = var_header;
            tmp_subscript_value_3 = mod_consts[2];
            tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_3, 1);
            if (tmp_args_element_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            frame_3a392fc45d9d2d13a3ac11075e066f73->m_frame.f_lineno = 256;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_9, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_9);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        {
            PyObject *old = var_header;
            var_header = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        if (var_header_block == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = var_header_block;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[16]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[62]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_header);
        tmp_args_element_value_7 = var_header;
        CHECK_OBJECT(var_sensitive);
        tmp_args_element_value_8 = var_sensitive;
        if (par_huffman == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_9 = par_huffman;
        frame_3a392fc45d9d2d13a3ac11075e066f73->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_3a392fc45d9d2d13a3ac11075e066f73->m_frame.f_lineno = 257;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 249;
        type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_bytes_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_bytes_arg_value_1 = mod_consts[64];
        if (var_header_block == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 259;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = var_header_block;
        tmp_assign_source_10 = BYTES_JOIN(tmp_bytes_arg_value_1, tmp_iterable_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_header_block;
            var_header_block = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[65];
        CHECK_OBJECT(var_header_block);
        tmp_args_element_value_11 = var_header_block;
        frame_3a392fc45d9d2d13a3ac11075e066f73->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[7],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3a392fc45d9d2d13a3ac11075e066f73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a392fc45d9d2d13a3ac11075e066f73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a392fc45d9d2d13a3ac11075e066f73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a392fc45d9d2d13a3ac11075e066f73,
        type_description_1,
        par_self,
        par_headers,
        par_huffman,
        var_header_block,
        var_header,
        var_sensitive
    );


    // Release cached frame if used for exception.
    if (frame_3a392fc45d9d2d13a3ac11075e066f73 == cache_frame_3a392fc45d9d2d13a3ac11075e066f73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a392fc45d9d2d13a3ac11075e066f73);
        cache_frame_3a392fc45d9d2d13a3ac11075e066f73 = NULL;
    }

    assertFrameObject(frame_3a392fc45d9d2d13a3ac11075e066f73);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_header_block);
    tmp_return_value = var_header_block;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_headers);
    par_headers = NULL;
    CHECK_OBJECT(var_header_block);
    Py_DECREF(var_header_block);
    var_header_block = NULL;
    Py_XDECREF(var_header);
    var_header = NULL;
    Py_XDECREF(var_sensitive);
    var_sensitive = NULL;
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

    Py_XDECREF(par_headers);
    par_headers = NULL;
    Py_XDECREF(var_header_block);
    var_header_block = NULL;
    Py_XDECREF(var_header);
    var_header = NULL;
    Py_XDECREF(var_sensitive);
    var_sensitive = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_huffman);
    Py_DECREF(par_huffman);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_huffman);
    Py_DECREF(par_huffman);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__10_add(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_to_add = python_pars[1];
    PyObject *par_sensitive = python_pars[2];
    PyObject *par_huffman = python_pars[3];
    PyObject *var_name = NULL;
    PyObject *var_value = NULL;
    PyObject *var_indexbit = NULL;
    PyObject *var_match = NULL;
    PyObject *var_encoded = NULL;
    PyObject *var_index = NULL;
    PyObject *var_perfect = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f8c0c39ee29418b5549fabc7aec7a93f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_f8c0c39ee29418b5549fabc7aec7a93f = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f8c0c39ee29418b5549fabc7aec7a93f)) {
        Py_XDECREF(cache_frame_f8c0c39ee29418b5549fabc7aec7a93f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f8c0c39ee29418b5549fabc7aec7a93f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f8c0c39ee29418b5549fabc7aec7a93f = MAKE_FUNCTION_FRAME(codeobj_f8c0c39ee29418b5549fabc7aec7a93f, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f8c0c39ee29418b5549fabc7aec7a93f->m_type_description == NULL);
    frame_f8c0c39ee29418b5549fabc7aec7a93f = cache_frame_f8c0c39ee29418b5549fabc7aec7a93f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f8c0c39ee29418b5549fabc7aec7a93f);
    assert(Py_REFCNT(frame_f8c0c39ee29418b5549fabc7aec7a93f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[67];
        CHECK_OBJECT(par_to_add);
        tmp_args_element_value_2 = par_to_add;
        frame_f8c0c39ee29418b5549fabc7aec7a93f->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[7],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_to_add);
        tmp_iter_arg_1 = par_to_add;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 271;
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 271;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "ooooooooooo";
                    exception_lineno = 271;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooo";
            exception_lineno = 271;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_name == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_name = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_value == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_value = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_sensitive);
        tmp_operand_value_1 = par_sensitive;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_6 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_assign_source_6 == NULL)) {
            tmp_assign_source_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_6 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_assign_source_6 == NULL)) {
            tmp_assign_source_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_indexbit == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_indexbit = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_3 = var_name;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_4 = var_value;
        frame_f8c0c39ee29418b5549fabc7aec7a93f->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[71],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_match == NULL);
        var_match = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_match);
        tmp_cmp_expr_left_1 = var_match;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_name);
        tmp_args_element_value_5 = var_name;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_6 = var_value;
        CHECK_OBJECT(var_indexbit);
        tmp_args_element_value_7 = var_indexbit;
        CHECK_OBJECT(par_huffman);
        tmp_args_element_value_8 = par_huffman;
        frame_f8c0c39ee29418b5549fabc7aec7a93f->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_3,
                mod_consts[72],
                call_args
            );
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_encoded == NULL);
        var_encoded = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(par_sensitive);
        tmp_operand_value_2 = par_sensitive;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_9 = var_name;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_10 = var_value;
        frame_f8c0c39ee29418b5549fabc7aec7a93f->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[62],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    CHECK_OBJECT(var_encoded);
    tmp_return_value = var_encoded;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_match);
        tmp_iter_arg_2 = var_match;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_3, 0, 3);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 290;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_4, 1, 3);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 290;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_5, 2, 3);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 290;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_12;
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

                    type_description_1 = "ooooooooooo";
                    exception_lineno = 290;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[73];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooo";
            exception_lineno = 290;
            goto try_except_handler_5;
        }
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
        assert(var_index == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_index = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_name;
            assert(old != NULL);
            var_name = tmp_assign_source_14;
            Py_INCREF(var_name);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
        assert(var_perfect == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_perfect = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_perfect);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_perfect);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(var_index);
        tmp_args_element_value_11 = var_index;
        frame_f8c0c39ee29418b5549fabc7aec7a93f->m_frame.f_lineno = 294;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[74], tmp_args_element_value_11);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_encoded == NULL);
        var_encoded = tmp_assign_source_16;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_index);
        tmp_args_element_value_12 = var_index;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_13 = var_value;
        CHECK_OBJECT(var_indexbit);
        tmp_args_element_value_14 = var_indexbit;
        CHECK_OBJECT(par_huffman);
        tmp_args_element_value_15 = par_huffman;
        frame_f8c0c39ee29418b5549fabc7aec7a93f->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_17 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_6,
                mod_consts[75],
                call_args
            );
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_encoded == NULL);
        var_encoded = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(par_sensitive);
        tmp_operand_value_3 = par_sensitive;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[44]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_16 = var_name;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_17 = var_value;
        frame_f8c0c39ee29418b5549fabc7aec7a93f->m_frame.f_lineno = 305;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_7,
                mod_consts[62],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f8c0c39ee29418b5549fabc7aec7a93f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f8c0c39ee29418b5549fabc7aec7a93f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f8c0c39ee29418b5549fabc7aec7a93f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f8c0c39ee29418b5549fabc7aec7a93f,
        type_description_1,
        par_self,
        par_to_add,
        par_sensitive,
        par_huffman,
        var_name,
        var_value,
        var_indexbit,
        var_match,
        var_encoded,
        var_index,
        var_perfect
    );


    // Release cached frame if used for exception.
    if (frame_f8c0c39ee29418b5549fabc7aec7a93f == cache_frame_f8c0c39ee29418b5549fabc7aec7a93f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f8c0c39ee29418b5549fabc7aec7a93f);
        cache_frame_f8c0c39ee29418b5549fabc7aec7a93f = NULL;
    }

    assertFrameObject(frame_f8c0c39ee29418b5549fabc7aec7a93f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_encoded);
    tmp_return_value = var_encoded;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_value);
    Py_DECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_indexbit);
    var_indexbit = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    CHECK_OBJECT(var_encoded);
    Py_DECREF(var_encoded);
    var_encoded = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_perfect);
    var_perfect = NULL;
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

    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_indexbit);
    var_indexbit = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    Py_XDECREF(var_encoded);
    var_encoded = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_perfect);
    var_perfect = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_to_add);
    Py_DECREF(par_to_add);
    CHECK_OBJECT(par_sensitive);
    Py_DECREF(par_sensitive);
    CHECK_OBJECT(par_huffman);
    Py_DECREF(par_huffman);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_to_add);
    Py_DECREF(par_to_add);
    CHECK_OBJECT(par_sensitive);
    Py_DECREF(par_sensitive);
    CHECK_OBJECT(par_huffman);
    Py_DECREF(par_huffman);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__11__encode_indexed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *var_field = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    struct Nuitka_FrameObject *frame_9503a25864e006b89721a664e0a8a807;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9503a25864e006b89721a664e0a8a807 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9503a25864e006b89721a664e0a8a807)) {
        Py_XDECREF(cache_frame_9503a25864e006b89721a664e0a8a807);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9503a25864e006b89721a664e0a8a807 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9503a25864e006b89721a664e0a8a807 = MAKE_FUNCTION_FRAME(codeobj_9503a25864e006b89721a664e0a8a807, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9503a25864e006b89721a664e0a8a807->m_type_description == NULL);
    frame_9503a25864e006b89721a664e0a8a807 = cache_frame_9503a25864e006b89721a664e0a8a807;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9503a25864e006b89721a664e0a8a807);
    assert(Py_REFCNT(frame_9503a25864e006b89721a664e0a8a807) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_args_element_value_1 = par_index;
        tmp_args_element_value_2 = mod_consts[18];
        frame_9503a25864e006b89721a664e0a8a807->m_frame.f_lineno = 313;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_field == NULL);
        var_field = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(var_field);
        tmp_assign_source_2 = var_field;
        assert(tmp_inplace_assign_subscr_1__target == NULL);
        Py_INCREF(tmp_assign_source_2);
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_1 = tmp_inplace_assign_subscr_1__target;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_subscr_1__value == NULL);
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_ibitor_expr_left_1;
        PyObject *tmp_ibitor_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ibitor_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        tmp_ibitor_expr_right_1 = mod_consts[14];
        tmp_result = INPLACE_OPERATION_BITOR_OBJECT_LONG(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = tmp_ibitor_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_4;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        tmp_ass_subscript_1 = mod_consts[1];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    {
        PyObject *tmp_bytes_arg_1;
        CHECK_OBJECT(var_field);
        tmp_bytes_arg_1 = var_field;
        tmp_return_value = BUILTIN_BYTES1(tmp_bytes_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
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
        exception_tb = MAKE_TRACEBACK(frame_9503a25864e006b89721a664e0a8a807, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9503a25864e006b89721a664e0a8a807->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9503a25864e006b89721a664e0a8a807, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9503a25864e006b89721a664e0a8a807,
        type_description_1,
        par_self,
        par_index,
        var_field
    );


    // Release cached frame if used for exception.
    if (frame_9503a25864e006b89721a664e0a8a807 == cache_frame_9503a25864e006b89721a664e0a8a807) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9503a25864e006b89721a664e0a8a807);
        cache_frame_9503a25864e006b89721a664e0a8a807 = NULL;
    }

    assertFrameObject(frame_9503a25864e006b89721a664e0a8a807);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_field);
    Py_DECREF(var_field);
    var_field = NULL;
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

    Py_XDECREF(var_field);
    var_field = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__12__encode_literal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *par_indexbit = python_pars[3];
    PyObject *par_huffman = python_pars[4];
    PyObject *var_name_len = NULL;
    PyObject *var_value_len = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__value = NULL;
    struct Nuitka_FrameObject *frame_62b34a3998558ef09c68972df4d5ca8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_62b34a3998558ef09c68972df4d5ca8e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_62b34a3998558ef09c68972df4d5ca8e)) {
        Py_XDECREF(cache_frame_62b34a3998558ef09c68972df4d5ca8e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62b34a3998558ef09c68972df4d5ca8e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62b34a3998558ef09c68972df4d5ca8e = MAKE_FUNCTION_FRAME(codeobj_62b34a3998558ef09c68972df4d5ca8e, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_62b34a3998558ef09c68972df4d5ca8e->m_type_description == NULL);
    frame_62b34a3998558ef09c68972df4d5ca8e = cache_frame_62b34a3998558ef09c68972df4d5ca8e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_62b34a3998558ef09c68972df4d5ca8e);
    assert(Py_REFCNT(frame_62b34a3998558ef09c68972df4d5ca8e) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_huffman);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_huffman);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[48]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_62b34a3998558ef09c68972df4d5ca8e->m_frame.f_lineno = 324;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_name;
            assert(old != NULL);
            par_name = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[48]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_62b34a3998558ef09c68972df4d5ca8e->m_frame.f_lineno = 325;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_len_arg_1 = par_name;
        tmp_args_element_value_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[18];
        frame_62b34a3998558ef09c68972df4d5ca8e->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name_len == NULL);
        var_name_len = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_len_arg_2 = par_value;
        tmp_args_element_value_5 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[18];
        frame_62b34a3998558ef09c68972df4d5ca8e->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_value_len == NULL);
        var_value_len = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_huffman);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_huffman);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(var_name_len);
        tmp_assign_source_5 = var_name_len;
        assert(tmp_inplace_assign_subscr_1__target == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_5 = tmp_inplace_assign_subscr_1__target;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_subscr_1__value == NULL);
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_ibitor_expr_left_1;
        PyObject *tmp_ibitor_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ibitor_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        tmp_ibitor_expr_right_1 = mod_consts[14];
        tmp_result = INPLACE_OPERATION_BITOR_OBJECT_LONG(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = tmp_ibitor_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_7;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        tmp_ass_subscript_1 = mod_consts[1];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(var_value_len);
        tmp_assign_source_8 = var_value_len;
        assert(tmp_inplace_assign_subscr_2__target == NULL);
        Py_INCREF(tmp_assign_source_8);
        tmp_inplace_assign_subscr_2__target = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
        tmp_expression_value_6 = tmp_inplace_assign_subscr_2__target;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_inplace_assign_subscr_2__value == NULL);
        tmp_inplace_assign_subscr_2__value = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_ibitor_expr_left_2;
        PyObject *tmp_ibitor_expr_right_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
        tmp_ibitor_expr_left_2 = tmp_inplace_assign_subscr_2__value;
        tmp_ibitor_expr_right_2 = mod_consts[14];
        tmp_result = INPLACE_OPERATION_BITOR_OBJECT_LONG(&tmp_ibitor_expr_left_2, tmp_ibitor_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_10 = tmp_ibitor_expr_left_2;
        tmp_inplace_assign_subscr_2__value = tmp_assign_source_10;

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
        tmp_ass_subvalue_2 = tmp_inplace_assign_subscr_2__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_2__target;
        tmp_ass_subscript_2 = mod_consts[1];
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2);
        if (tmp_ass_subscript_res_2 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
    Py_DECREF(tmp_inplace_assign_subscr_2__target);
    tmp_inplace_assign_subscr_2__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_2__value);
    tmp_inplace_assign_subscr_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
    Py_DECREF(tmp_inplace_assign_subscr_2__target);
    tmp_inplace_assign_subscr_2__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
    Py_DECREF(tmp_inplace_assign_subscr_2__value);
    tmp_inplace_assign_subscr_2__value = NULL;
    branch_no_2:;
    {
        PyObject *tmp_bytes_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_list_element_1;
        tmp_bytes_arg_value_1 = mod_consts[64];
        CHECK_OBJECT(par_indexbit);
        tmp_list_element_1 = par_indexbit;
        tmp_iterable_value_1 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_bytes_arg_1;
            PyObject *tmp_bytes_arg_2;
            PyList_SET_ITEM0(tmp_iterable_value_1, 0, tmp_list_element_1);
            if (var_name_len == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 335;
                type_description_1 = "ooooooo";
                goto list_build_exception_1;
            }

            tmp_bytes_arg_1 = var_name_len;
            tmp_list_element_1 = BUILTIN_BYTES1(tmp_bytes_arg_1);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_1 = "ooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_iterable_value_1, 1, tmp_list_element_1);
            CHECK_OBJECT(par_name);
            tmp_list_element_1 = par_name;
            PyList_SET_ITEM0(tmp_iterable_value_1, 2, tmp_list_element_1);
            if (var_value_len == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 335;
                type_description_1 = "ooooooo";
                goto list_build_exception_1;
            }

            tmp_bytes_arg_2 = var_value_len;
            tmp_list_element_1 = BUILTIN_BYTES1(tmp_bytes_arg_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_1 = "ooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_iterable_value_1, 3, tmp_list_element_1);
            CHECK_OBJECT(par_value);
            tmp_list_element_1 = par_value;
            PyList_SET_ITEM0(tmp_iterable_value_1, 4, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_iterable_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_return_value = BYTES_JOIN(tmp_bytes_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
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
        exception_tb = MAKE_TRACEBACK(frame_62b34a3998558ef09c68972df4d5ca8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62b34a3998558ef09c68972df4d5ca8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62b34a3998558ef09c68972df4d5ca8e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62b34a3998558ef09c68972df4d5ca8e,
        type_description_1,
        par_self,
        par_name,
        par_value,
        par_indexbit,
        par_huffman,
        var_name_len,
        var_value_len
    );


    // Release cached frame if used for exception.
    if (frame_62b34a3998558ef09c68972df4d5ca8e == cache_frame_62b34a3998558ef09c68972df4d5ca8e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_62b34a3998558ef09c68972df4d5ca8e);
        cache_frame_62b34a3998558ef09c68972df4d5ca8e = NULL;
    }

    assertFrameObject(frame_62b34a3998558ef09c68972df4d5ca8e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_name_len);
    var_name_len = NULL;
    Py_XDECREF(var_value_len);
    var_value_len = NULL;
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

    Py_XDECREF(par_name);
    par_name = NULL;
    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_name_len);
    var_name_len = NULL;
    Py_XDECREF(var_value_len);
    var_value_len = NULL;
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
    CHECK_OBJECT(par_indexbit);
    Py_DECREF(par_indexbit);
    CHECK_OBJECT(par_huffman);
    Py_DECREF(par_huffman);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_indexbit);
    Py_DECREF(par_indexbit);
    CHECK_OBJECT(par_huffman);
    Py_DECREF(par_huffman);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__13__encode_indexed_literal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *par_indexbit = python_pars[3];
    PyObject *par_huffman = python_pars[4];
    PyObject *var_prefix = NULL;
    PyObject *var_value_len = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__value = NULL;
    struct Nuitka_FrameObject *frame_bbac6ebaaf619077febf076bd97c2d87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bbac6ebaaf619077febf076bd97c2d87 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bbac6ebaaf619077febf076bd97c2d87)) {
        Py_XDECREF(cache_frame_bbac6ebaaf619077febf076bd97c2d87);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bbac6ebaaf619077febf076bd97c2d87 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bbac6ebaaf619077febf076bd97c2d87 = MAKE_FUNCTION_FRAME(codeobj_bbac6ebaaf619077febf076bd97c2d87, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bbac6ebaaf619077febf076bd97c2d87->m_type_description == NULL);
    frame_bbac6ebaaf619077febf076bd97c2d87 = cache_frame_bbac6ebaaf619077febf076bd97c2d87;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bbac6ebaaf619077febf076bd97c2d87);
    assert(Py_REFCNT(frame_bbac6ebaaf619077febf076bd97c2d87) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_indexbit);
        tmp_cmp_expr_left_1 = par_indexbit;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_args_element_value_1 = par_index;
        tmp_args_element_value_2 = mod_consts[82];
        frame_bbac6ebaaf619077febf076bd97c2d87->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prefix == NULL);
        var_prefix = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_args_element_value_3 = par_index;
        tmp_args_element_value_4 = mod_consts[83];
        frame_bbac6ebaaf619077febf076bd97c2d87->m_frame.f_lineno = 346;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prefix == NULL);
        var_prefix = tmp_assign_source_2;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(var_prefix);
        tmp_assign_source_3 = var_prefix;
        assert(tmp_inplace_assign_subscr_1__target == NULL);
        Py_INCREF(tmp_assign_source_3);
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_1 = tmp_inplace_assign_subscr_1__target;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_subscr_1__value == NULL);
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_ibitor_expr_left_1;
        PyObject *tmp_ibitor_expr_right_1;
        PyObject *tmp_ord_arg_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ibitor_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(par_indexbit);
        tmp_ord_arg_1 = par_indexbit;
        tmp_ibitor_expr_right_1 = BUILTIN_ORD(tmp_ord_arg_1);
        if (tmp_ibitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
        Py_DECREF(tmp_ibitor_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = tmp_ibitor_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_5;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        tmp_ass_subscript_1 = mod_consts[1];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_huffman);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_huffman);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[48]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[41]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_5 = par_value;
        frame_bbac6ebaaf619077febf076bd97c2d87->m_frame.f_lineno = 351;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_len_arg_1 = par_value;
        tmp_args_element_value_6 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[18];
        frame_bbac6ebaaf619077febf076bd97c2d87->m_frame.f_lineno = 353;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_value_len == NULL);
        var_value_len = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_huffman);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_huffman);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(var_value_len);
        tmp_assign_source_8 = var_value_len;
        assert(tmp_inplace_assign_subscr_2__target == NULL);
        Py_INCREF(tmp_assign_source_8);
        tmp_inplace_assign_subscr_2__target = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
        tmp_expression_value_4 = tmp_inplace_assign_subscr_2__target;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_inplace_assign_subscr_2__value == NULL);
        tmp_inplace_assign_subscr_2__value = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_ibitor_expr_left_2;
        PyObject *tmp_ibitor_expr_right_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
        tmp_ibitor_expr_left_2 = tmp_inplace_assign_subscr_2__value;
        tmp_ibitor_expr_right_2 = mod_consts[14];
        tmp_result = INPLACE_OPERATION_BITOR_OBJECT_LONG(&tmp_ibitor_expr_left_2, tmp_ibitor_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_10 = tmp_ibitor_expr_left_2;
        tmp_inplace_assign_subscr_2__value = tmp_assign_source_10;

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
        tmp_ass_subvalue_2 = tmp_inplace_assign_subscr_2__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_2__target;
        tmp_ass_subscript_2 = mod_consts[1];
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2);
        if (tmp_ass_subscript_res_2 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
    Py_DECREF(tmp_inplace_assign_subscr_2__target);
    tmp_inplace_assign_subscr_2__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_2__value);
    tmp_inplace_assign_subscr_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
    Py_DECREF(tmp_inplace_assign_subscr_2__target);
    tmp_inplace_assign_subscr_2__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
    Py_DECREF(tmp_inplace_assign_subscr_2__value);
    tmp_inplace_assign_subscr_2__value = NULL;
    branch_no_3:;
    {
        PyObject *tmp_bytes_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_bytes_arg_1;
        tmp_bytes_arg_value_1 = mod_consts[64];
        CHECK_OBJECT(var_prefix);
        tmp_bytes_arg_1 = var_prefix;
        tmp_list_element_1 = BUILTIN_BYTES1(tmp_bytes_arg_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iterable_value_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_bytes_arg_2;
            PyList_SET_ITEM(tmp_iterable_value_1, 0, tmp_list_element_1);
            if (var_value_len == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 358;
                type_description_1 = "ooooooo";
                goto list_build_exception_1;
            }

            tmp_bytes_arg_2 = var_value_len;
            tmp_list_element_1 = BUILTIN_BYTES1(tmp_bytes_arg_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_1 = "ooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_iterable_value_1, 1, tmp_list_element_1);
            CHECK_OBJECT(par_value);
            tmp_list_element_1 = par_value;
            PyList_SET_ITEM0(tmp_iterable_value_1, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_iterable_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_return_value = BYTES_JOIN(tmp_bytes_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
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
        exception_tb = MAKE_TRACEBACK(frame_bbac6ebaaf619077febf076bd97c2d87, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbac6ebaaf619077febf076bd97c2d87->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbac6ebaaf619077febf076bd97c2d87, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bbac6ebaaf619077febf076bd97c2d87,
        type_description_1,
        par_self,
        par_index,
        par_value,
        par_indexbit,
        par_huffman,
        var_prefix,
        var_value_len
    );


    // Release cached frame if used for exception.
    if (frame_bbac6ebaaf619077febf076bd97c2d87 == cache_frame_bbac6ebaaf619077febf076bd97c2d87) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bbac6ebaaf619077febf076bd97c2d87);
        cache_frame_bbac6ebaaf619077febf076bd97c2d87 = NULL;
    }

    assertFrameObject(frame_bbac6ebaaf619077febf076bd97c2d87);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    CHECK_OBJECT(var_prefix);
    Py_DECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_value_len);
    var_value_len = NULL;
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

    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_value_len);
    var_value_len = NULL;
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
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_indexbit);
    Py_DECREF(par_indexbit);
    CHECK_OBJECT(par_huffman);
    Py_DECREF(par_huffman);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_indexbit);
    Py_DECREF(par_indexbit);
    CHECK_OBJECT(par_huffman);
    Py_DECREF(par_huffman);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__14__encode_table_size_change(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_block = NULL;
    PyObject *var_size_bytes = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    struct Nuitka_FrameObject *frame_2b6de8bd0abdfe03742e317b94248b7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2b6de8bd0abdfe03742e317b94248b7d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[64];
        assert(var_block == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_block = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_2b6de8bd0abdfe03742e317b94248b7d)) {
        Py_XDECREF(cache_frame_2b6de8bd0abdfe03742e317b94248b7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b6de8bd0abdfe03742e317b94248b7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b6de8bd0abdfe03742e317b94248b7d = MAKE_FUNCTION_FRAME(codeobj_2b6de8bd0abdfe03742e317b94248b7d, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b6de8bd0abdfe03742e317b94248b7d->m_type_description == NULL);
    frame_2b6de8bd0abdfe03742e317b94248b7d = cache_frame_2b6de8bd0abdfe03742e317b94248b7d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2b6de8bd0abdfe03742e317b94248b7d);
    assert(Py_REFCNT(frame_2b6de8bd0abdfe03742e317b94248b7d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[49]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 366;
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
            PyObject *old = var_size_bytes;
            var_size_bytes = tmp_assign_source_4;
            Py_INCREF(var_size_bytes);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_size_bytes);
        tmp_args_element_value_1 = var_size_bytes;
        tmp_args_element_value_2 = mod_consts[85];
        frame_2b6de8bd0abdfe03742e317b94248b7d->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_size_bytes;
            assert(old != NULL);
            var_size_bytes = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(var_size_bytes);
        tmp_assign_source_6 = var_size_bytes;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_6;
            Py_INCREF(tmp_inplace_assign_subscr_1__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[1];
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_7;
            Py_INCREF(tmp_inplace_assign_subscr_1__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_2 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_subscript_value_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_1__value;
            tmp_inplace_assign_subscr_1__value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_ibitor_expr_left_1;
        PyObject *tmp_ibitor_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ibitor_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        tmp_ibitor_expr_right_1 = mod_consts[86];
        tmp_result = INPLACE_OPERATION_BITOR_OBJECT_LONG(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_9 = tmp_ibitor_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_9;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooo";
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_bytes_arg_1;
        if (var_block == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 369;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_block;
        CHECK_OBJECT(var_size_bytes);
        tmp_bytes_arg_1 = var_size_bytes;
        tmp_iadd_expr_right_1 = BUILTIN_BYTES1(tmp_bytes_arg_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = tmp_iadd_expr_left_1;
        var_block = tmp_assign_source_10;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 366;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[49], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    if (var_block == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 371;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_block;
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
        exception_tb = MAKE_TRACEBACK(frame_2b6de8bd0abdfe03742e317b94248b7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b6de8bd0abdfe03742e317b94248b7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b6de8bd0abdfe03742e317b94248b7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b6de8bd0abdfe03742e317b94248b7d,
        type_description_1,
        par_self,
        var_block,
        var_size_bytes
    );


    // Release cached frame if used for exception.
    if (frame_2b6de8bd0abdfe03742e317b94248b7d == cache_frame_2b6de8bd0abdfe03742e317b94248b7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b6de8bd0abdfe03742e317b94248b7d);
        cache_frame_2b6de8bd0abdfe03742e317b94248b7d = NULL;
    }

    assertFrameObject(frame_2b6de8bd0abdfe03742e317b94248b7d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_block);
    var_block = NULL;
    Py_XDECREF(var_size_bytes);
    var_size_bytes = NULL;
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

    Py_XDECREF(var_block);
    var_block = NULL;
    Py_XDECREF(var_size_bytes);
    var_size_bytes = NULL;
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


static PyObject *impl_hpack$hpack$$$function__15___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_max_header_list_size = python_pars[1];
    struct Nuitka_FrameObject *frame_59d49020f39375b64a56d5d9ad1ae7d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_59d49020f39375b64a56d5d9ad1ae7d9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_59d49020f39375b64a56d5d9ad1ae7d9)) {
        Py_XDECREF(cache_frame_59d49020f39375b64a56d5d9ad1ae7d9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_59d49020f39375b64a56d5d9ad1ae7d9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_59d49020f39375b64a56d5d9ad1ae7d9 = MAKE_FUNCTION_FRAME(codeobj_59d49020f39375b64a56d5d9ad1ae7d9, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_59d49020f39375b64a56d5d9ad1ae7d9->m_type_description == NULL);
    frame_59d49020f39375b64a56d5d9ad1ae7d9 = cache_frame_59d49020f39375b64a56d5d9ad1ae7d9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_59d49020f39375b64a56d5d9ad1ae7d9);
    assert(Py_REFCNT(frame_59d49020f39375b64a56d5d9ad1ae7d9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_59d49020f39375b64a56d5d9ad1ae7d9->m_frame.f_lineno = 396;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[44], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_max_header_list_size);
        tmp_assattr_value_2 = par_max_header_list_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[89], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[50]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[90], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_59d49020f39375b64a56d5d9ad1ae7d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_59d49020f39375b64a56d5d9ad1ae7d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_59d49020f39375b64a56d5d9ad1ae7d9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_59d49020f39375b64a56d5d9ad1ae7d9,
        type_description_1,
        par_self,
        par_max_header_list_size
    );


    // Release cached frame if used for exception.
    if (frame_59d49020f39375b64a56d5d9ad1ae7d9 == cache_frame_59d49020f39375b64a56d5d9ad1ae7d9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_59d49020f39375b64a56d5d9ad1ae7d9);
        cache_frame_59d49020f39375b64a56d5d9ad1ae7d9 = NULL;
    }

    assertFrameObject(frame_59d49020f39375b64a56d5d9ad1ae7d9);

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
    CHECK_OBJECT(par_max_header_list_size);
    Py_DECREF(par_max_header_list_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_max_header_list_size);
    Py_DECREF(par_max_header_list_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__16_header_table_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_28441455946dd231ed07bd4c7b868355;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_28441455946dd231ed07bd4c7b868355 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_28441455946dd231ed07bd4c7b868355)) {
        Py_XDECREF(cache_frame_28441455946dd231ed07bd4c7b868355);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28441455946dd231ed07bd4c7b868355 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28441455946dd231ed07bd4c7b868355 = MAKE_FUNCTION_FRAME(codeobj_28441455946dd231ed07bd4c7b868355, module_hpack$hpack, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_28441455946dd231ed07bd4c7b868355->m_type_description == NULL);
    frame_28441455946dd231ed07bd4c7b868355 = cache_frame_28441455946dd231ed07bd4c7b868355;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_28441455946dd231ed07bd4c7b868355);
    assert(Py_REFCNT(frame_28441455946dd231ed07bd4c7b868355) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[50]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
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
        exception_tb = MAKE_TRACEBACK(frame_28441455946dd231ed07bd4c7b868355, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28441455946dd231ed07bd4c7b868355->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28441455946dd231ed07bd4c7b868355, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28441455946dd231ed07bd4c7b868355,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_28441455946dd231ed07bd4c7b868355 == cache_frame_28441455946dd231ed07bd4c7b868355) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_28441455946dd231ed07bd4c7b868355);
        cache_frame_28441455946dd231ed07bd4c7b868355 = NULL;
    }

    assertFrameObject(frame_28441455946dd231ed07bd4c7b868355);

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


static PyObject *impl_hpack$hpack$$$function__17_header_table_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_02fd74b5456b6ee55d4a0d69c2544235;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_02fd74b5456b6ee55d4a0d69c2544235 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_02fd74b5456b6ee55d4a0d69c2544235)) {
        Py_XDECREF(cache_frame_02fd74b5456b6ee55d4a0d69c2544235);

#if _DEBUG_REFCOUNTS
        if (cache_frame_02fd74b5456b6ee55d4a0d69c2544235 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_02fd74b5456b6ee55d4a0d69c2544235 = MAKE_FUNCTION_FRAME(codeobj_02fd74b5456b6ee55d4a0d69c2544235, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_02fd74b5456b6ee55d4a0d69c2544235->m_type_description == NULL);
    frame_02fd74b5456b6ee55d4a0d69c2544235 = cache_frame_02fd74b5456b6ee55d4a0d69c2544235;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_02fd74b5456b6ee55d4a0d69c2544235);
    assert(Py_REFCNT(frame_02fd74b5456b6ee55d4a0d69c2544235) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[50], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_02fd74b5456b6ee55d4a0d69c2544235, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_02fd74b5456b6ee55d4a0d69c2544235->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_02fd74b5456b6ee55d4a0d69c2544235, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_02fd74b5456b6ee55d4a0d69c2544235,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_02fd74b5456b6ee55d4a0d69c2544235 == cache_frame_02fd74b5456b6ee55d4a0d69c2544235) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_02fd74b5456b6ee55d4a0d69c2544235);
        cache_frame_02fd74b5456b6ee55d4a0d69c2544235 = NULL;
    }

    assertFrameObject(frame_02fd74b5456b6ee55d4a0d69c2544235);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__18_decode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *par_raw = python_pars[2];
    PyObject *var_data_mem = NULL;
    PyObject *var_headers = NULL;
    PyObject *var_data_len = NULL;
    PyObject *var_inflated_size = NULL;
    PyObject *var_current_index = NULL;
    PyObject *var_current = NULL;
    PyObject *var_indexed = NULL;
    PyObject *var_literal_index = NULL;
    PyObject *var_encoding_update = NULL;
    PyObject *var_header = NULL;
    PyObject *var_consumed = NULL;
    PyObject *outline_0_var_h = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0dc5484c2db58b6d4c113fe22d4c1114;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_0d936497345b7e8cd578e121308a5009_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_0d936497345b7e8cd578e121308a5009_2 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_0dc5484c2db58b6d4c113fe22d4c1114 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0dc5484c2db58b6d4c113fe22d4c1114)) {
        Py_XDECREF(cache_frame_0dc5484c2db58b6d4c113fe22d4c1114);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0dc5484c2db58b6d4c113fe22d4c1114 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0dc5484c2db58b6d4c113fe22d4c1114 = MAKE_FUNCTION_FRAME(codeobj_0dc5484c2db58b6d4c113fe22d4c1114, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0dc5484c2db58b6d4c113fe22d4c1114->m_type_description == NULL);
    frame_0dc5484c2db58b6d4c113fe22d4c1114 = cache_frame_0dc5484c2db58b6d4c113fe22d4c1114;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0dc5484c2db58b6d4c113fe22d4c1114);
    assert(Py_REFCNT(frame_0dc5484c2db58b6d4c113fe22d4c1114) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[91];
        CHECK_OBJECT(par_data);
        tmp_args_element_value_2 = par_data;
        frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[7],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = (PyObject *)&PyMemoryView_Type;
        CHECK_OBJECT(par_data);
        tmp_args_element_value_3 = par_data;
        frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = 451;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data_mem == NULL);
        var_data_mem = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_headers == NULL);
        var_headers = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_data);
        tmp_len_arg_1 = par_data;
        tmp_assign_source_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data_len == NULL);
        var_data_len = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[1];
        assert(var_inflated_size == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_inflated_size = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[1];
        assert(var_current_index == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_current_index = tmp_assign_source_5;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_current_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_current_index;
        CHECK_OBJECT(var_data_len);
        tmp_cmp_expr_right_1 = var_data_len;
        tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooooooooo";
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
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_expression_value_1 = par_data;
        if (var_current_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 460;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_1 = var_current_index;
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = 460;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_current;
            var_current = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(var_current);
        tmp_bitand_expr_left_1 = var_current;
        tmp_bitand_expr_right_1 = mod_consts[14];
        tmp_condition_result_2 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_7 = Py_True;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_7 = Py_False;
        condexpr_end_1:;
        {
            PyObject *old = var_indexed;
            var_indexed = tmp_assign_source_7;
            Py_INCREF(var_indexed);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        CHECK_OBJECT(var_current);
        tmp_bitand_expr_left_2 = var_current;
        tmp_bitand_expr_right_2 = mod_consts[93];
        tmp_condition_result_3 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_8 = Py_True;
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_8 = Py_False;
        condexpr_end_2:;
        {
            PyObject *old = var_literal_index;
            var_literal_index = tmp_assign_source_8;
            Py_INCREF(var_literal_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        CHECK_OBJECT(var_current);
        tmp_bitand_expr_left_3 = var_current;
        tmp_bitand_expr_right_3 = mod_consts[86];
        tmp_condition_result_4 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_assign_source_9 = Py_True;
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_9 = Py_False;
        condexpr_end_3:;
        {
            PyObject *old = var_encoding_update;
            var_encoding_update = tmp_assign_source_9;
            Py_INCREF(var_encoding_update);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        CHECK_OBJECT(var_indexed);
        tmp_condition_result_5 = CHECK_IF_TRUE(var_indexed) == 1;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 472;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[94]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_data_mem);
        tmp_expression_value_3 = var_data_mem;
        if (var_current_index == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 473;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_start_value_1 = var_current_index;
        tmp_stop_value_1 = Py_None;
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 473;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = 472;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 472;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 472;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 472;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 472;
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_header;
            var_header = tmp_assign_source_13;
            Py_INCREF(var_header);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_consumed;
            var_consumed = tmp_assign_source_14;
            Py_INCREF(var_consumed);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_6;
        CHECK_OBJECT(var_literal_index);
        tmp_condition_result_6 = CHECK_IF_TRUE(var_literal_index) == 1;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_4 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[95]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_data_mem);
        tmp_expression_value_5 = var_data_mem;
        if (var_current_index == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 478;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_start_value_2 = var_current_index;
        tmp_stop_value_2 = Py_None;
        tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
        assert(!(tmp_subscript_value_3 == NULL));
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 478;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = 477;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 477;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 477;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 477;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 477;
            goto try_except_handler_5;
        }
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_header;
            var_header = tmp_assign_source_18;
            Py_INCREF(var_header);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_consumed;
            var_consumed = tmp_assign_source_19;
            Py_INCREF(var_consumed);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_7;
        CHECK_OBJECT(var_encoding_update);
        tmp_condition_result_7 = CHECK_IF_TRUE(var_encoding_update) == 1;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_1;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 483;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_headers);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = 484;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[96]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 484;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 487;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[97]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data_mem);
        tmp_expression_value_7 = var_data_mem;
        if (var_current_index == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 488;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_3 = var_current_index;
        tmp_stop_value_3 = Py_None;
        tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tmp_start_value_3, tmp_stop_value_3);
        assert(!(tmp_subscript_value_4 == NULL));
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 488;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = 487;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_consumed;
            var_consumed = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = Py_None;
        {
            PyObject *old = var_header;
            var_header = tmp_assign_source_21;
            Py_INCREF(var_header);
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_start_value_4;
        PyObject *tmp_stop_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 493;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_8 = par_self;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[98]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_data_mem);
        tmp_expression_value_9 = var_data_mem;
        if (var_current_index == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 494;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_start_value_4 = var_current_index;
        tmp_stop_value_4 = Py_None;
        tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tmp_start_value_4, tmp_stop_value_4);
        assert(!(tmp_subscript_value_5 == NULL));
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 494;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = 493;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_22 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_23 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 493;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_24 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 493;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_24;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 493;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 493;
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_25 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_header;
            var_header = tmp_assign_source_25;
            Py_INCREF(var_header);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_26 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_consumed;
            var_consumed = tmp_assign_source_26;
            Py_INCREF(var_consumed);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_header);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_header);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_9;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 498;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = var_headers;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[16]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_header);
        tmp_args_element_value_9 = var_header;
        frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = 498;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        if (var_inflated_size == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 499;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_1 = var_inflated_size;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_header);
        tmp_dircall_arg2_1 = var_header;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_iadd_expr_right_1 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = tmp_iadd_expr_left_1;
        var_inflated_size = tmp_assign_source_27;

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_inflated_size);
        tmp_cmp_expr_left_2 = var_inflated_size;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 501;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_self;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[89]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_12;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[102];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = par_self;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[89]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = 502;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 502;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_current_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 507;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_2 = var_current_index;
        CHECK_OBJECT(var_consumed);
        tmp_iadd_expr_right_2 = var_consumed;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = tmp_iadd_expr_left_2;
        var_current_index = tmp_assign_source_28;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 457;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 512;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_self;
        frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = 512;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[103]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_4;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 515;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_iter_arg_4 = var_headers;
        tmp_assign_source_29 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_9;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_30;
    }
    if (isFrameUnusable(cache_frame_0d936497345b7e8cd578e121308a5009_2)) {
        Py_XDECREF(cache_frame_0d936497345b7e8cd578e121308a5009_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d936497345b7e8cd578e121308a5009_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d936497345b7e8cd578e121308a5009_2 = MAKE_FUNCTION_FRAME(codeobj_0d936497345b7e8cd578e121308a5009, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d936497345b7e8cd578e121308a5009_2->m_type_description == NULL);
    frame_0d936497345b7e8cd578e121308a5009_2 = cache_frame_0d936497345b7e8cd578e121308a5009_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0d936497345b7e8cd578e121308a5009_2);
    assert(Py_REFCNT(frame_0d936497345b7e8cd578e121308a5009_2) == 2);

    // Framed code:
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_31 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "oo";
                exception_lineno = 515;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_32 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_h;
            outline_0_var_h = tmp_assign_source_32;
            Py_INCREF(outline_0_var_h);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_2 = "oo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(outline_0_var_h);
        tmp_args_element_value_11 = outline_0_var_h;
        if (par_raw == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 515;
            type_description_2 = "oo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_12 = par_raw;
        frame_0d936497345b7e8cd578e121308a5009_2->m_frame.f_lineno = 515;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_2 = "oo";
            goto try_except_handler_10;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_2 = "oo";
            goto try_except_handler_10;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 515;
        type_description_2 = "oo";
        goto try_except_handler_10;
    }
    goto loop_start_2;
    loop_end_2:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_10;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_10:;
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
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_2;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_2:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_9;
    frame_exception_exit_2:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d936497345b7e8cd578e121308a5009_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d936497345b7e8cd578e121308a5009_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d936497345b7e8cd578e121308a5009_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d936497345b7e8cd578e121308a5009_2,
        type_description_2,
        outline_0_var_h,
        par_raw
    );


    // Release cached frame if used for exception.
    if (frame_0d936497345b7e8cd578e121308a5009_2 == cache_frame_0d936497345b7e8cd578e121308a5009_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d936497345b7e8cd578e121308a5009_2);
        cache_frame_0d936497345b7e8cd578e121308a5009_2 = NULL;
    }

    assertFrameObject(frame_0d936497345b7e8cd578e121308a5009_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;
    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooooooooooooo";
    goto try_except_handler_9;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_9:;
    Py_XDECREF(outline_0_var_h);
    outline_0_var_h = NULL;
    goto outline_result_1;
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

    Py_XDECREF(outline_0_var_h);
    outline_0_var_h = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 515;
    goto try_except_handler_8;
    outline_result_1:;
    goto frame_return_exit_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_9 == NULL) {
        exception_keeper_tb_9 = MAKE_TRACEBACK(frame_0dc5484c2db58b6d4c113fe22d4c1114, exception_keeper_lineno_9);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_keeper_tb_9 = ADD_TRACEBACK(exception_keeper_tb_9, frame_0dc5484c2db58b6d4c113fe22d4c1114, exception_keeper_lineno_9);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9);
    // Tried code:
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_UnicodeDecodeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_11;
        }
        frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = 517;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[106]);

        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 517;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_11;
    }
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 514;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame) frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
    branch_end_8:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0dc5484c2db58b6d4c113fe22d4c1114, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0dc5484c2db58b6d4c113fe22d4c1114->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0dc5484c2db58b6d4c113fe22d4c1114, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0dc5484c2db58b6d4c113fe22d4c1114,
        type_description_1,
        par_self,
        par_data,
        par_raw,
        var_data_mem,
        var_headers,
        var_data_len,
        var_inflated_size,
        var_current_index,
        var_current,
        var_indexed,
        var_literal_index,
        var_encoding_update,
        var_header,
        var_consumed
    );


    // Release cached frame if used for exception.
    if (frame_0dc5484c2db58b6d4c113fe22d4c1114 == cache_frame_0dc5484c2db58b6d4c113fe22d4c1114) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0dc5484c2db58b6d4c113fe22d4c1114);
        cache_frame_0dc5484c2db58b6d4c113fe22d4c1114 = NULL;
    }

    assertFrameObject(frame_0dc5484c2db58b6d4c113fe22d4c1114);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_data_mem);
    Py_DECREF(var_data_mem);
    var_data_mem = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
    CHECK_OBJECT(var_data_len);
    Py_DECREF(var_data_len);
    var_data_len = NULL;
    Py_XDECREF(var_inflated_size);
    var_inflated_size = NULL;
    Py_XDECREF(var_current_index);
    var_current_index = NULL;
    Py_XDECREF(var_current);
    var_current = NULL;
    Py_XDECREF(var_indexed);
    var_indexed = NULL;
    Py_XDECREF(var_literal_index);
    var_literal_index = NULL;
    Py_XDECREF(var_encoding_update);
    var_encoding_update = NULL;
    Py_XDECREF(var_header);
    var_header = NULL;
    Py_XDECREF(var_consumed);
    var_consumed = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_data_mem);
    var_data_mem = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
    Py_XDECREF(var_data_len);
    var_data_len = NULL;
    Py_XDECREF(var_inflated_size);
    var_inflated_size = NULL;
    Py_XDECREF(var_current_index);
    var_current_index = NULL;
    Py_XDECREF(var_current);
    var_current = NULL;
    Py_XDECREF(var_indexed);
    var_indexed = NULL;
    Py_XDECREF(var_literal_index);
    var_literal_index = NULL;
    Py_XDECREF(var_encoding_update);
    var_encoding_update = NULL;
    Py_XDECREF(var_header);
    var_header = NULL;
    Py_XDECREF(var_consumed);
    var_consumed = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_raw);
    Py_DECREF(par_raw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_raw);
    Py_DECREF(par_raw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__19__assert_valid_table_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_125ac47a185d0dad6da1ad59fa6e6213;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_125ac47a185d0dad6da1ad59fa6e6213 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_125ac47a185d0dad6da1ad59fa6e6213)) {
        Py_XDECREF(cache_frame_125ac47a185d0dad6da1ad59fa6e6213);

#if _DEBUG_REFCOUNTS
        if (cache_frame_125ac47a185d0dad6da1ad59fa6e6213 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_125ac47a185d0dad6da1ad59fa6e6213 = MAKE_FUNCTION_FRAME(codeobj_125ac47a185d0dad6da1ad59fa6e6213, module_hpack$hpack, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_125ac47a185d0dad6da1ad59fa6e6213->m_type_description == NULL);
    frame_125ac47a185d0dad6da1ad59fa6e6213 = cache_frame_125ac47a185d0dad6da1ad59fa6e6213;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_125ac47a185d0dad6da1ad59fa6e6213);
    assert(Py_REFCNT(frame_125ac47a185d0dad6da1ad59fa6e6213) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[108]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[90]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 524;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "o";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_125ac47a185d0dad6da1ad59fa6e6213->m_frame.f_lineno = 525;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[110]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 525;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_125ac47a185d0dad6da1ad59fa6e6213, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_125ac47a185d0dad6da1ad59fa6e6213->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_125ac47a185d0dad6da1ad59fa6e6213, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_125ac47a185d0dad6da1ad59fa6e6213,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_125ac47a185d0dad6da1ad59fa6e6213 == cache_frame_125ac47a185d0dad6da1ad59fa6e6213) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_125ac47a185d0dad6da1ad59fa6e6213);
        cache_frame_125ac47a185d0dad6da1ad59fa6e6213 = NULL;
    }

    assertFrameObject(frame_125ac47a185d0dad6da1ad59fa6e6213);

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


static PyObject *impl_hpack$hpack$$$function__20__update_encoding_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *var_new_size = NULL;
    PyObject *var_consumed = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3054d0369a555433443603c4e80d0540;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_3054d0369a555433443603c4e80d0540 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3054d0369a555433443603c4e80d0540)) {
        Py_XDECREF(cache_frame_3054d0369a555433443603c4e80d0540);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3054d0369a555433443603c4e80d0540 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3054d0369a555433443603c4e80d0540 = MAKE_FUNCTION_FRAME(codeobj_3054d0369a555433443603c4e80d0540, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3054d0369a555433443603c4e80d0540->m_type_description == NULL);
    frame_3054d0369a555433443603c4e80d0540 = cache_frame_3054d0369a555433443603c4e80d0540;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3054d0369a555433443603c4e80d0540);
    assert(Py_REFCNT(frame_3054d0369a555433443603c4e80d0540) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        tmp_args_element_value_2 = mod_consts[85];
        frame_3054d0369a555433443603c4e80d0540->m_frame.f_lineno = 534;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oooo";
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
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 534;
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 534;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "oooo";
                    exception_lineno = 534;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 534;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_new_size == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_new_size = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_consumed == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_consumed = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_new_size);
        tmp_cmp_expr_left_1 = var_new_size;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[90]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3054d0369a555433443603c4e80d0540->m_frame.f_lineno = 536;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[113]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 536;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_new_size);
        tmp_assattr_value_1 = var_new_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[108], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3054d0369a555433443603c4e80d0540, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3054d0369a555433443603c4e80d0540->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3054d0369a555433443603c4e80d0540, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3054d0369a555433443603c4e80d0540,
        type_description_1,
        par_self,
        par_data,
        var_new_size,
        var_consumed
    );


    // Release cached frame if used for exception.
    if (frame_3054d0369a555433443603c4e80d0540 == cache_frame_3054d0369a555433443603c4e80d0540) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3054d0369a555433443603c4e80d0540);
        cache_frame_3054d0369a555433443603c4e80d0540 = NULL;
    }

    assertFrameObject(frame_3054d0369a555433443603c4e80d0540);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_consumed);
    tmp_return_value = var_consumed;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new_size);
    Py_DECREF(var_new_size);
    var_new_size = NULL;
    CHECK_OBJECT(var_consumed);
    Py_DECREF(var_consumed);
    var_consumed = NULL;
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

    Py_XDECREF(var_new_size);
    var_new_size = NULL;
    Py_XDECREF(var_consumed);
    var_consumed = NULL;
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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__21__decode_indexed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *var_index = NULL;
    PyObject *var_consumed = NULL;
    PyObject *var_header = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8e690d9c28bc79947c877a8a98965b5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8e690d9c28bc79947c877a8a98965b5b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8e690d9c28bc79947c877a8a98965b5b)) {
        Py_XDECREF(cache_frame_8e690d9c28bc79947c877a8a98965b5b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8e690d9c28bc79947c877a8a98965b5b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8e690d9c28bc79947c877a8a98965b5b = MAKE_FUNCTION_FRAME(codeobj_8e690d9c28bc79947c877a8a98965b5b, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8e690d9c28bc79947c877a8a98965b5b->m_type_description == NULL);
    frame_8e690d9c28bc79947c877a8a98965b5b = cache_frame_8e690d9c28bc79947c877a8a98965b5b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8e690d9c28bc79947c877a8a98965b5b);
    assert(Py_REFCNT(frame_8e690d9c28bc79947c877a8a98965b5b) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        tmp_args_element_value_2 = mod_consts[18];
        frame_8e690d9c28bc79947c877a8a98965b5b->m_frame.f_lineno = 546;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
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
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
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
            exception_lineno = 546;
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
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
            exception_lineno = 546;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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
                    exception_lineno = 546;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 546;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_index == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_index = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_consumed == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_consumed = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_index);
        tmp_args_element_value_3 = var_index;
        frame_8e690d9c28bc79947c877a8a98965b5b->m_frame.f_lineno = 547;
        tmp_dircall_arg2_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[115], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_6 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_header == NULL);
        var_header = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[116];
        CHECK_OBJECT(var_header);
        tmp_args_element_value_5 = var_header;
        CHECK_OBJECT(var_consumed);
        tmp_args_element_value_6 = var_consumed;
        frame_8e690d9c28bc79947c877a8a98965b5b->m_frame.f_lineno = 548;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[7],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8e690d9c28bc79947c877a8a98965b5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e690d9c28bc79947c877a8a98965b5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e690d9c28bc79947c877a8a98965b5b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8e690d9c28bc79947c877a8a98965b5b,
        type_description_1,
        par_self,
        par_data,
        var_index,
        var_consumed,
        var_header
    );


    // Release cached frame if used for exception.
    if (frame_8e690d9c28bc79947c877a8a98965b5b == cache_frame_8e690d9c28bc79947c877a8a98965b5b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8e690d9c28bc79947c877a8a98965b5b);
        cache_frame_8e690d9c28bc79947c877a8a98965b5b = NULL;
    }

    assertFrameObject(frame_8e690d9c28bc79947c877a8a98965b5b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_header);
        tmp_tuple_element_1 = var_header;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_consumed);
        tmp_tuple_element_1 = var_consumed;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_index);
    Py_DECREF(var_index);
    var_index = NULL;
    CHECK_OBJECT(var_consumed);
    Py_DECREF(var_consumed);
    var_consumed = NULL;
    CHECK_OBJECT(var_header);
    Py_DECREF(var_header);
    var_header = NULL;
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

    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_consumed);
    var_consumed = NULL;
    Py_XDECREF(var_header);
    var_header = NULL;
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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__22__decode_literal_no_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    struct Nuitka_FrameObject *frame_4797e8f15524916990fce641d93da036;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4797e8f15524916990fce641d93da036 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4797e8f15524916990fce641d93da036)) {
        Py_XDECREF(cache_frame_4797e8f15524916990fce641d93da036);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4797e8f15524916990fce641d93da036 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4797e8f15524916990fce641d93da036 = MAKE_FUNCTION_FRAME(codeobj_4797e8f15524916990fce641d93da036, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4797e8f15524916990fce641d93da036->m_type_description == NULL);
    frame_4797e8f15524916990fce641d93da036 = cache_frame_4797e8f15524916990fce641d93da036;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4797e8f15524916990fce641d93da036);
    assert(Py_REFCNT(frame_4797e8f15524916990fce641d93da036) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        tmp_args_element_value_2 = Py_False;
        frame_4797e8f15524916990fce641d93da036->m_frame.f_lineno = 552;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[118],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
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
        exception_tb = MAKE_TRACEBACK(frame_4797e8f15524916990fce641d93da036, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4797e8f15524916990fce641d93da036->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4797e8f15524916990fce641d93da036, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4797e8f15524916990fce641d93da036,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_4797e8f15524916990fce641d93da036 == cache_frame_4797e8f15524916990fce641d93da036) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4797e8f15524916990fce641d93da036);
        cache_frame_4797e8f15524916990fce641d93da036 = NULL;
    }

    assertFrameObject(frame_4797e8f15524916990fce641d93da036);

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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__23__decode_literal_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    struct Nuitka_FrameObject *frame_6f63533dfdecea34daa474682bca6a50;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6f63533dfdecea34daa474682bca6a50 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f63533dfdecea34daa474682bca6a50)) {
        Py_XDECREF(cache_frame_6f63533dfdecea34daa474682bca6a50);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f63533dfdecea34daa474682bca6a50 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f63533dfdecea34daa474682bca6a50 = MAKE_FUNCTION_FRAME(codeobj_6f63533dfdecea34daa474682bca6a50, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f63533dfdecea34daa474682bca6a50->m_type_description == NULL);
    frame_6f63533dfdecea34daa474682bca6a50 = cache_frame_6f63533dfdecea34daa474682bca6a50;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6f63533dfdecea34daa474682bca6a50);
    assert(Py_REFCNT(frame_6f63533dfdecea34daa474682bca6a50) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        tmp_args_element_value_2 = Py_True;
        frame_6f63533dfdecea34daa474682bca6a50->m_frame.f_lineno = 555;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[118],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
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
        exception_tb = MAKE_TRACEBACK(frame_6f63533dfdecea34daa474682bca6a50, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f63533dfdecea34daa474682bca6a50->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f63533dfdecea34daa474682bca6a50, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f63533dfdecea34daa474682bca6a50,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_6f63533dfdecea34daa474682bca6a50 == cache_frame_6f63533dfdecea34daa474682bca6a50) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f63533dfdecea34daa474682bca6a50);
        cache_frame_6f63533dfdecea34daa474682bca6a50 = NULL;
    }

    assertFrameObject(frame_6f63533dfdecea34daa474682bca6a50);

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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__24__decode_literal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *par_should_index = python_pars[2];
    PyObject *var_total_consumed = NULL;
    PyObject *var_indexed_name = NULL;
    PyObject *var_name_len = NULL;
    PyObject *var_not_indexable = NULL;
    PyObject *var_high_byte = NULL;
    PyObject *var_index = NULL;
    PyObject *var_consumed = NULL;
    PyObject *var_name = NULL;
    PyObject *var_length = NULL;
    PyObject *var_value = NULL;
    PyObject *var_header = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_036e7029369dbf2a41dfc45942e907d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_036e7029369dbf2a41dfc45942e907d9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_036e7029369dbf2a41dfc45942e907d9)) {
        Py_XDECREF(cache_frame_036e7029369dbf2a41dfc45942e907d9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_036e7029369dbf2a41dfc45942e907d9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_036e7029369dbf2a41dfc45942e907d9 = MAKE_FUNCTION_FRAME(codeobj_036e7029369dbf2a41dfc45942e907d9, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_036e7029369dbf2a41dfc45942e907d9->m_type_description == NULL);
    frame_036e7029369dbf2a41dfc45942e907d9 = cache_frame_036e7029369dbf2a41dfc45942e907d9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_036e7029369dbf2a41dfc45942e907d9);
    assert(Py_REFCNT(frame_036e7029369dbf2a41dfc45942e907d9) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_should_index);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_should_index);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "oooooooooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_expression_value_1 = par_data;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 568;
        tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_1 = mod_consts[119];
        tmp_assign_source_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indexed_name == NULL);
        var_indexed_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[83];
        assert(var_name_len == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_name_len = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_False;
        assert(var_not_indexable == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_not_indexable = tmp_assign_source_3;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_expression_value_2 = par_data;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 572;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_high_byte == NULL);
        var_high_byte = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        CHECK_OBJECT(var_high_byte);
        tmp_bitand_expr_left_2 = var_high_byte;
        tmp_bitand_expr_right_2 = mod_consts[120];
        tmp_assign_source_5 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indexed_name == NULL);
        var_indexed_name = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[82];
        assert(var_name_len == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_name_len = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        CHECK_OBJECT(var_high_byte);
        tmp_bitand_expr_left_3 = var_high_byte;
        tmp_bitand_expr_right_3 = mod_consts[121];
        tmp_assign_source_7 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_not_indexable == NULL);
        var_not_indexable = tmp_assign_source_7;
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_indexed_name);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_indexed_name);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "oooooooooooooo";
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
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_3 = par_data;
        CHECK_OBJECT(var_name_len);
        tmp_args_element_value_4 = var_name_len;
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 579;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 579;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 579;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 579;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 579;
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
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        assert(var_index == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_index = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        assert(var_consumed == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_consumed = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[44]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_index);
        tmp_args_element_value_5 = var_index;
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 580;
        tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[115], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[1];
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_3, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(var_consumed);
        tmp_assign_source_14 = var_consumed;
        assert(var_total_consumed == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_total_consumed = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[1];
        assert(var_length == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_length = tmp_assign_source_15;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_data);
        tmp_expression_value_5 = par_data;
        tmp_subscript_value_4 = mod_consts[122];
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_4);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_6 = par_data;
        tmp_args_element_value_7 = mod_consts[18];
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 589;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 589;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 589;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_19;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 589;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 589;
            goto try_except_handler_5;
        }
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_1;
        assert(var_length == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_length = tmp_assign_source_20;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_2;
        assert(var_consumed == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_consumed = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_data);
        tmp_expression_value_6 = par_data;
        CHECK_OBJECT(var_consumed);
        tmp_start_value_1 = var_consumed;
        CHECK_OBJECT(var_consumed);
        tmp_add_expr_left_1 = var_consumed;
        CHECK_OBJECT(var_length);
        tmp_add_expr_right_1 = var_length;
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_5 == NULL));
        tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_name);
        tmp_len_arg_1 = var_name;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_length);
        tmp_cmp_expr_right_1 = var_length;
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oooooooooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 592;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[123]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 592;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_bitand_expr_left_4;
        PyObject *tmp_bitand_expr_right_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_expression_value_7 = par_data;
        tmp_subscript_value_6 = mod_consts[1];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_6, 0);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 594;
        tmp_bitand_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_bitand_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_4 = mod_consts[14];
        tmp_condition_result_4 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
        Py_DECREF(tmp_bitand_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "oooooooooooooo";
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_9 = var_name;
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 595;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_9);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_name;
            assert(old != NULL);
            var_name = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        CHECK_OBJECT(var_consumed);
        tmp_add_expr_left_3 = var_consumed;
        CHECK_OBJECT(var_length);
        tmp_add_expr_right_3 = var_length;
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[2];
        tmp_assign_source_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total_consumed == NULL);
        var_total_consumed = tmp_assign_source_24;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_start_value_2;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_stop_value_2;
        if (par_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 598;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_data;
        if (var_consumed == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[126]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 598;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_4 = var_consumed;
        if (var_length == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[127]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 598;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_4 = var_length;
        tmp_start_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_start_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_value_2 = Py_None;
        tmp_subscript_value_7 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
        Py_DECREF(tmp_start_value_2);
        assert(!(tmp_subscript_value_7 == NULL));
        tmp_assign_source_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            par_data = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_10 = par_data;
        tmp_args_element_value_11 = mod_consts[18];
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 601;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_27 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 601;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_28 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 601;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_28;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 601;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 601;
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_29 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_length;
            var_length = tmp_assign_source_29;
            Py_INCREF(var_length);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_30 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_consumed;
            var_consumed = tmp_assign_source_30;
            Py_INCREF(var_consumed);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_3;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        CHECK_OBJECT(par_data);
        tmp_expression_value_9 = par_data;
        CHECK_OBJECT(var_consumed);
        tmp_start_value_3 = var_consumed;
        CHECK_OBJECT(var_consumed);
        tmp_add_expr_left_5 = var_consumed;
        CHECK_OBJECT(var_length);
        tmp_add_expr_right_5 = var_length;
        tmp_stop_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_stop_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = MAKE_SLICE_OBJECT2(tmp_start_value_3, tmp_stop_value_3);
        Py_DECREF(tmp_stop_value_3);
        assert(!(tmp_subscript_value_8 == NULL));
        tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_value);
        tmp_len_arg_2 = var_value;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_length);
        tmp_cmp_expr_right_2 = var_length;
        tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 604;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[123]);

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 604;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_bitand_expr_left_5;
        PyObject *tmp_bitand_expr_right_5;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_9;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_expression_value_10 = par_data;
        tmp_subscript_value_9 = mod_consts[1];
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_9, 0);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 606;
        tmp_bitand_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_bitand_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_5 = mod_consts[14];
        tmp_condition_result_6 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
        Py_DECREF(tmp_bitand_expr_left_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_value);
        tmp_args_element_value_13 = var_value;
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 607;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_13);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        CHECK_OBJECT(var_total_consumed);
        tmp_iadd_expr_left_1 = var_total_consumed;
        CHECK_OBJECT(var_length);
        tmp_add_expr_left_6 = var_length;
        CHECK_OBJECT(var_consumed);
        tmp_add_expr_right_6 = var_consumed;
        tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = tmp_iadd_expr_left_1;
        var_total_consumed = tmp_assign_source_33;

    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_not_indexable);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_not_indexable);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 615;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = var_name;
        if (var_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[130]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 615;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_15 = var_value;
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 615;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_header == NULL);
        var_header = tmp_assign_source_34;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 617;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_16 = var_name;
        if (var_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[130]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 617;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_17 = var_value;
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 617;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_header == NULL);
        var_header = tmp_assign_source_35;
    }
    branch_end_7:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_should_index);
        tmp_truth_name_4 = CHECK_IF_TRUE(par_should_index);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[44]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[62]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_name == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 621;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_18 = var_name;
        if (var_value == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[130]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 621;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_19 = var_value;
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 621;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_8:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = mod_consts[131];
        CHECK_OBJECT(var_header);
        tmp_args_element_value_21 = var_header;
        CHECK_OBJECT(var_total_consumed);
        tmp_args_element_value_22 = var_total_consumed;
        CHECK_OBJECT(par_should_index);
        tmp_args_element_value_23 = par_should_index;
        frame_036e7029369dbf2a41dfc45942e907d9->m_frame.f_lineno = 623;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_2,
                mod_consts[7],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_036e7029369dbf2a41dfc45942e907d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_036e7029369dbf2a41dfc45942e907d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_036e7029369dbf2a41dfc45942e907d9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_036e7029369dbf2a41dfc45942e907d9,
        type_description_1,
        par_self,
        par_data,
        par_should_index,
        var_total_consumed,
        var_indexed_name,
        var_name_len,
        var_not_indexable,
        var_high_byte,
        var_index,
        var_consumed,
        var_name,
        var_length,
        var_value,
        var_header
    );


    // Release cached frame if used for exception.
    if (frame_036e7029369dbf2a41dfc45942e907d9 == cache_frame_036e7029369dbf2a41dfc45942e907d9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_036e7029369dbf2a41dfc45942e907d9);
        cache_frame_036e7029369dbf2a41dfc45942e907d9 = NULL;
    }

    assertFrameObject(frame_036e7029369dbf2a41dfc45942e907d9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_header);
        tmp_tuple_element_1 = var_header;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_total_consumed);
        tmp_tuple_element_1 = var_total_consumed;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(var_total_consumed);
    Py_DECREF(var_total_consumed);
    var_total_consumed = NULL;
    CHECK_OBJECT(var_indexed_name);
    Py_DECREF(var_indexed_name);
    var_indexed_name = NULL;
    CHECK_OBJECT(var_name_len);
    Py_DECREF(var_name_len);
    var_name_len = NULL;
    CHECK_OBJECT(var_not_indexable);
    Py_DECREF(var_not_indexable);
    var_not_indexable = NULL;
    Py_XDECREF(var_high_byte);
    var_high_byte = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    CHECK_OBJECT(var_consumed);
    Py_DECREF(var_consumed);
    var_consumed = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_length);
    Py_DECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    CHECK_OBJECT(var_header);
    Py_DECREF(var_header);
    var_header = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_data);
    par_data = NULL;
    Py_XDECREF(var_total_consumed);
    var_total_consumed = NULL;
    Py_XDECREF(var_indexed_name);
    var_indexed_name = NULL;
    Py_XDECREF(var_name_len);
    var_name_len = NULL;
    Py_XDECREF(var_not_indexable);
    var_not_indexable = NULL;
    Py_XDECREF(var_high_byte);
    var_high_byte = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_consumed);
    var_consumed = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_header);
    var_header = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_should_index);
    Py_DECREF(par_should_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_should_index);
    Py_DECREF(par_should_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__10_add(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__10_add,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_f8c0c39ee29418b5549fabc7aec7a93f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__11__encode_indexed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__11__encode_indexed,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_9503a25864e006b89721a664e0a8a807,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[78],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__12__encode_literal(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__12__encode_literal,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_62b34a3998558ef09c68972df4d5ca8e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[81],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__13__encode_indexed_literal(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__13__encode_indexed_literal,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_bbac6ebaaf619077febf076bd97c2d87,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[84],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__14__encode_table_size_change() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__14__encode_table_size_change,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_2b6de8bd0abdfe03742e317b94248b7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[88],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__15___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__15___init__,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_59d49020f39375b64a56d5d9ad1ae7d9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__16_header_table_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__16_header_table_size,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_28441455946dd231ed07bd4c7b868355,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__17_header_table_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__17_header_table_size,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_02fd74b5456b6ee55d4a0d69c2544235,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__18_decode(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__18_decode,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_0dc5484c2db58b6d4c113fe22d4c1114,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[107],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__19__assert_valid_table_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__19__assert_valid_table_size,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_125ac47a185d0dad6da1ad59fa6e6213,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[111],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__1__unicode_if_needed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__1__unicode_if_needed,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2aa038c9655a3869524c6b7861f649f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__20__update_encoding_context() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__20__update_encoding_context,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_3054d0369a555433443603c4e80d0540,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__21__decode_indexed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__21__decode_indexed,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_8e690d9c28bc79947c877a8a98965b5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[117],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__22__decode_literal_no_index() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__22__decode_literal_no_index,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_4797e8f15524916990fce641d93da036,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__23__decode_literal_index() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__23__decode_literal_index,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_6f63533dfdecea34daa474682bca6a50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__24__decode_literal() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__24__decode_literal,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_036e7029369dbf2a41dfc45942e907d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[132],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__2_encode_integer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__2_encode_integer,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_274133b2768a31b1954e55d1b2686f90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__3_decode_integer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__3_decode_integer,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ec0631e93092331eccaeae2f60849da9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__4__dict_to_iterable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__4__dict_to_iterable,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_11006d6eb4702e95c7cd01b63582acbe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_12ec1ca31745a5b20a0d2637ef33697b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__5__to_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__5__to_bytes,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_35a3daad194f9c344619cccb6c3ac635,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__6___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__6___init__,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_3347af7e42cf2c393b98c04c9f7da658,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__7_header_table_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__7_header_table_size,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_c33ce4527df12cf9b18b25a79d675a26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__8_header_table_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__8_header_table_size,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_21a43f0d34f1fd2d3249885a5ab786b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__9_encode(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__9_encode,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_3a392fc45d9d2d13a3ac11075e066f73,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        mod_consts[66],
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

function_impl_code functable_hpack$hpack[] = {
    impl_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda,
    impl_hpack$hpack$$$function__1__unicode_if_needed,
    impl_hpack$hpack$$$function__2_encode_integer,
    impl_hpack$hpack$$$function__3_decode_integer,
    impl_hpack$hpack$$$function__4__dict_to_iterable,
    impl_hpack$hpack$$$function__5__to_bytes,
    impl_hpack$hpack$$$function__6___init__,
    impl_hpack$hpack$$$function__7_header_table_size,
    impl_hpack$hpack$$$function__8_header_table_size,
    impl_hpack$hpack$$$function__9_encode,
    impl_hpack$hpack$$$function__10_add,
    impl_hpack$hpack$$$function__11__encode_indexed,
    impl_hpack$hpack$$$function__12__encode_literal,
    impl_hpack$hpack$$$function__13__encode_indexed_literal,
    impl_hpack$hpack$$$function__14__encode_table_size_change,
    impl_hpack$hpack$$$function__15___init__,
    impl_hpack$hpack$$$function__16_header_table_size,
    impl_hpack$hpack$$$function__17_header_table_size,
    impl_hpack$hpack$$$function__18_decode,
    impl_hpack$hpack$$$function__19__assert_valid_table_size,
    impl_hpack$hpack$$$function__20__update_encoding_context,
    impl_hpack$hpack$$$function__21__decode_indexed,
    impl_hpack$hpack$$$function__22__decode_literal_no_index,
    impl_hpack$hpack$$$function__23__decode_literal_index,
    impl_hpack$hpack$$$function__24__decode_literal,
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

    function_impl_code *current = functable_hpack$hpack;
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

    if (offset > sizeof(functable_hpack$hpack) || offset < 0) {
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
        functable_hpack$hpack[offset],
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
        module_hpack$hpack,
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
PyObject *modulecode_hpack$hpack(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("hpack.hpack");

    // Store the module for future use.
    module_hpack$hpack = module;

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
        PRINT_STRING("hpack.hpack: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("hpack.hpack: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("hpack.hpack: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithpack$hpack\n");

    moduledict_hpack$hpack = MODULE_DICT(module_hpack$hpack);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_hpack$hpack,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_hpack$hpack,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[226]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_hpack$hpack,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_hpack$hpack,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_hpack$hpack,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_hpack$hpack);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_hpack$hpack);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_01b53c47c62c4e2270188d9b5558752f;
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
    struct Nuitka_FrameObject *frame_f783f57bef85bb6ec3f7c20e1a6930c6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_f783f57bef85bb6ec3f7c20e1a6930c6_2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_hpack$hpack$$$class__1_Encoder_157 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4e1da3eccdbf370e9b101b453751504a_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_hpack$hpack$$$class__2_Decoder_374 = NULL;
    struct Nuitka_FrameObject *frame_851762171788330200136f4e1ff1156d_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
        tmp_assign_source_1 = mod_consts[133];
        UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[135];
        UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_2);
    }
    frame_01b53c47c62c4e2270188d9b5558752f = MAKE_MODULE_FRAME(codeobj_01b53c47c62c4e2270188d9b5558752f, module_hpack$hpack);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_01b53c47c62c4e2270188d9b5558752f);
    assert(Py_REFCNT(frame_01b53c47c62c4e2270188d9b5558752f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[135];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[138], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[139], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[141];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_hpack$hpack;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 8;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[142];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_hpack$hpack;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[143];
        tmp_level_value_2 = mod_consts[2];
        frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 10;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

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
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[43],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[43]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[100],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[100]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_7);
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
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[144];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_hpack$hpack;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[145];
        tmp_level_value_3 = mod_consts[2];
        frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 11;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
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
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[21],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[21]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[0],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[0]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_10);
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[146];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_hpack$hpack;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[147];
        tmp_level_value_4 = mod_consts[2];
        frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 12;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_5 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[25],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[25]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_6 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[101],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[101]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[109],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[109]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[63];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_hpack$hpack;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[148];
        tmp_level_value_5 = mod_consts[2];
        frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 15;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[45],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[149];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_hpack$hpack;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[150];
        tmp_level_value_6 = mod_consts[2];
        frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 16;
        tmp_assign_source_16 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_9 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[46],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[46]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_10 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[47],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[47]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_18);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[151];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_hpack$hpack;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[152];
        tmp_level_value_7 = mod_consts[2];
        frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 19;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[124],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[124]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[153];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_hpack$hpack;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[154];
        tmp_level_value_8 = mod_consts[2];
        frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 20;
        tmp_assign_source_20 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_12 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[56],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[56]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_13 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_hpack$hpack,
                mod_consts[128],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[128]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_22);
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 22;
        tmp_assign_source_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[155],
            PyTuple_GET_ITEM(mod_consts[156], 0)
        );

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[157];
        UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[159];
        UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = mod_consts[161];
            tmp_assign_source_28 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            assert(!(tmp_assign_source_28 == NULL));
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_29;
        }
        // Tried code:
        if (isFrameUnusable(cache_frame_f783f57bef85bb6ec3f7c20e1a6930c6_2)) {
            Py_XDECREF(cache_frame_f783f57bef85bb6ec3f7c20e1a6930c6_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f783f57bef85bb6ec3f7c20e1a6930c6_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f783f57bef85bb6ec3f7c20e1a6930c6_2 = MAKE_FUNCTION_FRAME(codeobj_f783f57bef85bb6ec3f7c20e1a6930c6, module_hpack$hpack, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_f783f57bef85bb6ec3f7c20e1a6930c6_2->m_type_description == NULL);
        frame_f783f57bef85bb6ec3f7c20e1a6930c6_2 = cache_frame_f783f57bef85bb6ec3f7c20e1a6930c6_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f783f57bef85bb6ec3f7c20e1a6930c6_2);
        assert(Py_REFCNT(frame_f783f57bef85bb6ec3f7c20e1a6930c6_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_30 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_30 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 31;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_30;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_31 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_31;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_pow_expr_left_1;
            PyObject *tmp_pow_expr_right_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_pow_expr_left_1 = mod_consts[58];
            CHECK_OBJECT(outline_0_var_i);
            tmp_pow_expr_right_1 = outline_0_var_i;
            tmp_sub_expr_left_1 = BINARY_OPERATION_POW_OBJECT_LONG_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
            if (tmp_sub_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_sub_expr_right_1 = mod_consts[2];
            tmp_append_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_left_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_27 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
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
        try_except_handler_7:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
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
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f783f57bef85bb6ec3f7c20e1a6930c6_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f783f57bef85bb6ec3f7c20e1a6930c6_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f783f57bef85bb6ec3f7c20e1a6930c6_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f783f57bef85bb6ec3f7c20e1a6930c6_2,
            type_description_2,
            outline_0_var_i
        );


        // Release cached frame if used for exception.
        if (frame_f783f57bef85bb6ec3f7c20e1a6930c6_2 == cache_frame_f783f57bef85bb6ec3f7c20e1a6930c6_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_f783f57bef85bb6ec3f7c20e1a6930c6_2);
            cache_frame_f783f57bef85bb6ec3f7c20e1a6930c6_2 = NULL;
        }

        assertFrameObject(frame_f783f57bef85bb6ec3f7c20e1a6930c6_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 31;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_27);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assign_source_32 == NULL)) {
            tmp_assign_source_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_32);
    }
    goto try_end_6;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_8 == NULL) {
        exception_keeper_tb_8 = MAKE_TRACEBACK(frame_01b53c47c62c4e2270188d9b5558752f, exception_keeper_lineno_8);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_keeper_tb_8 = ADD_TRACEBACK(exception_keeper_tb_8, frame_01b53c47c62c4e2270188d9b5558752f, exception_keeper_lineno_8);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_NameError;
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
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_33);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 33;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_01b53c47c62c4e2270188d9b5558752f->m_frame) frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_9;
    branch_end_1:;
    goto try_end_7;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_6;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_hpack$hpack$$$function__1__unicode_if_needed();

        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_hpack$hpack$$$function__2_encode_integer();

        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_hpack$hpack$$$function__3_decode_integer();

        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_hpack$hpack$$$function__4__dict_to_iterable();

        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_hpack$hpack$$$function__5__to_bytes();

        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_39);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[165];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_40 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
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


            exception_lineno = 157;

            goto try_except_handler_10;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_10;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_42 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_42;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[166]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[166]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_10;
        }
        tmp_tuple_element_1 = mod_consts[167];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 157;
        tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_43;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[168]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_10;
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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[169];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[170];
        tmp_getattr_default_1 = mod_consts[171];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[170]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 157;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_44;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_hpack$hpack$$$class__1_Encoder_157 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[174];
        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_12;
        }
        frame_4e1da3eccdbf370e9b101b453751504a_3 = MAKE_CLASS_FRAME(codeobj_4e1da3eccdbf370e9b101b453751504a, module_hpack$hpack, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4e1da3eccdbf370e9b101b453751504a_3);
        assert(Py_REFCNT(frame_4e1da3eccdbf370e9b101b453751504a_3) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__6___init__();

        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[178]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[178]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[178]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_hpack$hpack$$$function__7_header_table_size();

            frame_4e1da3eccdbf370e9b101b453751504a_3->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_hpack$hpack$$$function__7_header_table_size();

            frame_4e1da3eccdbf370e9b101b453751504a_3->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_2 = PyObject_GetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[108]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[108]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_hpack$hpack$$$function__8_header_table_size();

            frame_4e1da3eccdbf370e9b101b453751504a_3->m_frame.f_lineno = 177;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[180], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[181];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__9_encode(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[183];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__10_add(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__11__encode_indexed();

        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[74], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[183];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__12__encode_literal(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[183];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__13__encode_indexed_literal(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__14__encode_table_size_change();

        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[54], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4e1da3eccdbf370e9b101b453751504a_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4e1da3eccdbf370e9b101b453751504a_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4e1da3eccdbf370e9b101b453751504a_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4e1da3eccdbf370e9b101b453751504a_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_4e1da3eccdbf370e9b101b453751504a_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_12;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_2 = mod_consts[165];
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[165];
        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__1_Encoder_157, mod_consts[189], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_12;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[167];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_hpack$hpack$$$class__1_Encoder_157;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 157;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto try_except_handler_12;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_45 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_hpack$hpack$$$class__1_Encoder_157);
        locals_hpack$hpack$$$class__1_Encoder_157 = NULL;
        goto try_return_handler_11;
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

        Py_DECREF(locals_hpack$hpack$$$class__1_Encoder_157);
        locals_hpack$hpack$$$class__1_Encoder_157 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 157;
        goto try_except_handler_10;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_45);
    }
    goto try_end_8;
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

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[165];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_47 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_7;
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


            exception_lineno = 374;

            goto try_except_handler_13;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_13;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_49 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_49;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[166]);
        tmp_condition_result_8 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[166]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_13;
        }
        tmp_tuple_element_4 = mod_consts[190];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_4 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 374;
        tmp_assign_source_50 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[168]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_13;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
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
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[169];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[170];
        tmp_getattr_default_2 = mod_consts[171];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[170]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 374;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_51;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_hpack$hpack$$$class__2_Decoder_374 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[191];
        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_15;
        }
        frame_851762171788330200136f4e1ff1156d_4 = MAKE_CLASS_FRAME(codeobj_851762171788330200136f4e1ff1156d, module_hpack$hpack, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_851762171788330200136f4e1ff1156d_4);
        assert(Py_REFCNT(frame_851762171788330200136f4e1ff1156d_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_tuple_element_6;
            tmp_tuple_element_6 = PyObject_GetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[164]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[164]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 395;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_defaults_5 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_5, 0, tmp_tuple_element_6);


            tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__15___init__(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_5;
            tmp_res = MAPPING_HAS_ITEM(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[178]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_6 = PyObject_GetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[178]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[178]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 423;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_hpack$hpack$$$function__16_header_table_size();

            frame_851762171788330200136f4e1ff1156d_4->m_frame.f_lineno = 423;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_5 = MAKE_FUNCTION_hpack$hpack$$$function__16_header_table_size();

            frame_851762171788330200136f4e1ff1156d_4->m_frame.f_lineno = 423;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_6;
            tmp_called_instance_3 = PyObject_GetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[108]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[108]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 430;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_hpack$hpack$$$function__17_header_table_size();

            frame_851762171788330200136f4e1ff1156d_4->m_frame.f_lineno = 430;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[180], tmp_args_element_value_6);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[183];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__18_decode(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__19__assert_valid_table_size();

        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[103], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__20__update_encoding_context();

        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[97], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__21__decode_indexed();

        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[94], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__22__decode_literal_no_index();

        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[98], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__23__decode_literal_index();

        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[95], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__24__decode_literal();

        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_851762171788330200136f4e1ff1156d_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_851762171788330200136f4e1ff1156d_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_851762171788330200136f4e1ff1156d_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_851762171788330200136f4e1ff1156d_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_851762171788330200136f4e1ff1156d_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_15;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_2__bases;
            tmp_cmp_expr_right_3 = mod_consts[165];
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        tmp_dictset_value = mod_consts[165];
        tmp_res = PyObject_SetItem(locals_hpack$hpack$$$class__2_Decoder_374, mod_consts[189], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_15;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[190];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_hpack$hpack$$$class__2_Decoder_374;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_01b53c47c62c4e2270188d9b5558752f->m_frame.f_lineno = 374;
            tmp_assign_source_53 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto try_except_handler_15;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_52 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_52);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_hpack$hpack$$$class__2_Decoder_374);
        locals_hpack$hpack$$$class__2_Decoder_374 = NULL;
        goto try_return_handler_14;
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

        Py_DECREF(locals_hpack$hpack$$$class__2_Decoder_374);
        locals_hpack$hpack$$$class__2_Decoder_374 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 374;
        goto try_except_handler_13;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_52);
    }
    goto try_end_9;
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

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_01b53c47c62c4e2270188d9b5558752f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01b53c47c62c4e2270188d9b5558752f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01b53c47c62c4e2270188d9b5558752f, exception_lineno);
    }



    assertFrameObject(frame_01b53c47c62c4e2270188d9b5558752f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("hpack.hpack", false);

    Py_INCREF(module_hpack$hpack);
    return module_hpack$hpack;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("hpack$hpack", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
