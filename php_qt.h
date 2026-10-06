#ifndef PHP_QT_H
#define PHP_QT_H

extern zend_module_entry qt_module_entry;
#define phpext_qt_ptr &qt_module_entry

#define PHP_QT_VERSION "0.10.2"

#if defined(ZTS) && defined(COMPILE_DL_QT)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif
