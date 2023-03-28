/* Generated code for Python module 'docx.oxml'
 * created by Nuitka version 1.5.4
 *
 * This code is in part copyright 2022 Kay Hayen.
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

/* The "module_docx$oxml" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_docx$oxml;
PyDictObject *moduledict_docx$oxml;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[252];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[252];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("docx.oxml"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 252; i++) {
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
void checkModuleConstants_docx$oxml(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 252; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6dcb13b49d8e954feb6c61e8f034a502;
static PyCodeObject *codeobj_d376720161aceed2ca305e8b0b0f1c67;
static PyCodeObject *codeobj_88709d1dc82c58655ed5c825d194a008;
static PyCodeObject *codeobj_52af85a8fd58590448118a5759dc8e5b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[246]); CHECK_OBJECT(module_filename_obj);
    codeobj_6dcb13b49d8e954feb6c61e8f034a502 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[247], mod_consts[247], NULL, NULL, 0, 0, 0);
    codeobj_d376720161aceed2ca305e8b0b0f1c67 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[49], mod_consts[49], mod_consts[248], NULL, 3, 0, 0);
    codeobj_88709d1dc82c58655ed5c825d194a008 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[46], mod_consts[46], mod_consts[249], NULL, 1, 0, 0);
    codeobj_52af85a8fd58590448118a5759dc8e5b = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[47], mod_consts[47], mod_consts[250], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_docx$oxml$$$function__1_parse_xml();


static PyObject *MAKE_FUNCTION_docx$oxml$$$function__2_register_element_cls();


static PyObject *MAKE_FUNCTION_docx$oxml$$$function__3_OxmlElement(PyObject *defaults);


// The module function definitions.
static PyObject *impl_docx$oxml$$$function__1_parse_xml(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_xml = python_pars[0];
    PyObject *var_root_element = NULL;
    struct Nuitka_FrameObject *frame_88709d1dc82c58655ed5c825d194a008;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_88709d1dc82c58655ed5c825d194a008 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_88709d1dc82c58655ed5c825d194a008)) {
        Py_XDECREF(cache_frame_88709d1dc82c58655ed5c825d194a008);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88709d1dc82c58655ed5c825d194a008 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88709d1dc82c58655ed5c825d194a008 = MAKE_FUNCTION_FRAME(codeobj_88709d1dc82c58655ed5c825d194a008, module_docx$oxml, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_88709d1dc82c58655ed5c825d194a008->m_type_description == NULL);
    frame_88709d1dc82c58655ed5c825d194a008 = cache_frame_88709d1dc82c58655ed5c825d194a008;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_88709d1dc82c58655ed5c825d194a008);
    assert(Py_REFCNT(frame_88709d1dc82c58655ed5c825d194a008) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xml);
        tmp_args_element_value_1 = par_xml;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_88709d1dc82c58655ed5c825d194a008->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_root_element == NULL);
        var_root_element = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_88709d1dc82c58655ed5c825d194a008, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88709d1dc82c58655ed5c825d194a008->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88709d1dc82c58655ed5c825d194a008, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88709d1dc82c58655ed5c825d194a008,
        type_description_1,
        par_xml,
        var_root_element
    );


    // Release cached frame if used for exception.
    if (frame_88709d1dc82c58655ed5c825d194a008 == cache_frame_88709d1dc82c58655ed5c825d194a008) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_88709d1dc82c58655ed5c825d194a008);
        cache_frame_88709d1dc82c58655ed5c825d194a008 = NULL;
    }

    assertFrameObject(frame_88709d1dc82c58655ed5c825d194a008);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_root_element);
    tmp_return_value = var_root_element;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_root_element);
    Py_DECREF(var_root_element);
    var_root_element = NULL;
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
    CHECK_OBJECT(par_xml);
    Py_DECREF(par_xml);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_xml);
    Py_DECREF(par_xml);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_docx$oxml$$$function__2_register_element_cls(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tag = python_pars[0];
    PyObject *par_cls = python_pars[1];
    PyObject *var_nspfx = NULL;
    PyObject *var_tagroot = NULL;
    PyObject *var_namespace = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_52af85a8fd58590448118a5759dc8e5b;
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
    static struct Nuitka_FrameObject *cache_frame_52af85a8fd58590448118a5759dc8e5b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_52af85a8fd58590448118a5759dc8e5b)) {
        Py_XDECREF(cache_frame_52af85a8fd58590448118a5759dc8e5b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52af85a8fd58590448118a5759dc8e5b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52af85a8fd58590448118a5759dc8e5b = MAKE_FUNCTION_FRAME(codeobj_52af85a8fd58590448118a5759dc8e5b, module_docx$oxml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_52af85a8fd58590448118a5759dc8e5b->m_type_description == NULL);
    frame_52af85a8fd58590448118a5759dc8e5b = cache_frame_52af85a8fd58590448118a5759dc8e5b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_52af85a8fd58590448118a5759dc8e5b);
    assert(Py_REFCNT(frame_52af85a8fd58590448118a5759dc8e5b) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_tag);
        tmp_expression_value_1 = par_tag;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_52af85a8fd58590448118a5759dc8e5b->m_frame.f_lineno = 38;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[5]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
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
            exception_lineno = 38;
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
            exception_lineno = 38;
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
                    exception_lineno = 38;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[6];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 38;
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
        assert(var_nspfx == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_nspfx = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_tagroot == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_tagroot = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_nspfx);
        tmp_subscript_value_1 = var_nspfx;
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_52af85a8fd58590448118a5759dc8e5b->m_frame.f_lineno = 39;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_namespace == NULL);
        var_namespace = tmp_assign_source_6;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_cls);
        tmp_ass_subvalue_1 = par_cls;
        CHECK_OBJECT(var_namespace);
        tmp_ass_subscribed_1 = var_namespace;
        CHECK_OBJECT(var_tagroot);
        tmp_ass_subscript_1 = var_tagroot;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_52af85a8fd58590448118a5759dc8e5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52af85a8fd58590448118a5759dc8e5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52af85a8fd58590448118a5759dc8e5b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52af85a8fd58590448118a5759dc8e5b,
        type_description_1,
        par_tag,
        par_cls,
        var_nspfx,
        var_tagroot,
        var_namespace
    );


    // Release cached frame if used for exception.
    if (frame_52af85a8fd58590448118a5759dc8e5b == cache_frame_52af85a8fd58590448118a5759dc8e5b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_52af85a8fd58590448118a5759dc8e5b);
        cache_frame_52af85a8fd58590448118a5759dc8e5b = NULL;
    }

    assertFrameObject(frame_52af85a8fd58590448118a5759dc8e5b);

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
    CHECK_OBJECT(var_nspfx);
    Py_DECREF(var_nspfx);
    var_nspfx = NULL;
    CHECK_OBJECT(var_tagroot);
    Py_DECREF(var_tagroot);
    var_tagroot = NULL;
    CHECK_OBJECT(var_namespace);
    Py_DECREF(var_namespace);
    var_namespace = NULL;
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

    Py_XDECREF(var_nspfx);
    var_nspfx = NULL;
    Py_XDECREF(var_tagroot);
    var_tagroot = NULL;
    Py_XDECREF(var_namespace);
    var_namespace = NULL;
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
    CHECK_OBJECT(par_tag);
    Py_DECREF(par_tag);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tag);
    Py_DECREF(par_tag);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_docx$oxml$$$function__3_OxmlElement(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nsptag_str = python_pars[0];
    PyObject *par_attrs = python_pars[1];
    PyObject *par_nsdecls = python_pars[2];
    PyObject *var_nsptag = NULL;
    struct Nuitka_FrameObject *frame_d376720161aceed2ca305e8b0b0f1c67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d376720161aceed2ca305e8b0b0f1c67 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d376720161aceed2ca305e8b0b0f1c67)) {
        Py_XDECREF(cache_frame_d376720161aceed2ca305e8b0b0f1c67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d376720161aceed2ca305e8b0b0f1c67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d376720161aceed2ca305e8b0b0f1c67 = MAKE_FUNCTION_FRAME(codeobj_d376720161aceed2ca305e8b0b0f1c67, module_docx$oxml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d376720161aceed2ca305e8b0b0f1c67->m_type_description == NULL);
    frame_d376720161aceed2ca305e8b0b0f1c67 = cache_frame_d376720161aceed2ca305e8b0b0f1c67;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d376720161aceed2ca305e8b0b0f1c67);
    assert(Py_REFCNT(frame_d376720161aceed2ca305e8b0b0f1c67) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nsptag_str);
        tmp_args_element_value_1 = par_nsptag_str;
        frame_d376720161aceed2ca305e8b0b0f1c67->m_frame.f_lineno = 55;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_nsptag == NULL);
        var_nsptag = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_nsdecls);
        tmp_cmp_expr_left_1 = par_nsdecls;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_nsptag);
        tmp_expression_value_1 = var_nsptag;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_nsdecls;
            assert(old != NULL);
            par_nsdecls = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var_nsptag == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = var_nsptag;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_attrs);
        tmp_kw_call_dict_value_0_1 = par_attrs;
        CHECK_OBJECT(par_nsdecls);
        tmp_kw_call_dict_value_1_1 = par_nsdecls;
        frame_d376720161aceed2ca305e8b0b0f1c67->m_frame.f_lineno = 58;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
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
        exception_tb = MAKE_TRACEBACK(frame_d376720161aceed2ca305e8b0b0f1c67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d376720161aceed2ca305e8b0b0f1c67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d376720161aceed2ca305e8b0b0f1c67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d376720161aceed2ca305e8b0b0f1c67,
        type_description_1,
        par_nsptag_str,
        par_attrs,
        par_nsdecls,
        var_nsptag
    );


    // Release cached frame if used for exception.
    if (frame_d376720161aceed2ca305e8b0b0f1c67 == cache_frame_d376720161aceed2ca305e8b0b0f1c67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d376720161aceed2ca305e8b0b0f1c67);
        cache_frame_d376720161aceed2ca305e8b0b0f1c67 = NULL;
    }

    assertFrameObject(frame_d376720161aceed2ca305e8b0b0f1c67);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_nsdecls);
    Py_DECREF(par_nsdecls);
    par_nsdecls = NULL;
    Py_XDECREF(var_nsptag);
    var_nsptag = NULL;
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

    Py_XDECREF(par_nsdecls);
    par_nsdecls = NULL;
    Py_XDECREF(var_nsptag);
    var_nsptag = NULL;
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
    CHECK_OBJECT(par_nsptag_str);
    Py_DECREF(par_nsptag_str);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_nsptag_str);
    Py_DECREF(par_nsptag_str);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_docx$oxml$$$function__1_parse_xml() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_docx$oxml$$$function__1_parse_xml,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_88709d1dc82c58655ed5c825d194a008,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_docx$oxml,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_docx$oxml$$$function__2_register_element_cls() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_docx$oxml$$$function__2_register_element_cls,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_52af85a8fd58590448118a5759dc8e5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_docx$oxml,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_docx$oxml$$$function__3_OxmlElement(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_docx$oxml$$$function__3_OxmlElement,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d376720161aceed2ca305e8b0b0f1c67,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_docx$oxml,
        mod_consts[16],
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

function_impl_code functable_docx$oxml[] = {
    impl_docx$oxml$$$function__1_parse_xml,
    impl_docx$oxml$$$function__2_register_element_cls,
    impl_docx$oxml$$$function__3_OxmlElement,
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

    function_impl_code *current = functable_docx$oxml;
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

    if (offset > sizeof(functable_docx$oxml) || offset < 0) {
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
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_docx$oxml[offset],
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
        module_docx$oxml,
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
PyObject *modulecode_docx$oxml(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("docx.oxml");

    // Store the module for future use.
    module_docx$oxml = module;

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
        PRINT_STRING("docx.oxml: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("docx.oxml: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("docx.oxml: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdocx$oxml\n");

    moduledict_docx$oxml = MODULE_DICT(module_docx$oxml);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_docx$oxml,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_docx$oxml,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[251]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_docx$oxml,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_docx$oxml,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_docx$oxml,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_docx$oxml);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_docx$oxml, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_docx$oxml, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_docx$oxml, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_docx$oxml);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_10__module = NULL;
    PyObject *tmp_import_from_11__module = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    PyObject *tmp_import_from_9__module = NULL;
    struct Nuitka_FrameObject *frame_6dcb13b49d8e954feb6c61e8f034a502;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_2);
    }
    frame_6dcb13b49d8e954feb6c61e8f034a502 = MAKE_MODULE_FRAME(codeobj_6dcb13b49d8e954feb6c61e8f034a502, module_docx$oxml);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6dcb13b49d8e954feb6c61e8f034a502);
    assert(Py_REFCNT(frame_6dcb13b49d8e954feb6c61e8f034a502) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[20]);
            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[20]);
                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_3 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[23]);
                } else {
                    tmp_expression_value_3 = NULL;
                }
            }
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_expression_value_3);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[24]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 1;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[25]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_3 = mod_consts[26];
            frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
            frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[23]);
                } else {
                    tmp_expression_value_4 = NULL;
                }
            }
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[24]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[27]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_3);
    }
    {
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = Nuitka_SysGetObject("path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_subscript_value_1 = mod_consts[29];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
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
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[32], tmp_assattr_value_2);
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
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[33], tmp_assattr_value_3);
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
        UPDATE_STRING_DICT0(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[35]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[36];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[37];
        tmp_level_value_1 = mod_consts[29];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[0],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[38];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[39];
        tmp_level_value_2 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 12;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
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
                (PyObject *)moduledict_docx$oxml,
                mod_consts[11],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[11]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[9],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[9]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_9);
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
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 16;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[41]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[42]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 17;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[43], 0), mod_consts[44]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_11);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[45]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 18;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_docx$oxml$$$function__1_parse_xml();

        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_docx$oxml$$$function__2_register_element_cls();

        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[48];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_14 = MAKE_FUNCTION_docx$oxml$$$function__3_OxmlElement(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[50];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[51];
        tmp_level_value_3 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 67;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[52],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[52]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[53],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[53]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[54],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[54]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_18);
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
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[55];
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[56];
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[57];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[58];
        tmp_level_value_4 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 72;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[59],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_19);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[60];
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        assert(!(tmp_args_element_value_10 == NULL));
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[61];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[62];
        tmp_level_value_5 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 75;
        tmp_assign_source_20 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[63],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[63]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[64],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[64]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_22);
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
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[65];
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[66];
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[67];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[68];
        tmp_level_value_6 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 79;
        tmp_assign_source_23 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_10 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[69],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[69]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_11 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[70],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[70]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[71],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[71]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[72],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[72]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_27);
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
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[73];
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = mod_consts[74];
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[75];
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_14, call_args);
        }

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = mod_consts[76];
        tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_args_element_value_22 == NULL)) {
            tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = mod_consts[77];
        tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_24 == NULL)) {
            tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_16, call_args);
        }

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[78];
        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_args_element_value_26 == NULL)) {
            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_17, call_args);
        }

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = mod_consts[79];
        tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_args_element_value_28 == NULL)) {
            tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_18, call_args);
        }

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = mod_consts[80];
        tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_30 == NULL)) {
            tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_19, call_args);
        }

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[81];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[82];
        tmp_level_value_7 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 89;
        tmp_assign_source_28 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_14 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[83],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[83]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_15 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[84],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[84]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_16 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[85],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[85]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_17 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[86],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[86]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_18 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[87],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[87]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_19 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[88],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[88]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_34);
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
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = mod_consts[89];
        tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_args_element_value_32 == NULL)) {
            tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_20, call_args);
        }

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = mod_consts[90];
        tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_args_element_value_34 == NULL)) {
            tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_21, call_args);
        }

        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = mod_consts[91];
        tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_args_element_value_36 == NULL)) {
            tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_22, call_args);
        }

        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = mod_consts[92];
        tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_args_element_value_38 == NULL)) {
            tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
        }

        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = mod_consts[93];
        tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_args_element_value_40 == NULL)) {
            tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_24, call_args);
        }

        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = mod_consts[94];
        tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_args_element_value_42 == NULL)) {
            tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
        }

        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = mod_consts[95];
        tmp_args_element_value_44 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_args_element_value_44 == NULL)) {
            tmp_args_element_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_26, call_args);
        }

        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = mod_consts[96];
        tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_args_element_value_46 == NULL)) {
            tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_27, call_args);
        }

        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[97];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[98];
        tmp_level_value_8 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 106;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[99],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_35);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_47 = mod_consts[100];
        tmp_args_element_value_48 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_args_element_value_48 == NULL)) {
            tmp_args_element_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        assert(!(tmp_args_element_value_48 == NULL));
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
            tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_28, call_args);
        }

        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[101];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[102];
        tmp_level_value_9 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 109;
        tmp_assign_source_36 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_36;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_21 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[103],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[103]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_22 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[104],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[104]);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_23 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[105],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[105]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_24 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[106],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[106]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_25 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[107],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[107]);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_26 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[108],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[108]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_27 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[109],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[109]);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_28 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[110],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[110]);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_29 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[111],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[111]);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_30 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[112],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[112]);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_31 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[113],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[113]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_32 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[114],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[114]);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_48);
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
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = mod_consts[115];
        tmp_args_element_value_50 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_args_element_value_50 == NULL)) {
            tmp_args_element_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50};
            tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_29, call_args);
        }

        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_51 = mod_consts[116];
        tmp_args_element_value_52 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_args_element_value_52 == NULL)) {
            tmp_args_element_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_args_element_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52};
            tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_30, call_args);
        }

        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_53 = mod_consts[117];
        tmp_args_element_value_54 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_args_element_value_54 == NULL)) {
            tmp_args_element_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54};
            tmp_call_result_26 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_31, call_args);
        }

        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_55 = mod_consts[118];
        tmp_args_element_value_56 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_args_element_value_56 == NULL)) {
            tmp_args_element_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56};
            tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_32, call_args);
        }

        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_57 = mod_consts[119];
        tmp_args_element_value_58 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_args_element_value_58 == NULL)) {
            tmp_args_element_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_args_element_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58};
            tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_33, call_args);
        }

        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_59 = mod_consts[120];
        tmp_args_element_value_60 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_args_element_value_60 == NULL)) {
            tmp_args_element_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_args_element_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_call_result_29 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_34, call_args);
        }

        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = mod_consts[121];
        tmp_args_element_value_62 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_args_element_value_62 == NULL)) {
            tmp_args_element_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62};
            tmp_call_result_30 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_35, call_args);
        }

        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_63 = mod_consts[122];
        tmp_args_element_value_64 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_args_element_value_64 == NULL)) {
            tmp_args_element_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64};
            tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_36, call_args);
        }

        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_65 = mod_consts[123];
        tmp_args_element_value_66 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_args_element_value_66 == NULL)) {
            tmp_args_element_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_args_element_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66};
            tmp_call_result_32 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_37, call_args);
        }

        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_67 = mod_consts[124];
        tmp_args_element_value_68 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_args_element_value_68 == NULL)) {
            tmp_args_element_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_args_element_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68};
            tmp_call_result_33 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_38, call_args);
        }

        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_args_element_value_70;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_69 = mod_consts[125];
        tmp_args_element_value_70 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_args_element_value_70 == NULL)) {
            tmp_args_element_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_args_element_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_value_69, tmp_args_element_value_70};
            tmp_call_result_34 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_39, call_args);
        }

        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_71 = mod_consts[126];
        tmp_args_element_value_72 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_args_element_value_72 == NULL)) {
            tmp_args_element_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_args_element_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = {tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_call_result_35 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_40, call_args);
        }

        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_73 = mod_consts[127];
        tmp_args_element_value_74 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_args_element_value_74 == NULL)) {
            tmp_args_element_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_args_element_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74};
            tmp_call_result_36 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_41, call_args);
        }

        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_75 = mod_consts[128];
        tmp_args_element_value_76 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_args_element_value_76 == NULL)) {
            tmp_args_element_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_args_element_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_value_75, tmp_args_element_value_76};
            tmp_call_result_37 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_42, call_args);
        }

        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[129];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[130];
        tmp_level_value_10 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 138;
        tmp_assign_source_49 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_49;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_33 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[131],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[131]);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_34 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[132],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[132]);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_35 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[133],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[133]);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_36 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[134],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[134]);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_53);
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
        PyObject *tmp_called_value_43;
        PyObject *tmp_call_result_38;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_77 = mod_consts[135];
        tmp_args_element_value_78 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_args_element_value_78 == NULL)) {
            tmp_args_element_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_args_element_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78};
            tmp_call_result_38 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_43, call_args);
        }

        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_call_result_39;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = mod_consts[136];
        tmp_args_element_value_80 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_args_element_value_80 == NULL)) {
            tmp_args_element_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_args_element_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = {tmp_args_element_value_79, tmp_args_element_value_80};
            tmp_call_result_39 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_44, call_args);
        }

        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_args_element_value_82;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_81 = mod_consts[137];
        tmp_args_element_value_82 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_82 == NULL)) {
            tmp_args_element_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82};
            tmp_call_result_40 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_45, call_args);
        }

        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_83 = mod_consts[138];
        tmp_args_element_value_84 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_args_element_value_84 == NULL)) {
            tmp_args_element_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        if (tmp_args_element_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_83, tmp_args_element_value_84};
            tmp_call_result_41 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_46, call_args);
        }

        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_call_result_42;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_args_element_value_86;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = mod_consts[139];
        tmp_args_element_value_86 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_args_element_value_86 == NULL)) {
            tmp_args_element_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_args_element_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = {tmp_args_element_value_85, tmp_args_element_value_86};
            tmp_call_result_42 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_47, call_args);
        }

        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_call_result_43;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_args_element_value_88;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_87 = mod_consts[140];
        tmp_args_element_value_88 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_args_element_value_88 == NULL)) {
            tmp_args_element_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_args_element_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_value_87, tmp_args_element_value_88};
            tmp_call_result_43 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_48, call_args);
        }

        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_args_element_value_90;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_89 = mod_consts[141];
        tmp_args_element_value_90 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_90 == NULL)) {
            tmp_args_element_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_value_89, tmp_args_element_value_90};
            tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_49, call_args);
        }

        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_call_result_45;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_args_element_value_92;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_91 = mod_consts[142];
        tmp_args_element_value_92 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_92 == NULL)) {
            tmp_args_element_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92};
            tmp_call_result_45 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_50, call_args);
        }

        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_call_result_46;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_args_element_value_94;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_93 = mod_consts[143];
        tmp_args_element_value_94 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_args_element_value_94 == NULL)) {
            tmp_args_element_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_args_element_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_value_93, tmp_args_element_value_94};
            tmp_call_result_46 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_51, call_args);
        }

        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_call_result_47;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_args_element_value_96;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_95 = mod_consts[144];
        tmp_args_element_value_96 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_args_element_value_96 == NULL)) {
            tmp_args_element_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_value_95, tmp_args_element_value_96};
            tmp_call_result_47 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_52, call_args);
        }

        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_call_result_48;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_args_element_value_98;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = mod_consts[145];
        tmp_args_element_value_98 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_98 == NULL)) {
            tmp_args_element_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_97, tmp_args_element_value_98};
            tmp_call_result_48 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_53, call_args);
        }

        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_call_result_49;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_args_element_value_100;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_99 = mod_consts[146];
        tmp_args_element_value_100 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_100 == NULL)) {
            tmp_args_element_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_99, tmp_args_element_value_100};
            tmp_call_result_49 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_54, call_args);
        }

        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[147];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[148];
        tmp_level_value_11 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 152;
        tmp_assign_source_54 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_8__module == NULL);
        tmp_import_from_8__module = tmp_assign_source_54;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_37 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[149],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_37, mod_consts[149]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_38 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[150],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_38, mod_consts[150]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_39 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[151],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_39, mod_consts[151]);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_40;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_40 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[152],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME(tmp_import_name_from_40, mod_consts[152]);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_41;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_41 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[153],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_41, mod_consts[153]);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_42 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[154],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME(tmp_import_name_from_42, mod_consts[154]);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_43;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_43 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[155],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME(tmp_import_name_from_43, mod_consts[155]);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_44;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_44 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[156],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME(tmp_import_name_from_44, mod_consts[156]);
        }

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_45;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_45 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[157],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME(tmp_import_name_from_45, mod_consts[157]);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_46;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_46 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[158],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME(tmp_import_name_from_46, mod_consts[158]);
        }

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_47 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[159],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME(tmp_import_name_from_47, mod_consts[159]);
        }

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_48;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_48 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[160],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME(tmp_import_name_from_48, mod_consts[160]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_49;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_49 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_49,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[161],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME(tmp_import_name_from_49, mod_consts[161]);
        }

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_67);
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
        PyObject *tmp_called_value_55;
        PyObject *tmp_call_result_50;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_101 = mod_consts[162];
        tmp_args_element_value_102 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_102 == NULL)) {
            tmp_args_element_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = {tmp_args_element_value_101, tmp_args_element_value_102};
            tmp_call_result_50 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_55, call_args);
        }

        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_call_result_51;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_args_element_value_104;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_103 = mod_consts[163];
        tmp_args_element_value_104 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_104 == NULL)) {
            tmp_args_element_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        if (tmp_args_element_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104};
            tmp_call_result_51 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_56, call_args);
        }

        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_call_result_52;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_args_element_value_106;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_105 = mod_consts[164];
        tmp_args_element_value_106 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_106 == NULL)) {
            tmp_args_element_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = {tmp_args_element_value_105, tmp_args_element_value_106};
            tmp_call_result_52 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_57, call_args);
        }

        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_call_result_53;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_args_element_value_108;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_107 = mod_consts[165];
        tmp_args_element_value_108 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_args_element_value_108 == NULL)) {
            tmp_args_element_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        if (tmp_args_element_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_107, tmp_args_element_value_108};
            tmp_call_result_53 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_58, call_args);
        }

        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_call_result_54;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_args_element_value_110;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_109 = mod_consts[166];
        tmp_args_element_value_110 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_args_element_value_110 == NULL)) {
            tmp_args_element_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_args_element_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_109, tmp_args_element_value_110};
            tmp_call_result_54 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_59, call_args);
        }

        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_call_result_55;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_args_element_value_112;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_111 = mod_consts[167];
        tmp_args_element_value_112 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_args_element_value_112 == NULL)) {
            tmp_args_element_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_args_element_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_111, tmp_args_element_value_112};
            tmp_call_result_55 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_60, call_args);
        }

        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_call_result_56;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_args_element_value_114;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_113 = mod_consts[168];
        tmp_args_element_value_114 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_args_element_value_114 == NULL)) {
            tmp_args_element_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_args_element_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_113, tmp_args_element_value_114};
            tmp_call_result_56 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_61, call_args);
        }

        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_call_result_57;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_args_element_value_116;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_115 = mod_consts[169];
        tmp_args_element_value_116 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_args_element_value_116 == NULL)) {
            tmp_args_element_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_args_element_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116};
            tmp_call_result_57 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_62, call_args);
        }

        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_call_result_58;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_args_element_value_118;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_117 = mod_consts[170];
        tmp_args_element_value_118 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_args_element_value_118 == NULL)) {
            tmp_args_element_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        if (tmp_args_element_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118};
            tmp_call_result_58 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_63, call_args);
        }

        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_call_result_59;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_args_element_value_120;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_119 = mod_consts[171];
        tmp_args_element_value_120 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_args_element_value_120 == NULL)) {
            tmp_args_element_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_args_element_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = {tmp_args_element_value_119, tmp_args_element_value_120};
            tmp_call_result_59 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_64, call_args);
        }

        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_call_result_60;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_args_element_value_122;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_121 = mod_consts[172];
        tmp_args_element_value_122 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_args_element_value_122 == NULL)) {
            tmp_args_element_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_args_element_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_121, tmp_args_element_value_122};
            tmp_call_result_60 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_65, call_args);
        }

        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_call_result_61;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_args_element_value_124;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_123 = mod_consts[173];
        tmp_args_element_value_124 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_args_element_value_124 == NULL)) {
            tmp_args_element_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_args_element_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_value_123, tmp_args_element_value_124};
            tmp_call_result_61 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_66, call_args);
        }

        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_call_result_62;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_125 = mod_consts[174];
        tmp_args_element_value_126 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_args_element_value_126 == NULL)) {
            tmp_args_element_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_args_element_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_126};
            tmp_call_result_62 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_67, call_args);
        }

        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_call_result_63;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_args_element_value_128;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_127 = mod_consts[175];
        tmp_args_element_value_128 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_args_element_value_128 == NULL)) {
            tmp_args_element_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_args_element_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_127, tmp_args_element_value_128};
            tmp_call_result_63 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_68, call_args);
        }

        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_call_result_64;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_args_element_value_130;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_129 = mod_consts[176];
        tmp_args_element_value_130 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_args_element_value_130 == NULL)) {
            tmp_args_element_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_args_element_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_value_129, tmp_args_element_value_130};
            tmp_call_result_64 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_69, call_args);
        }

        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_call_result_65;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_args_element_value_132;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_131 = mod_consts[177];
        tmp_args_element_value_132 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_args_element_value_132 == NULL)) {
            tmp_args_element_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_args_element_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = {tmp_args_element_value_131, tmp_args_element_value_132};
            tmp_call_result_65 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_70, call_args);
        }

        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[178];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[179];
        tmp_level_value_12 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 184;
        tmp_assign_source_68 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_9__module == NULL);
        tmp_import_from_9__module = tmp_assign_source_68;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_50;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_50 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_50,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[180],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME(tmp_import_name_from_50, mod_consts[180]);
        }

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_51;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_51 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_51,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[181],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME(tmp_import_name_from_51, mod_consts[181]);
        }

        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_52;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_52 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_52,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[182],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME(tmp_import_name_from_52, mod_consts[182]);
        }

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_53;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_53 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_53,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[183],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME(tmp_import_name_from_53, mod_consts[183]);
        }

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_54;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_54 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_54,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[184],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME(tmp_import_name_from_54, mod_consts[184]);
        }

        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_55;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_55 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_55,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[185],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME(tmp_import_name_from_55, mod_consts[185]);
        }

        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_56;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_56 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_56,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[186],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_75 = IMPORT_NAME(tmp_import_name_from_56, mod_consts[186]);
        }

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_75);
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
        PyObject *tmp_called_value_71;
        PyObject *tmp_call_result_66;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_args_element_value_134;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_133 = mod_consts[187];
        tmp_args_element_value_134 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_134 == NULL)) {
            tmp_args_element_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_value_133, tmp_args_element_value_134};
            tmp_call_result_66 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_71, call_args);
        }

        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_call_result_67;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_args_element_value_136;
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_135 = mod_consts[188];
        tmp_args_element_value_136 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_136 == NULL)) {
            tmp_args_element_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = {tmp_args_element_value_135, tmp_args_element_value_136};
            tmp_call_result_67 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_72, call_args);
        }

        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_call_result_68;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_args_element_value_138;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_137 = mod_consts[189];
        tmp_args_element_value_138 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_138 == NULL)) {
            tmp_args_element_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_137, tmp_args_element_value_138};
            tmp_call_result_68 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_73, call_args);
        }

        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_call_result_69;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_args_element_value_140;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_139 = mod_consts[190];
        tmp_args_element_value_140 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_args_element_value_140 == NULL)) {
            tmp_args_element_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_args_element_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_139, tmp_args_element_value_140};
            tmp_call_result_69 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_74, call_args);
        }

        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_call_result_70;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_args_element_value_142;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_141 = mod_consts[191];
        tmp_args_element_value_142 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_142 == NULL)) {
            tmp_args_element_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_141, tmp_args_element_value_142};
            tmp_call_result_70 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_75, call_args);
        }

        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_call_result_71;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_args_element_value_144;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_143 = mod_consts[192];
        tmp_args_element_value_144 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_144 == NULL)) {
            tmp_args_element_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_value_143, tmp_args_element_value_144};
            tmp_call_result_71 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_76, call_args);
        }

        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_call_result_72;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_args_element_value_146;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_145 = mod_consts[193];
        tmp_args_element_value_146 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_146 == NULL)) {
            tmp_args_element_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_value_145, tmp_args_element_value_146};
            tmp_call_result_72 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_77, call_args);
        }

        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_call_result_73;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_args_element_value_148;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_147 = mod_consts[194];
        tmp_args_element_value_148 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_args_element_value_148 == NULL)) {
            tmp_args_element_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
        }

        if (tmp_args_element_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = {tmp_args_element_value_147, tmp_args_element_value_148};
            tmp_call_result_73 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_78, call_args);
        }

        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_call_result_74;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_args_element_value_150;
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_149 = mod_consts[195];
        tmp_args_element_value_150 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_150 == NULL)) {
            tmp_args_element_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_149, tmp_args_element_value_150};
            tmp_call_result_74 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_79, call_args);
        }

        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_call_result_75;
        PyObject *tmp_args_element_value_151;
        PyObject *tmp_args_element_value_152;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_151 = mod_consts[196];
        tmp_args_element_value_152 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_152 == NULL)) {
            tmp_args_element_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_151, tmp_args_element_value_152};
            tmp_call_result_75 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_80, call_args);
        }

        if (tmp_call_result_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_call_result_76;
        PyObject *tmp_args_element_value_153;
        PyObject *tmp_args_element_value_154;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_153 = mod_consts[197];
        tmp_args_element_value_154 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_154 == NULL)) {
            tmp_args_element_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_153, tmp_args_element_value_154};
            tmp_call_result_76 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_81, call_args);
        }

        if (tmp_call_result_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_call_result_77;
        PyObject *tmp_args_element_value_155;
        PyObject *tmp_args_element_value_156;
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_155 = mod_consts[198];
        tmp_args_element_value_156 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_156 == NULL)) {
            tmp_args_element_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_155, tmp_args_element_value_156};
            tmp_call_result_77 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_82, call_args);
        }

        if (tmp_call_result_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_value_83;
        PyObject *tmp_call_result_78;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_args_element_value_158;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_157 = mod_consts[199];
        tmp_args_element_value_158 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_158 == NULL)) {
            tmp_args_element_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_157, tmp_args_element_value_158};
            tmp_call_result_78 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_83, call_args);
        }

        if (tmp_call_result_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_call_result_79;
        PyObject *tmp_args_element_value_159;
        PyObject *tmp_args_element_value_160;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_159 = mod_consts[200];
        tmp_args_element_value_160 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_160 == NULL)) {
            tmp_args_element_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_159, tmp_args_element_value_160};
            tmp_call_result_79 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_84, call_args);
        }

        if (tmp_call_result_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_call_result_80;
        PyObject *tmp_args_element_value_161;
        PyObject *tmp_args_element_value_162;
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_161 = mod_consts[201];
        tmp_args_element_value_162 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_args_element_value_162 == NULL)) {
            tmp_args_element_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_args_element_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_161, tmp_args_element_value_162};
            tmp_call_result_80 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_85, call_args);
        }

        if (tmp_call_result_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_call_result_81;
        PyObject *tmp_args_element_value_163;
        PyObject *tmp_args_element_value_164;
        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_86 == NULL)) {
            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_163 = mod_consts[202];
        tmp_args_element_value_164 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_args_element_value_164 == NULL)) {
            tmp_args_element_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        if (tmp_args_element_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_163, tmp_args_element_value_164};
            tmp_call_result_81 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_86, call_args);
        }

        if (tmp_call_result_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_call_result_82;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_args_element_value_166;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_165 = mod_consts[203];
        tmp_args_element_value_166 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_args_element_value_166 == NULL)) {
            tmp_args_element_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_args_element_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_165, tmp_args_element_value_166};
            tmp_call_result_82 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_87, call_args);
        }

        if (tmp_call_result_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_call_result_83;
        PyObject *tmp_args_element_value_167;
        PyObject *tmp_args_element_value_168;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_167 = mod_consts[204];
        tmp_args_element_value_168 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_168 == NULL)) {
            tmp_args_element_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_167, tmp_args_element_value_168};
            tmp_call_result_83 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_88, call_args);
        }

        if (tmp_call_result_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_value_89;
        PyObject *tmp_call_result_84;
        PyObject *tmp_args_element_value_169;
        PyObject *tmp_args_element_value_170;
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_169 = mod_consts[205];
        tmp_args_element_value_170 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_170 == NULL)) {
            tmp_args_element_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_169, tmp_args_element_value_170};
            tmp_call_result_84 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_89, call_args);
        }

        if (tmp_call_result_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_call_result_85;
        PyObject *tmp_args_element_value_171;
        PyObject *tmp_args_element_value_172;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_171 = mod_consts[206];
        tmp_args_element_value_172 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_172 == NULL)) {
            tmp_args_element_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_args_element_value_171, tmp_args_element_value_172};
            tmp_call_result_85 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_90, call_args);
        }

        if (tmp_call_result_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_called_value_91;
        PyObject *tmp_call_result_86;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_args_element_value_174;
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_173 = mod_consts[207];
        tmp_args_element_value_174 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_174 == NULL)) {
            tmp_args_element_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_173, tmp_args_element_value_174};
            tmp_call_result_86 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_91, call_args);
        }

        if (tmp_call_result_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_called_value_92;
        PyObject *tmp_call_result_87;
        PyObject *tmp_args_element_value_175;
        PyObject *tmp_args_element_value_176;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_175 = mod_consts[208];
        tmp_args_element_value_176 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_176 == NULL)) {
            tmp_args_element_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = {tmp_args_element_value_175, tmp_args_element_value_176};
            tmp_call_result_87 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_92, call_args);
        }

        if (tmp_call_result_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_call_result_88;
        PyObject *tmp_args_element_value_177;
        PyObject *tmp_args_element_value_178;
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_177 = mod_consts[209];
        tmp_args_element_value_178 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_178 == NULL)) {
            tmp_args_element_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_177, tmp_args_element_value_178};
            tmp_call_result_88 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_93, call_args);
        }

        if (tmp_call_result_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_call_result_89;
        PyObject *tmp_args_element_value_179;
        PyObject *tmp_args_element_value_180;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_179 = mod_consts[210];
        tmp_args_element_value_180 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_args_element_value_180 == NULL)) {
            tmp_args_element_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_args_element_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_179, tmp_args_element_value_180};
            tmp_call_result_89 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_94, call_args);
        }

        if (tmp_call_result_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_value_95;
        PyObject *tmp_call_result_90;
        PyObject *tmp_args_element_value_181;
        PyObject *tmp_args_element_value_182;
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_181 = mod_consts[211];
        tmp_args_element_value_182 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_args_element_value_182 == NULL)) {
            tmp_args_element_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_args_element_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_181, tmp_args_element_value_182};
            tmp_call_result_90 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_95, call_args);
        }

        if (tmp_call_result_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_call_result_91;
        PyObject *tmp_args_element_value_183;
        PyObject *tmp_args_element_value_184;
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_183 = mod_consts[212];
        tmp_args_element_value_184 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_184 == NULL)) {
            tmp_args_element_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_183, tmp_args_element_value_184};
            tmp_call_result_91 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_96, call_args);
        }

        if (tmp_call_result_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_value_97;
        PyObject *tmp_call_result_92;
        PyObject *tmp_args_element_value_185;
        PyObject *tmp_args_element_value_186;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_185 = mod_consts[213];
        tmp_args_element_value_186 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_args_element_value_186 == NULL)) {
            tmp_args_element_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_args_element_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_185, tmp_args_element_value_186};
            tmp_call_result_92 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_97, call_args);
        }

        if (tmp_call_result_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_value_98;
        PyObject *tmp_call_result_93;
        PyObject *tmp_args_element_value_187;
        PyObject *tmp_args_element_value_188;
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_187 = mod_consts[214];
        tmp_args_element_value_188 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_188 == NULL)) {
            tmp_args_element_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_value_187, tmp_args_element_value_188};
            tmp_call_result_93 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_98, call_args);
        }

        if (tmp_call_result_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_57;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[215];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[216];
        tmp_level_value_13 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 222;
        tmp_import_name_from_57 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_57,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[217],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_76 = IMPORT_NAME(tmp_import_name_from_57, mod_consts[217]);
        }

        Py_DECREF(tmp_import_name_from_57);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_76);
    }
    {
        PyObject *tmp_called_value_99;
        PyObject *tmp_call_result_94;
        PyObject *tmp_args_element_value_189;
        PyObject *tmp_args_element_value_190;
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_189 = mod_consts[218];
        tmp_args_element_value_190 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_args_element_value_190 == NULL)) {
            tmp_args_element_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[217]);
        }

        assert(!(tmp_args_element_value_190 == NULL));
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_189, tmp_args_element_value_190};
            tmp_call_result_94 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_99, call_args);
        }

        if (tmp_call_result_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[219];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[220];
        tmp_level_value_14 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 225;
        tmp_assign_source_77 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_10__module == NULL);
        tmp_import_from_10__module = tmp_assign_source_77;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_import_name_from_58;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_58 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_58,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[221],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_78 = IMPORT_NAME(tmp_import_name_from_58, mod_consts[221]);
        }

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_59;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_59 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_59,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[222],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME(tmp_import_name_from_59, mod_consts[222]);
        }

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_60;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_60 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_60,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[223],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME(tmp_import_name_from_60, mod_consts[223]);
        }

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_61;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_61 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_61,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[224],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_81 = IMPORT_NAME(tmp_import_name_from_61, mod_consts[224]);
        }

        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_import_name_from_62;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_62 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_62,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[225],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_82 = IMPORT_NAME(tmp_import_name_from_62, mod_consts[225]);
        }

        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_63;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_63 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_63,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[226],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_83 = IMPORT_NAME(tmp_import_name_from_63, mod_consts[226]);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_83);
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
        PyObject *tmp_called_value_100;
        PyObject *tmp_call_result_95;
        PyObject *tmp_args_element_value_191;
        PyObject *tmp_args_element_value_192;
        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_100 == NULL)) {
            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_191 = mod_consts[227];
        tmp_args_element_value_192 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_args_element_value_192 == NULL)) {
            tmp_args_element_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[221]);
        }

        if (tmp_args_element_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_191, tmp_args_element_value_192};
            tmp_call_result_95 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_100, call_args);
        }

        if (tmp_call_result_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_called_value_101;
        PyObject *tmp_call_result_96;
        PyObject *tmp_args_element_value_193;
        PyObject *tmp_args_element_value_194;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_193 = mod_consts[228];
        tmp_args_element_value_194 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[222]);

        if (unlikely(tmp_args_element_value_194 == NULL)) {
            tmp_args_element_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[222]);
        }

        if (tmp_args_element_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_args_element_value_193, tmp_args_element_value_194};
            tmp_call_result_96 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_101, call_args);
        }

        if (tmp_call_result_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_value_102;
        PyObject *tmp_call_result_97;
        PyObject *tmp_args_element_value_195;
        PyObject *tmp_args_element_value_196;
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_195 = mod_consts[229];
        tmp_args_element_value_196 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_196 == NULL)) {
            tmp_args_element_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_value_195, tmp_args_element_value_196};
            tmp_call_result_97 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_102, call_args);
        }

        if (tmp_call_result_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_value_103;
        PyObject *tmp_call_result_98;
        PyObject *tmp_args_element_value_197;
        PyObject *tmp_args_element_value_198;
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_197 = mod_consts[230];
        tmp_args_element_value_198 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_198 == NULL)) {
            tmp_args_element_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = {tmp_args_element_value_197, tmp_args_element_value_198};
            tmp_call_result_98 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_103, call_args);
        }

        if (tmp_call_result_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_value_104;
        PyObject *tmp_call_result_99;
        PyObject *tmp_args_element_value_199;
        PyObject *tmp_args_element_value_200;
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_199 = mod_consts[231];
        tmp_args_element_value_200 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_200 == NULL)) {
            tmp_args_element_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = {tmp_args_element_value_199, tmp_args_element_value_200};
            tmp_call_result_99 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_104, call_args);
        }

        if (tmp_call_result_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_called_value_105;
        PyObject *tmp_call_result_100;
        PyObject *tmp_args_element_value_201;
        PyObject *tmp_args_element_value_202;
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_201 = mod_consts[232];
        tmp_args_element_value_202 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_args_element_value_202 == NULL)) {
            tmp_args_element_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[223]);
        }

        if (tmp_args_element_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_201, tmp_args_element_value_202};
            tmp_call_result_100 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_105, call_args);
        }

        if (tmp_call_result_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_value_106;
        PyObject *tmp_call_result_101;
        PyObject *tmp_args_element_value_203;
        PyObject *tmp_args_element_value_204;
        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_106 == NULL)) {
            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_203 = mod_consts[233];
        tmp_args_element_value_204 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_args_element_value_204 == NULL)) {
            tmp_args_element_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_args_element_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = {tmp_args_element_value_203, tmp_args_element_value_204};
            tmp_call_result_101 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_106, call_args);
        }

        if (tmp_call_result_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_value_107;
        PyObject *tmp_call_result_102;
        PyObject *tmp_args_element_value_205;
        PyObject *tmp_args_element_value_206;
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_205 = mod_consts[234];
        tmp_args_element_value_206 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_args_element_value_206 == NULL)) {
            tmp_args_element_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        if (tmp_args_element_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_205, tmp_args_element_value_206};
            tmp_call_result_102 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_107, call_args);
        }

        if (tmp_call_result_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_call_result_103;
        PyObject *tmp_args_element_value_207;
        PyObject *tmp_args_element_value_208;
        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_108 == NULL)) {
            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_207 = mod_consts[235];
        tmp_args_element_value_208 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[225]);

        if (unlikely(tmp_args_element_value_208 == NULL)) {
            tmp_args_element_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[225]);
        }

        if (tmp_args_element_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_207, tmp_args_element_value_208};
            tmp_call_result_103 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_108, call_args);
        }

        if (tmp_call_result_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_called_value_109;
        PyObject *tmp_call_result_104;
        PyObject *tmp_args_element_value_209;
        PyObject *tmp_args_element_value_210;
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_209 = mod_consts[236];
        tmp_args_element_value_210 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[226]);

        if (unlikely(tmp_args_element_value_210 == NULL)) {
            tmp_args_element_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[226]);
        }

        if (tmp_args_element_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_value_209, tmp_args_element_value_210};
            tmp_call_result_104 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_109, call_args);
        }

        if (tmp_call_result_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_call_result_105;
        PyObject *tmp_args_element_value_211;
        PyObject *tmp_args_element_value_212;
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_211 = mod_consts[237];
        tmp_args_element_value_212 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_212 == NULL)) {
            tmp_args_element_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = {tmp_args_element_value_211, tmp_args_element_value_212};
            tmp_call_result_105 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_110, call_args);
        }

        if (tmp_call_result_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[238];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_docx$oxml;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[239];
        tmp_level_value_15 = mod_consts[40];
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 245;
        tmp_assign_source_84 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_11__module == NULL);
        tmp_import_from_11__module = tmp_assign_source_84;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_import_name_from_64;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_64 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_64,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[240],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_85 = IMPORT_NAME(tmp_import_name_from_64, mod_consts[240]);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_65;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_65 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_65,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[241],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_86 = IMPORT_NAME(tmp_import_name_from_65, mod_consts[241]);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_66;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_66 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_66,
                (PyObject *)moduledict_docx$oxml,
                mod_consts[242],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_87 = IMPORT_NAME(tmp_import_name_from_66, mod_consts[242]);
        }

        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_87);
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
        PyObject *tmp_called_value_111;
        PyObject *tmp_call_result_106;
        PyObject *tmp_args_element_value_213;
        PyObject *tmp_args_element_value_214;
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_213 = mod_consts[243];
        tmp_args_element_value_214 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_args_element_value_214 == NULL)) {
            tmp_args_element_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[240]);
        }

        if (tmp_args_element_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_value_213, tmp_args_element_value_214};
            tmp_call_result_106 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_111, call_args);
        }

        if (tmp_call_result_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_value_112;
        PyObject *tmp_call_result_107;
        PyObject *tmp_args_element_value_215;
        PyObject *tmp_args_element_value_216;
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_215 = mod_consts[244];
        tmp_args_element_value_216 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[241]);

        if (unlikely(tmp_args_element_value_216 == NULL)) {
            tmp_args_element_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[241]);
        }

        if (tmp_args_element_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_value_215, tmp_args_element_value_216};
            tmp_call_result_107 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_112, call_args);
        }

        if (tmp_call_result_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_107);
    }
    {
        PyObject *tmp_called_value_113;
        PyObject *tmp_call_result_108;
        PyObject *tmp_args_element_value_217;
        PyObject *tmp_args_element_value_218;
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_217 = mod_consts[245];
        tmp_args_element_value_218 = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_args_element_value_218 == NULL)) {
            tmp_args_element_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[242]);
        }

        if (tmp_args_element_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_217, tmp_args_element_value_218};
            tmp_call_result_108 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_113, call_args);
        }

        if (tmp_call_result_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_108);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6dcb13b49d8e954feb6c61e8f034a502, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6dcb13b49d8e954feb6c61e8f034a502->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6dcb13b49d8e954feb6c61e8f034a502, exception_lineno);
    }



    assertFrameObject(frame_6dcb13b49d8e954feb6c61e8f034a502);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("docx.oxml", false);

    Py_INCREF(module_docx$oxml);
    return module_docx$oxml;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docx$oxml, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("docx$oxml", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
