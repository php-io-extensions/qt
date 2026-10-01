
extern zend_class_entry *qt_network_qhstspolicy_qhstspolicy_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QHstsPolicy_QHstsPolicy);

PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, new_);
PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, newQDateTimeQHstsPolicyPolicyFlagsQStringQUrlParsingMode);
PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, newQHstsPolicy);
PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, swap);
PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, setHost);
PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, host);
PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, setExpiry);
PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, expiry);
PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, setIncludesSubDomains);
PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, includesSubDomains);
PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, isExpired);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhstspolicy_qhstspolicy_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhstspolicy_qhstspolicy_newqdatetimeqhstspolicypolicyflagsqstringqurlparsingmode, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, expiry, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, host, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhstspolicy_qhstspolicy_newqhstspolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhstspolicy_qhstspolicy_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhstspolicy_qhstspolicy_sethost, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, host, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhstspolicy_qhstspolicy_host, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhstspolicy_qhstspolicy_setexpiry, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, expiry, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhstspolicy_qhstspolicy_expiry, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhstspolicy_qhstspolicy_setincludessubdomains, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, include_, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhstspolicy_qhstspolicy_includessubdomains, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhstspolicy_qhstspolicy_isexpired, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qhstspolicy_qhstspolicy_method_entry) {
	PHP_ME(Qt_Network_QHstsPolicy_QHstsPolicy, new_, arginfo_qt_network_qhstspolicy_qhstspolicy_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHstsPolicy_QHstsPolicy, newQDateTimeQHstsPolicyPolicyFlagsQStringQUrlParsingMode, arginfo_qt_network_qhstspolicy_qhstspolicy_newqdatetimeqhstspolicypolicyflagsqstringqurlparsingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHstsPolicy_QHstsPolicy, newQHstsPolicy, arginfo_qt_network_qhstspolicy_qhstspolicy_newqhstspolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHstsPolicy_QHstsPolicy, swap, arginfo_qt_network_qhstspolicy_qhstspolicy_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHstsPolicy_QHstsPolicy, setHost, arginfo_qt_network_qhstspolicy_qhstspolicy_sethost, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHstsPolicy_QHstsPolicy, host, arginfo_qt_network_qhstspolicy_qhstspolicy_host, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHstsPolicy_QHstsPolicy, setExpiry, arginfo_qt_network_qhstspolicy_qhstspolicy_setexpiry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHstsPolicy_QHstsPolicy, expiry, arginfo_qt_network_qhstspolicy_qhstspolicy_expiry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHstsPolicy_QHstsPolicy, setIncludesSubDomains, arginfo_qt_network_qhstspolicy_qhstspolicy_setincludessubdomains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHstsPolicy_QHstsPolicy, includesSubDomains, arginfo_qt_network_qhstspolicy_qhstspolicy_includessubdomains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHstsPolicy_QHstsPolicy, isExpired, arginfo_qt_network_qhstspolicy_qhstspolicy_isexpired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
