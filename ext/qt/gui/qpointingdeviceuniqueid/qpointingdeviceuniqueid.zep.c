
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
#include "src/gui-qpointingdeviceuniqueid.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPointingDeviceUniqueId_QPointingDeviceUniqueId)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPointingDeviceUniqueId, QPointingDeviceUniqueId, qt, gui_qpointingdeviceuniqueid_qpointingdeviceuniqueid, qt_gui_qpointingdeviceuniqueid_qpointingdeviceuniqueid_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPointingDeviceUniqueId_QPointingDeviceUniqueId, staticMetaObject)
{

	RETURN_LONG(phpqt_qpointingdeviceuniqueid_static_meta_object());
}

PHP_METHOD(Qt_Gui_QPointingDeviceUniqueId_QPointingDeviceUniqueId, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpointingdeviceuniqueid_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QPointingDeviceUniqueId_QPointingDeviceUniqueId, new_)
{

	RETURN_LONG(phpqt_qpointingdeviceuniqueid_new());
}

PHP_METHOD(Qt_Gui_QPointingDeviceUniqueId_QPointingDeviceUniqueId, fromNumericId)
{
	zval *id_param = NULL, _0;
	zend_long id;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &id_param);
	ZVAL_LONG(&_0, id);
	RETURN_LONG(phpqt_qpointingdeviceuniqueid_from_numeric_id(&_0));
}

PHP_METHOD(Qt_Gui_QPointingDeviceUniqueId_QPointingDeviceUniqueId, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpointingdeviceuniqueid_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPointingDeviceUniqueId_QPointingDeviceUniqueId, numericId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpointingdeviceuniqueid_numeric_id(&_0));
}

