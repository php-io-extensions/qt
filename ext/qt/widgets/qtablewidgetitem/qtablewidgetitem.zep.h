
extern zend_class_entry *qt_widgets_qtablewidgetitem_qtablewidgetitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QTableWidgetItem_QTableWidgetItem);

PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, new_);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, newQStringInt);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, newQIconQStringInt);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, newQTableWidgetItem);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, clone_);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, tableWidget);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, row);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, column);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setSelected);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, isSelected);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, flags);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setFlags);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, text);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setText);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, icon);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setIcon);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, statusTip);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setStatusTip);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, toolTip);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setToolTip);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, whatsThis);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setWhatsThis);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, font);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setFont);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, textAlignment);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setTextAlignment);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setTextAlignmentQtAlignment);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, background);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setBackground);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, foreground);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setForeground);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, checkState);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setCheckState);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, sizeHint);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setSizeHint);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, data);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setData);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, read);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, write);
PHP_METHOD(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, type);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_newqstringint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_newqiconqstringint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_newqtablewidgetitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_tablewidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_row, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_column, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, select, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_isselected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_flags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_settext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_icon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_seticon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_statustip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setstatustip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, statusTip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_tooltip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolTip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_whatsthis, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setwhatsthis, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, whatsThis, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_font, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_textalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_settextalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_settextalignmentqtalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_background, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_foreground, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setforeground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_checkstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setcheckstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setsizehint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_data, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setdata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_read, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, in_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_write, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, out, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtablewidgetitem_qtablewidgetitem_method_entry) {
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, new_, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, newQStringInt, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_newqstringint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, newQIconQStringInt, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_newqiconqstringint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, newQTableWidgetItem, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_newqtablewidgetitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, clone_, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, tableWidget, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_tablewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, row, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_row, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, column, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_column, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setSelected, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, isSelected, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_isselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, flags, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setFlags, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, text, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setText, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, icon, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_icon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setIcon, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_seticon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, statusTip, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_statustip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setStatusTip, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setstatustip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, toolTip, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_tooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setToolTip, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, whatsThis, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_whatsthis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setWhatsThis, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setwhatsthis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, font, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setFont, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, textAlignment, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_textalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setTextAlignment, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_settextalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setTextAlignmentQtAlignment, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_settextalignmentqtalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, background, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_background, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setBackground, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, foreground, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_foreground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setForeground, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setforeground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, checkState, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_checkstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setCheckState, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setcheckstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, sizeHint, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setSizeHint, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, data, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, setData, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, read, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_read, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, write, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_write, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidgetItem_QTableWidgetItem, type, arginfo_qt_widgets_qtablewidgetitem_qtablewidgetitem_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
