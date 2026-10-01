
extern zend_class_entry *qt_core_qline_qline_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QLine_QLine);

PHP_METHOD(Qt_Core_QLine_QLine, new_);
PHP_METHOD(Qt_Core_QLine_QLine, newQPointQPoint);
PHP_METHOD(Qt_Core_QLine_QLine, newIntIntIntInt);
PHP_METHOD(Qt_Core_QLine_QLine, isNull);
PHP_METHOD(Qt_Core_QLine_QLine, p1);
PHP_METHOD(Qt_Core_QLine_QLine, p2);
PHP_METHOD(Qt_Core_QLine_QLine, x1);
PHP_METHOD(Qt_Core_QLine_QLine, y1);
PHP_METHOD(Qt_Core_QLine_QLine, x2);
PHP_METHOD(Qt_Core_QLine_QLine, y2);
PHP_METHOD(Qt_Core_QLine_QLine, dx);
PHP_METHOD(Qt_Core_QLine_QLine, dy);
PHP_METHOD(Qt_Core_QLine_QLine, translate);
PHP_METHOD(Qt_Core_QLine_QLine, translateIntInt);
PHP_METHOD(Qt_Core_QLine_QLine, translated);
PHP_METHOD(Qt_Core_QLine_QLine, translatedIntInt);
PHP_METHOD(Qt_Core_QLine_QLine, center);
PHP_METHOD(Qt_Core_QLine_QLine, setP1);
PHP_METHOD(Qt_Core_QLine_QLine, setP2);
PHP_METHOD(Qt_Core_QLine_QLine, setPoints);
PHP_METHOD(Qt_Core_QLine_QLine, setLine);
PHP_METHOD(Qt_Core_QLine_QLine, toLineF);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_new_, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_newqpointqpoint, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, pt1X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pt1Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pt2X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pt2Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_newintintintint, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_isnull, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_p1, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_p2, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_x1, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_y1, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_x2, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_y2, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_dx, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_dy, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_translate, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_translateintint, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_translated, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_translatedintint, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_center, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_setp1, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_setp2, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_setpoints, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_setline, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qline_qline_tolinef, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qline_qline_method_entry) {
	PHP_ME(Qt_Core_QLine_QLine, new_, arginfo_qt_core_qline_qline_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, newQPointQPoint, arginfo_qt_core_qline_qline_newqpointqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, newIntIntIntInt, arginfo_qt_core_qline_qline_newintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, isNull, arginfo_qt_core_qline_qline_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, p1, arginfo_qt_core_qline_qline_p1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, p2, arginfo_qt_core_qline_qline_p2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, x1, arginfo_qt_core_qline_qline_x1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, y1, arginfo_qt_core_qline_qline_y1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, x2, arginfo_qt_core_qline_qline_x2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, y2, arginfo_qt_core_qline_qline_y2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, dx, arginfo_qt_core_qline_qline_dx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, dy, arginfo_qt_core_qline_qline_dy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, translate, arginfo_qt_core_qline_qline_translate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, translateIntInt, arginfo_qt_core_qline_qline_translateintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, translated, arginfo_qt_core_qline_qline_translated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, translatedIntInt, arginfo_qt_core_qline_qline_translatedintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, center, arginfo_qt_core_qline_qline_center, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, setP1, arginfo_qt_core_qline_qline_setp1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, setP2, arginfo_qt_core_qline_qline_setp2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, setPoints, arginfo_qt_core_qline_qline_setpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, setLine, arginfo_qt_core_qline_qline_setline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLine_QLine, toLineF, arginfo_qt_core_qline_qline_tolinef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
