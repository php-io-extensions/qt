
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
#include "src/core-qlocationpermission.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QLocationPermission_QLocationPermission)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QLocationPermission, QLocationPermission, qt, core_qlocationpermission_qlocationpermission, qt_core_qlocationpermission_qlocationpermission_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QLocationPermission_QLocationPermission, staticMetaObject)
{

	RETURN_LONG(phpqt_qlocationpermission_static_meta_object());
}

PHP_METHOD(Qt_Core_QLocationPermission_QLocationPermission, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocationpermission_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Core_QLocationPermission_QLocationPermission, setAccuracy)
{
	zval *handle_param = NULL, *accuracy_param = NULL, _0, _1;
	zend_long handle, accuracy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(accuracy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &accuracy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, accuracy);
	phpqt_qlocationpermission_set_accuracy(&_0, &_1);
}

PHP_METHOD(Qt_Core_QLocationPermission_QLocationPermission, accuracy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocationpermission_accuracy(&_0));
}

PHP_METHOD(Qt_Core_QLocationPermission_QLocationPermission, setAvailability)
{
	zval *handle_param = NULL, *availability_param = NULL, _0, _1;
	zend_long handle, availability;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(availability)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &availability_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, availability);
	phpqt_qlocationpermission_set_availability(&_0, &_1);
}

PHP_METHOD(Qt_Core_QLocationPermission_QLocationPermission, availability)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocationpermission_availability(&_0));
}

PHP_METHOD(Qt_Core_QLocationPermission_QLocationPermission, new_)
{

	RETURN_LONG(phpqt_qlocationpermission_new());
}

PHP_METHOD(Qt_Core_QLocationPermission_QLocationPermission, newQLocationPermission)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qlocationpermission_new_q_location_permission(&_0));
}

PHP_METHOD(Qt_Core_QLocationPermission_QLocationPermission, swap)
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
	phpqt_qlocationpermission_swap(&_0, &_1);
}

