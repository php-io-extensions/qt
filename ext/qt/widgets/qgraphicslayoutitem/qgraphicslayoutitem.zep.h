
extern zend_class_entry *qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem);

PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, new_);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setSizePolicy);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setSizePolicyQSizePolicyPolicyQSizePolicyPolicyQSizePolicyControlType);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, sizePolicy);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMinimumSize);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMinimumSizeQrealQreal);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, minimumSize);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMinimumWidth);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, minimumWidth);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMinimumHeight);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, minimumHeight);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setPreferredSize);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setPreferredSizeQrealQreal);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, preferredSize);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setPreferredWidth);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, preferredWidth);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setPreferredHeight);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, preferredHeight);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMaximumSize);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMaximumSizeQrealQreal);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, maximumSize);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMaximumWidth);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, maximumWidth);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMaximumHeight);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, maximumHeight);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setGeometry);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, geometry);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, getContentsMargins);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, contentsRect);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, effectiveSizeHint);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, updateGeometry);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, isEmpty);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, parentLayoutItem);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setParentLayoutItem);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, isLayout);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, graphicsItem);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, ownedByLayout);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setGraphicsItem);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setOwnedByLayout);
PHP_METHOD(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, sizeHint);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, isLayout, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setsizepolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, policy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setsizepolicyqsizepolicypolicyqsizepolicypolicyqsizepolicycontroltype, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hPolicy, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vPolicy, IS_LONG, 0)
	ZEND_ARG_INFO(0, controlType)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_sizepolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setminimumsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setminimumsizeqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_minimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setminimumwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_minimumwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setminimumheight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_minimumheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setpreferredsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setpreferredsizeqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_preferredsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setpreferredwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_preferredwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setpreferredheight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_preferredheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setmaximumsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setmaximumsizeqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_maximumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setmaximumwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_maximumwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setmaximumheight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_maximumheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_geometry, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_getcontentsmargins, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, left)
	ZEND_ARG_INFO(0, top)
	ZEND_ARG_INFO(0, right)
	ZEND_ARG_INFO(0, bottom)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_contentsrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_effectivesizehint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
	ZEND_ARG_INFO(0, constraintWidth)
	ZEND_ARG_INFO(0, constraintHeight)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_updategeometry, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_parentlayoutitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setparentlayoutitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_islayout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_graphicsitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_ownedbylayout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setgraphicsitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setownedbylayout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ownedByLayout, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_sizehint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
	ZEND_ARG_INFO(0, constraintWidth)
	ZEND_ARG_INFO(0, constraintHeight)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, new_, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setSizePolicy, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setsizepolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setSizePolicyQSizePolicyPolicyQSizePolicyPolicyQSizePolicyControlType, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setsizepolicyqsizepolicypolicyqsizepolicypolicyqsizepolicycontroltype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, sizePolicy, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_sizepolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMinimumSize, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setminimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMinimumSizeQrealQreal, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setminimumsizeqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, minimumSize, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_minimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMinimumWidth, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setminimumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, minimumWidth, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_minimumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMinimumHeight, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setminimumheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, minimumHeight, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_minimumheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setPreferredSize, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setpreferredsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setPreferredSizeQrealQreal, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setpreferredsizeqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, preferredSize, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_preferredsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setPreferredWidth, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setpreferredwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, preferredWidth, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_preferredwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setPreferredHeight, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setpreferredheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, preferredHeight, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_preferredheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMaximumSize, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setmaximumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMaximumSizeQrealQreal, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setmaximumsizeqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, maximumSize, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_maximumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMaximumWidth, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setmaximumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, maximumWidth, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_maximumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setMaximumHeight, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setmaximumheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, maximumHeight, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_maximumheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setGeometry, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, geometry, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_geometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, getContentsMargins, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_getcontentsmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, contentsRect, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_contentsrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, effectiveSizeHint, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_effectivesizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, updateGeometry, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_updategeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, isEmpty, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, parentLayoutItem, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_parentlayoutitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setParentLayoutItem, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setparentlayoutitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, isLayout, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_islayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, graphicsItem, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_graphicsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, ownedByLayout, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_ownedbylayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setGraphicsItem, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setgraphicsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, setOwnedByLayout, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_setownedbylayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLayoutItem_QGraphicsLayoutItem, sizeHint, arginfo_qt_widgets_qgraphicslayoutitem_qgraphicslayoutitem_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
