
extern zend_class_entry *qt_core_qtemporarydir_qtemporarydir_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTemporaryDir_QTemporaryDir);

PHP_METHOD(Qt_Core_QTemporaryDir_QTemporaryDir, new_);
PHP_METHOD(Qt_Core_QTemporaryDir_QTemporaryDir, newQString);
PHP_METHOD(Qt_Core_QTemporaryDir_QTemporaryDir, swap);
PHP_METHOD(Qt_Core_QTemporaryDir_QTemporaryDir, isValid);
PHP_METHOD(Qt_Core_QTemporaryDir_QTemporaryDir, errorString);
PHP_METHOD(Qt_Core_QTemporaryDir_QTemporaryDir, autoRemove);
PHP_METHOD(Qt_Core_QTemporaryDir_QTemporaryDir, setAutoRemove);
PHP_METHOD(Qt_Core_QTemporaryDir_QTemporaryDir, remove);
PHP_METHOD(Qt_Core_QTemporaryDir_QTemporaryDir, path);
PHP_METHOD(Qt_Core_QTemporaryDir_QTemporaryDir, filePath);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporarydir_qtemporarydir_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporarydir_qtemporarydir_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, templateName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporarydir_qtemporarydir_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporarydir_qtemporarydir_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporarydir_qtemporarydir_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporarydir_qtemporarydir_autoremove, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporarydir_qtemporarydir_setautoremove, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporarydir_qtemporarydir_remove, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporarydir_qtemporarydir_path, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporarydir_qtemporarydir_filepath, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtemporarydir_qtemporarydir_method_entry) {
	PHP_ME(Qt_Core_QTemporaryDir_QTemporaryDir, new_, arginfo_qt_core_qtemporarydir_qtemporarydir_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryDir_QTemporaryDir, newQString, arginfo_qt_core_qtemporarydir_qtemporarydir_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryDir_QTemporaryDir, swap, arginfo_qt_core_qtemporarydir_qtemporarydir_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryDir_QTemporaryDir, isValid, arginfo_qt_core_qtemporarydir_qtemporarydir_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryDir_QTemporaryDir, errorString, arginfo_qt_core_qtemporarydir_qtemporarydir_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryDir_QTemporaryDir, autoRemove, arginfo_qt_core_qtemporarydir_qtemporarydir_autoremove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryDir_QTemporaryDir, setAutoRemove, arginfo_qt_core_qtemporarydir_qtemporarydir_setautoremove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryDir_QTemporaryDir, remove, arginfo_qt_core_qtemporarydir_qtemporarydir_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryDir_QTemporaryDir, path, arginfo_qt_core_qtemporarydir_qtemporarydir_path, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryDir_QTemporaryDir, filePath, arginfo_qt_core_qtemporarydir_qtemporarydir_filepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
