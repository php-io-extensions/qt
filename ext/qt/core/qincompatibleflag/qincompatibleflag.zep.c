
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
#include "src/core-qincompatibleflag.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QIncompatibleFlag_QIncompatibleFlag)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QIncompatibleFlag, QIncompatibleFlag, qt, core_qincompatibleflag_qincompatibleflag, qt_core_qincompatibleflag_qincompatibleflag_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QIncompatibleFlag_QIncompatibleFlag, new_)
{
	zval *i_param = NULL, _0;
	zend_long i;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &i_param);
	ZVAL_LONG(&_0, i);
	RETURN_LONG(phpqt_qincompatibleflag_new(&_0));
}

