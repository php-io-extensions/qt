
extern zend_class_entry *qt_gui_qinputmethod_qinputmethod_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QInputMethod_QInputMethod);

PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, staticMetaObject);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, tr);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, inputItemTransform);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, setInputItemTransform);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, inputItemRectangle);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, setInputItemRectangle);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, cursorRectangle);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, anchorRectangle);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, keyboardRectangle);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, inputItemClipRectangle);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, isVisible);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, setVisible);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, isAnimating);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, locale);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, inputDirection);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, queryFocusObject);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, show);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, hide);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, update);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, reset);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, commit);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, invokeAction);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, cursorRectangleChanged);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, anchorRectangleChanged);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, keyboardRectangleChanged);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, inputItemClipRectangleChanged);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, visibleChanged);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, animatingChanged);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, localeChanged);
PHP_METHOD(Qt_Gui_QInputMethod_QInputMethod, inputDirectionChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_inputitemtransform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_setinputitemtransform, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transform, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_inputitemrectangle, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_setinputitemrectangle, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_cursorrectangle, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_anchorrectangle, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_keyboardrectangle, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_inputitemcliprectangle, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_isvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_isanimating, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_locale, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_inputdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_queryfocusobject, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, query, IS_LONG, 0)
	ZEND_ARG_INFO(0, argument)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_show, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_hide, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_update, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, queries, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_reset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_commit, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_invokeaction, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursorPosition, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_cursorrectanglechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_anchorrectanglechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_keyboardrectanglechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_inputitemcliprectanglechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_visiblechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_animatingchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_localechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethod_qinputmethod_inputdirectionchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newDirection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qinputmethod_qinputmethod_method_entry) {
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, staticMetaObject, arginfo_qt_gui_qinputmethod_qinputmethod_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, tr, arginfo_qt_gui_qinputmethod_qinputmethod_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, inputItemTransform, arginfo_qt_gui_qinputmethod_qinputmethod_inputitemtransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, setInputItemTransform, arginfo_qt_gui_qinputmethod_qinputmethod_setinputitemtransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, inputItemRectangle, arginfo_qt_gui_qinputmethod_qinputmethod_inputitemrectangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, setInputItemRectangle, arginfo_qt_gui_qinputmethod_qinputmethod_setinputitemrectangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, cursorRectangle, arginfo_qt_gui_qinputmethod_qinputmethod_cursorrectangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, anchorRectangle, arginfo_qt_gui_qinputmethod_qinputmethod_anchorrectangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, keyboardRectangle, arginfo_qt_gui_qinputmethod_qinputmethod_keyboardrectangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, inputItemClipRectangle, arginfo_qt_gui_qinputmethod_qinputmethod_inputitemcliprectangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, isVisible, arginfo_qt_gui_qinputmethod_qinputmethod_isvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, setVisible, arginfo_qt_gui_qinputmethod_qinputmethod_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, isAnimating, arginfo_qt_gui_qinputmethod_qinputmethod_isanimating, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, locale, arginfo_qt_gui_qinputmethod_qinputmethod_locale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, inputDirection, arginfo_qt_gui_qinputmethod_qinputmethod_inputdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, queryFocusObject, arginfo_qt_gui_qinputmethod_qinputmethod_queryfocusobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, show, arginfo_qt_gui_qinputmethod_qinputmethod_show, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, hide, arginfo_qt_gui_qinputmethod_qinputmethod_hide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, update, arginfo_qt_gui_qinputmethod_qinputmethod_update, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, reset, arginfo_qt_gui_qinputmethod_qinputmethod_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, commit, arginfo_qt_gui_qinputmethod_qinputmethod_commit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, invokeAction, arginfo_qt_gui_qinputmethod_qinputmethod_invokeaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, cursorRectangleChanged, arginfo_qt_gui_qinputmethod_qinputmethod_cursorrectanglechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, anchorRectangleChanged, arginfo_qt_gui_qinputmethod_qinputmethod_anchorrectanglechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, keyboardRectangleChanged, arginfo_qt_gui_qinputmethod_qinputmethod_keyboardrectanglechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, inputItemClipRectangleChanged, arginfo_qt_gui_qinputmethod_qinputmethod_inputitemcliprectanglechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, visibleChanged, arginfo_qt_gui_qinputmethod_qinputmethod_visiblechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, animatingChanged, arginfo_qt_gui_qinputmethod_qinputmethod_animatingchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, localeChanged, arginfo_qt_gui_qinputmethod_qinputmethod_localechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethod_QInputMethod, inputDirectionChanged, arginfo_qt_gui_qinputmethod_qinputmethod_inputdirectionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
