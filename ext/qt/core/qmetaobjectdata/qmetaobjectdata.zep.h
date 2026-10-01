
extern zend_class_entry *qt_core_qmetaobjectdata_qmetaobjectdata_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMetaObjectData_QMetaObjectData);

PHP_METHOD(Qt_Core_QMetaObjectData_QMetaObjectData, superdata);
PHP_METHOD(Qt_Core_QMetaObjectData_QMetaObjectData, setSuperdata);
PHP_METHOD(Qt_Core_QMetaObjectData_QMetaObjectData, relatedMetaObjects);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobjectdata_qmetaobjectdata_superdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobjectdata_qmetaobjectdata_setsuperdata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobjectdata_qmetaobjectdata_relatedmetaobjects, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmetaobjectdata_qmetaobjectdata_method_entry) {
	PHP_ME(Qt_Core_QMetaObjectData_QMetaObjectData, superdata, arginfo_qt_core_qmetaobjectdata_qmetaobjectdata_superdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObjectData_QMetaObjectData, setSuperdata, arginfo_qt_core_qmetaobjectdata_qmetaobjectdata_setsuperdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObjectData_QMetaObjectData, relatedMetaObjects, arginfo_qt_core_qmetaobjectdata_qmetaobjectdata_relatedmetaobjects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
