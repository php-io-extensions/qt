
extern zend_class_entry *qt_core_qmargins_qmargins_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMargins_QMargins);

PHP_METHOD(Qt_Core_QMargins_QMargins, new_);
PHP_METHOD(Qt_Core_QMargins_QMargins, newIntIntIntInt);
PHP_METHOD(Qt_Core_QMargins_QMargins, isNull);
PHP_METHOD(Qt_Core_QMargins_QMargins, left);
PHP_METHOD(Qt_Core_QMargins_QMargins, top);
PHP_METHOD(Qt_Core_QMargins_QMargins, right);
PHP_METHOD(Qt_Core_QMargins_QMargins, bottom);
PHP_METHOD(Qt_Core_QMargins_QMargins, setLeft);
PHP_METHOD(Qt_Core_QMargins_QMargins, setTop);
PHP_METHOD(Qt_Core_QMargins_QMargins, setRight);
PHP_METHOD(Qt_Core_QMargins_QMargins, setBottom);
PHP_METHOD(Qt_Core_QMargins_QMargins, toMarginsF);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmargins_qmargins_new_, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmargins_qmargins_newintintintint, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmargins_qmargins_isnull, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmargins_qmargins_left, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmargins_qmargins_top, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmargins_qmargins_right, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmargins_qmargins_bottom, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmargins_qmargins_setleft, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmargins_qmargins_settop, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmargins_qmargins_setright, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmargins_qmargins_setbottom, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmargins_qmargins_tomarginsf, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmargins_qmargins_method_entry) {
	PHP_ME(Qt_Core_QMargins_QMargins, new_, arginfo_qt_core_qmargins_qmargins_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMargins_QMargins, newIntIntIntInt, arginfo_qt_core_qmargins_qmargins_newintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMargins_QMargins, isNull, arginfo_qt_core_qmargins_qmargins_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMargins_QMargins, left, arginfo_qt_core_qmargins_qmargins_left, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMargins_QMargins, top, arginfo_qt_core_qmargins_qmargins_top, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMargins_QMargins, right, arginfo_qt_core_qmargins_qmargins_right, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMargins_QMargins, bottom, arginfo_qt_core_qmargins_qmargins_bottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMargins_QMargins, setLeft, arginfo_qt_core_qmargins_qmargins_setleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMargins_QMargins, setTop, arginfo_qt_core_qmargins_qmargins_settop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMargins_QMargins, setRight, arginfo_qt_core_qmargins_qmargins_setright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMargins_QMargins, setBottom, arginfo_qt_core_qmargins_qmargins_setbottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMargins_QMargins, toMarginsF, arginfo_qt_core_qmargins_qmargins_tomarginsf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
