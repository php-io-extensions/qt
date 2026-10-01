
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
#include "src/core-qjsonarrayconst_iterator.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QJsonArrayconst_iterator_QJsonArrayconst_iterator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QJsonArrayconst_iterator, QJsonArrayconst_iterator, qt, core_qjsonarrayconst_iterator_qjsonarrayconst_iterator, qt_core_qjsonarrayconst_iterator_qjsonarrayconst_iterator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QJsonArrayconst_iterator_QJsonArrayconst_iterator, new_)
{

	RETURN_LONG(phpqt_qjsonarrayconst_iterator_new());
}

PHP_METHOD(Qt_Core_QJsonArrayconst_iterator_QJsonArrayconst_iterator, newQJsonArrayQsizetype)
{
	zval *array__param = NULL, *index_param = NULL, _0, _1;
	zend_long array_, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(array_)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &array__param, &index_param);
	ZVAL_LONG(&_0, array_);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(phpqt_qjsonarrayconst_iterator_new_q_json_array_qsizetype(&_0, &_1));
}

