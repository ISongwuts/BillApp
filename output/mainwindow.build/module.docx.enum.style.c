/* Generated code for Python module 'docx.enum.style'
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

/* The "module_docx$enum$style" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_docx$enum$style;
PyDictObject *moduledict_docx$enum$style;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[179];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[179];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("docx.enum.style"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 179; i++) {
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
void checkModuleConstants_docx$enum$style(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 179; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f7dedae15682c17469d53989479dc987;
static PyCodeObject *codeobj_bc70fcc45beca3c58719ef2126c868c1;
static PyCodeObject *codeobj_8131e612f9fa109cbe1ad649edcecb0e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[175]); CHECK_OBJECT(module_filename_obj);
    codeobj_f7dedae15682c17469d53989479dc987 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_UNICODE_LITERALS, mod_consts[176], mod_consts[176], NULL, NULL, 0, 0, 0);
    codeobj_bc70fcc45beca3c58719ef2126c868c1 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_FUTURE_UNICODE_LITERALS, mod_consts[19], mod_consts[19], mod_consts[177], NULL, 0, 0, 0);
    codeobj_8131e612f9fa109cbe1ad649edcecb0e = MAKE_CODE_OBJECT(module_filename_obj, 435, CO_FUTURE_UNICODE_LITERALS, mod_consts[167], mod_consts[167], mod_consts[177], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


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

function_impl_code functable_docx$enum$style[] = {

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

    function_impl_code *current = functable_docx$enum$style;
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

    if (offset > sizeof(functable_docx$enum$style) || offset < 0) {
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
        functable_docx$enum$style[offset],
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
        module_docx$enum$style,
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
PyObject *modulecode_docx$enum$style(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("docx.enum.style");

    // Store the module for future use.
    module_docx$enum$style = module;

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
        PRINT_STRING("docx.enum.style: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("docx.enum.style: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("docx.enum.style: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdocx$enum$style\n");

    moduledict_docx$enum$style = MODULE_DICT(module_docx$enum$style);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_docx$enum$style,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_docx$enum$style,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[178]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_docx$enum$style,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_docx$enum$style,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_docx$enum$style,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_docx$enum$style);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_docx$enum$style, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_docx$enum$style, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_docx$enum$style, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_docx$enum$style);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_docx$enum$style, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_f7dedae15682c17469d53989479dc987;
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
    int tmp_res;
    PyObject *locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_bc70fcc45beca3c58719ef2126c868c1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435 = NULL;
    struct Nuitka_FrameObject *frame_8131e612f9fa109cbe1ad649edcecb0e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_f7dedae15682c17469d53989479dc987 = MAKE_MODULE_FRAME(codeobj_f7dedae15682c17469d53989479dc987, module_docx$enum$style);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f7dedae15682c17469d53989479dc987);
    assert(Py_REFCNT(frame_f7dedae15682c17469d53989479dc987) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[3]);

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
        UPDATE_STRING_DICT0(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD___FUTURE__();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[7]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[8]);
        }
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[9]);
        }
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_7);
    }
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[10];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_docx$enum$style;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[11];
        tmp_level_value_1 = mod_consts[12];
        frame_f7dedae15682c17469d53989479dc987->m_frame.f_lineno = 9;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_1 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_docx$enum$style,
                mod_consts[13],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[13]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_2 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_docx$enum$style,
                mod_consts[15],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[15]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_3 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_docx$enum$style,
                mod_consts[16],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[16]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_docx$enum$style,
                mod_consts[17],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[17]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_12);
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        tmp_assign_source_13 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_13, 0, tmp_tuple_element_1);
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
            tmp_assign_source_14 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
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
        tmp_subscript_value_1 = mod_consts[14];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
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


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[18]);
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
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[19];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_f7dedae15682c17469d53989479dc987->m_frame.f_lineno = 13;
        tmp_assign_source_17 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[20]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
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
        tmp_mod_expr_left_1 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[22];
        tmp_getattr_default_1 = mod_consts[23];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[22]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 13;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        frame_f7dedae15682c17469d53989479dc987->m_frame.f_lineno = 12;
        tmp_called_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[24]);

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[25];
        tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[26], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[19];
        tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        frame_bc70fcc45beca3c58719ef2126c868c1_2 = MAKE_CLASS_FRAME(codeobj_bc70fcc45beca3c58719ef2126c868c1, module_docx$enum$style, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_bc70fcc45beca3c58719ef2126c868c1_2);
        assert(Py_REFCNT(frame_bc70fcc45beca3c58719ef2126c868c1_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[29];
        tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_called_value_4;
            tmp_called_value_4 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 34;
            tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[33]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(132);
            {
                PyObject *tmp_called_value_5;
                PyObject *tmp_called_value_6;
                PyObject *tmp_called_value_7;
                PyObject *tmp_called_value_8;
                PyObject *tmp_called_value_9;
                PyObject *tmp_called_value_10;
                PyObject *tmp_called_value_11;
                PyObject *tmp_called_value_12;
                PyObject *tmp_called_value_13;
                PyObject *tmp_called_value_14;
                PyObject *tmp_called_value_15;
                PyObject *tmp_called_value_16;
                PyObject *tmp_called_value_17;
                PyObject *tmp_called_value_18;
                PyObject *tmp_called_value_19;
                PyObject *tmp_called_value_20;
                PyObject *tmp_called_value_21;
                PyObject *tmp_called_value_22;
                PyObject *tmp_called_value_23;
                PyObject *tmp_called_value_24;
                PyObject *tmp_called_value_25;
                PyObject *tmp_called_value_26;
                PyObject *tmp_called_value_27;
                PyObject *tmp_called_value_28;
                PyObject *tmp_called_value_29;
                PyObject *tmp_called_value_30;
                PyObject *tmp_called_value_31;
                PyObject *tmp_called_value_32;
                PyObject *tmp_called_value_33;
                PyObject *tmp_called_value_34;
                PyObject *tmp_called_value_35;
                PyObject *tmp_called_value_36;
                PyObject *tmp_called_value_37;
                PyObject *tmp_called_value_38;
                PyObject *tmp_called_value_39;
                PyObject *tmp_called_value_40;
                PyObject *tmp_called_value_41;
                PyObject *tmp_called_value_42;
                PyObject *tmp_called_value_43;
                PyObject *tmp_called_value_44;
                PyObject *tmp_called_value_45;
                PyObject *tmp_called_value_46;
                PyObject *tmp_called_value_47;
                PyObject *tmp_called_value_48;
                PyObject *tmp_called_value_49;
                PyObject *tmp_called_value_50;
                PyObject *tmp_called_value_51;
                PyObject *tmp_called_value_52;
                PyObject *tmp_called_value_53;
                PyObject *tmp_called_value_54;
                PyObject *tmp_called_value_55;
                PyObject *tmp_called_value_56;
                PyObject *tmp_called_value_57;
                PyObject *tmp_called_value_58;
                PyObject *tmp_called_value_59;
                PyObject *tmp_called_value_60;
                PyObject *tmp_called_value_61;
                PyObject *tmp_called_value_62;
                PyObject *tmp_called_value_63;
                PyObject *tmp_called_value_64;
                PyObject *tmp_called_value_65;
                PyObject *tmp_called_value_66;
                PyObject *tmp_called_value_67;
                PyObject *tmp_called_value_68;
                PyObject *tmp_called_value_69;
                PyObject *tmp_called_value_70;
                PyObject *tmp_called_value_71;
                PyObject *tmp_called_value_72;
                PyObject *tmp_called_value_73;
                PyObject *tmp_called_value_74;
                PyObject *tmp_called_value_75;
                PyObject *tmp_called_value_76;
                PyObject *tmp_called_value_77;
                PyObject *tmp_called_value_78;
                PyObject *tmp_called_value_79;
                PyObject *tmp_called_value_80;
                PyObject *tmp_called_value_81;
                PyObject *tmp_called_value_82;
                PyObject *tmp_called_value_83;
                PyObject *tmp_called_value_84;
                PyObject *tmp_called_value_85;
                PyObject *tmp_called_value_86;
                PyObject *tmp_called_value_87;
                PyObject *tmp_called_value_88;
                PyObject *tmp_called_value_89;
                PyObject *tmp_called_value_90;
                PyObject *tmp_called_value_91;
                PyObject *tmp_called_value_92;
                PyObject *tmp_called_value_93;
                PyObject *tmp_called_value_94;
                PyObject *tmp_called_value_95;
                PyObject *tmp_called_value_96;
                PyObject *tmp_called_value_97;
                PyObject *tmp_called_value_98;
                PyObject *tmp_called_value_99;
                PyObject *tmp_called_value_100;
                PyObject *tmp_called_value_101;
                PyObject *tmp_called_value_102;
                PyObject *tmp_called_value_103;
                PyObject *tmp_called_value_104;
                PyObject *tmp_called_value_105;
                PyObject *tmp_called_value_106;
                PyObject *tmp_called_value_107;
                PyObject *tmp_called_value_108;
                PyObject *tmp_called_value_109;
                PyObject *tmp_called_value_110;
                PyObject *tmp_called_value_111;
                PyObject *tmp_called_value_112;
                PyObject *tmp_called_value_113;
                PyObject *tmp_called_value_114;
                PyObject *tmp_called_value_115;
                PyObject *tmp_called_value_116;
                PyObject *tmp_called_value_117;
                PyObject *tmp_called_value_118;
                PyObject *tmp_called_value_119;
                PyObject *tmp_called_value_120;
                PyObject *tmp_called_value_121;
                PyObject *tmp_called_value_122;
                PyObject *tmp_called_value_123;
                PyObject *tmp_called_value_124;
                PyObject *tmp_called_value_125;
                PyObject *tmp_called_value_126;
                PyObject *tmp_called_value_127;
                PyObject *tmp_called_value_128;
                PyObject *tmp_called_value_129;
                PyObject *tmp_called_value_130;
                PyObject *tmp_called_value_131;
                PyObject *tmp_called_value_132;
                PyObject *tmp_called_value_133;
                PyObject *tmp_called_value_134;
                PyObject *tmp_called_value_135;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_4);
                tmp_called_value_5 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_5 == NULL)) {
                            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 37;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_5);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 37;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[34]);

                Py_DECREF(tmp_called_value_5);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_4);
                tmp_called_value_6 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_6 == NULL)) {
                            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 40;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_6);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 40;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[35]);

                Py_DECREF(tmp_called_value_6);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_4);
                tmp_called_value_7 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_7 == NULL)) {
                            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 43;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_7);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 43;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[36]);

                Py_DECREF(tmp_called_value_7);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_4);
                tmp_called_value_8 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_8 == NULL)) {
                            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 46;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_8);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 46;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_8, mod_consts[37]);

                Py_DECREF(tmp_called_value_8);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_4);
                tmp_called_value_9 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_9 == NULL)) {
                            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 49;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_9);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 49;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_9, mod_consts[38]);

                Py_DECREF(tmp_called_value_9);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_4);
                tmp_called_value_10 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_10 == NULL)) {
                            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 52;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_10);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 52;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_10, mod_consts[39]);

                Py_DECREF(tmp_called_value_10);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 6, tmp_tuple_element_4);
                tmp_called_value_11 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_11 == NULL)) {
                            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 55;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_11);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 55;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_11, mod_consts[40]);

                Py_DECREF(tmp_called_value_11);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 7, tmp_tuple_element_4);
                tmp_called_value_12 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_12 == NULL)) {
                            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 58;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_12);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 58;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_12, mod_consts[41]);

                Py_DECREF(tmp_called_value_12);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 8, tmp_tuple_element_4);
                tmp_called_value_13 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_13 == NULL)) {
                            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 61;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_13);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 61;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_13, mod_consts[42]);

                Py_DECREF(tmp_called_value_13);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 9, tmp_tuple_element_4);
                tmp_called_value_14 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_14 == NULL)) {
                            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 64;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_14);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 64;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_14, mod_consts[43]);

                Py_DECREF(tmp_called_value_14);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 10, tmp_tuple_element_4);
                tmp_called_value_15 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_15 == NULL)) {
                            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 67;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_15);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 67;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_15, mod_consts[44]);

                Py_DECREF(tmp_called_value_15);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 11, tmp_tuple_element_4);
                tmp_called_value_16 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_16 == NULL)) {
                            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 70;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_16);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 70;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_16, mod_consts[45]);

                Py_DECREF(tmp_called_value_16);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 12, tmp_tuple_element_4);
                tmp_called_value_17 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_17 == NULL)) {
                            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 73;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_17);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 73;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_17, mod_consts[46]);

                Py_DECREF(tmp_called_value_17);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 13, tmp_tuple_element_4);
                tmp_called_value_18 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_18 == NULL)) {
                            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_18);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 76;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_18, mod_consts[47]);

                Py_DECREF(tmp_called_value_18);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 14, tmp_tuple_element_4);
                tmp_called_value_19 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_19 == NULL)) {
                            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 79;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_19);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 79;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_19, mod_consts[48]);

                Py_DECREF(tmp_called_value_19);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 15, tmp_tuple_element_4);
                tmp_called_value_20 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_20 == NULL)) {
                            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 82;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_20);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 82;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_20, mod_consts[49]);

                Py_DECREF(tmp_called_value_20);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 82;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 16, tmp_tuple_element_4);
                tmp_called_value_21 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_21 == NULL)) {
                            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 85;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_21);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 85;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_21, mod_consts[50]);

                Py_DECREF(tmp_called_value_21);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 85;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 17, tmp_tuple_element_4);
                tmp_called_value_22 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_22 == NULL)) {
                            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 88;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_22);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 88;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_22, mod_consts[51]);

                Py_DECREF(tmp_called_value_22);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 18, tmp_tuple_element_4);
                tmp_called_value_23 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_23 == NULL)) {
                            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 91;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_23);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 91;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_23, mod_consts[52]);

                Py_DECREF(tmp_called_value_23);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 19, tmp_tuple_element_4);
                tmp_called_value_24 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_24 == NULL)) {
                            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 94;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_24);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 94;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_24, mod_consts[53]);

                Py_DECREF(tmp_called_value_24);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 20, tmp_tuple_element_4);
                tmp_called_value_25 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_25 == NULL)) {
                            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 97;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_25);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 97;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_25, mod_consts[54]);

                Py_DECREF(tmp_called_value_25);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 21, tmp_tuple_element_4);
                tmp_called_value_26 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_26 == NULL)) {
                            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 100;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_26);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 100;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_26, mod_consts[55]);

                Py_DECREF(tmp_called_value_26);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 100;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 22, tmp_tuple_element_4);
                tmp_called_value_27 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_27 == NULL)) {
                            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 103;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_27);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 103;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_27, mod_consts[56]);

                Py_DECREF(tmp_called_value_27);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 23, tmp_tuple_element_4);
                tmp_called_value_28 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_28 == NULL)) {
                            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 106;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_28);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 106;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_28, mod_consts[57]);

                Py_DECREF(tmp_called_value_28);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 24, tmp_tuple_element_4);
                tmp_called_value_29 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_29 == NULL)) {
                            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 109;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_29);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 109;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_29, mod_consts[58]);

                Py_DECREF(tmp_called_value_29);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 25, tmp_tuple_element_4);
                tmp_called_value_30 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_30 == NULL)) {
                            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 112;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_30);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 112;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_30, mod_consts[59]);

                Py_DECREF(tmp_called_value_30);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 112;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 26, tmp_tuple_element_4);
                tmp_called_value_31 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_31 == NULL)) {
                            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 115;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_31);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 115;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_31, mod_consts[60]);

                Py_DECREF(tmp_called_value_31);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 115;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 27, tmp_tuple_element_4);
                tmp_called_value_32 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_32 == NULL)) {
                            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 118;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_32);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 118;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_32, mod_consts[61]);

                Py_DECREF(tmp_called_value_32);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 118;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 28, tmp_tuple_element_4);
                tmp_called_value_33 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_33 == NULL)) {
                            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 121;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_33);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 121;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_33, mod_consts[62]);

                Py_DECREF(tmp_called_value_33);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 121;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 29, tmp_tuple_element_4);
                tmp_called_value_34 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_34 == NULL)) {
                            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 124;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_34);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 124;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_34, mod_consts[63]);

                Py_DECREF(tmp_called_value_34);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 124;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 30, tmp_tuple_element_4);
                tmp_called_value_35 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_35 == NULL)) {
                            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 127;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_35);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 127;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_35, mod_consts[64]);

                Py_DECREF(tmp_called_value_35);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 31, tmp_tuple_element_4);
                tmp_called_value_36 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_36 == NULL)) {
                            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_36 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 130;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_36);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 130;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_36, mod_consts[65]);

                Py_DECREF(tmp_called_value_36);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 130;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 32, tmp_tuple_element_4);
                tmp_called_value_37 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_37 == NULL)) {
                            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 133;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_37);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 133;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_37, mod_consts[66]);

                Py_DECREF(tmp_called_value_37);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 133;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 33, tmp_tuple_element_4);
                tmp_called_value_38 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_38 == NULL)) {
                            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 136;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_38);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 136;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_38, mod_consts[67]);

                Py_DECREF(tmp_called_value_38);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 136;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 34, tmp_tuple_element_4);
                tmp_called_value_39 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_39 == NULL)) {
                            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 139;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_39);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 139;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_39, mod_consts[68]);

                Py_DECREF(tmp_called_value_39);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 139;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 35, tmp_tuple_element_4);
                tmp_called_value_40 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_40 == NULL)) {
                            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 142;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_40);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 142;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_40, mod_consts[69]);

                Py_DECREF(tmp_called_value_40);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 36, tmp_tuple_element_4);
                tmp_called_value_41 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_41 == NULL)) {
                            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 145;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_41);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 145;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_41, mod_consts[70]);

                Py_DECREF(tmp_called_value_41);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 37, tmp_tuple_element_4);
                tmp_called_value_42 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_42 == NULL)) {
                            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 148;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_42);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 148;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_42, mod_consts[71]);

                Py_DECREF(tmp_called_value_42);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 38, tmp_tuple_element_4);
                tmp_called_value_43 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_43 == NULL)) {
                            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 151;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_43);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 151;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_43, mod_consts[72]);

                Py_DECREF(tmp_called_value_43);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 151;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 39, tmp_tuple_element_4);
                tmp_called_value_44 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_44 == NULL)) {
                            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_44 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 154;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_44);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 154;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_44, mod_consts[73]);

                Py_DECREF(tmp_called_value_44);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 154;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 40, tmp_tuple_element_4);
                tmp_called_value_45 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_45 == NULL)) {
                            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_45 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 157;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_45);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 157;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_45, mod_consts[74]);

                Py_DECREF(tmp_called_value_45);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 41, tmp_tuple_element_4);
                tmp_called_value_46 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_46 == NULL)) {
                            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_46 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 160;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_46);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 160;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_46, mod_consts[75]);

                Py_DECREF(tmp_called_value_46);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 160;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 42, tmp_tuple_element_4);
                tmp_called_value_47 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_47 == NULL)) {
                            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_47 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 163;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_47);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 163;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_47, mod_consts[76]);

                Py_DECREF(tmp_called_value_47);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 43, tmp_tuple_element_4);
                tmp_called_value_48 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_48 == NULL)) {
                            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_48 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 166;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_48);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 166;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_48, mod_consts[77]);

                Py_DECREF(tmp_called_value_48);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 44, tmp_tuple_element_4);
                tmp_called_value_49 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_49 == NULL)) {
                            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 169;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_49);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 169;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_49, mod_consts[78]);

                Py_DECREF(tmp_called_value_49);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 45, tmp_tuple_element_4);
                tmp_called_value_50 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_50 == NULL)) {
                            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_50 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 172;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_50);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 172;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_50, mod_consts[79]);

                Py_DECREF(tmp_called_value_50);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 172;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 46, tmp_tuple_element_4);
                tmp_called_value_51 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_51 == NULL)) {
                            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 175;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_51);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 175;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_51, mod_consts[80]);

                Py_DECREF(tmp_called_value_51);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 175;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 47, tmp_tuple_element_4);
                tmp_called_value_52 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_52 == NULL)) {
                            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_52 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 178;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_52);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 178;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_52, mod_consts[81]);

                Py_DECREF(tmp_called_value_52);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 178;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 48, tmp_tuple_element_4);
                tmp_called_value_53 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_53 == NULL)) {
                            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_53 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 181;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_53);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 181;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_53, mod_consts[82]);

                Py_DECREF(tmp_called_value_53);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 181;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 49, tmp_tuple_element_4);
                tmp_called_value_54 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_54 == NULL)) {
                            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_54 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 184;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_54);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 184;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_54, mod_consts[83]);

                Py_DECREF(tmp_called_value_54);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 184;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 50, tmp_tuple_element_4);
                tmp_called_value_55 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_55 == NULL)) {
                            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_55 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 187;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_55);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 187;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_55, mod_consts[84]);

                Py_DECREF(tmp_called_value_55);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 187;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 51, tmp_tuple_element_4);
                tmp_called_value_56 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_56 == NULL)) {
                            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_56 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 190;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_56);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 190;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_56, mod_consts[85]);

                Py_DECREF(tmp_called_value_56);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 52, tmp_tuple_element_4);
                tmp_called_value_57 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_57 == NULL)) {
                            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_57 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 193;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_57);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 193;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_57, mod_consts[86]);

                Py_DECREF(tmp_called_value_57);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 193;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 53, tmp_tuple_element_4);
                tmp_called_value_58 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_58 == NULL)) {
                            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_58 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 196;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_58);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 196;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_58, mod_consts[87]);

                Py_DECREF(tmp_called_value_58);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 196;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 54, tmp_tuple_element_4);
                tmp_called_value_59 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_59 == NULL)) {
                            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_59 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 199;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_59);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 199;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_59, mod_consts[88]);

                Py_DECREF(tmp_called_value_59);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 199;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 55, tmp_tuple_element_4);
                tmp_called_value_60 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_60 == NULL)) {
                            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_60 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 202;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_60);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 202;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_60, mod_consts[89]);

                Py_DECREF(tmp_called_value_60);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 202;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 56, tmp_tuple_element_4);
                tmp_called_value_61 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_61 == NULL)) {
                            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_61 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 205;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_61);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 205;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_61, mod_consts[90]);

                Py_DECREF(tmp_called_value_61);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 57, tmp_tuple_element_4);
                tmp_called_value_62 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_62 == NULL)) {
                            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_62 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 208;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_62);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 208;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_62, mod_consts[91]);

                Py_DECREF(tmp_called_value_62);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 58, tmp_tuple_element_4);
                tmp_called_value_63 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_63 == NULL)) {
                            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_63 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 211;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_63);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 211;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_63, mod_consts[92]);

                Py_DECREF(tmp_called_value_63);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 59, tmp_tuple_element_4);
                tmp_called_value_64 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_64 == NULL)) {
                            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_64 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 214;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_64);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 214;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_64, mod_consts[93]);

                Py_DECREF(tmp_called_value_64);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 60, tmp_tuple_element_4);
                tmp_called_value_65 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_65 == NULL)) {
                            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_65 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 217;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_65);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 217;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_65, mod_consts[94]);

                Py_DECREF(tmp_called_value_65);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 61, tmp_tuple_element_4);
                tmp_called_value_66 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_66 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_66 == NULL)) {
                            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_66 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 220;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_66);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 220;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_66, mod_consts[95]);

                Py_DECREF(tmp_called_value_66);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 62, tmp_tuple_element_4);
                tmp_called_value_67 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_67 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_67 == NULL)) {
                            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_67 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 223;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_67);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 223;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_67, mod_consts[96]);

                Py_DECREF(tmp_called_value_67);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 223;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 63, tmp_tuple_element_4);
                tmp_called_value_68 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_68 == NULL)) {
                            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_68 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 226;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_68);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 226;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_68, mod_consts[97]);

                Py_DECREF(tmp_called_value_68);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 226;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 64, tmp_tuple_element_4);
                tmp_called_value_69 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_69 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_69 == NULL)) {
                            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_69 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 229;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_69);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 229;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_69, mod_consts[98]);

                Py_DECREF(tmp_called_value_69);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 229;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 65, tmp_tuple_element_4);
                tmp_called_value_70 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_70 == NULL)) {
                            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_70 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 232;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_70);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 232;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_70, mod_consts[99]);

                Py_DECREF(tmp_called_value_70);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 232;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 66, tmp_tuple_element_4);
                tmp_called_value_71 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_71 == NULL)) {
                            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_71 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 235;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_71);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 235;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_71, mod_consts[100]);

                Py_DECREF(tmp_called_value_71);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 235;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 67, tmp_tuple_element_4);
                tmp_called_value_72 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_72 == NULL)) {
                            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_72 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 238;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_72);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 238;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_72, mod_consts[101]);

                Py_DECREF(tmp_called_value_72);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 238;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 68, tmp_tuple_element_4);
                tmp_called_value_73 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_73 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_73 == NULL)) {
                            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_73 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 241;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_73);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 241;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_73, mod_consts[102]);

                Py_DECREF(tmp_called_value_73);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 241;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 69, tmp_tuple_element_4);
                tmp_called_value_74 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_74 == NULL)) {
                            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_74 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 244;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_74);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 244;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_74, mod_consts[103]);

                Py_DECREF(tmp_called_value_74);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 70, tmp_tuple_element_4);
                tmp_called_value_75 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_75 == NULL)) {
                            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_75 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 247;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_75);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 247;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_75, mod_consts[104]);

                Py_DECREF(tmp_called_value_75);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 71, tmp_tuple_element_4);
                tmp_called_value_76 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_76 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_76 == NULL)) {
                            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_76 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 250;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_76);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 250;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_76, mod_consts[105]);

                Py_DECREF(tmp_called_value_76);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 250;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 72, tmp_tuple_element_4);
                tmp_called_value_77 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_77 == NULL)) {
                            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_77 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 253;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_77);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 253;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_77, mod_consts[106]);

                Py_DECREF(tmp_called_value_77);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 253;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 73, tmp_tuple_element_4);
                tmp_called_value_78 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_78 == NULL)) {
                            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_78 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 256;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_78);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 256;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_78, mod_consts[107]);

                Py_DECREF(tmp_called_value_78);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 256;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 74, tmp_tuple_element_4);
                tmp_called_value_79 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_79 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_79 == NULL)) {
                            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_79 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 259;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_79);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 259;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_79, mod_consts[108]);

                Py_DECREF(tmp_called_value_79);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 75, tmp_tuple_element_4);
                tmp_called_value_80 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_80 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_80 == NULL)) {
                            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_80 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 262;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_80);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 262;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_80, mod_consts[109]);

                Py_DECREF(tmp_called_value_80);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 76, tmp_tuple_element_4);
                tmp_called_value_81 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_81 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_81 == NULL)) {
                            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_81 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 265;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_81);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 265;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_81, mod_consts[110]);

                Py_DECREF(tmp_called_value_81);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 77, tmp_tuple_element_4);
                tmp_called_value_82 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_82 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_82 == NULL)) {
                            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_82 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 268;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_82);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 268;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_82, mod_consts[111]);

                Py_DECREF(tmp_called_value_82);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 268;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 78, tmp_tuple_element_4);
                tmp_called_value_83 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_83 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_83 == NULL)) {
                            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_83 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 271;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_83);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 271;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_83, mod_consts[112]);

                Py_DECREF(tmp_called_value_83);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 271;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 79, tmp_tuple_element_4);
                tmp_called_value_84 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_84 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_84 == NULL)) {
                            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_84 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 274;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_84);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 274;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_84, mod_consts[113]);

                Py_DECREF(tmp_called_value_84);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 274;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 80, tmp_tuple_element_4);
                tmp_called_value_85 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_85 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_85 == NULL)) {
                            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_85 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 277;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_85);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 277;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_85, mod_consts[114]);

                Py_DECREF(tmp_called_value_85);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 277;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 81, tmp_tuple_element_4);
                tmp_called_value_86 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_86 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_86 == NULL)) {
                            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_86 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 280;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_86);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 280;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_86, mod_consts[115]);

                Py_DECREF(tmp_called_value_86);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 280;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 82, tmp_tuple_element_4);
                tmp_called_value_87 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_87 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_87 == NULL)) {
                            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_87 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 283;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_87);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 283;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_87, mod_consts[116]);

                Py_DECREF(tmp_called_value_87);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 283;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 83, tmp_tuple_element_4);
                tmp_called_value_88 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_88 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_88 == NULL)) {
                            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_88 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 286;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_88);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 286;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_88, mod_consts[117]);

                Py_DECREF(tmp_called_value_88);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 84, tmp_tuple_element_4);
                tmp_called_value_89 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_89 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_89 == NULL)) {
                            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_89 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 289;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_89);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 289;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_89, mod_consts[118]);

                Py_DECREF(tmp_called_value_89);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 289;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 85, tmp_tuple_element_4);
                tmp_called_value_90 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_90 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_90 == NULL)) {
                            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_90 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 292;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_90);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 292;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_90, mod_consts[119]);

                Py_DECREF(tmp_called_value_90);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 292;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 86, tmp_tuple_element_4);
                tmp_called_value_91 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_91 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_91 == NULL)) {
                            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_91 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 295;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_91);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 295;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_91, mod_consts[120]);

                Py_DECREF(tmp_called_value_91);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 87, tmp_tuple_element_4);
                tmp_called_value_92 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_92 == NULL)) {
                            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_92 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 298;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_92);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 298;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_92, mod_consts[121]);

                Py_DECREF(tmp_called_value_92);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 298;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 88, tmp_tuple_element_4);
                tmp_called_value_93 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_93 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_93 == NULL)) {
                            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_93 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 301;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_93);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 301;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_93, mod_consts[122]);

                Py_DECREF(tmp_called_value_93);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 301;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 89, tmp_tuple_element_4);
                tmp_called_value_94 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_94 == NULL)) {
                            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_94 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 304;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_94);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 304;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_94, mod_consts[123]);

                Py_DECREF(tmp_called_value_94);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 304;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 90, tmp_tuple_element_4);
                tmp_called_value_95 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_95 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_95 == NULL)) {
                            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_95 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 307;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_95);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 307;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_95, mod_consts[124]);

                Py_DECREF(tmp_called_value_95);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 307;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 91, tmp_tuple_element_4);
                tmp_called_value_96 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_96 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_96 == NULL)) {
                            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_96 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 310;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_96);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 310;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_96, mod_consts[125]);

                Py_DECREF(tmp_called_value_96);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 310;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 92, tmp_tuple_element_4);
                tmp_called_value_97 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_97 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_97 == NULL)) {
                            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_97 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 313;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_97);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 313;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_97, mod_consts[126]);

                Py_DECREF(tmp_called_value_97);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 313;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 93, tmp_tuple_element_4);
                tmp_called_value_98 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_98 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_98 == NULL)) {
                            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_98 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 316;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_98);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 316;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_98, mod_consts[127]);

                Py_DECREF(tmp_called_value_98);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 316;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 94, tmp_tuple_element_4);
                tmp_called_value_99 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_99 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_99 == NULL)) {
                            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_99 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 319;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_99);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 319;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_99, mod_consts[128]);

                Py_DECREF(tmp_called_value_99);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 319;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 95, tmp_tuple_element_4);
                tmp_called_value_100 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_100 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_100 == NULL)) {
                            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_100 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 322;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_100);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 322;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_100, mod_consts[129]);

                Py_DECREF(tmp_called_value_100);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 322;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 96, tmp_tuple_element_4);
                tmp_called_value_101 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_101 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_101 == NULL)) {
                            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_101 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 325;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_101);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 325;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_101, mod_consts[130]);

                Py_DECREF(tmp_called_value_101);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 325;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 97, tmp_tuple_element_4);
                tmp_called_value_102 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_102 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_102 == NULL)) {
                            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_102 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 328;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_102);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 328;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_102, mod_consts[131]);

                Py_DECREF(tmp_called_value_102);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 328;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 98, tmp_tuple_element_4);
                tmp_called_value_103 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_103 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_103 == NULL)) {
                            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_103 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 331;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_103);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 331;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_103, mod_consts[132]);

                Py_DECREF(tmp_called_value_103);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 331;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 99, tmp_tuple_element_4);
                tmp_called_value_104 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_104 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_104 == NULL)) {
                            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_104 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 334;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_104);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 334;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_104, mod_consts[133]);

                Py_DECREF(tmp_called_value_104);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 334;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 100, tmp_tuple_element_4);
                tmp_called_value_105 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_105 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_105 == NULL)) {
                            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_105 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 337;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_105);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 337;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_105, mod_consts[134]);

                Py_DECREF(tmp_called_value_105);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 337;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 101, tmp_tuple_element_4);
                tmp_called_value_106 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_106 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_106 == NULL)) {
                            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_106 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 340;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_106);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 340;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_106, mod_consts[135]);

                Py_DECREF(tmp_called_value_106);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 340;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 102, tmp_tuple_element_4);
                tmp_called_value_107 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_107 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_107 == NULL)) {
                            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_107 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 343;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_107);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 343;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_107, mod_consts[136]);

                Py_DECREF(tmp_called_value_107);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 343;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 103, tmp_tuple_element_4);
                tmp_called_value_108 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_108 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_108 == NULL)) {
                            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_108 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 346;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_108);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 346;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_108, mod_consts[137]);

                Py_DECREF(tmp_called_value_108);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 346;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 104, tmp_tuple_element_4);
                tmp_called_value_109 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_109 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_109 == NULL)) {
                            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_109 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 349;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_109);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 349;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_109, mod_consts[138]);

                Py_DECREF(tmp_called_value_109);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 349;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 105, tmp_tuple_element_4);
                tmp_called_value_110 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_110 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_110 == NULL)) {
                            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_110 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 352;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_110);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 352;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_110, mod_consts[139]);

                Py_DECREF(tmp_called_value_110);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 352;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 106, tmp_tuple_element_4);
                tmp_called_value_111 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_111 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_111 == NULL)) {
                            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_111 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 355;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_111);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 355;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_111, mod_consts[140]);

                Py_DECREF(tmp_called_value_111);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 355;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 107, tmp_tuple_element_4);
                tmp_called_value_112 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_112 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_112 == NULL)) {
                            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_112 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 358;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_112);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 358;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_112, mod_consts[141]);

                Py_DECREF(tmp_called_value_112);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 358;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 108, tmp_tuple_element_4);
                tmp_called_value_113 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_113 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_113 == NULL)) {
                            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_113 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 361;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_113);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 361;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_113, mod_consts[142]);

                Py_DECREF(tmp_called_value_113);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 361;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 109, tmp_tuple_element_4);
                tmp_called_value_114 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_114 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_114 == NULL)) {
                            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_114 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 364;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_114);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 364;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_114, mod_consts[143]);

                Py_DECREF(tmp_called_value_114);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 364;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 110, tmp_tuple_element_4);
                tmp_called_value_115 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_115 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_115 == NULL)) {
                            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_115 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 367;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_115);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 367;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_115, mod_consts[144]);

                Py_DECREF(tmp_called_value_115);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 367;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 111, tmp_tuple_element_4);
                tmp_called_value_116 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_116 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_116 == NULL)) {
                            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_116 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 370;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_116);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 370;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_116, mod_consts[145]);

                Py_DECREF(tmp_called_value_116);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 112, tmp_tuple_element_4);
                tmp_called_value_117 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_117 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_117 == NULL)) {
                            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_117 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 373;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_117);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 373;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_117, mod_consts[146]);

                Py_DECREF(tmp_called_value_117);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 373;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 113, tmp_tuple_element_4);
                tmp_called_value_118 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_118 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_118 == NULL)) {
                            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_118 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 376;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_118);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 376;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_118, mod_consts[147]);

                Py_DECREF(tmp_called_value_118);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 376;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 114, tmp_tuple_element_4);
                tmp_called_value_119 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_119 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_119 == NULL)) {
                            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_119 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 379;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_119);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 379;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_119, mod_consts[148]);

                Py_DECREF(tmp_called_value_119);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 379;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 115, tmp_tuple_element_4);
                tmp_called_value_120 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_120 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_120 == NULL)) {
                            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_120 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 382;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_120);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 382;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_120, mod_consts[149]);

                Py_DECREF(tmp_called_value_120);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 382;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 116, tmp_tuple_element_4);
                tmp_called_value_121 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_121 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_121 == NULL)) {
                            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_121 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 386;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_121);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 386;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_121, mod_consts[150]);

                Py_DECREF(tmp_called_value_121);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 386;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 117, tmp_tuple_element_4);
                tmp_called_value_122 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_122 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_122 == NULL)) {
                            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_122 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 389;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_122);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 389;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_122, mod_consts[151]);

                Py_DECREF(tmp_called_value_122);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 389;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 118, tmp_tuple_element_4);
                tmp_called_value_123 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_123 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_123 == NULL)) {
                            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_123 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 393;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_123);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 393;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_123, mod_consts[152]);

                Py_DECREF(tmp_called_value_123);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 393;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 119, tmp_tuple_element_4);
                tmp_called_value_124 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_124 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_124 == NULL)) {
                            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_124 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 396;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_124);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 396;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_124, mod_consts[153]);

                Py_DECREF(tmp_called_value_124);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 396;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 120, tmp_tuple_element_4);
                tmp_called_value_125 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_125 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_125 == NULL)) {
                            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_125 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 399;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_125);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 399;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_125, mod_consts[154]);

                Py_DECREF(tmp_called_value_125);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 399;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 121, tmp_tuple_element_4);
                tmp_called_value_126 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_126 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_126 == NULL)) {
                            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_126 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 402;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_126);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 402;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_126, mod_consts[155]);

                Py_DECREF(tmp_called_value_126);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 402;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 122, tmp_tuple_element_4);
                tmp_called_value_127 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_127 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_127 == NULL)) {
                            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_127 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 405;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_127);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 405;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_127, mod_consts[156]);

                Py_DECREF(tmp_called_value_127);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 405;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 123, tmp_tuple_element_4);
                tmp_called_value_128 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_128 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_128 == NULL)) {
                            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_128 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 408;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_128);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 408;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_128, mod_consts[157]);

                Py_DECREF(tmp_called_value_128);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 408;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 124, tmp_tuple_element_4);
                tmp_called_value_129 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_129 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_129 == NULL)) {
                            tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_129 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 411;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_129);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 411;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_129, mod_consts[158]);

                Py_DECREF(tmp_called_value_129);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 411;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 125, tmp_tuple_element_4);
                tmp_called_value_130 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_130 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_130 == NULL)) {
                            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_130 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 414;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_130);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 414;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_130, mod_consts[159]);

                Py_DECREF(tmp_called_value_130);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 414;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 126, tmp_tuple_element_4);
                tmp_called_value_131 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_131 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_131 == NULL)) {
                            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_131 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 417;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_131);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 417;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_131, mod_consts[160]);

                Py_DECREF(tmp_called_value_131);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 417;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 127, tmp_tuple_element_4);
                tmp_called_value_132 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_132 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_132 == NULL)) {
                            tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_132 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 420;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_132);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 420;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_132, mod_consts[161]);

                Py_DECREF(tmp_called_value_132);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 420;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 128, tmp_tuple_element_4);
                tmp_called_value_133 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_133 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_133 == NULL)) {
                            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_133 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 423;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_133);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 423;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_133, mod_consts[162]);

                Py_DECREF(tmp_called_value_133);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 423;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 129, tmp_tuple_element_4);
                tmp_called_value_134 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_134 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_134 == NULL)) {
                            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_134 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 426;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_134);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 426;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_134, mod_consts[163]);

                Py_DECREF(tmp_called_value_134);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 426;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 130, tmp_tuple_element_4);
                tmp_called_value_135 = PyObject_GetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[15]);

                if (tmp_called_value_135 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_called_value_135 == NULL)) {
                            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_called_value_135 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 429;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_135);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame.f_lineno = 429;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_135, mod_consts[164]);

                Py_DECREF(tmp_called_value_135);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 429;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 131, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[165], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bc70fcc45beca3c58719ef2126c868c1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bc70fcc45beca3c58719ef2126c868c1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bc70fcc45beca3c58719ef2126c868c1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bc70fcc45beca3c58719ef2126c868c1_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_bc70fcc45beca3c58719ef2126c868c1_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
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


                exception_lineno = 13;

                goto try_except_handler_4;
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
        tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13, mod_consts[166], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_136;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_136 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[19];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_f7dedae15682c17469d53989479dc987->m_frame.f_lineno = 13;
            tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_136, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_args_element_value_1 = outline_0_var___class__;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13);
        locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF(locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13);
        locals_docx$enum$style$$$class__1_WD_BUILTIN_STYLE_13 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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
        exception_lineno = 13;
        goto try_except_handler_2;
        outline_result_1:;
        frame_f7dedae15682c17469d53989479dc987->m_frame.f_lineno = 12;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_19);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_5;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_22 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
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


            exception_lineno = 435;

            goto try_except_handler_5;
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
        tmp_subscript_value_2 = mod_consts[14];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[18]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_137;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_137 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[18]);
        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_5;
        }
        tmp_tuple_element_7 = mod_consts[167];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_7 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_f7dedae15682c17469d53989479dc987->m_frame.f_lineno = 435;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_137, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_137);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[20]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_5;
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
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[22];
        tmp_getattr_default_2 = mod_consts[23];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[22]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 435;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[25];
        tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435, mod_consts[26], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[168];
        tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_7;
        }
        frame_8131e612f9fa109cbe1ad649edcecb0e_3 = MAKE_CLASS_FRAME(codeobj_8131e612f9fa109cbe1ad649edcecb0e, module_docx$enum$style, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8131e612f9fa109cbe1ad649edcecb0e_3);
        assert(Py_REFCNT(frame_8131e612f9fa109cbe1ad649edcecb0e_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[170];
        tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_called_value_138;
            tmp_called_value_138 = PyObject_GetItem(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435, mod_consts[17]);

            if (tmp_called_value_138 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_value_138 == NULL)) {
                        tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_value_138 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 454;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_138);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_8131e612f9fa109cbe1ad649edcecb0e_3->m_frame.f_lineno = 454;
            tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_138, mod_consts[171]);

            Py_DECREF(tmp_called_value_138);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_called_value_139;
                PyObject *tmp_called_value_140;
                PyObject *tmp_called_value_141;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_9);
                tmp_called_value_139 = PyObject_GetItem(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435, mod_consts[17]);

                if (tmp_called_value_139 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_called_value_139 == NULL)) {
                            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_called_value_139 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 457;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_139);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_8131e612f9fa109cbe1ad649edcecb0e_3->m_frame.f_lineno = 457;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_139, mod_consts[172]);

                Py_DECREF(tmp_called_value_139);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 457;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_9);
                tmp_called_value_140 = PyObject_GetItem(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435, mod_consts[17]);

                if (tmp_called_value_140 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_called_value_140 == NULL)) {
                            tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_called_value_140 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 460;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_140);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_8131e612f9fa109cbe1ad649edcecb0e_3->m_frame.f_lineno = 460;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_140, mod_consts[173]);

                Py_DECREF(tmp_called_value_140);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 460;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_9);
                tmp_called_value_141 = PyObject_GetItem(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435, mod_consts[17]);

                if (tmp_called_value_141 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_called_value_141 == NULL)) {
                            tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_called_value_141 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 463;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_141);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_8131e612f9fa109cbe1ad649edcecb0e_3->m_frame.f_lineno = 463;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_141, mod_consts[174]);

                Py_DECREF(tmp_called_value_141);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 463;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435, mod_consts[165], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8131e612f9fa109cbe1ad649edcecb0e_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8131e612f9fa109cbe1ad649edcecb0e_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8131e612f9fa109cbe1ad649edcecb0e_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8131e612f9fa109cbe1ad649edcecb0e_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_8131e612f9fa109cbe1ad649edcecb0e_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
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


                exception_lineno = 435;

                goto try_except_handler_7;
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
        tmp_res = PyObject_SetItem(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435, mod_consts[166], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_142;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_142 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_10 = mod_consts[167];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_10 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_f7dedae15682c17469d53989479dc987->m_frame.f_lineno = 435;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_142, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_27 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435);
        locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435 = NULL;
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

        Py_DECREF(locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435);
        locals_docx$enum$style$$$class__2_WD_STYLE_TYPE_435 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 435;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_docx$enum$style, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_27);
    }
    goto try_end_3;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f7dedae15682c17469d53989479dc987, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7dedae15682c17469d53989479dc987->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7dedae15682c17469d53989479dc987, exception_lineno);
    }



    assertFrameObject(frame_f7dedae15682c17469d53989479dc987);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("docx.enum.style", false);

    Py_INCREF(module_docx$enum$style);
    return module_docx$enum$style;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docx$enum$style, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("docx$enum$style", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
