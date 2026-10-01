
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
#include "src/gui-qiconfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QIconFunctions_QIconFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QIconFunctions, QIconFunctions, qt, gui_qiconfunctions_qiconfunctions, qt_gui_qiconfunctions_qiconfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QIconFunctions_QIconFunctions, swap)
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
	phpqt_qiconfunctions_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QIconFunctions_QIconFunctions, qt_findAtNxFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double targetDevicePixelRatio;
	zval *baseFileName_param = NULL, *targetDevicePixelRatio_param = NULL, *sourceDevicePixelRatio = NULL, sourceDevicePixelRatio_sub, __$null, result, _0;
	zval baseFileName;

	ZVAL_UNDEF(&baseFileName);
	ZVAL_UNDEF(&sourceDevicePixelRatio_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(baseFileName)
		Z_PARAM_ZVAL(targetDevicePixelRatio)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(sourceDevicePixelRatio)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &baseFileName_param, &targetDevicePixelRatio_param, &sourceDevicePixelRatio);
	zephir_get_strval(&baseFileName, baseFileName_param);
	targetDevicePixelRatio = zephir_get_doubleval(targetDevicePixelRatio_param);
	if (!sourceDevicePixelRatio) {
		sourceDevicePixelRatio = &sourceDevicePixelRatio_sub;
		sourceDevicePixelRatio = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, targetDevicePixelRatio);
	phpqt_qiconfunctions_qt_find_at_nx_file(&result, &baseFileName, &_0, sourceDevicePixelRatio);
	RETURN_CCTOR(&result);
}

