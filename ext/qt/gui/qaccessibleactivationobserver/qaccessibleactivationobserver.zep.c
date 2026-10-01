
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
#include "src/gui-qaccessibleactivationobserver.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleActivationObserver_QAccessibleActivationObserver)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessibleActivationObserver, QAccessibleActivationObserver, qt, gui_qaccessibleactivationobserver_qaccessibleactivationobserver, qt_gui_qaccessibleactivationobserver_qaccessibleactivationobserver_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessibleActivationObserver_QAccessibleActivationObserver, accessibilityActiveChanged)
{
	zend_bool active;
	zval *handle_param = NULL, *active_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(active)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &active_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (active ? 1 : 0));
	phpqt_qaccessibleactivationobserver_accessibility_active_changed(&_0, &_1);
}

