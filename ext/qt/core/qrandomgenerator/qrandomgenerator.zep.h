
extern zend_class_entry *qt_core_qrandomgenerator_qrandomgenerator_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QRandomGenerator_QRandomGenerator);

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, new_);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, newQuint32Qsizetype);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, newQuint32Quint32);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, newQRandomGenerator);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, generate);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, generate64);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, generateDouble);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, bounded);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint32);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint32Quint32);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedInt);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedIntInt);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint64);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint64Quint64);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQint64);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQint64Qint64);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedIntQint64);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQint64Int);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedUnsignedIntQuint64);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint64UnsignedInt);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, generateQuint32Quint32);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, seed);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, discard);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, min);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, max);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, system);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, global_);
PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, securelySeeded);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seedValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_newquint32qsizetype, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, seedBuffer)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_newquint32quint32, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, begin)
	ZEND_ARG_INFO(0, end)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_newqrandomgenerator, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_generate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_generate64, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_generatedouble, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_bounded, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedquint32, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedquint32quint32, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lowest, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedintint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lowest, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedquint64, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedquint64quint64, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lowest, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedqint64, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedqint64qint64, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lowest, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedintqint64, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lowest, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedqint64int, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lowest, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedunsignedintquint64, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lowest, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedquint64unsignedint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lowest, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highest, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_generatequint32quint32, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, begin)
	ZEND_ARG_INFO(0, end)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_seed, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_discard, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_min, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_max, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_system, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_global_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrandomgenerator_qrandomgenerator_securelyseeded, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qrandomgenerator_qrandomgenerator_method_entry) {
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, new_, arginfo_qt_core_qrandomgenerator_qrandomgenerator_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, newQuint32Qsizetype, arginfo_qt_core_qrandomgenerator_qrandomgenerator_newquint32qsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, newQuint32Quint32, arginfo_qt_core_qrandomgenerator_qrandomgenerator_newquint32quint32, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, newQRandomGenerator, arginfo_qt_core_qrandomgenerator_qrandomgenerator_newqrandomgenerator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, generate, arginfo_qt_core_qrandomgenerator_qrandomgenerator_generate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, generate64, arginfo_qt_core_qrandomgenerator_qrandomgenerator_generate64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, generateDouble, arginfo_qt_core_qrandomgenerator_qrandomgenerator_generatedouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, bounded, arginfo_qt_core_qrandomgenerator_qrandomgenerator_bounded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint32, arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedquint32, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint32Quint32, arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedquint32quint32, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, boundedInt, arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, boundedIntInt, arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint64, arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedquint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint64Quint64, arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedquint64quint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQint64, arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedqint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQint64Qint64, arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedqint64qint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, boundedIntQint64, arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedintqint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQint64Int, arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedqint64int, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, boundedUnsignedIntQuint64, arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedunsignedintquint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint64UnsignedInt, arginfo_qt_core_qrandomgenerator_qrandomgenerator_boundedquint64unsignedint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, generateQuint32Quint32, arginfo_qt_core_qrandomgenerator_qrandomgenerator_generatequint32quint32, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, seed, arginfo_qt_core_qrandomgenerator_qrandomgenerator_seed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, discard, arginfo_qt_core_qrandomgenerator_qrandomgenerator_discard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, min, arginfo_qt_core_qrandomgenerator_qrandomgenerator_min, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, max, arginfo_qt_core_qrandomgenerator_qrandomgenerator_max, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, system, arginfo_qt_core_qrandomgenerator_qrandomgenerator_system, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, global_, arginfo_qt_core_qrandomgenerator_qrandomgenerator_global_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRandomGenerator_QRandomGenerator, securelySeeded, arginfo_qt_core_qrandomgenerator_qrandomgenerator_securelyseeded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
