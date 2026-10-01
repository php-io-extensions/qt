
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
#include "src/core-qmetaobjectsuperdata.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMetaObjectSuperData_QMetaObjectSuperData)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMetaObjectSuperData, QMetaObjectSuperData, qt, core_qmetaobjectsuperdata_qmetaobjectsuperdata, qt_core_qmetaobjectsuperdata_qmetaobjectsuperdata_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMetaObjectSuperData_QMetaObjectSuperData, direct)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobjectsuperdata_direct(&_0));
}

PHP_METHOD(Qt_Core_QMetaObjectSuperData_QMetaObjectSuperData, new_)
{

	RETURN_LONG(phpqt_qmetaobjectsuperdata_new());
}

PHP_METHOD(Qt_Core_QMetaObjectSuperData_QMetaObjectSuperData, newQMetaObject)
{
	zval *mo_param = NULL, _0;
	zend_long mo;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(mo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &mo_param);
	ZVAL_LONG(&_0, mo);
	RETURN_LONG(phpqt_qmetaobjectsuperdata_new_q_meta_object(&_0));
}

