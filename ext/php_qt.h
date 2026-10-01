
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_QT_H
#define PHP_QT_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_QT_NAME        "qt"
#define PHP_QT_VERSION     "0.8.0"
#define PHP_QT_EXTNAME     "qt"
#define PHP_QT_AUTHOR      "Project Saturn Studios, LLC"
#define PHP_QT_ZEPVERSION  "0.19.0-$Id$"
#define PHP_QT_DESCRIPTION "Qt 6 bound 1:1 into PHP (Zephir extension)"



ZEND_BEGIN_MODULE_GLOBALS(qt)

	int initialized;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	
ZEND_END_MODULE_GLOBALS(qt)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(qt)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(qt, v)
#else
	#define ZEPHIR_GLOBAL(v) (qt_globals.v)
#endif

#ifdef ZTS
	ZEND_TSRMLS_CACHE_EXTERN()
	#define ZEPHIR_VGLOBAL ((zend_qt_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(qt_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(qt_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def qt_globals
#define zend_zephir_globals_def zend_qt_globals

extern zend_module_entry qt_module_entry;
#define phpext_qt_ptr &qt_module_entry

#endif
