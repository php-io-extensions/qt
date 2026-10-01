
extern zend_class_entry *qt_xml_qdomnodelist_qdomnodelist_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomNodeList_QDomNodeList);

PHP_METHOD(Qt_Xml_QDomNodeList_QDomNodeList, new_);
PHP_METHOD(Qt_Xml_QDomNodeList_QDomNodeList, newQDomNodeList);
PHP_METHOD(Qt_Xml_QDomNodeList_QDomNodeList, item);
PHP_METHOD(Qt_Xml_QDomNodeList_QDomNodeList, at);
PHP_METHOD(Qt_Xml_QDomNodeList_QDomNodeList, length);
PHP_METHOD(Qt_Xml_QDomNodeList_QDomNodeList, count);
PHP_METHOD(Qt_Xml_QDomNodeList_QDomNodeList, size);
PHP_METHOD(Qt_Xml_QDomNodeList_QDomNodeList, isEmpty);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnodelist_qdomnodelist_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnodelist_qdomnodelist_newqdomnodelist, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nodeList, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnodelist_qdomnodelist_item, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnodelist_qdomnodelist_at, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnodelist_qdomnodelist_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnodelist_qdomnodelist_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnodelist_qdomnodelist_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnodelist_qdomnodelist_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomnodelist_qdomnodelist_method_entry) {
	PHP_ME(Qt_Xml_QDomNodeList_QDomNodeList, new_, arginfo_qt_xml_qdomnodelist_qdomnodelist_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNodeList_QDomNodeList, newQDomNodeList, arginfo_qt_xml_qdomnodelist_qdomnodelist_newqdomnodelist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNodeList_QDomNodeList, item, arginfo_qt_xml_qdomnodelist_qdomnodelist_item, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNodeList_QDomNodeList, at, arginfo_qt_xml_qdomnodelist_qdomnodelist_at, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNodeList_QDomNodeList, length, arginfo_qt_xml_qdomnodelist_qdomnodelist_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNodeList_QDomNodeList, count, arginfo_qt_xml_qdomnodelist_qdomnodelist_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNodeList_QDomNodeList, size, arginfo_qt_xml_qdomnodelist_qdomnodelist_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNodeList_QDomNodeList, isEmpty, arginfo_qt_xml_qdomnodelist_qdomnodelist_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
