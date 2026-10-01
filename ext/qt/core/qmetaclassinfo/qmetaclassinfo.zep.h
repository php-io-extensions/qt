
extern zend_class_entry *qt_core_qmetaclassinfo_qmetaclassinfo_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMetaClassInfo_QMetaClassInfo);

PHP_METHOD(Qt_Core_QMetaClassInfo_QMetaClassInfo, new_);
PHP_METHOD(Qt_Core_QMetaClassInfo_QMetaClassInfo, name);
PHP_METHOD(Qt_Core_QMetaClassInfo_QMetaClassInfo, value);
PHP_METHOD(Qt_Core_QMetaClassInfo_QMetaClassInfo, enclosingMetaObject);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaclassinfo_qmetaclassinfo_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetaclassinfo_qmetaclassinfo_name, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetaclassinfo_qmetaclassinfo_value, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaclassinfo_qmetaclassinfo_enclosingmetaobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmetaclassinfo_qmetaclassinfo_method_entry) {
	PHP_ME(Qt_Core_QMetaClassInfo_QMetaClassInfo, new_, arginfo_qt_core_qmetaclassinfo_qmetaclassinfo_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaClassInfo_QMetaClassInfo, name, arginfo_qt_core_qmetaclassinfo_qmetaclassinfo_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaClassInfo_QMetaClassInfo, value, arginfo_qt_core_qmetaclassinfo_qmetaclassinfo_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaClassInfo_QMetaClassInfo, enclosingMetaObject, arginfo_qt_core_qmetaclassinfo_qmetaclassinfo_enclosingmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
