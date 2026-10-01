
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
#include "src/core-qcamerapermission.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCameraPermission_QCameraPermission)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCameraPermission, QCameraPermission, qt, core_qcamerapermission_qcamerapermission, qt_core_qcamerapermission_qcamerapermission_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCameraPermission_QCameraPermission, new_)
{

	RETURN_LONG(phpqt_qcamerapermission_new());
}

PHP_METHOD(Qt_Core_QCameraPermission_QCameraPermission, newQCameraPermission)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qcamerapermission_new_q_camera_permission(&_0));
}

PHP_METHOD(Qt_Core_QCameraPermission_QCameraPermission, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qcamerapermission_swap(&_0, &_1);
}

