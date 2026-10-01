
extern zend_class_entry *qt_core_qstringdecoder_qstringdecoder_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QStringDecoder_QStringDecoder);

PHP_METHOD(Qt_Core_QStringDecoder_QStringDecoder, new_);
PHP_METHOD(Qt_Core_QStringDecoder_QStringDecoder, new2);
PHP_METHOD(Qt_Core_QStringDecoder_QStringDecoder, newQAnyStringViewQStringConverterBaseFlags);
PHP_METHOD(Qt_Core_QStringDecoder_QStringDecoder, requiredSpace);
PHP_METHOD(Qt_Core_QStringDecoder_QStringDecoder, decoderForHtml);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringdecoder_qstringdecoder_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, encoding, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringdecoder_qstringdecoder_new2, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringdecoder_qstringdecoder_newqanystringviewqstringconverterbaseflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_INFO(0, f)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringdecoder_qstringdecoder_requiredspace, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, inputLength, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringdecoder_qstringdecoder_decoderforhtml, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qstringdecoder_qstringdecoder_method_entry) {
	PHP_ME(Qt_Core_QStringDecoder_QStringDecoder, new_, arginfo_qt_core_qstringdecoder_qstringdecoder_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringDecoder_QStringDecoder, new2, arginfo_qt_core_qstringdecoder_qstringdecoder_new2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringDecoder_QStringDecoder, newQAnyStringViewQStringConverterBaseFlags, arginfo_qt_core_qstringdecoder_qstringdecoder_newqanystringviewqstringconverterbaseflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringDecoder_QStringDecoder, requiredSpace, arginfo_qt_core_qstringdecoder_qstringdecoder_requiredspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringDecoder_QStringDecoder, decoderForHtml, arginfo_qt_core_qstringdecoder_qstringdecoder_decoderforhtml, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
