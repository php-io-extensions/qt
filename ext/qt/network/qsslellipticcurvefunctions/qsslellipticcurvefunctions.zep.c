
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
#include "src/network-qsslellipticcurvefunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Network_QSslellipticcurveFunctions_QSslellipticcurveFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QSslellipticcurveFunctions, QSslellipticcurveFunctions, qt, network_qsslellipticcurvefunctions_qsslellipticcurvefunctions, qt_network_qsslellipticcurvefunctions_qsslellipticcurvefunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QSslellipticcurveFunctions_QSslellipticcurveFunctions, qHash)
{
	zval *curve_param = NULL, *seed_param = NULL, _0, _1;
	zend_long curve, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(curve)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &curve_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, curve);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qsslellipticcurvefunctions_q_hash(&_0, &_1));
}

PHP_METHOD(Qt_Network_QSslellipticcurveFunctions_QSslellipticcurveFunctions, qRegisterNormalizedMetaType_QSslEllipticCurve)
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
	RETURN_MM_LONG(phpqt_qsslellipticcurvefunctions_q_register_normalized_meta_type__q_ssl_elliptic_curve(&arg0));
}

