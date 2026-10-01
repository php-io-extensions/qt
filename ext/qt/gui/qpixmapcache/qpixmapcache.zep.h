
extern zend_class_entry *qt_gui_qpixmapcache_qpixmapcache_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPixmapCache_QPixmapCache);

PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, cacheLimit);
PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, setCacheLimit);
PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, find);
PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, findQPixmapCacheKeyQPixmap);
PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, insert);
PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, insertQPixmap);
PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, remove);
PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, removeQPixmapCacheKey);
PHP_METHOD(Qt_Gui_QPixmapCache_QPixmapCache, clear);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcache_qpixmapcache_cachelimit, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcache_qpixmapcache_setcachelimit, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcache_qpixmapcache_find, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcache_qpixmapcache_findqpixmapcachekeyqpixmap, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcache_qpixmapcache_insert, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcache_qpixmapcache_insertqpixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcache_qpixmapcache_remove, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcache_qpixmapcache_removeqpixmapcachekey, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcache_qpixmapcache_clear, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpixmapcache_qpixmapcache_method_entry) {
	PHP_ME(Qt_Gui_QPixmapCache_QPixmapCache, cacheLimit, arginfo_qt_gui_qpixmapcache_qpixmapcache_cachelimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmapCache_QPixmapCache, setCacheLimit, arginfo_qt_gui_qpixmapcache_qpixmapcache_setcachelimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmapCache_QPixmapCache, find, arginfo_qt_gui_qpixmapcache_qpixmapcache_find, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmapCache_QPixmapCache, findQPixmapCacheKeyQPixmap, arginfo_qt_gui_qpixmapcache_qpixmapcache_findqpixmapcachekeyqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmapCache_QPixmapCache, insert, arginfo_qt_gui_qpixmapcache_qpixmapcache_insert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmapCache_QPixmapCache, insertQPixmap, arginfo_qt_gui_qpixmapcache_qpixmapcache_insertqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmapCache_QPixmapCache, remove, arginfo_qt_gui_qpixmapcache_qpixmapcache_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmapCache_QPixmapCache, removeQPixmapCacheKey, arginfo_qt_gui_qpixmapcache_qpixmapcache_removeqpixmapcachekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmapCache_QPixmapCache, clear, arginfo_qt_gui_qpixmapcache_qpixmapcache_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
