
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
#include "src/opengl-qopenglversionprofilefunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenglversionprofileFunctions_QOpenglversionprofileFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenglversionprofileFunctions, QOpenglversionprofileFunctions, qt, opengl_qopenglversionprofilefunctions_qopenglversionprofilefunctions, qt_opengl_qopenglversionprofilefunctions_qopenglversionprofilefunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenglversionprofileFunctions_QOpenglversionprofileFunctions, qHash)
{
	zval *v_param = NULL, *seed_param = NULL, _0, _1;
	zend_long v, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(v)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &v_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, v);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qopenglversionprofilefunctions_q_hash(&_0, &_1));
}

