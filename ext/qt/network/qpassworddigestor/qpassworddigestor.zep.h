
extern zend_class_entry *qt_network_qpassworddigestor_qpassworddigestor_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QPasswordDigestor_QPasswordDigestor);

PHP_METHOD(Qt_Network_QPasswordDigestor_QPasswordDigestor, deriveKeyPbkdf1);
PHP_METHOD(Qt_Network_QPasswordDigestor_QPasswordDigestor, deriveKeyPbkdf2);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qpassworddigestor_qpassworddigestor_derivekeypbkdf1, 0, 5, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, algorithm, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, salt, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, iterations, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dkLen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qpassworddigestor_qpassworddigestor_derivekeypbkdf2, 0, 5, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, algorithm, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, salt, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, iterations, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dkLen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qpassworddigestor_qpassworddigestor_method_entry) {
	PHP_ME(Qt_Network_QPasswordDigestor_QPasswordDigestor, deriveKeyPbkdf1, arginfo_qt_network_qpassworddigestor_qpassworddigestor_derivekeypbkdf1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QPasswordDigestor_QPasswordDigestor, deriveKeyPbkdf2, arginfo_qt_network_qpassworddigestor_qpassworddigestor_derivekeypbkdf2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
