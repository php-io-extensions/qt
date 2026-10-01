
extern zend_class_entry *qt_gui_qpagesize_qpagesize_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPageSize_QPageSize);

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, new_);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, newQPageSizePageSizeId);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, newQSizeQStringQPageSizeSizeMatchPolicy);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, newQSizeFQPageSizeUnitQStringQPageSizeSizeMatchPolicy);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, newQPageSize);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, swap);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, isEquivalentTo);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, isValid);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, key);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, name);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, id);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, windowsId);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, definitionSize);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, definitionUnits);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, size);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, sizePoints);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, sizePixels);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, rect);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, rectPoints);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, rectPixels);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, keyQPageSizePageSizeId);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, nameQPageSizePageSizeId);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, idQSizeQPageSizeSizeMatchPolicy);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, idQSizeFQPageSizeUnitQPageSizeSizeMatchPolicy);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, idInt);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, windowsIdQPageSizePageSizeId);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, definitionSizeQPageSizePageSizeId);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, definitionUnitsQPageSizePageSizeId);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, sizeQPageSizePageSizeIdQPageSizeUnit);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, sizePointsQPageSizePageSizeId);
PHP_METHOD(Qt_Gui_QPageSize_QPageSize, sizePixelsQPageSizePageSizeIdInt);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_newqpagesizepagesizeid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pageSizeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_newqsizeqstringqpagesizesizematchpolicy, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointSizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointSizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_INFO(0, matchPolicy)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_newqsizefqpagesizeunitqstringqpagesizesizematchpolicy, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, units, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_INFO(0, matchPolicy)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_newqpagesize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_isequivalentto, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_key, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_windowsid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_definitionsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_definitionunits, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_size, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, units, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_sizepoints, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_sizepixels, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resolution, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_rect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, units, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_rectpoints, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_rectpixels, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resolution, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_keyqpagesizepagesizeid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pageSizeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_nameqpagesizepagesizeid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pageSizeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_idqsizeqpagesizesizematchpolicy, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointSizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointSizeHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, matchPolicy)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_idqsizefqpagesizeunitqpagesizesizematchpolicy, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, units, IS_LONG, 0)
	ZEND_ARG_INFO(0, matchPolicy)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_idint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowsId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_windowsidqpagesizepagesizeid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pageSizeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_definitionsizeqpagesizepagesizeid, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, pageSizeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_definitionunitsqpagesizepagesizeid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pageSizeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_sizeqpagesizepagesizeidqpagesizeunit, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, pageSizeId, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, units, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_sizepointsqpagesizepagesizeid, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, pageSizeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagesize_qpagesize_sizepixelsqpagesizepagesizeidint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, pageSizeId, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resolution, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpagesize_qpagesize_method_entry) {
	PHP_ME(Qt_Gui_QPageSize_QPageSize, new_, arginfo_qt_gui_qpagesize_qpagesize_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, newQPageSizePageSizeId, arginfo_qt_gui_qpagesize_qpagesize_newqpagesizepagesizeid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, newQSizeQStringQPageSizeSizeMatchPolicy, arginfo_qt_gui_qpagesize_qpagesize_newqsizeqstringqpagesizesizematchpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, newQSizeFQPageSizeUnitQStringQPageSizeSizeMatchPolicy, arginfo_qt_gui_qpagesize_qpagesize_newqsizefqpagesizeunitqstringqpagesizesizematchpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, newQPageSize, arginfo_qt_gui_qpagesize_qpagesize_newqpagesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, swap, arginfo_qt_gui_qpagesize_qpagesize_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, isEquivalentTo, arginfo_qt_gui_qpagesize_qpagesize_isequivalentto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, isValid, arginfo_qt_gui_qpagesize_qpagesize_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, key, arginfo_qt_gui_qpagesize_qpagesize_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, name, arginfo_qt_gui_qpagesize_qpagesize_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, id, arginfo_qt_gui_qpagesize_qpagesize_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, windowsId, arginfo_qt_gui_qpagesize_qpagesize_windowsid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, definitionSize, arginfo_qt_gui_qpagesize_qpagesize_definitionsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, definitionUnits, arginfo_qt_gui_qpagesize_qpagesize_definitionunits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, size, arginfo_qt_gui_qpagesize_qpagesize_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, sizePoints, arginfo_qt_gui_qpagesize_qpagesize_sizepoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, sizePixels, arginfo_qt_gui_qpagesize_qpagesize_sizepixels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, rect, arginfo_qt_gui_qpagesize_qpagesize_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, rectPoints, arginfo_qt_gui_qpagesize_qpagesize_rectpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, rectPixels, arginfo_qt_gui_qpagesize_qpagesize_rectpixels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, keyQPageSizePageSizeId, arginfo_qt_gui_qpagesize_qpagesize_keyqpagesizepagesizeid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, nameQPageSizePageSizeId, arginfo_qt_gui_qpagesize_qpagesize_nameqpagesizepagesizeid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, idQSizeQPageSizeSizeMatchPolicy, arginfo_qt_gui_qpagesize_qpagesize_idqsizeqpagesizesizematchpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, idQSizeFQPageSizeUnitQPageSizeSizeMatchPolicy, arginfo_qt_gui_qpagesize_qpagesize_idqsizefqpagesizeunitqpagesizesizematchpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, idInt, arginfo_qt_gui_qpagesize_qpagesize_idint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, windowsIdQPageSizePageSizeId, arginfo_qt_gui_qpagesize_qpagesize_windowsidqpagesizepagesizeid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, definitionSizeQPageSizePageSizeId, arginfo_qt_gui_qpagesize_qpagesize_definitionsizeqpagesizepagesizeid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, definitionUnitsQPageSizePageSizeId, arginfo_qt_gui_qpagesize_qpagesize_definitionunitsqpagesizepagesizeid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, sizeQPageSizePageSizeIdQPageSizeUnit, arginfo_qt_gui_qpagesize_qpagesize_sizeqpagesizepagesizeidqpagesizeunit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, sizePointsQPageSizePageSizeId, arginfo_qt_gui_qpagesize_qpagesize_sizepointsqpagesizepagesizeid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageSize_QPageSize, sizePixelsQPageSizePageSizeIdInt, arginfo_qt_gui_qpagesize_qpagesize_sizepixelsqpagesizepagesizeidint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
