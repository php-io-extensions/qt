
extern zend_class_entry *qt_core_qlinef_qlinef_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QLineF_QLineF);

PHP_METHOD(Qt_Core_QLineF_QLineF, new_);
PHP_METHOD(Qt_Core_QLineF_QLineF, newQPointFQPointF);
PHP_METHOD(Qt_Core_QLineF_QLineF, newQrealQrealQrealQreal);
PHP_METHOD(Qt_Core_QLineF_QLineF, newQLine);
PHP_METHOD(Qt_Core_QLineF_QLineF, fromPolar);
PHP_METHOD(Qt_Core_QLineF_QLineF, isNull);
PHP_METHOD(Qt_Core_QLineF_QLineF, p1);
PHP_METHOD(Qt_Core_QLineF_QLineF, p2);
PHP_METHOD(Qt_Core_QLineF_QLineF, x1);
PHP_METHOD(Qt_Core_QLineF_QLineF, y1);
PHP_METHOD(Qt_Core_QLineF_QLineF, x2);
PHP_METHOD(Qt_Core_QLineF_QLineF, y2);
PHP_METHOD(Qt_Core_QLineF_QLineF, dx);
PHP_METHOD(Qt_Core_QLineF_QLineF, dy);
PHP_METHOD(Qt_Core_QLineF_QLineF, length);
PHP_METHOD(Qt_Core_QLineF_QLineF, setLength);
PHP_METHOD(Qt_Core_QLineF_QLineF, angle);
PHP_METHOD(Qt_Core_QLineF_QLineF, setAngle);
PHP_METHOD(Qt_Core_QLineF_QLineF, angleTo);
PHP_METHOD(Qt_Core_QLineF_QLineF, unitVector);
PHP_METHOD(Qt_Core_QLineF_QLineF, normalVector);
PHP_METHOD(Qt_Core_QLineF_QLineF, intersects);
PHP_METHOD(Qt_Core_QLineF_QLineF, pointAt);
PHP_METHOD(Qt_Core_QLineF_QLineF, translate);
PHP_METHOD(Qt_Core_QLineF_QLineF, translateQrealQreal);
PHP_METHOD(Qt_Core_QLineF_QLineF, translated);
PHP_METHOD(Qt_Core_QLineF_QLineF, translatedQrealQreal);
PHP_METHOD(Qt_Core_QLineF_QLineF, center);
PHP_METHOD(Qt_Core_QLineF_QLineF, setP1);
PHP_METHOD(Qt_Core_QLineF_QLineF, setP2);
PHP_METHOD(Qt_Core_QLineF_QLineF, setPoints);
PHP_METHOD(Qt_Core_QLineF_QLineF, setLine);
PHP_METHOD(Qt_Core_QLineF_QLineF, toLine);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_new_, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_newqpointfqpointf, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, pt1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pt1Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pt2X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pt2Y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_newqrealqrealqrealqreal, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_newqline, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, lineX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_frompolar, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_isnull, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_p1, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_p2, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_x1, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_y1, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_x2, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_y2, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_dx, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_dy, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_length, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_setlength, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, len, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_angle, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_setangle, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_angleto, 0, 8, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_unitvector, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_normalvector, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_intersects, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lY2, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, intersectionPoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_pointat, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_translate, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_translateqrealqreal, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_translated, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_translatedqrealqreal, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_center, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_setp1, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_setp2, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_setpoints, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_setline, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinef_qlinef_toline, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qlinef_qlinef_method_entry) {
	PHP_ME(Qt_Core_QLineF_QLineF, new_, arginfo_qt_core_qlinef_qlinef_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, newQPointFQPointF, arginfo_qt_core_qlinef_qlinef_newqpointfqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, newQrealQrealQrealQreal, arginfo_qt_core_qlinef_qlinef_newqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, newQLine, arginfo_qt_core_qlinef_qlinef_newqline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, fromPolar, arginfo_qt_core_qlinef_qlinef_frompolar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, isNull, arginfo_qt_core_qlinef_qlinef_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, p1, arginfo_qt_core_qlinef_qlinef_p1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, p2, arginfo_qt_core_qlinef_qlinef_p2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, x1, arginfo_qt_core_qlinef_qlinef_x1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, y1, arginfo_qt_core_qlinef_qlinef_y1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, x2, arginfo_qt_core_qlinef_qlinef_x2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, y2, arginfo_qt_core_qlinef_qlinef_y2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, dx, arginfo_qt_core_qlinef_qlinef_dx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, dy, arginfo_qt_core_qlinef_qlinef_dy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, length, arginfo_qt_core_qlinef_qlinef_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, setLength, arginfo_qt_core_qlinef_qlinef_setlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, angle, arginfo_qt_core_qlinef_qlinef_angle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, setAngle, arginfo_qt_core_qlinef_qlinef_setangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, angleTo, arginfo_qt_core_qlinef_qlinef_angleto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, unitVector, arginfo_qt_core_qlinef_qlinef_unitvector, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, normalVector, arginfo_qt_core_qlinef_qlinef_normalvector, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, intersects, arginfo_qt_core_qlinef_qlinef_intersects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, pointAt, arginfo_qt_core_qlinef_qlinef_pointat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, translate, arginfo_qt_core_qlinef_qlinef_translate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, translateQrealQreal, arginfo_qt_core_qlinef_qlinef_translateqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, translated, arginfo_qt_core_qlinef_qlinef_translated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, translatedQrealQreal, arginfo_qt_core_qlinef_qlinef_translatedqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, center, arginfo_qt_core_qlinef_qlinef_center, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, setP1, arginfo_qt_core_qlinef_qlinef_setp1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, setP2, arginfo_qt_core_qlinef_qlinef_setp2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, setPoints, arginfo_qt_core_qlinef_qlinef_setpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, setLine, arginfo_qt_core_qlinef_qlinef_setline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineF_QLineF, toLine, arginfo_qt_core_qlinef_qlinef_toline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
