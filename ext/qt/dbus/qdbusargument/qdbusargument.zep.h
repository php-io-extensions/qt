
extern zend_class_entry *qt_dbus_qdbusargument_qdbusargument_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusArgument_QDBusArgument);

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, new_);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, newQDBusArgument);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, swap);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginStructure);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, endStructure);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginArray);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginArrayQMetaType);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, endArray);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginMap);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginMapQMetaTypeQMetaType);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, endMap);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginMapEntry);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, endMapEntry);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, appendVariant);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, currentSignature);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, currentType);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginArray2);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginMap2);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, atEnd);
PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, asVariant);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_newqdbusargument, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_beginstructure, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_endstructure, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_beginarray, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, elementMetaTypeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_beginarrayqmetatype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, elementMetaType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_endarray, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_beginmap, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keyMetaTypeId, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueMetaTypeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_beginmapqmetatypeqmetatype, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keyMetaType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueMetaType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_endmap, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_beginmapentry, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_endmapentry, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_appendvariant, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, v)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_currentsignature, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_currenttype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_beginarray2, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_beginmap2, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_atend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_dbus_qdbusargument_qdbusargument_asvariant, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusargument_qdbusargument_method_entry) {
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, new_, arginfo_qt_dbus_qdbusargument_qdbusargument_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, newQDBusArgument, arginfo_qt_dbus_qdbusargument_qdbusargument_newqdbusargument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, swap, arginfo_qt_dbus_qdbusargument_qdbusargument_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, beginStructure, arginfo_qt_dbus_qdbusargument_qdbusargument_beginstructure, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, endStructure, arginfo_qt_dbus_qdbusargument_qdbusargument_endstructure, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, beginArray, arginfo_qt_dbus_qdbusargument_qdbusargument_beginarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, beginArrayQMetaType, arginfo_qt_dbus_qdbusargument_qdbusargument_beginarrayqmetatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, endArray, arginfo_qt_dbus_qdbusargument_qdbusargument_endarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, beginMap, arginfo_qt_dbus_qdbusargument_qdbusargument_beginmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, beginMapQMetaTypeQMetaType, arginfo_qt_dbus_qdbusargument_qdbusargument_beginmapqmetatypeqmetatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, endMap, arginfo_qt_dbus_qdbusargument_qdbusargument_endmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, beginMapEntry, arginfo_qt_dbus_qdbusargument_qdbusargument_beginmapentry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, endMapEntry, arginfo_qt_dbus_qdbusargument_qdbusargument_endmapentry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, appendVariant, arginfo_qt_dbus_qdbusargument_qdbusargument_appendvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, currentSignature, arginfo_qt_dbus_qdbusargument_qdbusargument_currentsignature, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, currentType, arginfo_qt_dbus_qdbusargument_qdbusargument_currenttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, beginArray2, arginfo_qt_dbus_qdbusargument_qdbusargument_beginarray2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, beginMap2, arginfo_qt_dbus_qdbusargument_qdbusargument_beginmap2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, atEnd, arginfo_qt_dbus_qdbusargument_qdbusargument_atend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusArgument_QDBusArgument, asVariant, arginfo_qt_dbus_qdbusargument_qdbusargument_asvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
