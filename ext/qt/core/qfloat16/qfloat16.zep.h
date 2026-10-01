
extern zend_class_entry *qt_core_qfloat16_qfloat16_ce;

ZEPHIR_INIT_CLASS(Qt_Core_qfloat16_qfloat16);

PHP_METHOD(Qt_Core_qfloat16_qfloat16, IsNative);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, new_);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, newQtInitialization);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, newFloat);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, isInf);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, isNaN);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, isFinite);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, fpClassify);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, copySign);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_epsilon);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_min);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_denorm_min);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_max);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_lowest);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_infinity);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_quiet_NaN);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_signaling_NaN);
PHP_METHOD(Qt_Core_qfloat16_qfloat16, isNormal);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16_isnative, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16_newqtinitialization, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16_newfloat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16_isinf, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16_isnan, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16_isfinite, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16_fpclassify, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16_copysign, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sign, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16__limit_epsilon, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16__limit_min, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16__limit_denorm_min, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16__limit_max, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16__limit_lowest, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16__limit_infinity, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16__limit_quiet_nan, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16__limit_signaling_nan, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16_qfloat16_isnormal, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qfloat16_qfloat16_method_entry) {
	PHP_ME(Qt_Core_qfloat16_qfloat16, IsNative, arginfo_qt_core_qfloat16_qfloat16_isnative, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, new_, arginfo_qt_core_qfloat16_qfloat16_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, newQtInitialization, arginfo_qt_core_qfloat16_qfloat16_newqtinitialization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, newFloat, arginfo_qt_core_qfloat16_qfloat16_newfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, isInf, arginfo_qt_core_qfloat16_qfloat16_isinf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, isNaN, arginfo_qt_core_qfloat16_qfloat16_isnan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, isFinite, arginfo_qt_core_qfloat16_qfloat16_isfinite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, fpClassify, arginfo_qt_core_qfloat16_qfloat16_fpclassify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, copySign, arginfo_qt_core_qfloat16_qfloat16_copysign, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, _limit_epsilon, arginfo_qt_core_qfloat16_qfloat16__limit_epsilon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, _limit_min, arginfo_qt_core_qfloat16_qfloat16__limit_min, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, _limit_denorm_min, arginfo_qt_core_qfloat16_qfloat16__limit_denorm_min, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, _limit_max, arginfo_qt_core_qfloat16_qfloat16__limit_max, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, _limit_lowest, arginfo_qt_core_qfloat16_qfloat16__limit_lowest, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, _limit_infinity, arginfo_qt_core_qfloat16_qfloat16__limit_infinity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, _limit_quiet_NaN, arginfo_qt_core_qfloat16_qfloat16__limit_quiet_nan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, _limit_signaling_NaN, arginfo_qt_core_qfloat16_qfloat16__limit_signaling_nan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_qfloat16_qfloat16, isNormal, arginfo_qt_core_qfloat16_qfloat16_isnormal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
