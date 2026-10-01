
extern zend_class_entry *qt_core_qlatin1char_qlatin1char_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QLatin1Char_QLatin1Char);

PHP_METHOD(Qt_Core_QLatin1Char_QLatin1Char, new_);
PHP_METHOD(Qt_Core_QLatin1Char_QLatin1Char, toLatin1);
PHP_METHOD(Qt_Core_QLatin1Char_QLatin1Char, unicode);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlatin1char_qlatin1char_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlatin1char_qlatin1char_tolatin1, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlatin1char_qlatin1char_unicode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qlatin1char_qlatin1char_method_entry) {
	PHP_ME(Qt_Core_QLatin1Char_QLatin1Char, new_, arginfo_qt_core_qlatin1char_qlatin1char_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLatin1Char_QLatin1Char, toLatin1, arginfo_qt_core_qlatin1char_qlatin1char_tolatin1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLatin1Char_QLatin1Char, unicode, arginfo_qt_core_qlatin1char_qlatin1char_unicode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
