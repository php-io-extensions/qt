
extern zend_class_entry *qt_core_qsemaphorereleaser_qsemaphorereleaser_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser);

PHP_METHOD(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, new_);
PHP_METHOD(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, newQSemaphoreInt);
PHP_METHOD(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, newQSemaphoreInt2);
PHP_METHOD(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, swap);
PHP_METHOD(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, semaphore);
PHP_METHOD(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, cancel);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphorereleaser_qsemaphorereleaser_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphorereleaser_qsemaphorereleaser_newqsemaphoreint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sem, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphorereleaser_qsemaphorereleaser_newqsemaphoreint2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sem, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphorereleaser_qsemaphorereleaser_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphorereleaser_qsemaphorereleaser_semaphore, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphorereleaser_qsemaphorereleaser_cancel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsemaphorereleaser_qsemaphorereleaser_method_entry) {
	PHP_ME(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, new_, arginfo_qt_core_qsemaphorereleaser_qsemaphorereleaser_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, newQSemaphoreInt, arginfo_qt_core_qsemaphorereleaser_qsemaphorereleaser_newqsemaphoreint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, newQSemaphoreInt2, arginfo_qt_core_qsemaphorereleaser_qsemaphorereleaser_newqsemaphoreint2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, swap, arginfo_qt_core_qsemaphorereleaser_qsemaphorereleaser_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, semaphore, arginfo_qt_core_qsemaphorereleaser_qsemaphorereleaser_semaphore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, cancel, arginfo_qt_core_qsemaphorereleaser_qsemaphorereleaser_cancel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
