
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
#include "src/gui-qdrag.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QDrag_QDrag)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QDrag, QDrag, qt, gui_qdrag_qdrag, qt_gui_qdrag_qdrag_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, staticMetaObject)
{

	RETURN_LONG(phpqt_qdrag_static_meta_object());
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, tr)
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
	phpqt_qdrag_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, new_)
{
	zval *dragSource_param = NULL, _0;
	zend_long dragSource;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dragSource)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dragSource_param);
	ZVAL_LONG(&_0, dragSource);
	RETURN_LONG(phpqt_qdrag_new(&_0));
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, setMimeData)
{
	zval *handle_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, data);
	phpqt_qdrag_set_mime_data(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, mimeData)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdrag_mime_data(&_0));
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, setPixmap)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qdrag_set_pixmap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, pixmap)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdrag_pixmap(&_0));
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, setHotSpot)
{
	zval *handle_param = NULL, *hotspotX_param = NULL, *hotspotY_param = NULL, _0, _1, _2;
	zend_long handle, hotspotX, hotspotY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(hotspotX)
		Z_PARAM_LONG(hotspotY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &hotspotX_param, &hotspotY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, hotspotX);
	ZVAL_LONG(&_2, hotspotY);
	phpqt_qdrag_set_hot_spot(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, hotSpot)
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
	phpqt_qdrag_hot_spot(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, source)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdrag_source(&_0));
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, target)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdrag_target(&_0));
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, exec)
{
	zval *handle_param = NULL, *supportedActions = NULL, supportedActions_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&supportedActions_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(supportedActions)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &supportedActions);
	if (!supportedActions) {
		supportedActions = &supportedActions_sub;
		supportedActions = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdrag_exec(&_0, supportedActions));
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, execQtDropActionsQtDropAction)
{
	zval *handle_param = NULL, *supportedActions_param = NULL, *defaultAction_param = NULL, _0, _1, _2;
	zend_long handle, supportedActions, defaultAction;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(supportedActions)
		Z_PARAM_LONG(defaultAction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &supportedActions_param, &defaultAction_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, supportedActions);
	ZVAL_LONG(&_2, defaultAction);
	RETURN_LONG(phpqt_qdrag_exec_qt_drop_actions_qt_drop_action(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, setDragCursor)
{
	zval *handle_param = NULL, *cursor_param = NULL, *action_param = NULL, _0, _1, _2;
	zend_long handle, cursor, action;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cursor)
		Z_PARAM_LONG(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cursor_param, &action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cursor);
	ZVAL_LONG(&_2, action);
	phpqt_qdrag_set_drag_cursor(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, dragCursor)
{
	zval *handle_param = NULL, *action_param = NULL, _0, _1;
	zend_long handle, action;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, action);
	RETURN_LONG(phpqt_qdrag_drag_cursor(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, supportedActions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdrag_supported_actions(&_0));
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, defaultAction)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdrag_default_action(&_0));
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, cancel)
{

	phpqt_qdrag_cancel();
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, actionChanged)
{
	zval *handle_param = NULL, *action_param = NULL, _0, _1;
	zend_long handle, action;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, action);
	phpqt_qdrag_action_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QDrag_QDrag, targetChanged)
{
	zval *handle_param = NULL, *newTarget_param = NULL, _0, _1;
	zend_long handle, newTarget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newTarget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newTarget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newTarget);
	phpqt_qdrag_target_changed(&_0, &_1);
}

