
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
#include "src/core-qcborarrayiterator.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCborArrayIterator_QCborArrayIterator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCborArrayIterator, QCborArrayIterator, qt, core_qcborarrayiterator_qcborarrayiterator, qt_core_qcborarrayiterator_qcborarrayiterator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCborArrayIterator_QCborArrayIterator, new_)
{

	RETURN_LONG(phpqt_qcborarrayiterator_new());
}

