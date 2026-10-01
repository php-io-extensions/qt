
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
#include "src/core-qvariantconstpointer.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QVariantConstPointer_QVariantConstPointer)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QVariantConstPointer, QVariantConstPointer, qt, core_qvariantconstpointer_qvariantconstpointer, qt_core_qvariantconstpointer_qvariantconstpointer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QVariantConstPointer_QVariantConstPointer, new_)
{
	zval *variant = NULL, variant_sub;

	ZVAL_UNDEF(&variant_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(variant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &variant);
	RETURN_LONG(phpqt_qvariantconstpointer_new(variant));
}

