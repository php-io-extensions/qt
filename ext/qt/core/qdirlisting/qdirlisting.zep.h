
extern zend_class_entry *qt_core_qdirlisting_qdirlisting_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QDirListing_QDirListing);

PHP_METHOD(Qt_Core_QDirListing_QDirListing, new_);
PHP_METHOD(Qt_Core_QDirListing_QDirListing, newQStringQStringListQDirListingIteratorFlags);
PHP_METHOD(Qt_Core_QDirListing_QDirListing, swap);
PHP_METHOD(Qt_Core_QDirListing_QDirListing, iteratorPath);
PHP_METHOD(Qt_Core_QDirListing_QDirListing, iteratorFlags);
PHP_METHOD(Qt_Core_QDirListing_QDirListing, nameFilters);
PHP_METHOD(Qt_Core_QDirListing_QDirListing, end);
PHP_METHOD(Qt_Core_QDirListing_QDirListing, cend);
PHP_METHOD(Qt_Core_QDirListing_QDirListing, constEnd);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlisting_qdirlisting_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlisting_qdirlisting_newqstringqstringlistqdirlistingiteratorflags, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, nameFilters, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlisting_qdirlisting_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlisting_qdirlisting_iteratorpath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlisting_qdirlisting_iteratorflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlisting_qdirlisting_namefilters, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlisting_qdirlisting_end, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlisting_qdirlisting_cend, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlisting_qdirlisting_constend, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qdirlisting_qdirlisting_method_entry) {
	PHP_ME(Qt_Core_QDirListing_QDirListing, new_, arginfo_qt_core_qdirlisting_qdirlisting_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListing_QDirListing, newQStringQStringListQDirListingIteratorFlags, arginfo_qt_core_qdirlisting_qdirlisting_newqstringqstringlistqdirlistingiteratorflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListing_QDirListing, swap, arginfo_qt_core_qdirlisting_qdirlisting_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListing_QDirListing, iteratorPath, arginfo_qt_core_qdirlisting_qdirlisting_iteratorpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListing_QDirListing, iteratorFlags, arginfo_qt_core_qdirlisting_qdirlisting_iteratorflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListing_QDirListing, nameFilters, arginfo_qt_core_qdirlisting_qdirlisting_namefilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListing_QDirListing, end, arginfo_qt_core_qdirlisting_qdirlisting_end, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListing_QDirListing, cend, arginfo_qt_core_qdirlisting_qdirlisting_cend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListing_QDirListing, constEnd, arginfo_qt_core_qdirlisting_qdirlisting_constend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
