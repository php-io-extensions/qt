
extern zend_class_entry *qt_core_qdiriterator_qdiriterator_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QDirIterator_QDirIterator);

PHP_METHOD(Qt_Core_QDirIterator_QDirIterator, new_);
PHP_METHOD(Qt_Core_QDirIterator_QDirIterator, newQStringQDirIteratorIteratorFlags);
PHP_METHOD(Qt_Core_QDirIterator_QDirIterator, newQStringQDirFiltersQDirIteratorIteratorFlags);
PHP_METHOD(Qt_Core_QDirIterator_QDirIterator, newQStringQStringListQDirFiltersQDirIteratorIteratorFlags);
PHP_METHOD(Qt_Core_QDirIterator_QDirIterator, next);
PHP_METHOD(Qt_Core_QDirIterator_QDirIterator, nextFileInfo);
PHP_METHOD(Qt_Core_QDirIterator_QDirIterator, hasNext);
PHP_METHOD(Qt_Core_QDirIterator_QDirIterator, fileName);
PHP_METHOD(Qt_Core_QDirIterator_QDirIterator, filePath);
PHP_METHOD(Qt_Core_QDirIterator_QDirIterator, fileInfo);
PHP_METHOD(Qt_Core_QDirIterator_QDirIterator, path);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdiriterator_qdiriterator_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dir, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdiriterator_qdiriterator_newqstringqdiriteratoriteratorflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdiriterator_qdiriterator_newqstringqdirfiltersqdiriteratoriteratorflags, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdiriterator_qdiriterator_newqstringqstringlistqdirfiltersqdiriteratoriteratorflags, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, nameFilters, 0)
	ZEND_ARG_INFO(0, filters)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdiriterator_qdiriterator_next, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdiriterator_qdiriterator_nextfileinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdiriterator_qdiriterator_hasnext, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdiriterator_qdiriterator_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdiriterator_qdiriterator_filepath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdiriterator_qdiriterator_fileinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdiriterator_qdiriterator_path, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qdiriterator_qdiriterator_method_entry) {
	PHP_ME(Qt_Core_QDirIterator_QDirIterator, new_, arginfo_qt_core_qdiriterator_qdiriterator_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirIterator_QDirIterator, newQStringQDirIteratorIteratorFlags, arginfo_qt_core_qdiriterator_qdiriterator_newqstringqdiriteratoriteratorflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirIterator_QDirIterator, newQStringQDirFiltersQDirIteratorIteratorFlags, arginfo_qt_core_qdiriterator_qdiriterator_newqstringqdirfiltersqdiriteratoriteratorflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirIterator_QDirIterator, newQStringQStringListQDirFiltersQDirIteratorIteratorFlags, arginfo_qt_core_qdiriterator_qdiriterator_newqstringqstringlistqdirfiltersqdiriteratoriteratorflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirIterator_QDirIterator, next, arginfo_qt_core_qdiriterator_qdiriterator_next, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirIterator_QDirIterator, nextFileInfo, arginfo_qt_core_qdiriterator_qdiriterator_nextfileinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirIterator_QDirIterator, hasNext, arginfo_qt_core_qdiriterator_qdiriterator_hasnext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirIterator_QDirIterator, fileName, arginfo_qt_core_qdiriterator_qdiriterator_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirIterator_QDirIterator, filePath, arginfo_qt_core_qdiriterator_qdiriterator_filepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirIterator_QDirIterator, fileInfo, arginfo_qt_core_qdiriterator_qdiriterator_fileinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirIterator_QDirIterator, path, arginfo_qt_core_qdiriterator_qdiriterator_path, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
