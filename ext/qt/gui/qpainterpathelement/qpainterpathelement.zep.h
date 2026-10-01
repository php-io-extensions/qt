
extern zend_class_entry *qt_gui_qpainterpathelement_qpainterpathelement_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPainterPathElement_QPainterPathElement);

PHP_METHOD(Qt_Gui_QPainterPathElement_QPainterPathElement, x);
PHP_METHOD(Qt_Gui_QPainterPathElement_QPainterPathElement, setX);
PHP_METHOD(Qt_Gui_QPainterPathElement_QPainterPathElement, y);
PHP_METHOD(Qt_Gui_QPainterPathElement_QPainterPathElement, setY);
PHP_METHOD(Qt_Gui_QPainterPathElement_QPainterPathElement, type);
PHP_METHOD(Qt_Gui_QPainterPathElement_QPainterPathElement, setType);
PHP_METHOD(Qt_Gui_QPainterPathElement_QPainterPathElement, isMoveTo);
PHP_METHOD(Qt_Gui_QPainterPathElement_QPainterPathElement, isLineTo);
PHP_METHOD(Qt_Gui_QPainterPathElement_QPainterPathElement, isCurveTo);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathelement_qpainterpathelement_x, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathelement_qpainterpathelement_setx, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathelement_qpainterpathelement_y, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathelement_qpainterpathelement_sety, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathelement_qpainterpathelement_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathelement_qpainterpathelement_settype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathelement_qpainterpathelement_ismoveto, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathelement_qpainterpathelement_islineto, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathelement_qpainterpathelement_iscurveto, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpainterpathelement_qpainterpathelement_method_entry) {
	PHP_ME(Qt_Gui_QPainterPathElement_QPainterPathElement, x, arginfo_qt_gui_qpainterpathelement_qpainterpathelement_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathElement_QPainterPathElement, setX, arginfo_qt_gui_qpainterpathelement_qpainterpathelement_setx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathElement_QPainterPathElement, y, arginfo_qt_gui_qpainterpathelement_qpainterpathelement_y, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathElement_QPainterPathElement, setY, arginfo_qt_gui_qpainterpathelement_qpainterpathelement_sety, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathElement_QPainterPathElement, type, arginfo_qt_gui_qpainterpathelement_qpainterpathelement_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathElement_QPainterPathElement, setType, arginfo_qt_gui_qpainterpathelement_qpainterpathelement_settype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathElement_QPainterPathElement, isMoveTo, arginfo_qt_gui_qpainterpathelement_qpainterpathelement_ismoveto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathElement_QPainterPathElement, isLineTo, arginfo_qt_gui_qpainterpathelement_qpainterpathelement_islineto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathElement_QPainterPathElement, isCurveTo, arginfo_qt_gui_qpainterpathelement_qpainterpathelement_iscurveto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
