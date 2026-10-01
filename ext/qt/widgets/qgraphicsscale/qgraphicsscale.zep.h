
extern zend_class_entry *qt_widgets_qgraphicsscale_qgraphicsscale_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsScale_QGraphicsScale);

PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, tr);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, new_);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, origin);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, setOrigin);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, xScale);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, setXScale);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, yScale);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, setYScale);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, zScale);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, setZScale);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, applyTo);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, originChanged);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, xScaleChanged);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, yScaleChanged);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, zScaleChanged);
PHP_METHOD(Qt_Widgets_QGraphicsScale_QGraphicsScale, scaleChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_origin, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_setorigin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_xscale, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_setxscale, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_yscale, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_setyscale, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_zscale, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_setzscale, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_applyto, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_originchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_xscalechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_yscalechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_zscalechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_scalechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicsscale_qgraphicsscale_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, staticMetaObject, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, tr, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, new_, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, origin, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_origin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, setOrigin, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_setorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, xScale, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_xscale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, setXScale, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_setxscale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, yScale, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_yscale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, setYScale, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_setyscale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, zScale, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_zscale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, setZScale, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_setzscale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, applyTo, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_applyto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, originChanged, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_originchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, xScaleChanged, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_xscalechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, yScaleChanged, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_yscalechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, zScaleChanged, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_zscalechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsScale_QGraphicsScale, scaleChanged, arginfo_qt_widgets_qgraphicsscale_qgraphicsscale_scalechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
