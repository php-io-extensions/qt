
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
#include "src/core-qtpartial_ordering.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_Qtpartial_ordering_Qtpartial_ordering)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\Qtpartial_ordering, Qtpartial_ordering, qt, core_qtpartial_ordering_qtpartial_ordering, qt_core_qtpartial_ordering_qtpartial_ordering_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_Qtpartial_ordering_Qtpartial_ordering, less)
{

	RETURN_LONG(phpqt_qtpartial_ordering_less());
}

PHP_METHOD(Qt_Core_Qtpartial_ordering_Qtpartial_ordering, equivalent)
{

	RETURN_LONG(phpqt_qtpartial_ordering_equivalent());
}

PHP_METHOD(Qt_Core_Qtpartial_ordering_Qtpartial_ordering, greater)
{

	RETURN_LONG(phpqt_qtpartial_ordering_greater());
}

PHP_METHOD(Qt_Core_Qtpartial_ordering_Qtpartial_ordering, unordered)
{

	RETURN_LONG(phpqt_qtpartial_ordering_unordered());
}

