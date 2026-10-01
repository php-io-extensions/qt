
extern zend_class_entry *qt_widgets_qgraphicseffect_qgraphicseffect_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsEffect_QGraphicsEffect);

PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, tr);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, new_);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, boundingRectFor);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, boundingRect);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, isEnabled);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, setEnabled);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, update);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, enabledChanged);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, draw);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, sourceChanged);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, updateBoundingRect);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, sourceIsPixmap);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, sourceBoundingRect);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, drawSource);
PHP_METHOD(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, sourcePixmap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_boundingrectfor, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_update, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_enabledchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_draw, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_sourcechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_updateboundingrect, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_sourceispixmap, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_sourceboundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, system)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_drawsource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_sourcepixmap, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, system)
	ZEND_ARG_INFO(0, offset)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicseffect_qgraphicseffect_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, staticMetaObject, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, tr, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, new_, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, boundingRectFor, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_boundingrectfor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, boundingRect, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, isEnabled, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, setEnabled, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, update, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_update, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, enabledChanged, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_enabledchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, draw, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_draw, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, sourceChanged, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_sourcechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, updateBoundingRect, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_updateboundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, sourceIsPixmap, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_sourceispixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, sourceBoundingRect, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_sourceboundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, drawSource, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_drawsource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEffect_QGraphicsEffect, sourcePixmap, arginfo_qt_widgets_qgraphicseffect_qgraphicseffect_sourcepixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
