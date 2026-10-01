
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
#include "src/core-qstringdecoder.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QStringDecoder_QStringDecoder)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QStringDecoder, QStringDecoder, qt, core_qstringdecoder_qstringdecoder, qt_core_qstringdecoder_qstringdecoder_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QStringDecoder_QStringDecoder, new_)
{
	zval *encoding_param = NULL, *flags = NULL, flags_sub, __$null, _0;
	zend_long encoding;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(encoding)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &encoding_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, encoding);
	RETURN_LONG(phpqt_qstringdecoder_new(&_0, flags));
}

PHP_METHOD(Qt_Core_QStringDecoder_QStringDecoder, new2)
{

	RETURN_LONG(phpqt_qstringdecoder_new2());
}

PHP_METHOD(Qt_Core_QStringDecoder_QStringDecoder, newQAnyStringViewQStringConverterBaseFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL, *f = NULL, f_sub, __$null;
	zval name;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&f_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(f)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &name_param, &f);
	zephir_get_strval(&name, name_param);
	if (!f) {
		f = &f_sub;
		f = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstringdecoder_new_q_any_string_view_q_string_converter_base_flags(&name, f));
}

PHP_METHOD(Qt_Core_QStringDecoder_QStringDecoder, requiredSpace)
{
	zval *handle_param = NULL, *inputLength_param = NULL, _0, _1;
	zend_long handle, inputLength;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(inputLength)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &inputLength_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, inputLength);
	RETURN_LONG(phpqt_qstringdecoder_required_space(&_0, &_1));
}

PHP_METHOD(Qt_Core_QStringDecoder_QStringDecoder, decoderForHtml)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *data_param = NULL;
	zval data;

	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &data_param);
	zephir_get_strval(&data, data_param);
	RETURN_MM_LONG(phpqt_qstringdecoder_decoder_for_html(&data));
}

