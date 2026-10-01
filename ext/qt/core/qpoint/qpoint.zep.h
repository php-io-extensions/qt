
extern zend_class_entry *qt_core_qpoint_qpoint_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QPoint_QPoint);

PHP_METHOD(Qt_Core_QPoint_QPoint, new_);
PHP_METHOD(Qt_Core_QPoint_QPoint, newIntInt);
PHP_METHOD(Qt_Core_QPoint_QPoint, isNull);
PHP_METHOD(Qt_Core_QPoint_QPoint, x);
PHP_METHOD(Qt_Core_QPoint_QPoint, y);
PHP_METHOD(Qt_Core_QPoint_QPoint, setX);
PHP_METHOD(Qt_Core_QPoint_QPoint, setY);
PHP_METHOD(Qt_Core_QPoint_QPoint, manhattanLength);
PHP_METHOD(Qt_Core_QPoint_QPoint, transposed);
PHP_METHOD(Qt_Core_QPoint_QPoint, dotProduct);
PHP_METHOD(Qt_Core_QPoint_QPoint, toPointF);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpoint_qpoint_new_, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpoint_qpoint_newintint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, xpos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ypos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpoint_qpoint_isnull, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpoint_qpoint_x, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpoint_qpoint_y, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpoint_qpoint_setx, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpoint_qpoint_sety, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpoint_qpoint_manhattanlength, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpoint_qpoint_transposed, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpoint_qpoint_dotproduct, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpoint_qpoint_topointf, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qpoint_qpoint_method_entry) {
	PHP_ME(Qt_Core_QPoint_QPoint, new_, arginfo_qt_core_qpoint_qpoint_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPoint_QPoint, newIntInt, arginfo_qt_core_qpoint_qpoint_newintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPoint_QPoint, isNull, arginfo_qt_core_qpoint_qpoint_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPoint_QPoint, x, arginfo_qt_core_qpoint_qpoint_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPoint_QPoint, y, arginfo_qt_core_qpoint_qpoint_y, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPoint_QPoint, setX, arginfo_qt_core_qpoint_qpoint_setx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPoint_QPoint, setY, arginfo_qt_core_qpoint_qpoint_sety, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPoint_QPoint, manhattanLength, arginfo_qt_core_qpoint_qpoint_manhattanlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPoint_QPoint, transposed, arginfo_qt_core_qpoint_qpoint_transposed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPoint_QPoint, dotProduct, arginfo_qt_core_qpoint_qpoint_dotproduct, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPoint_QPoint, toPointF, arginfo_qt_core_qpoint_qpoint_topointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
