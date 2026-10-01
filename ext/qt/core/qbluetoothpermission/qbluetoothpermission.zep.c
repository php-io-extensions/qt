
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
#include "src/core-qbluetoothpermission.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QBluetoothPermission_QBluetoothPermission)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QBluetoothPermission, QBluetoothPermission, qt, core_qbluetoothpermission_qbluetoothpermission, qt_core_qbluetoothpermission_qbluetoothpermission_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QBluetoothPermission_QBluetoothPermission, staticMetaObject)
{

	RETURN_LONG(phpqt_qbluetoothpermission_static_meta_object());
}

PHP_METHOD(Qt_Core_QBluetoothPermission_QBluetoothPermission, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qbluetoothpermission_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Core_QBluetoothPermission_QBluetoothPermission, setCommunicationModes)
{
	zval *handle_param = NULL, *modes_param = NULL, _0, _1;
	zend_long handle, modes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(modes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &modes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, modes);
	phpqt_qbluetoothpermission_set_communication_modes(&_0, &_1);
}

PHP_METHOD(Qt_Core_QBluetoothPermission_QBluetoothPermission, communicationModes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qbluetoothpermission_communication_modes(&_0));
}

PHP_METHOD(Qt_Core_QBluetoothPermission_QBluetoothPermission, new_)
{

	RETURN_LONG(phpqt_qbluetoothpermission_new());
}

PHP_METHOD(Qt_Core_QBluetoothPermission_QBluetoothPermission, newQBluetoothPermission)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qbluetoothpermission_new_q_bluetooth_permission(&_0));
}

PHP_METHOD(Qt_Core_QBluetoothPermission_QBluetoothPermission, swap)
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
	phpqt_qbluetoothpermission_swap(&_0, &_1);
}

