
extern zend_class_entry *qt_gui_qpagedpaintdevice_qpagedpaintdevice_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice);

PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, newPage);
PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageLayout);
PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageSize);
PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageOrientation);
PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageMargins);
PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, pageLayout);
PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageRanges);
PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, pageRanges);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_newpage, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_setpagelayout, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pageLayout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_setpagesize, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pageSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_setpageorientation, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_setpagemargins, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsBottom, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, units)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_pagelayout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_setpageranges, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ranges, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_pageranges, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpagedpaintdevice_qpagedpaintdevice_method_entry) {
	PHP_ME(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, newPage, arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_newpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageLayout, arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_setpagelayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageSize, arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_setpagesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageOrientation, arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_setpageorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageMargins, arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_setpagemargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, pageLayout, arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_pagelayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageRanges, arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_setpageranges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, pageRanges, arginfo_qt_gui_qpagedpaintdevice_qpagedpaintdevice_pageranges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
