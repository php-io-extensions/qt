
extern zend_class_entry *qt_core_qxmlstreamattributes_qxmlstreamattributes_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes);

PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, new_);
PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, value);
PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, valueQAnyStringView);
PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, append);
PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, appendQStringQString);
PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, hasAttribute);
PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, hasAttributeQAnyStringViewQAnyStringView);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_value, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceUri, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_valueqanystringview, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, qualifiedName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_append, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceUri, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_appendqstringqstring, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, qualifiedName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_hasattribute, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, qualifiedName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_hasattributeqanystringviewqanystringview, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceUri, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qxmlstreamattributes_qxmlstreamattributes_method_entry) {
	PHP_ME(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, new_, arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, value, arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, valueQAnyStringView, arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_valueqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, append, arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_append, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, appendQStringQString, arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_appendqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, hasAttribute, arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_hasattribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, hasAttributeQAnyStringViewQAnyStringView, arginfo_qt_core_qxmlstreamattributes_qxmlstreamattributes_hasattributeqanystringviewqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
