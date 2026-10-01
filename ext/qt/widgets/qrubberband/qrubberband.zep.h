
extern zend_class_entry *qt_widgets_qrubberband_qrubberband_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QRubberBand_QRubberBand);

PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, staticMetaObject);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, tr);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, new_);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, shape);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, setGeometry);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, setGeometryIntIntIntInt);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, move);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, moveQPoint);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, resize);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, resizeQSize);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, event);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, paintEvent);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, changeEvent);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, showEvent);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, resizeEvent);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, moveEvent);
PHP_METHOD(Qt_Widgets_QRubberBand_QRubberBand, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_shape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_setgeometryintintintint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_move, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_moveqpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_resize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_resizeqsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_showevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_moveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrubberband_qrubberband_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qrubberband_qrubberband_method_entry) {
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, staticMetaObject, arginfo_qt_widgets_qrubberband_qrubberband_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, tr, arginfo_qt_widgets_qrubberband_qrubberband_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, new_, arginfo_qt_widgets_qrubberband_qrubberband_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, shape, arginfo_qt_widgets_qrubberband_qrubberband_shape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, setGeometry, arginfo_qt_widgets_qrubberband_qrubberband_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, setGeometryIntIntIntInt, arginfo_qt_widgets_qrubberband_qrubberband_setgeometryintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, move, arginfo_qt_widgets_qrubberband_qrubberband_move, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, moveQPoint, arginfo_qt_widgets_qrubberband_qrubberband_moveqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, resize, arginfo_qt_widgets_qrubberband_qrubberband_resize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, resizeQSize, arginfo_qt_widgets_qrubberband_qrubberband_resizeqsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, event, arginfo_qt_widgets_qrubberband_qrubberband_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, paintEvent, arginfo_qt_widgets_qrubberband_qrubberband_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, changeEvent, arginfo_qt_widgets_qrubberband_qrubberband_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, showEvent, arginfo_qt_widgets_qrubberband_qrubberband_showevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, resizeEvent, arginfo_qt_widgets_qrubberband_qrubberband_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, moveEvent, arginfo_qt_widgets_qrubberband_qrubberband_moveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRubberBand_QRubberBand, initStyleOption, arginfo_qt_widgets_qrubberband_qrubberband_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
