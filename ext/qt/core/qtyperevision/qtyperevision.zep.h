
extern zend_class_entry *qt_core_qtyperevision_qtyperevision_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTypeRevision_QTypeRevision);

PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, zero);
PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, new_);
PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, hasMajorVersion);
PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, majorVersion);
PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, hasMinorVersion);
PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, minorVersion);
PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, isValid);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtyperevision_qtyperevision_zero, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtyperevision_qtyperevision_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtyperevision_qtyperevision_hasmajorversion, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtyperevision_qtyperevision_majorversion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtyperevision_qtyperevision_hasminorversion, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtyperevision_qtyperevision_minorversion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtyperevision_qtyperevision_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtyperevision_qtyperevision_method_entry) {
	PHP_ME(Qt_Core_QTypeRevision_QTypeRevision, zero, arginfo_qt_core_qtyperevision_qtyperevision_zero, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTypeRevision_QTypeRevision, new_, arginfo_qt_core_qtyperevision_qtyperevision_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTypeRevision_QTypeRevision, hasMajorVersion, arginfo_qt_core_qtyperevision_qtyperevision_hasmajorversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTypeRevision_QTypeRevision, majorVersion, arginfo_qt_core_qtyperevision_qtyperevision_majorversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTypeRevision_QTypeRevision, hasMinorVersion, arginfo_qt_core_qtyperevision_qtyperevision_hasminorversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTypeRevision_QTypeRevision, minorVersion, arginfo_qt_core_qtyperevision_qtyperevision_minorversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTypeRevision_QTypeRevision, isValid, arginfo_qt_core_qtyperevision_qtyperevision_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
