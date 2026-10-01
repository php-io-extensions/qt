
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/gui-qundogroup.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QUndoGroup_QUndoGroup)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QUndoGroup, QUndoGroup, qt, gui_qundogroup_qundogroup, qt_gui_qundogroup_qundogroup_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, staticMetaObject)
{

	RETURN_LONG(phpqt_qundogroup_static_meta_object());
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qundogroup_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qundogroup_new(&_0));
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, addStack)
{
	zval *handle_param = NULL, *stack_param = NULL, _0, _1;
	zend_long handle, stack;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(stack)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &stack_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, stack);
	phpqt_qundogroup_add_stack(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, removeStack)
{
	zval *handle_param = NULL, *stack_param = NULL, _0, _1;
	zend_long handle, stack;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(stack)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &stack_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, stack);
	phpqt_qundogroup_remove_stack(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, stacks)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qundogroup_stacks(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, activeStack)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qundogroup_active_stack(&_0));
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, createUndoAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval prefix;
	zval *handle_param = NULL, *parent__param = NULL, *prefix_param = NULL, _0, _1;
	zend_long handle, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&prefix);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parent_)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(prefix)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &parent__param, &prefix_param);
	if (!prefix_param) {
		ZEPHIR_INIT_VAR(&prefix);
		ZVAL_STRING(&prefix, "");
	} else {
		zephir_get_strval(&prefix, prefix_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	RETURN_MM_LONG(phpqt_qundogroup_create_undo_action(&_0, &_1, &prefix));
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, createRedoAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval prefix;
	zval *handle_param = NULL, *parent__param = NULL, *prefix_param = NULL, _0, _1;
	zend_long handle, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&prefix);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parent_)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(prefix)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &parent__param, &prefix_param);
	if (!prefix_param) {
		ZEPHIR_INIT_VAR(&prefix);
		ZVAL_STRING(&prefix, "");
	} else {
		zephir_get_strval(&prefix, prefix_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	RETURN_MM_LONG(phpqt_qundogroup_create_redo_action(&_0, &_1, &prefix));
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, canUndo)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qundogroup_can_undo(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, canRedo)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qundogroup_can_redo(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, undoText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qundogroup_undo_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, redoText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qundogroup_redo_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, isClean)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qundogroup_is_clean(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, undo)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qundogroup_undo(&_0);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, redo)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qundogroup_redo(&_0);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, setActiveStack)
{
	zval *handle_param = NULL, *stack_param = NULL, _0, _1;
	zend_long handle, stack;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(stack)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &stack_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, stack);
	phpqt_qundogroup_set_active_stack(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, activeStackChanged)
{
	zval *handle_param = NULL, *stack_param = NULL, _0, _1;
	zend_long handle, stack;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(stack)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &stack_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, stack);
	phpqt_qundogroup_active_stack_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, indexChanged)
{
	zval *handle_param = NULL, *idx_param = NULL, _0, _1;
	zend_long handle, idx;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(idx)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &idx_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, idx);
	phpqt_qundogroup_index_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, cleanChanged)
{
	zend_bool clean;
	zval *handle_param = NULL, *clean_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(clean)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &clean_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (clean ? 1 : 0));
	phpqt_qundogroup_clean_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, canUndoChanged)
{
	zend_bool canUndo;
	zval *handle_param = NULL, *canUndo_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(canUndo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &canUndo_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (canUndo ? 1 : 0));
	phpqt_qundogroup_can_undo_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, canRedoChanged)
{
	zend_bool canRedo;
	zval *handle_param = NULL, *canRedo_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(canRedo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &canRedo_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (canRedo ? 1 : 0));
	phpqt_qundogroup_can_redo_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, undoTextChanged)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval undoText;
	zval *handle_param = NULL, *undoText_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&undoText);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(undoText)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &undoText_param);
	zephir_get_strval(&undoText, undoText_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qundogroup_undo_text_changed(&_0, &undoText);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, redoTextChanged)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval redoText;
	zval *handle_param = NULL, *redoText_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&redoText);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(redoText)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &redoText_param);
	zephir_get_strval(&redoText, redoText_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qundogroup_redo_text_changed(&_0, &redoText);
	ZEPHIR_MM_RESTORE();
}

