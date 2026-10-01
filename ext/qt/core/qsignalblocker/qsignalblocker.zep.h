
extern zend_class_entry *qt_core_qsignalblocker_qsignalblocker_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSignalBlocker_QSignalBlocker);

PHP_METHOD(Qt_Core_QSignalBlocker_QSignalBlocker, new_);
PHP_METHOD(Qt_Core_QSignalBlocker_QSignalBlocker, newQObject);
PHP_METHOD(Qt_Core_QSignalBlocker_QSignalBlocker, reblock);
PHP_METHOD(Qt_Core_QSignalBlocker_QSignalBlocker, unblock);
PHP_METHOD(Qt_Core_QSignalBlocker_QSignalBlocker, dismiss);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalblocker_qsignalblocker_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalblocker_qsignalblocker_newqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalblocker_qsignalblocker_reblock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalblocker_qsignalblocker_unblock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsignalblocker_qsignalblocker_dismiss, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsignalblocker_qsignalblocker_method_entry) {
	PHP_ME(Qt_Core_QSignalBlocker_QSignalBlocker, new_, arginfo_qt_core_qsignalblocker_qsignalblocker_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalBlocker_QSignalBlocker, newQObject, arginfo_qt_core_qsignalblocker_qsignalblocker_newqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalBlocker_QSignalBlocker, reblock, arginfo_qt_core_qsignalblocker_qsignalblocker_reblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalBlocker_QSignalBlocker, unblock, arginfo_qt_core_qsignalblocker_qsignalblocker_unblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSignalBlocker_QSignalBlocker, dismiss, arginfo_qt_core_qsignalblocker_qsignalblocker_dismiss, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
