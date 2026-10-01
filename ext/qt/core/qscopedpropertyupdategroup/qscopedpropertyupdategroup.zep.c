
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
#include "src/core-qscopedpropertyupdategroup.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QScopedPropertyUpdateGroup_QScopedPropertyUpdateGroup)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QScopedPropertyUpdateGroup, QScopedPropertyUpdateGroup, qt, core_qscopedpropertyupdategroup_qscopedpropertyupdategroup, qt_core_qscopedpropertyupdategroup_qscopedpropertyupdategroup_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QScopedPropertyUpdateGroup_QScopedPropertyUpdateGroup, new_)
{

	RETURN_LONG(phpqt_qscopedpropertyupdategroup_new());
}

