
extern zend_class_entry *qt_core_qsignalmapper_qsignalmapper_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSignalMapper_QSignalMapper);

PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, staticMetaObject);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, tr);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, new_);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, setMapping);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, setMappingQObjectQString);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, setMappingQObjectQObject);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, removeMappings);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, mapping);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, mappingQString);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, mappingQObject);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, mappedInt);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, mappedString);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, mappedObject);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, map);
PHP_METHOD(Qt_Core_QSignalMapper_QSignalMapper, mapQObject);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_setmapping, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_setmappingqobjectqstring, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_setmappingqobjectqobject, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_removemappings, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_mapping, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_mappingqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_mappingqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_mappedint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_mappedstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_mappedobject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_map, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalmapper_qsignalmapper_mapqobject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsignalmapper_qsignalmapper_method_entry) {
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, staticMetaObject, arginfo_qt_core_qsignalmapper_qsignalmapper_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, tr, arginfo_qt_core_qsignalmapper_qsignalmapper_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, new_, arginfo_qt_core_qsignalmapper_qsignalmapper_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, setMapping, arginfo_qt_core_qsignalmapper_qsignalmapper_setmapping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, setMappingQObjectQString, arginfo_qt_core_qsignalmapper_qsignalmapper_setmappingqobjectqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, setMappingQObjectQObject, arginfo_qt_core_qsignalmapper_qsignalmapper_setmappingqobjectqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, removeMappings, arginfo_qt_core_qsignalmapper_qsignalmapper_removemappings, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, mapping, arginfo_qt_core_qsignalmapper_qsignalmapper_mapping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, mappingQString, arginfo_qt_core_qsignalmapper_qsignalmapper_mappingqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, mappingQObject, arginfo_qt_core_qsignalmapper_qsignalmapper_mappingqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, mappedInt, arginfo_qt_core_qsignalmapper_qsignalmapper_mappedint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, mappedString, arginfo_qt_core_qsignalmapper_qsignalmapper_mappedstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, mappedObject, arginfo_qt_core_qsignalmapper_qsignalmapper_mappedobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, map, arginfo_qt_core_qsignalmapper_qsignalmapper_map, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalMapper_QSignalMapper, mapQObject, arginfo_qt_core_qsignalmapper_qsignalmapper_mapqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
