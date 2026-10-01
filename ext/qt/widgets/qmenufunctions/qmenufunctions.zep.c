
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
#include "src/widgets-qmenufunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QMenuFunctions_QMenuFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QMenuFunctions, QMenuFunctions, qt, widgets_qmenufunctions_qmenufunctions, qt_widgets_qmenufunctions_qmenufunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QMenuFunctions_QMenuFunctions, qt_mac_menu_emit_hovered)
{
	zval *menu_param = NULL, *action_param = NULL, _0, _1;
	zend_long menu, action;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(menu)
		Z_PARAM_LONG(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &menu_param, &action_param);
	ZVAL_LONG(&_0, menu);
	ZVAL_LONG(&_1, action);
	phpqt_qmenufunctions_qt_mac_menu_emit_hovered(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMenuFunctions_QMenuFunctions, qt_mac_emit_menuSignals)
{
	zend_bool show;
	zval *menu_param = NULL, *show_param = NULL, _0, _1;
	zend_long menu;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(menu)
		Z_PARAM_BOOL(show)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &menu_param, &show_param);
	ZVAL_LONG(&_0, menu);
	ZVAL_BOOL(&_1, (show ? 1 : 0));
	phpqt_qmenufunctions_qt_mac_emit_menu_signals(&_0, &_1);
}

