
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
#include "src/widgets-qstyleoptioncomplex.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QStyleOptionComplex_QStyleOptionComplex)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QStyleOptionComplex, QStyleOptionComplex, qt, widgets_qstyleoptioncomplex_qstyleoptioncomplex, qt_widgets_qstyleoptioncomplex_qstyleoptioncomplex_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QStyleOptionComplex_QStyleOptionComplex, subControls)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstyleoptioncomplex_sub_controls(&_0));
}

PHP_METHOD(Qt_Widgets_QStyleOptionComplex_QStyleOptionComplex, setSubControls)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qstyleoptioncomplex_set_sub_controls(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionComplex_QStyleOptionComplex, activeSubControls)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstyleoptioncomplex_active_sub_controls(&_0));
}

PHP_METHOD(Qt_Widgets_QStyleOptionComplex_QStyleOptionComplex, setActiveSubControls)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qstyleoptioncomplex_set_active_sub_controls(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionComplex_QStyleOptionComplex, new_)
{
	zval *version = NULL, version_sub, *type = NULL, type_sub, __$null;

	ZVAL_UNDEF(&version_sub);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(version)
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &version, &type);
	if (!version) {
		version = &version_sub;
		version = &__$null;
	}
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	RETURN_LONG(phpqt_qstyleoptioncomplex_new(version, type));
}

PHP_METHOD(Qt_Widgets_QStyleOptionComplex_QStyleOptionComplex, newQStyleOptionComplex)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qstyleoptioncomplex_new_q_style_option_complex(&_0));
}

