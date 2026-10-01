
extern zend_class_entry *qt_xml_qdomimplementation_qdomimplementation_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomImplementation_QDomImplementation);

PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, new_);
PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, newQDomImplementation);
PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, hasFeature);
PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, createDocumentType);
PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, createDocument);
PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, invalidDataPolicy);
PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, setInvalidDataPolicy);
PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, isNull);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomimplementation_qdomimplementation_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomimplementation_qdomimplementation_newqdomimplementation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, implementation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomimplementation_qdomimplementation_hasfeature, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, feature, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, version, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomimplementation_qdomimplementation_createdocumenttype, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, qName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, publicId, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, systemId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomimplementation_qdomimplementation_createdocument, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, qName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, doctype, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomimplementation_qdomimplementation_invaliddatapolicy, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomimplementation_qdomimplementation_setinvaliddatapolicy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, policy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomimplementation_qdomimplementation_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomimplementation_qdomimplementation_method_entry) {
	PHP_ME(Qt_Xml_QDomImplementation_QDomImplementation, new_, arginfo_qt_xml_qdomimplementation_qdomimplementation_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomImplementation_QDomImplementation, newQDomImplementation, arginfo_qt_xml_qdomimplementation_qdomimplementation_newqdomimplementation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomImplementation_QDomImplementation, hasFeature, arginfo_qt_xml_qdomimplementation_qdomimplementation_hasfeature, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomImplementation_QDomImplementation, createDocumentType, arginfo_qt_xml_qdomimplementation_qdomimplementation_createdocumenttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomImplementation_QDomImplementation, createDocument, arginfo_qt_xml_qdomimplementation_qdomimplementation_createdocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomImplementation_QDomImplementation, invalidDataPolicy, arginfo_qt_xml_qdomimplementation_qdomimplementation_invaliddatapolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomImplementation_QDomImplementation, setInvalidDataPolicy, arginfo_qt_xml_qdomimplementation_qdomimplementation_setinvaliddatapolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomImplementation_QDomImplementation, isNull, arginfo_qt_xml_qdomimplementation_qdomimplementation_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
