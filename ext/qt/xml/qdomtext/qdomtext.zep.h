
extern zend_class_entry *qt_xml_qdomtext_qdomtext_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomText_QDomText);

PHP_METHOD(Qt_Xml_QDomText_QDomText, new_);
PHP_METHOD(Qt_Xml_QDomText_QDomText, newQDomText);
PHP_METHOD(Qt_Xml_QDomText_QDomText, splitText);
PHP_METHOD(Qt_Xml_QDomText_QDomText, nodeType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomtext_qdomtext_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomtext_qdomtext_newqdomtext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomtext_qdomtext_splittext, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomtext_qdomtext_nodetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomtext_qdomtext_method_entry) {
	PHP_ME(Qt_Xml_QDomText_QDomText, new_, arginfo_qt_xml_qdomtext_qdomtext_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomText_QDomText, newQDomText, arginfo_qt_xml_qdomtext_qdomtext_newqdomtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomText_QDomText, splitText, arginfo_qt_xml_qdomtext_qdomtext_splittext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomText_QDomText, nodeType, arginfo_qt_xml_qdomtext_qdomtext_nodetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
