
extern zend_class_entry *qt_core_qpointf_qpointf_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QPointF_QPointF);

PHP_METHOD(Qt_Core_QPointF_QPointF, new_);
PHP_METHOD(Qt_Core_QPointF_QPointF, newQPoint);
PHP_METHOD(Qt_Core_QPointF_QPointF, newQrealQreal);
PHP_METHOD(Qt_Core_QPointF_QPointF, manhattanLength);
PHP_METHOD(Qt_Core_QPointF_QPointF, isNull);
PHP_METHOD(Qt_Core_QPointF_QPointF, x);
PHP_METHOD(Qt_Core_QPointF_QPointF, y);
PHP_METHOD(Qt_Core_QPointF_QPointF, setX);
PHP_METHOD(Qt_Core_QPointF_QPointF, setY);
PHP_METHOD(Qt_Core_QPointF_QPointF, transposed);
PHP_METHOD(Qt_Core_QPointF_QPointF, dotProduct);
PHP_METHOD(Qt_Core_QPointF_QPointF, toPoint);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointf_qpointf_new_, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointf_qpointf_newqpoint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointf_qpointf_newqrealqreal, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, xpos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ypos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointf_qpointf_manhattanlength, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointf_qpointf_isnull, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointf_qpointf_x, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointf_qpointf_y, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointf_qpointf_setx, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointf_qpointf_sety, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointf_qpointf_transposed, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointf_qpointf_dotproduct, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointf_qpointf_topoint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qpointf_qpointf_method_entry) {
	PHP_ME(Qt_Core_QPointF_QPointF, new_, arginfo_qt_core_qpointf_qpointf_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointF_QPointF, newQPoint, arginfo_qt_core_qpointf_qpointf_newqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointF_QPointF, newQrealQreal, arginfo_qt_core_qpointf_qpointf_newqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointF_QPointF, manhattanLength, arginfo_qt_core_qpointf_qpointf_manhattanlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointF_QPointF, isNull, arginfo_qt_core_qpointf_qpointf_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointF_QPointF, x, arginfo_qt_core_qpointf_qpointf_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointF_QPointF, y, arginfo_qt_core_qpointf_qpointf_y, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointF_QPointF, setX, arginfo_qt_core_qpointf_qpointf_setx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointF_QPointF, setY, arginfo_qt_core_qpointf_qpointf_sety, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointF_QPointF, transposed, arginfo_qt_core_qpointf_qpointf_transposed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointF_QPointF, dotProduct, arginfo_qt_core_qpointf_qpointf_dotproduct, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointF_QPointF, toPoint, arginfo_qt_core_qpointf_qpointf_topoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
