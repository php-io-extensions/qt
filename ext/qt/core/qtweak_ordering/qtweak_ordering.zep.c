
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
#include "src/core-qtweak_ordering.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_Qtweak_ordering_Qtweak_ordering)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\Qtweak_ordering, Qtweak_ordering, qt, core_qtweak_ordering_qtweak_ordering, qt_core_qtweak_ordering_qtweak_ordering_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_Qtweak_ordering_Qtweak_ordering, less)
{

	RETURN_LONG(phpqt_qtweak_ordering_less());
}

PHP_METHOD(Qt_Core_Qtweak_ordering_Qtweak_ordering, equivalent)
{

	RETURN_LONG(phpqt_qtweak_ordering_equivalent());
}

PHP_METHOD(Qt_Core_Qtweak_ordering_Qtweak_ordering, greater)
{

	RETURN_LONG(phpqt_qtweak_ordering_greater());
}

