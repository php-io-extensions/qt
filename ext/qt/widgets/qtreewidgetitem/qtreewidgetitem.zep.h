
extern zend_class_entry *qt_widgets_qtreewidgetitem_qtreewidgetitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem);

PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, new_);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQStringListInt);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetInt);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetQStringListInt);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetQTreeWidgetItemInt);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetItemInt);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetItemQStringListInt);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetItemQTreeWidgetItemInt);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetItem);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, clone_);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, treeWidget);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setSelected);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, isSelected);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setHidden);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, isHidden);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setExpanded);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, isExpanded);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setFirstColumnSpanned);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, isFirstColumnSpanned);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setDisabled);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, isDisabled);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setChildIndicatorPolicy);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, childIndicatorPolicy);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, flags);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setFlags);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, text);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setText);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, icon);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setIcon);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, statusTip);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setStatusTip);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, toolTip);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setToolTip);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, whatsThis);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setWhatsThis);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, font);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setFont);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, textAlignment);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setTextAlignment);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setTextAlignmentIntQtAlignment);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, background);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setBackground);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, foreground);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setForeground);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, checkState);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setCheckState);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, sizeHint);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setSizeHint);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, data);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setData);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, read);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, write);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, parent_);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, child);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, childCount);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, columnCount);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, indexOfChild);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, addChild);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, insertChild);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, removeChild);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, takeChild);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, addChildren);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, insertChildren);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, takeChildren);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, type);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, sortChildren);
PHP_METHOD(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, emitDataChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqstringlistint, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, strings, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, treeview, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetqstringlistint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, treeview, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, strings, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetqtreewidgetitemint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, treeview, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, after, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetitemint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetitemqstringlistint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, strings, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetitemqtreewidgetitemint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, after, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_treewidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, select, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_isselected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hide, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setexpanded, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, expand, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_isexpanded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setfirstcolumnspanned, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, span, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_isfirstcolumnspanned, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setdisabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, disabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_isdisabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setchildindicatorpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, policy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_childindicatorpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_flags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_text, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_settext, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_icon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_seticon, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_statustip, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setstatustip, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, statusTip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_tooltip, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_settooltip, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolTip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_whatsthis, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setwhatsthis, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, whatsThis, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_font, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setfont, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_textalignment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_settextalignment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_settextalignmentintqtalignment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_background, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setbackground, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_foreground, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setforeground, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_checkstate, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setcheckstate, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_sizehint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setsizehint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_data, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setdata, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_read, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, in_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_write, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, out, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_parent_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_child, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_childcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_columncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_indexofchild, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_addchild, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_insertchild, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_removechild, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_takechild, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_addchildren, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, children, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_insertchildren, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, children, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_takechildren, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_sortchildren, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_emitdatachanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtreewidgetitem_qtreewidgetitem_method_entry) {
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, new_, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQStringListInt, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqstringlistint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetInt, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetQStringListInt, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetqstringlistint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetQTreeWidgetItemInt, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetqtreewidgetitemint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetItemInt, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetitemint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetItemQStringListInt, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetitemqstringlistint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetItemQTreeWidgetItemInt, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetitemqtreewidgetitemint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, newQTreeWidgetItem, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_newqtreewidgetitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, clone_, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, treeWidget, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_treewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setSelected, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, isSelected, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_isselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setHidden, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, isHidden, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setExpanded, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setexpanded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, isExpanded, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_isexpanded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setFirstColumnSpanned, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setfirstcolumnspanned, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, isFirstColumnSpanned, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_isfirstcolumnspanned, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setDisabled, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setdisabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, isDisabled, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_isdisabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setChildIndicatorPolicy, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setchildindicatorpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, childIndicatorPolicy, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_childindicatorpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, flags, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setFlags, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, text, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setText, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, icon, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_icon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setIcon, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_seticon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, statusTip, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_statustip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setStatusTip, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setstatustip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, toolTip, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_tooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setToolTip, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, whatsThis, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_whatsthis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setWhatsThis, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setwhatsthis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, font, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setFont, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, textAlignment, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_textalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setTextAlignment, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_settextalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setTextAlignmentIntQtAlignment, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_settextalignmentintqtalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, background, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_background, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setBackground, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, foreground, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_foreground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setForeground, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setforeground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, checkState, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_checkstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setCheckState, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setcheckstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, sizeHint, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setSizeHint, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, data, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, setData, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, read, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_read, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, write, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_write, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, parent_, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, child, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_child, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, childCount, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_childcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, columnCount, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_columncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, indexOfChild, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_indexofchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, addChild, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_addchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, insertChild, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_insertchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, removeChild, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_removechild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, takeChild, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_takechild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, addChildren, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_addchildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, insertChildren, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_insertchildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, takeChildren, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_takechildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, type, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, sortChildren, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_sortchildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidgetItem_QTreeWidgetItem, emitDataChanged, arginfo_qt_widgets_qtreewidgetitem_qtreewidgetitem_emitdatachanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
