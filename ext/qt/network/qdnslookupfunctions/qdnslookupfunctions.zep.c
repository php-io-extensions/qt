
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
#include "src/network-qdnslookupfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Network_QDnslookupFunctions_QDnslookupFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QDnslookupFunctions, QDnslookupFunctions, qt, network_qdnslookupfunctions_qdnslookupfunctions, qt_network_qdnslookupfunctions_qdnslookupfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QDnslookupFunctions_QDnslookupFunctions, swap)
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
	phpqt_qdnslookupfunctions_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnslookupFunctions_QDnslookupFunctions, swapQDnsHostAddressRecordQDnsHostAddressRecord)
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
	phpqt_qdnslookupfunctions_swap_q_dns_host_address_record_q_dns_host_address_record(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnslookupFunctions_QDnslookupFunctions, swapQDnsMailExchangeRecordQDnsMailExchangeRecord)
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
	phpqt_qdnslookupfunctions_swap_q_dns_mail_exchange_record_q_dns_mail_exchange_record(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnslookupFunctions_QDnslookupFunctions, swapQDnsServiceRecordQDnsServiceRecord)
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
	phpqt_qdnslookupfunctions_swap_q_dns_service_record_q_dns_service_record(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnslookupFunctions_QDnslookupFunctions, swapQDnsTextRecordQDnsTextRecord)
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
	phpqt_qdnslookupfunctions_swap_q_dns_text_record_q_dns_text_record(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnslookupFunctions_QDnslookupFunctions, swapQDnsTlsAssociationRecordQDnsTlsAssociationRecord)
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
	phpqt_qdnslookupfunctions_swap_q_dns_tls_association_record_q_dns_tls_association_record(&_0, &_1);
}

