
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
#include "src/core-qtstrong_ordering.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_Qtstrong_ordering_Qtstrong_ordering)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\Qtstrong_ordering, Qtstrong_ordering, qt, core_qtstrong_ordering_qtstrong_ordering, qt_core_qtstrong_ordering_qtstrong_ordering_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_Qtstrong_ordering_Qtstrong_ordering, less)
{

	RETURN_LONG(phpqt_qtstrong_ordering_less());
}

PHP_METHOD(Qt_Core_Qtstrong_ordering_Qtstrong_ordering, equivalent)
{

	RETURN_LONG(phpqt_qtstrong_ordering_equivalent());
}

PHP_METHOD(Qt_Core_Qtstrong_ordering_Qtstrong_ordering, equal)
{

	RETURN_LONG(phpqt_qtstrong_ordering_equal());
}

PHP_METHOD(Qt_Core_Qtstrong_ordering_Qtstrong_ordering, greater)
{

	RETURN_LONG(phpqt_qtstrong_ordering_greater());
}

