
extern zend_class_entry *qt_widgets_qtapgesture_qtapgesture_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QTapGesture_QTapGesture);

PHP_METHOD(Qt_Widgets_QTapGesture_QTapGesture, staticMetaObject);
PHP_METHOD(Qt_Widgets_QTapGesture_QTapGesture, tr);
PHP_METHOD(Qt_Widgets_QTapGesture_QTapGesture, new_);
PHP_METHOD(Qt_Widgets_QTapGesture_QTapGesture, position);
PHP_METHOD(Qt_Widgets_QTapGesture_QTapGesture, setPosition);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtapgesture_qtapgesture_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtapgesture_qtapgesture_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtapgesture_qtapgesture_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtapgesture_qtapgesture_position, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtapgesture_qtapgesture_setposition, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtapgesture_qtapgesture_method_entry) {
	PHP_ME(Qt_Widgets_QTapGesture_QTapGesture, staticMetaObject, arginfo_qt_widgets_qtapgesture_qtapgesture_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTapGesture_QTapGesture, tr, arginfo_qt_widgets_qtapgesture_qtapgesture_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTapGesture_QTapGesture, new_, arginfo_qt_widgets_qtapgesture_qtapgesture_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTapGesture_QTapGesture, position, arginfo_qt_widgets_qtapgesture_qtapgesture_position, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTapGesture_QTapGesture, setPosition, arginfo_qt_widgets_qtapgesture_qtapgesture_setposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
