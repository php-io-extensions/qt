
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
#include "src/opengl-qopenglversionfunctionsfactory.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLVersionFunctionsFactory_QOpenGLVersionFunctionsFactory)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLVersionFunctionsFactory, QOpenGLVersionFunctionsFactory, qt, opengl_qopenglversionfunctionsfactory_qopenglversionfunctionsfactory, qt_opengl_qopenglversionfunctionsfactory_qopenglversionfunctionsfactory_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionFunctionsFactory_QOpenGLVersionFunctionsFactory, get)
{
	zend_long context;
	zval *versionProfile = NULL, versionProfile_sub, *context_param = NULL, __$null, _0;

	ZVAL_UNDEF(&versionProfile_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(versionProfile)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &versionProfile, &context_param);
	if (!versionProfile) {
		versionProfile = &versionProfile_sub;
		versionProfile = &__$null;
	}
	if (!context_param) {
		context = 0;
	} else {
		}
	ZVAL_LONG(&_0, context);
	RETURN_LONG(phpqt_qopenglversionfunctionsfactory_get(versionProfile, &_0));
}

