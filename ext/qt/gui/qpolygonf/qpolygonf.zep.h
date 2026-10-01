
extern zend_class_entry *qt_gui_qpolygonf_qpolygonf_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPolygonF_QPolygonF);

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, new_);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, newQListQPointF);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, newQRectF);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, newQPolygon);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, swap);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, translate);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, translateQPointF);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, translated);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, translatedQPointF);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, toPolygon);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, isClosed);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, boundingRect);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, containsPoint);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, united);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, intersected);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, subtracted);
PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, intersects);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_newqlistqpointf, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, v, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_newqrectf, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_newqpolygon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_translate, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_translateqpointf, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, offsetY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_translated, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_translatedqpointf, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, offsetY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_topolygon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_isclosed, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_containspoint, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fillRule, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_united, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_intersected, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_subtracted, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonf_qpolygonf_intersects, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpolygonf_qpolygonf_method_entry) {
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, new_, arginfo_qt_gui_qpolygonf_qpolygonf_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, newQListQPointF, arginfo_qt_gui_qpolygonf_qpolygonf_newqlistqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, newQRectF, arginfo_qt_gui_qpolygonf_qpolygonf_newqrectf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, newQPolygon, arginfo_qt_gui_qpolygonf_qpolygonf_newqpolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, swap, arginfo_qt_gui_qpolygonf_qpolygonf_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, translate, arginfo_qt_gui_qpolygonf_qpolygonf_translate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, translateQPointF, arginfo_qt_gui_qpolygonf_qpolygonf_translateqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, translated, arginfo_qt_gui_qpolygonf_qpolygonf_translated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, translatedQPointF, arginfo_qt_gui_qpolygonf_qpolygonf_translatedqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, toPolygon, arginfo_qt_gui_qpolygonf_qpolygonf_topolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, isClosed, arginfo_qt_gui_qpolygonf_qpolygonf_isclosed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, boundingRect, arginfo_qt_gui_qpolygonf_qpolygonf_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, containsPoint, arginfo_qt_gui_qpolygonf_qpolygonf_containspoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, united, arginfo_qt_gui_qpolygonf_qpolygonf_united, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, intersected, arginfo_qt_gui_qpolygonf_qpolygonf_intersected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, subtracted, arginfo_qt_gui_qpolygonf_qpolygonf_subtracted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonF_QPolygonF, intersects, arginfo_qt_gui_qpolygonf_qpolygonf_intersects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
