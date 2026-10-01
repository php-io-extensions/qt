
extern zend_class_entry *qt_widgets_qaccessiblewidget_qaccessiblewidget_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QAccessibleWidget_QAccessibleWidget);

PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, new_);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, isValid);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, window);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, childCount);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, indexOfChild);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, relations);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, focusChild);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, rect);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, parent_);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, child);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, text);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, role);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, state);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, foregroundColor);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, backgroundColor);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, actionNames);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, doAction);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, keyBindingsForAction);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, widget);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, parentObject);
PHP_METHOD(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, addControllingSignal);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
	ZEND_ARG_INFO(0, r)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_window, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_childcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_indexofchild, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_relations, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, match_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_focuschild, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_parent_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_child, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_text, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_role, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_foregroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_actionnames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_doaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, actionName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_keybindingsforaction, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, actionName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_widget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_parentobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_addcontrollingsignal, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qaccessiblewidget_qaccessiblewidget_method_entry) {
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, new_, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, isValid, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, window, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_window, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, childCount, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_childcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, indexOfChild, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_indexofchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, relations, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_relations, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, focusChild, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_focuschild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, rect, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, parent_, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, child, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_child, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, text, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, role, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_role, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, state, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, foregroundColor, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_foregroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, backgroundColor, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, actionNames, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_actionnames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, doAction, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_doaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, keyBindingsForAction, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_keybindingsforaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, widget, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, parentObject, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_parentobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAccessibleWidget_QAccessibleWidget, addControllingSignal, arginfo_qt_widgets_qaccessiblewidget_qaccessiblewidget_addcontrollingsignal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
