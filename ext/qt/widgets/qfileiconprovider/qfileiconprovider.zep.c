
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
#include "src/widgets-qfileiconprovider.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QFileIconProvider_QFileIconProvider)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QFileIconProvider, QFileIconProvider, qt, widgets_qfileiconprovider_qfileiconprovider, qt_widgets_qfileiconprovider_qfileiconprovider_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QFileIconProvider_QFileIconProvider, new_)
{

	RETURN_LONG(phpqt_qfileiconprovider_new());
}

PHP_METHOD(Qt_Widgets_QFileIconProvider_QFileIconProvider, icon)
{
	zval *handle_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	RETURN_LONG(phpqt_qfileiconprovider_icon(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QFileIconProvider_QFileIconProvider, iconQFileInfo)
{
	zval *handle_param = NULL, *info_param = NULL, _0, _1;
	zend_long handle, info;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(info)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &info_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, info);
	RETURN_LONG(phpqt_qfileiconprovider_icon_q_file_info(&_0, &_1));
}

