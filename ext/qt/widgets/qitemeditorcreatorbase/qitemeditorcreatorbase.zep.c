
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
#include "src/widgets-qitemeditorcreatorbase.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QItemEditorCreatorBase_QItemEditorCreatorBase)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QItemEditorCreatorBase, QItemEditorCreatorBase, qt, widgets_qitemeditorcreatorbase_qitemeditorcreatorbase, qt_widgets_qitemeditorcreatorbase_qitemeditorcreatorbase_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QItemEditorCreatorBase_QItemEditorCreatorBase, createWidget)
{
	zval *handle_param = NULL, *parent__param = NULL, _0, _1;
	zend_long handle, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &parent__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qitemeditorcreatorbase_create_widget(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QItemEditorCreatorBase_QItemEditorCreatorBase, valuePropertyName)
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
	phpqt_qitemeditorcreatorbase_value_property_name(&result, &_0);
	RETURN_CCTOR(&result);
}

