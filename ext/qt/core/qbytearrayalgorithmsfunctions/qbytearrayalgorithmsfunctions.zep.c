
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
#include "src/core-qbytearrayalgorithmsfunctions.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QBytearrayalgorithmsFunctions_QBytearrayalgorithmsFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QBytearrayalgorithmsFunctions, QBytearrayalgorithmsFunctions, qt, core_qbytearrayalgorithmsfunctions_qbytearrayalgorithmsfunctions, qt_core_qbytearrayalgorithmsfunctions_qbytearrayalgorithmsfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QBytearrayalgorithmsFunctions_QBytearrayalgorithmsFunctions, qstrlen)
{
	zval *str = NULL, str_sub;

	ZVAL_UNDEF(&str_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(str)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &str);
	RETURN_LONG(phpqt_qbytearrayalgorithmsfunctions_qstrlen(str));
}

PHP_METHOD(Qt_Core_QBytearrayalgorithmsFunctions_QBytearrayalgorithmsFunctions, qstrnlen)
{
	zend_long maxlen;
	zval *str = NULL, str_sub, *maxlen_param = NULL, _0;

	ZVAL_UNDEF(&str_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(str)
		Z_PARAM_LONG(maxlen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &str, &maxlen_param);
	ZVAL_LONG(&_0, maxlen);
	RETURN_LONG(phpqt_qbytearrayalgorithmsfunctions_qstrnlen(str, &_0));
}

PHP_METHOD(Qt_Core_QBytearrayalgorithmsFunctions_QBytearrayalgorithmsFunctions, qstrcmp)
{
	zval *str1 = NULL, str1_sub, *str2 = NULL, str2_sub;

	ZVAL_UNDEF(&str1_sub);
	ZVAL_UNDEF(&str2_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(str1)
		Z_PARAM_ZVAL(str2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &str1, &str2);
	RETURN_LONG(phpqt_qbytearrayalgorithmsfunctions_qstrcmp(str1, str2));
}

PHP_METHOD(Qt_Core_QBytearrayalgorithmsFunctions_QBytearrayalgorithmsFunctions, qstrncmp)
{
	zend_long len;
	zval *str1 = NULL, str1_sub, *str2 = NULL, str2_sub, *len_param = NULL, _0;

	ZVAL_UNDEF(&str1_sub);
	ZVAL_UNDEF(&str2_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(str1)
		Z_PARAM_ZVAL(str2)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &str1, &str2, &len_param);
	ZVAL_LONG(&_0, len);
	RETURN_LONG(phpqt_qbytearrayalgorithmsfunctions_qstrncmp(str1, str2, &_0));
}

PHP_METHOD(Qt_Core_QBytearrayalgorithmsFunctions_QBytearrayalgorithmsFunctions, qstricmp)
{
	zval *arg0 = NULL, arg0_sub, *arg1 = NULL, arg1_sub;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_UNDEF(&arg1_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(arg0)
		Z_PARAM_ZVAL(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &arg0, &arg1);
	RETURN_LONG(phpqt_qbytearrayalgorithmsfunctions_qstricmp(arg0, arg1));
}

PHP_METHOD(Qt_Core_QBytearrayalgorithmsFunctions_QBytearrayalgorithmsFunctions, qstrnicmp)
{
	zend_long len;
	zval *arg0 = NULL, arg0_sub, *arg1 = NULL, arg1_sub, *len_param = NULL, _0;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_UNDEF(&arg1_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(arg0)
		Z_PARAM_ZVAL(arg1)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &arg0, &arg1, &len_param);
	ZVAL_LONG(&_0, len);
	RETURN_LONG(phpqt_qbytearrayalgorithmsfunctions_qstrnicmp(arg0, arg1, &_0));
}

PHP_METHOD(Qt_Core_QBytearrayalgorithmsFunctions_QBytearrayalgorithmsFunctions, qstrnicmpCharQsizetypeCharQsizetype)
{
	zend_long arg1, arg3;
	zval *arg0 = NULL, arg0_sub, *arg1_param = NULL, *arg2 = NULL, arg2_sub, *arg3_param = NULL, _0, _1;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_UNDEF(&arg2_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_ZVAL(arg0)
		Z_PARAM_LONG(arg1)
		Z_PARAM_ZVAL(arg2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(arg3)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &arg0, &arg1_param, &arg2, &arg3_param);
	if (!arg3_param) {
		arg3 = -1;
	} else {
		}
	ZVAL_LONG(&_0, arg1);
	ZVAL_LONG(&_1, arg3);
	RETURN_LONG(phpqt_qbytearrayalgorithmsfunctions_qstrnicmp_char_qsizetype_char_qsizetype(arg0, &_0, arg2, &_1));
}

PHP_METHOD(Qt_Core_QBytearrayalgorithmsFunctions_QBytearrayalgorithmsFunctions, qChecksum)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *data_param = NULL, *standard = NULL, standard_sub, __$null;
	zval data;

	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&standard_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(standard)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &data_param, &standard);
	zephir_get_strval(&data, data_param);
	if (!standard) {
		standard = &standard_sub;
		standard = &__$null;
	}
	RETURN_MM_LONG(phpqt_qbytearrayalgorithmsfunctions_q_checksum(&data, standard));
}

