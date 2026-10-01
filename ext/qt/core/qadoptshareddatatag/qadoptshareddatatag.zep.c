
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
#include "src/core-qadoptshareddatatag.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QAdoptSharedDataTag_QAdoptSharedDataTag)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QAdoptSharedDataTag, QAdoptSharedDataTag, qt, core_qadoptshareddatatag_qadoptshareddatatag, qt_core_qadoptshareddatatag_qadoptshareddatatag_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QAdoptSharedDataTag_QAdoptSharedDataTag, new_)
{

	RETURN_LONG(phpqt_qadoptshareddatatag_new());
}

