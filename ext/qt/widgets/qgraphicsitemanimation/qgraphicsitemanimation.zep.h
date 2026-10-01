
extern zend_class_entry *qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation);

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, tr);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, new_);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, item);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setItem);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, timeLine);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setTimeLine);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, posAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, posList);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setPosAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, transformAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, rotationAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, rotationList);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setRotationAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, xTranslationAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, yTranslationAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, translationList);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setTranslationAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, verticalScaleAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, horizontalScaleAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, scaleList);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setScaleAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, verticalShearAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, horizontalShearAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, shearList);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setShearAt);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, clear);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setStep);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, beforeAnimationStep);
PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, afterAnimationStep);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_item, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_setitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_timeline, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_settimeline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeLine, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_posat, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_poslist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_setposat, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_transformat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_rotationat, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_rotationlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_setrotationat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_xtranslationat, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_ytranslationat, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_translationlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_settranslationat, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_verticalscaleat, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_horizontalscaleat, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_scalelist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_setscaleat, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_verticalshearat, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_horizontalshearat, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_shearlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_setshearat, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sh, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sv, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_setstep, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_beforeanimationstep, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_afteranimationstep, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, staticMetaObject, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, tr, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, new_, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, item, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_item, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setItem, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_setitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, timeLine, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_timeline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setTimeLine, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_settimeline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, posAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_posat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, posList, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_poslist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setPosAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_setposat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, transformAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_transformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, rotationAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_rotationat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, rotationList, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_rotationlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setRotationAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_setrotationat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, xTranslationAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_xtranslationat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, yTranslationAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_ytranslationat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, translationList, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_translationlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setTranslationAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_settranslationat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, verticalScaleAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_verticalscaleat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, horizontalScaleAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_horizontalscaleat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, scaleList, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_scalelist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setScaleAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_setscaleat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, verticalShearAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_verticalshearat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, horizontalShearAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_horizontalshearat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, shearList, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_shearlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setShearAt, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_setshearat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, clear, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setStep, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_setstep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, beforeAnimationStep, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_beforeanimationstep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, afterAnimationStep, arginfo_qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_afteranimationstep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
