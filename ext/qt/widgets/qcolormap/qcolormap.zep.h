
extern zend_class_entry *qt_widgets_qcolormap_qcolormap_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QColormap_QColormap);

PHP_METHOD(Qt_Widgets_QColormap_QColormap, initialize);
PHP_METHOD(Qt_Widgets_QColormap_QColormap, cleanup);
PHP_METHOD(Qt_Widgets_QColormap_QColormap, instance);
PHP_METHOD(Qt_Widgets_QColormap_QColormap, new_);
PHP_METHOD(Qt_Widgets_QColormap_QColormap, mode);
PHP_METHOD(Qt_Widgets_QColormap_QColormap, depth);
PHP_METHOD(Qt_Widgets_QColormap_QColormap, size);
PHP_METHOD(Qt_Widgets_QColormap_QColormap, pixel);
PHP_METHOD(Qt_Widgets_QColormap_QColormap, colorAt);
PHP_METHOD(Qt_Widgets_QColormap_QColormap, colormap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolormap_qcolormap_initialize, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolormap_qcolormap_cleanup, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolormap_qcolormap_instance, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolormap_qcolormap_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colormap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolormap_qcolormap_mode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolormap_qcolormap_depth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolormap_qcolormap_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolormap_qcolormap_pixel, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolormap_qcolormap_colorat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolormap_qcolormap_colormap, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qcolormap_qcolormap_method_entry) {
	PHP_ME(Qt_Widgets_QColormap_QColormap, initialize, arginfo_qt_widgets_qcolormap_qcolormap_initialize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColormap_QColormap, cleanup, arginfo_qt_widgets_qcolormap_qcolormap_cleanup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColormap_QColormap, instance, arginfo_qt_widgets_qcolormap_qcolormap_instance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColormap_QColormap, new_, arginfo_qt_widgets_qcolormap_qcolormap_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColormap_QColormap, mode, arginfo_qt_widgets_qcolormap_qcolormap_mode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColormap_QColormap, depth, arginfo_qt_widgets_qcolormap_qcolormap_depth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColormap_QColormap, size, arginfo_qt_widgets_qcolormap_qcolormap_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColormap_QColormap, pixel, arginfo_qt_widgets_qcolormap_qcolormap_pixel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColormap_QColormap, colorAt, arginfo_qt_widgets_qcolormap_qcolormap_colorat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColormap_QColormap, colormap, arginfo_qt_widgets_qcolormap_qcolormap_colormap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
