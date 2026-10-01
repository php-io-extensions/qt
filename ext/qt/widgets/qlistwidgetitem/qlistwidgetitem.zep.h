
extern zend_class_entry *qt_widgets_qlistwidgetitem_qlistwidgetitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QListWidgetItem_QListWidgetItem);

PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, new_);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, newQStringQListWidgetInt);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, newQIconQStringQListWidgetInt);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, newQListWidgetItem);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, clone_);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, listWidget);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setSelected);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, isSelected);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setHidden);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, isHidden);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, flags);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setFlags);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, text);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setText);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, icon);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setIcon);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, statusTip);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setStatusTip);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, toolTip);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setToolTip);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, whatsThis);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setWhatsThis);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, font);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setFont);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, textAlignment);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setTextAlignment);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setTextAlignmentQtAlignment);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, background);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setBackground);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, foreground);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setForeground);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, checkState);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setCheckState);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, sizeHint);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setSizeHint);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, data);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, setData);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, read);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, write);
PHP_METHOD(Qt_Widgets_QListWidgetItem_QListWidgetItem, type);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, listview, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_newqstringqlistwidgetint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, listview, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_newqiconqstringqlistwidgetint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, listview, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_newqlistwidgetitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_listwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, select, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_isselected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hide, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_flags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_settext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_icon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_seticon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_statustip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setstatustip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, statusTip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_tooltip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolTip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_whatsthis, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setwhatsthis, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, whatsThis, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_font, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_textalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_settextalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_settextalignmentqtalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_background, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_foreground, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setforeground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_checkstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setcheckstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setsizehint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_data, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setdata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_read, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, in_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_write, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, out, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qlistwidgetitem_qlistwidgetitem_method_entry) {
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, new_, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, newQStringQListWidgetInt, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_newqstringqlistwidgetint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, newQIconQStringQListWidgetInt, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_newqiconqstringqlistwidgetint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, newQListWidgetItem, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_newqlistwidgetitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, clone_, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, listWidget, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_listwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setSelected, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, isSelected, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_isselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setHidden, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, isHidden, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, flags, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setFlags, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, text, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setText, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, icon, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_icon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setIcon, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_seticon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, statusTip, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_statustip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setStatusTip, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setstatustip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, toolTip, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_tooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setToolTip, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, whatsThis, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_whatsthis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setWhatsThis, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setwhatsthis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, font, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setFont, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, textAlignment, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_textalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setTextAlignment, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_settextalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setTextAlignmentQtAlignment, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_settextalignmentqtalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, background, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_background, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setBackground, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, foreground, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_foreground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setForeground, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setforeground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, checkState, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_checkstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setCheckState, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setcheckstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, sizeHint, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setSizeHint, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, data, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, setData, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, read, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_read, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, write, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_write, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidgetItem_QListWidgetItem, type, arginfo_qt_widgets_qlistwidgetitem_qlistwidgetitem_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
