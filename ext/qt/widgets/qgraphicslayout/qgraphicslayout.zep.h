
extern zend_class_entry *qt_widgets_qgraphicslayout_qgraphicslayout_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsLayout_QGraphicsLayout);

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, new_);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, setContentsMargins);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, getContentsMargins);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, activate);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, isActivated);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, invalidate);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, updateGeometry);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, widgetEvent);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, count);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, itemAt);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, removeAt);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, setInstantInvalidatePropagation);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, instantInvalidatePropagation);
PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, addChildLayoutItem);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_setcontentsmargins, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_getcontentsmargins, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, left)
	ZEND_ARG_INFO(0, top)
	ZEND_ARG_INFO(0, right)
	ZEND_ARG_INFO(0, bottom)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_activate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_isactivated, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_invalidate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_updategeometry, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_widgetevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_itemat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_removeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_setinstantinvalidatepropagation, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_instantinvalidatepropagation, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_addchildlayoutitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layoutItem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicslayout_qgraphicslayout_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, new_, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, setContentsMargins, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_setcontentsmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, getContentsMargins, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_getcontentsmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, activate, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_activate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, isActivated, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_isactivated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, invalidate, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_invalidate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, updateGeometry, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_updategeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, widgetEvent, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_widgetevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, count, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, itemAt, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, removeAt, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_removeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, setInstantInvalidatePropagation, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_setinstantinvalidatepropagation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, instantInvalidatePropagation, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_instantinvalidatepropagation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, addChildLayoutItem, arginfo_qt_widgets_qgraphicslayout_qgraphicslayout_addchildlayoutitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
