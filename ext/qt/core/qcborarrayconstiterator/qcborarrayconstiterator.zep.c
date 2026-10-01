
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
#include "src/core-qcborarrayconstiterator.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCborArrayConstIterator_QCborArrayConstIterator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCborArrayConstIterator, QCborArrayConstIterator, qt, core_qcborarrayconstiterator_qcborarrayconstiterator, qt_core_qcborarrayconstiterator_qcborarrayconstiterator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCborArrayConstIterator_QCborArrayConstIterator, new_)
{

	RETURN_LONG(phpqt_qcborarrayconstiterator_new());
}

