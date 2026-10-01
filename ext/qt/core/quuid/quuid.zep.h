
extern zend_class_entry *qt_core_quuid_quuid_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QUuid_QUuid);

PHP_METHOD(Qt_Core_QUuid_QUuid, new_);
PHP_METHOD(Qt_Core_QUuid_QUuid, newUintUshortUshortUcharUcharUcharUcharUcharUcharUcharUchar);
PHP_METHOD(Qt_Core_QUuid_QUuid, newQAnyStringView);
PHP_METHOD(Qt_Core_QUuid_QUuid, fromString);
PHP_METHOD(Qt_Core_QUuid_QUuid, toString);
PHP_METHOD(Qt_Core_QUuid_QUuid, toByteArray);
PHP_METHOD(Qt_Core_QUuid_QUuid, toRfc4122);
PHP_METHOD(Qt_Core_QUuid_QUuid, fromRfc4122);
PHP_METHOD(Qt_Core_QUuid_QUuid, isNull);
PHP_METHOD(Qt_Core_QUuid_QUuid, fromUInt128);
PHP_METHOD(Qt_Core_QUuid_QUuid, toUInt128);
PHP_METHOD(Qt_Core_QUuid_QUuid, createUuid);
PHP_METHOD(Qt_Core_QUuid_QUuid, createUuidV5);
PHP_METHOD(Qt_Core_QUuid_QUuid, createUuidV3);
PHP_METHOD(Qt_Core_QUuid_QUuid, variant);
PHP_METHOD(Qt_Core_QUuid_QUuid, version);
PHP_METHOD(Qt_Core_QUuid_QUuid, data1);
PHP_METHOD(Qt_Core_QUuid_QUuid, setData1);
PHP_METHOD(Qt_Core_QUuid_QUuid, data2);
PHP_METHOD(Qt_Core_QUuid_QUuid, setData2);
PHP_METHOD(Qt_Core_QUuid_QUuid, data3);
PHP_METHOD(Qt_Core_QUuid_QUuid, setData3);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_newuintushortushortucharucharucharucharucharucharucharuchar, 0, 11, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, l, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b8, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_newqanystringview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_fromstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_tobytearray, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_torfc4122, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_fromrfc4122, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_fromuint128, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, uuid, IS_LONG, 0)
	ZEND_ARG_INFO(0, order)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_touint128, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, order)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_createuuid, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_createuuidv5, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ns, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseData, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_createuuidv3, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ns, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseData, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_variant, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_version, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_data1, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_setdata1, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_data2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_setdata2, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_data3, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuid_quuid_setdata3, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_quuid_quuid_method_entry) {
	PHP_ME(Qt_Core_QUuid_QUuid, new_, arginfo_qt_core_quuid_quuid_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, newUintUshortUshortUcharUcharUcharUcharUcharUcharUcharUchar, arginfo_qt_core_quuid_quuid_newuintushortushortucharucharucharucharucharucharucharuchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, newQAnyStringView, arginfo_qt_core_quuid_quuid_newqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, fromString, arginfo_qt_core_quuid_quuid_fromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, toString, arginfo_qt_core_quuid_quuid_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, toByteArray, arginfo_qt_core_quuid_quuid_tobytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, toRfc4122, arginfo_qt_core_quuid_quuid_torfc4122, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, fromRfc4122, arginfo_qt_core_quuid_quuid_fromrfc4122, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, isNull, arginfo_qt_core_quuid_quuid_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, fromUInt128, arginfo_qt_core_quuid_quuid_fromuint128, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, toUInt128, arginfo_qt_core_quuid_quuid_touint128, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, createUuid, arginfo_qt_core_quuid_quuid_createuuid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, createUuidV5, arginfo_qt_core_quuid_quuid_createuuidv5, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, createUuidV3, arginfo_qt_core_quuid_quuid_createuuidv3, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, variant, arginfo_qt_core_quuid_quuid_variant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, version, arginfo_qt_core_quuid_quuid_version, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, data1, arginfo_qt_core_quuid_quuid_data1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, setData1, arginfo_qt_core_quuid_quuid_setdata1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, data2, arginfo_qt_core_quuid_quuid_data2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, setData2, arginfo_qt_core_quuid_quuid_setdata2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, data3, arginfo_qt_core_quuid_quuid_data3, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuid_QUuid, setData3, arginfo_qt_core_quuid_quuid_setdata3, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
