
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
#include "src/opengl-qopenglpixeltransferoptionsfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenglpixeltransferoptionsFunctions_QOpenglpixeltransferoptionsFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenglpixeltransferoptionsFunctions, QOpenglpixeltransferoptionsFunctions, qt, opengl_qopenglpixeltransferoptionsfunctions_qopenglpixeltransferoptionsfunctions, qt_opengl_qopenglpixeltransferoptionsfunctions_qopenglpixeltransferoptionsfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenglpixeltransferoptionsFunctions_QOpenglpixeltransferoptionsFunctions, swap)
{
	zval *value1_param = NULL, *value2_param = NULL, _0, _1;
	zend_long value1, value2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(value1)
		Z_PARAM_LONG(value2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &value1_param, &value2_param);
	ZVAL_LONG(&_0, value1);
	ZVAL_LONG(&_1, value2);
	phpqt_qopenglpixeltransferoptionsfunctions_swap(&_0, &_1);
}

