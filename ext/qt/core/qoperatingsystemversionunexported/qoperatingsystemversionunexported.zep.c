
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
#include "src/core-qoperatingsystemversionunexported.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QOperatingSystemVersionUnexported_QOperatingSystemVersionUnexported)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QOperatingSystemVersionUnexported, QOperatingSystemVersionUnexported, qt, core_qoperatingsystemversionunexported_qoperatingsystemversionunexported, qt_core_qoperatingsystemversionunexported_qoperatingsystemversionunexported_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionUnexported_QOperatingSystemVersionUnexported, new_)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qoperatingsystemversionunexported_new(&_0));
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionUnexported_QOperatingSystemVersionUnexported, MacOSSonoma)
{

	RETURN_LONG(phpqt_qoperatingsystemversionunexported_mac_o_s_sonoma());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionUnexported_QOperatingSystemVersionUnexported, MacOSSequoia)
{

	RETURN_LONG(phpqt_qoperatingsystemversionunexported_mac_o_s_sequoia());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionUnexported_QOperatingSystemVersionUnexported, Android14)
{

	RETURN_LONG(phpqt_qoperatingsystemversionunexported_android14());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionUnexported_QOperatingSystemVersionUnexported, Windows11_23H2)
{

	RETURN_LONG(phpqt_qoperatingsystemversionunexported_windows11_23_h2());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionUnexported_QOperatingSystemVersionUnexported, Windows11_24H2)
{

	RETURN_LONG(phpqt_qoperatingsystemversionunexported_windows11_24_h2());
}

