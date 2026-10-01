
extern zend_class_entry *qt_gui_qaccessibletextinterface_qaccessibletextinterface_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface);

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, selection);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, selectionCount);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, addSelection);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, removeSelection);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, setSelection);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, cursorPosition);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, setCursorPosition);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, text);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, textBeforeOffset);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, textAfterOffset);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, textAtOffset);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, characterCount);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, characterRect);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, offsetAtPoint);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, scrollToSubstring);
PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, attributes);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_selection, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectionIndex, IS_LONG, 0)
	ZEND_ARG_INFO(0, startOffset)
	ZEND_ARG_INFO(0, endOffset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_selectioncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_addselection, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startOffset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, endOffset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_removeselection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectionIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_setselection, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectionIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startOffset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, endOffset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_cursorposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_setcursorposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_text, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startOffset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, endOffset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_textbeforeoffset, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundaryType, IS_LONG, 0)
	ZEND_ARG_INFO(0, startOffset)
	ZEND_ARG_INFO(0, endOffset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_textafteroffset, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundaryType, IS_LONG, 0)
	ZEND_ARG_INFO(0, startOffset)
	ZEND_ARG_INFO(0, endOffset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_textatoffset, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundaryType, IS_LONG, 0)
	ZEND_ARG_INFO(0, startOffset)
	ZEND_ARG_INFO(0, endOffset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_charactercount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_characterrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_offsetatpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_scrolltosubstring, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, endIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_attributes, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_INFO(0, startOffset)
	ZEND_ARG_INFO(0, endOffset)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qaccessibletextinterface_qaccessibletextinterface_method_entry) {
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, selection, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_selection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, selectionCount, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_selectioncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, addSelection, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_addselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, removeSelection, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_removeselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, setSelection, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_setselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, cursorPosition, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_cursorposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, setCursorPosition, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_setcursorposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, text, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, textBeforeOffset, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_textbeforeoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, textAfterOffset, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_textafteroffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, textAtOffset, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_textatoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, characterCount, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_charactercount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, characterRect, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_characterrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, offsetAtPoint, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_offsetatpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, scrollToSubstring, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_scrolltosubstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, attributes, arginfo_qt_gui_qaccessibletextinterface_qaccessibletextinterface_attributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
