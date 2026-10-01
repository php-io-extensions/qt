
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
#include "src/widgets-qscrollerpropertiesfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QScrollerpropertiesFunctions_QScrollerpropertiesFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QScrollerpropertiesFunctions, QScrollerpropertiesFunctions, qt, widgets_qscrollerpropertiesfunctions_qscrollerpropertiesfunctions, qt_widgets_qscrollerpropertiesfunctions_qscrollerpropertiesfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QScrollerpropertiesFunctions_QScrollerpropertiesFunctions, qRegisterNormalizedMetaType_QScrollerProperties__OvershootPolicy)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qscrollerpropertiesfunctions_q_register_normalized_meta_type__q_scroller_properties___overshoot_policy(&arg0));
}

PHP_METHOD(Qt_Widgets_QScrollerpropertiesFunctions_QScrollerpropertiesFunctions, qRegisterNormalizedMetaType_QScrollerProperties__FrameRates)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qscrollerpropertiesfunctions_q_register_normalized_meta_type__q_scroller_properties___frame_rates(&arg0));
}

