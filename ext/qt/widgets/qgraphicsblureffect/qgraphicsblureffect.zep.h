
extern zend_class_entry *qt_widgets_qgraphicsblureffect_qgraphicsblureffect_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect);

PHP_METHOD(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, tr);
PHP_METHOD(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, new_);
PHP_METHOD(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, boundingRectFor);
PHP_METHOD(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, blurRadius);
PHP_METHOD(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, blurHints);
PHP_METHOD(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, setBlurRadius);
PHP_METHOD(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, setBlurHints);
PHP_METHOD(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, blurRadiusChanged);
PHP_METHOD(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, blurHintsChanged);
PHP_METHOD(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, draw);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_boundingrectfor, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_blurradius, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_blurhints, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_setblurradius, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, blurRadius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_setblurhints, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hints, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_blurradiuschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, blurRadius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_blurhintschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hints, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_draw, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicsblureffect_qgraphicsblureffect_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, staticMetaObject, arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, tr, arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, new_, arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, boundingRectFor, arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_boundingrectfor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, blurRadius, arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_blurradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, blurHints, arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_blurhints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, setBlurRadius, arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_setblurradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, setBlurHints, arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_setblurhints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, blurRadiusChanged, arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_blurradiuschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, blurHintsChanged, arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_blurhintschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsBlurEffect_QGraphicsBlurEffect, draw, arginfo_qt_widgets_qgraphicsblureffect_qgraphicsblureffect_draw, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
