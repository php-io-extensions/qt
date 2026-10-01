
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
#include "src/widgets-qitemeditorfactory.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QItemEditorFactory_QItemEditorFactory)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QItemEditorFactory, QItemEditorFactory, qt, widgets_qitemeditorfactory_qitemeditorfactory, qt_widgets_qitemeditorfactory_qitemeditorfactory_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QItemEditorFactory_QItemEditorFactory, new_)
{

	RETURN_LONG(phpqt_qitemeditorfactory_new());
}

PHP_METHOD(Qt_Widgets_QItemEditorFactory_QItemEditorFactory, createEditor)
{
	zval *handle_param = NULL, *userType_param = NULL, *parent__param = NULL, _0, _1, _2;
	zend_long handle, userType, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(userType)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &userType_param, &parent__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, userType);
	ZVAL_LONG(&_2, parent_);
	RETURN_LONG(phpqt_qitemeditorfactory_create_editor(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QItemEditorFactory_QItemEditorFactory, valuePropertyName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *userType_param = NULL, result, _0, _1;
	zend_long handle, userType;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(userType)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &userType_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, userType);
	phpqt_qitemeditorfactory_value_property_name(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QItemEditorFactory_QItemEditorFactory, registerEditor)
{
	zval *handle_param = NULL, *userType_param = NULL, *creator_param = NULL, _0, _1, _2;
	zend_long handle, userType, creator;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(userType)
		Z_PARAM_LONG(creator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &userType_param, &creator_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, userType);
	ZVAL_LONG(&_2, creator);
	phpqt_qitemeditorfactory_register_editor(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QItemEditorFactory_QItemEditorFactory, defaultFactory)
{

	RETURN_LONG(phpqt_qitemeditorfactory_default_factory());
}

PHP_METHOD(Qt_Widgets_QItemEditorFactory_QItemEditorFactory, setDefaultFactory)
{
	zval *factory_param = NULL, _0;
	zend_long factory;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(factory)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &factory_param);
	ZVAL_LONG(&_0, factory);
	phpqt_qitemeditorfactory_set_default_factory(&_0);
}

