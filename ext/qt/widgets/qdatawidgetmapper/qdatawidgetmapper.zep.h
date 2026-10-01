
extern zend_class_entry *qt_widgets_qdatawidgetmapper_qdatawidgetmapper_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper);

PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, staticMetaObject);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, tr);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, new_);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setModel);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, model);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setItemDelegate);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, itemDelegate);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setRootIndex);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, rootIndex);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setOrientation);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, orientation);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setSubmitPolicy);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, submitPolicy);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, addMapping);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, addMappingQWidgetIntQByteArray);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, removeMapping);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, mappedSection);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, mappedPropertyName);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, mappedWidgetAt);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, clearMapping);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, currentIndex);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, revert);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, submit);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, toFirst);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, toLast);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, toNext);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, toPrevious);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setCurrentIndex);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setCurrentModelIndex);
PHP_METHOD(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, currentIndexChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setmodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_model, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setitemdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_itemdelegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setrootindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_rootindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, aOrientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_orientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setsubmitpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, policy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_submitpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_addmapping, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_addmappingqwidgetintqbytearray, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_removemapping, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_mappedsection, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_mappedpropertyname, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_mappedwidgetat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_clearmapping, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_currentindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_revert, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_submit, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_tofirst, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_tolast, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_tonext, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_toprevious, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setcurrentindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setcurrentmodelindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_currentindexchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qdatawidgetmapper_qdatawidgetmapper_method_entry) {
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, staticMetaObject, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, tr, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, new_, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setModel, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, model, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_model, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setItemDelegate, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setitemdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, itemDelegate, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_itemdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setRootIndex, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setrootindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, rootIndex, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_rootindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setOrientation, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, orientation, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_orientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setSubmitPolicy, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setsubmitpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, submitPolicy, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_submitpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, addMapping, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_addmapping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, addMappingQWidgetIntQByteArray, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_addmappingqwidgetintqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, removeMapping, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_removemapping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, mappedSection, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_mappedsection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, mappedPropertyName, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_mappedpropertyname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, mappedWidgetAt, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_mappedwidgetat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, clearMapping, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_clearmapping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, currentIndex, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_currentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, revert, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_revert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, submit, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_submit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, toFirst, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_tofirst, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, toLast, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_tolast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, toNext, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_tonext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, toPrevious, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_toprevious, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setCurrentIndex, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setcurrentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, setCurrentModelIndex, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_setcurrentmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDataWidgetMapper_QDataWidgetMapper, currentIndexChanged, arginfo_qt_widgets_qdatawidgetmapper_qdatawidgetmapper_currentindexchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
