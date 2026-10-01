
extern zend_class_entry *qt_gui_qtextformat_qtextformat_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextFormat_QTextFormat);

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, staticMetaObject);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, new_);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, newInt);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, newQTextFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, swap);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, merge);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isValid);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isEmpty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, type);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, objectIndex);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setObjectIndex);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, property);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setProperty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, clearProperty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, hasProperty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, boolProperty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, intProperty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, doubleProperty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, stringProperty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, colorProperty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, penProperty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, brushProperty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, lengthProperty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, lengthVectorProperty);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setPropertyIntQListQTextLength);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, properties);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, propertyCount);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setObjectType);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, objectType);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isCharFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isBlockFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isListFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isFrameFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isImageFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isTableFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isTableCellFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toBlockFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toCharFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toListFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toTableFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toFrameFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toImageFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toTableCellFormat);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setLayoutDirection);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, layoutDirection);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setBackground);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, background);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, clearBackground);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setForeground);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, foreground);
PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, clearForeground);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_newint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_newqtextformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_merge, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_objectindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_setobjectindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_property, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_setproperty, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_clearproperty, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_hasproperty, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_boolproperty, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_intproperty, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_doubleproperty, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_stringproperty, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_colorproperty, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_penproperty, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_brushproperty, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_lengthproperty, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_lengthvectorproperty, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_setpropertyintqlistqtextlength, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, lengths, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_properties, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_propertycount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_setobjecttype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_objecttype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_ischarformat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_isblockformat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_islistformat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_isframeformat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_isimageformat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_istableformat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_istablecellformat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_toblockformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_tocharformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_tolistformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_totableformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_toframeformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_toimageformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_totablecellformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_setlayoutdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_layoutdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_setbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_background, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_clearbackground, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_setforeground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_foreground, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextformat_qtextformat_clearforeground, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextformat_qtextformat_method_entry) {
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, staticMetaObject, arginfo_qt_gui_qtextformat_qtextformat_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, qt_check_for_QGADGET_macro, arginfo_qt_gui_qtextformat_qtextformat_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, new_, arginfo_qt_gui_qtextformat_qtextformat_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, newInt, arginfo_qt_gui_qtextformat_qtextformat_newint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, newQTextFormat, arginfo_qt_gui_qtextformat_qtextformat_newqtextformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, swap, arginfo_qt_gui_qtextformat_qtextformat_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, merge, arginfo_qt_gui_qtextformat_qtextformat_merge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, isValid, arginfo_qt_gui_qtextformat_qtextformat_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, isEmpty, arginfo_qt_gui_qtextformat_qtextformat_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, type, arginfo_qt_gui_qtextformat_qtextformat_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, objectIndex, arginfo_qt_gui_qtextformat_qtextformat_objectindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, setObjectIndex, arginfo_qt_gui_qtextformat_qtextformat_setobjectindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, property, arginfo_qt_gui_qtextformat_qtextformat_property, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, setProperty, arginfo_qt_gui_qtextformat_qtextformat_setproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, clearProperty, arginfo_qt_gui_qtextformat_qtextformat_clearproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, hasProperty, arginfo_qt_gui_qtextformat_qtextformat_hasproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, boolProperty, arginfo_qt_gui_qtextformat_qtextformat_boolproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, intProperty, arginfo_qt_gui_qtextformat_qtextformat_intproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, doubleProperty, arginfo_qt_gui_qtextformat_qtextformat_doubleproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, stringProperty, arginfo_qt_gui_qtextformat_qtextformat_stringproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, colorProperty, arginfo_qt_gui_qtextformat_qtextformat_colorproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, penProperty, arginfo_qt_gui_qtextformat_qtextformat_penproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, brushProperty, arginfo_qt_gui_qtextformat_qtextformat_brushproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, lengthProperty, arginfo_qt_gui_qtextformat_qtextformat_lengthproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, lengthVectorProperty, arginfo_qt_gui_qtextformat_qtextformat_lengthvectorproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, setPropertyIntQListQTextLength, arginfo_qt_gui_qtextformat_qtextformat_setpropertyintqlistqtextlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, properties, arginfo_qt_gui_qtextformat_qtextformat_properties, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, propertyCount, arginfo_qt_gui_qtextformat_qtextformat_propertycount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, setObjectType, arginfo_qt_gui_qtextformat_qtextformat_setobjecttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, objectType, arginfo_qt_gui_qtextformat_qtextformat_objecttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, isCharFormat, arginfo_qt_gui_qtextformat_qtextformat_ischarformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, isBlockFormat, arginfo_qt_gui_qtextformat_qtextformat_isblockformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, isListFormat, arginfo_qt_gui_qtextformat_qtextformat_islistformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, isFrameFormat, arginfo_qt_gui_qtextformat_qtextformat_isframeformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, isImageFormat, arginfo_qt_gui_qtextformat_qtextformat_isimageformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, isTableFormat, arginfo_qt_gui_qtextformat_qtextformat_istableformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, isTableCellFormat, arginfo_qt_gui_qtextformat_qtextformat_istablecellformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, toBlockFormat, arginfo_qt_gui_qtextformat_qtextformat_toblockformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, toCharFormat, arginfo_qt_gui_qtextformat_qtextformat_tocharformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, toListFormat, arginfo_qt_gui_qtextformat_qtextformat_tolistformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, toTableFormat, arginfo_qt_gui_qtextformat_qtextformat_totableformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, toFrameFormat, arginfo_qt_gui_qtextformat_qtextformat_toframeformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, toImageFormat, arginfo_qt_gui_qtextformat_qtextformat_toimageformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, toTableCellFormat, arginfo_qt_gui_qtextformat_qtextformat_totablecellformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, setLayoutDirection, arginfo_qt_gui_qtextformat_qtextformat_setlayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, layoutDirection, arginfo_qt_gui_qtextformat_qtextformat_layoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, setBackground, arginfo_qt_gui_qtextformat_qtextformat_setbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, background, arginfo_qt_gui_qtextformat_qtextformat_background, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, clearBackground, arginfo_qt_gui_qtextformat_qtextformat_clearbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, setForeground, arginfo_qt_gui_qtextformat_qtextformat_setforeground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, foreground, arginfo_qt_gui_qtextformat_qtextformat_foreground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFormat_QTextFormat, clearForeground, arginfo_qt_gui_qtextformat_qtextformat_clearforeground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
