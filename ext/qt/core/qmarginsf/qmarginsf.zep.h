
extern zend_class_entry *qt_core_qmarginsf_qmarginsf_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMarginsF_QMarginsF);

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, new_);
PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, newQrealQrealQrealQreal);
PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, newQMargins);
PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, isNull);
PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, left);
PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, top);
PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, right);
PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, bottom);
PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, setLeft);
PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, setTop);
PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, setRight);
PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, setBottom);
PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, toMargins);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_new_, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_newqrealqrealqrealqreal, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_newqmargins, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, marginsLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_isnull, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_left, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_top, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_right, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_bottom, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_setleft, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, aleft, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_settop, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, atop, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_setright, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, aright, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_setbottom, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, abottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsf_qmarginsf_tomargins, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmarginsf_qmarginsf_method_entry) {
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, new_, arginfo_qt_core_qmarginsf_qmarginsf_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, newQrealQrealQrealQreal, arginfo_qt_core_qmarginsf_qmarginsf_newqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, newQMargins, arginfo_qt_core_qmarginsf_qmarginsf_newqmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, isNull, arginfo_qt_core_qmarginsf_qmarginsf_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, left, arginfo_qt_core_qmarginsf_qmarginsf_left, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, top, arginfo_qt_core_qmarginsf_qmarginsf_top, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, right, arginfo_qt_core_qmarginsf_qmarginsf_right, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, bottom, arginfo_qt_core_qmarginsf_qmarginsf_bottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, setLeft, arginfo_qt_core_qmarginsf_qmarginsf_setleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, setTop, arginfo_qt_core_qmarginsf_qmarginsf_settop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, setRight, arginfo_qt_core_qmarginsf_qmarginsf_setright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, setBottom, arginfo_qt_core_qmarginsf_qmarginsf_setbottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsF_QMarginsF, toMargins, arginfo_qt_core_qmarginsf_qmarginsf_tomargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
