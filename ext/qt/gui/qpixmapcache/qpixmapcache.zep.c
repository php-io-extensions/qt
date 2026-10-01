
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/gui-qpixmapcache.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPixmapCache_QPixmapCache)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPixmapCache, QPixmapCache, qt, gui_qpixmapcache_qpixmapcache, qt_gui_qpixmapcache_qpixmapcache_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, cacheLimit)
{

	RETURN_LONG(phpqt_qpixmapcache_cache_limit());
}

PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, setCacheLimit)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qpixmapcache_set_cache_limit(&_0);
}

PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, find)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long pixmap, r = 0;
	zval *key_param = NULL, *pixmap_param = NULL, _0;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(key)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &key_param, &pixmap_param);
	zephir_get_strval(&key, key_param);
	ZVAL_LONG(&_0, pixmap);
	r = phpqt_qpixmapcache_find(&key, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, findQPixmapCacheKeyQPixmap)
{
	zval *key_param = NULL, *pixmap_param = NULL, _0, _1;
	zend_long key, pixmap, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(key)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &key_param, &pixmap_param);
	ZVAL_LONG(&_0, key);
	ZVAL_LONG(&_1, pixmap);
	r = phpqt_qpixmapcache_find_q_pixmap_cache_key_q_pixmap(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, insert)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long pixmap, r = 0;
	zval *key_param = NULL, *pixmap_param = NULL, _0;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(key)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &key_param, &pixmap_param);
	zephir_get_strval(&key, key_param);
	ZVAL_LONG(&_0, pixmap);
	r = phpqt_qpixmapcache_insert(&key, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, insertQPixmap)
{
	zval *pixmap_param = NULL, _0;
	zend_long pixmap;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pixmap_param);
	ZVAL_LONG(&_0, pixmap);
	RETURN_LONG(phpqt_qpixmapcache_insert_q_pixmap(&_0));
}

PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, remove)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *key_param = NULL;
	zval key;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &key_param);
	zephir_get_strval(&key, key_param);
	phpqt_qpixmapcache_remove(&key);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, removeQPixmapCacheKey)
{
	zval *key_param = NULL, _0;
	zend_long key;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &key_param);
	ZVAL_LONG(&_0, key);
	phpqt_qpixmapcache_remove_q_pixmap_cache_key(&_0);
}

PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, clear)
{

	phpqt_qpixmapcache_clear();
}

