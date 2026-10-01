
extern zend_class_entry *qt_widgets_qsizepolicyfunctions_qsizepolicyfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QSizepolicyFunctions_QSizepolicyFunctions);

PHP_METHOD(Qt_Widgets_QSizepolicyFunctions_QSizepolicyFunctions, qHash);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicyfunctions_qsizepolicyfunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qsizepolicyfunctions_qsizepolicyfunctions_method_entry) {
	PHP_ME(Qt_Widgets_QSizepolicyFunctions_QSizepolicyFunctions, qHash, arginfo_qt_widgets_qsizepolicyfunctions_qsizepolicyfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
