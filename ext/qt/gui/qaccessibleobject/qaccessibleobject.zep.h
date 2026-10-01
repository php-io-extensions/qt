
extern zend_class_entry *qt_gui_qaccessibleobject_qaccessibleobject_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleObject_QAccessibleObject);

PHP_METHOD(Qt_Gui_QAccessibleObject_QAccessibleObject, new_);
PHP_METHOD(Qt_Gui_QAccessibleObject_QAccessibleObject, isValid);
PHP_METHOD(Qt_Gui_QAccessibleObject_QAccessibleObject, object_);
PHP_METHOD(Qt_Gui_QAccessibleObject_QAccessibleObject, rect);
PHP_METHOD(Qt_Gui_QAccessibleObject_QAccessibleObject, setText);
PHP_METHOD(Qt_Gui_QAccessibleObject_QAccessibleObject, childAt);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleobject_qaccessibleobject_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleobject_qaccessibleobject_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleobject_qaccessibleobject_object_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleobject_qaccessibleobject_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleobject_qaccessibleobject_settext, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleobject_qaccessibleobject_childat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qaccessibleobject_qaccessibleobject_method_entry) {
	PHP_ME(Qt_Gui_QAccessibleObject_QAccessibleObject, new_, arginfo_qt_gui_qaccessibleobject_qaccessibleobject_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleObject_QAccessibleObject, isValid, arginfo_qt_gui_qaccessibleobject_qaccessibleobject_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleObject_QAccessibleObject, object_, arginfo_qt_gui_qaccessibleobject_qaccessibleobject_object_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleObject_QAccessibleObject, rect, arginfo_qt_gui_qaccessibleobject_qaccessibleobject_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleObject_QAccessibleObject, setText, arginfo_qt_gui_qaccessibleobject_qaccessibleobject_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleObject_QAccessibleObject, childAt, arginfo_qt_gui_qaccessibleobject_qaccessibleobject_childat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
