
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
#include "src/gui-qaccessible.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessible_QAccessible)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessible, QAccessible, qt, gui_qaccessible_qaccessible, qt_gui_qaccessible_qaccessible_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, staticMetaObject)
{

	RETURN_LONG(phpqt_qaccessible_static_meta_object());
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qaccessible_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, installActivationObserver)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qaccessible_install_activation_observer(&_0);
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, removeActivationObserver)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qaccessible_remove_activation_observer(&_0);
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, queryAccessibleInterface)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qaccessible_query_accessible_interface(&_0));
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, uniqueId)
{
	zval *iface_param = NULL, _0;
	zend_long iface;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(iface)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &iface_param);
	ZVAL_LONG(&_0, iface);
	RETURN_LONG(phpqt_qaccessible_unique_id(&_0));
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, accessibleInterface)
{
	zval *uniqueId_param = NULL, _0;
	zend_long uniqueId;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(uniqueId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &uniqueId_param);
	ZVAL_LONG(&_0, uniqueId);
	RETURN_LONG(phpqt_qaccessible_accessible_interface(&_0));
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, registerAccessibleInterface)
{
	zval *iface_param = NULL, _0;
	zend_long iface;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(iface)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &iface_param);
	ZVAL_LONG(&_0, iface);
	RETURN_LONG(phpqt_qaccessible_register_accessible_interface(&_0));
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, deleteAccessibleInterface)
{
	zval *uniqueId_param = NULL, _0;
	zend_long uniqueId;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(uniqueId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &uniqueId_param);
	ZVAL_LONG(&_0, uniqueId);
	phpqt_qaccessible_delete_accessible_interface(&_0);
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, updateAccessibility)
{
	zval *event_param = NULL, _0;
	zend_long event;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &event_param);
	ZVAL_LONG(&_0, event);
	phpqt_qaccessible_update_accessibility(&_0);
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, isActive)
{
	zend_long r = 0;
	r = phpqt_qaccessible_is_active();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, setActive)
{
	zval *active_param = NULL, _0;
	zend_bool active;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(active)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &active_param);
	ZVAL_BOOL(&_0, (active ? 1 : 0));
	phpqt_qaccessible_set_active(&_0);
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, setRootObject)
{
	zval *object__param = NULL, _0;
	zend_long object_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &object__param);
	ZVAL_LONG(&_0, object_);
	phpqt_qaccessible_set_root_object(&_0);
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, cleanup)
{

	phpqt_qaccessible_cleanup();
}

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, qAccessibleTextBoundaryHelper)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *cursor_param = NULL, *boundaryType_param = NULL, result, _0, _1;
	zend_long cursor, boundaryType;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cursor)
		Z_PARAM_LONG(boundaryType)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &cursor_param, &boundaryType_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, cursor);
	ZVAL_LONG(&_1, boundaryType);
	phpqt_qaccessible_q_accessible_text_boundary_helper(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

