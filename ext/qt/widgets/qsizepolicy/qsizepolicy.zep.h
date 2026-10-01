
extern zend_class_entry *qt_widgets_qsizepolicy_qsizepolicy_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QSizePolicy_QSizePolicy);

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, staticMetaObject);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, new_);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, newQSizePolicyPolicyQSizePolicyPolicyQSizePolicyControlType);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, horizontalPolicy);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, verticalPolicy);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, controlType);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setHorizontalPolicy);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setVerticalPolicy);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setControlType);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, expandingDirections);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setHeightForWidth);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, hasHeightForWidth);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setWidthForHeight);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, hasWidthForHeight);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, horizontalStretch);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, verticalStretch);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setHorizontalStretch);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setVerticalStretch);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, retainSizeWhenHidden);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setRetainSizeWhenHidden);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, transpose);
PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, transposed);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_newqsizepolicypolicyqsizepolicypolicyqsizepolicycontroltype, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, horizontal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vertical, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_horizontalpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_verticalpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_controltype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_sethorizontalpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_setverticalpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_setcontroltype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_expandingdirections, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_setheightforwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_hasheightforwidth, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_setwidthforheight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_haswidthforheight, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_horizontalstretch, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_verticalstretch, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_sethorizontalstretch, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretchFactor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_setverticalstretch, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretchFactor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_retainsizewhenhidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_setretainsizewhenhidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, retainSize, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_transpose, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizepolicy_qsizepolicy_transposed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qsizepolicy_qsizepolicy_method_entry) {
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, staticMetaObject, arginfo_qt_widgets_qsizepolicy_qsizepolicy_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, qt_check_for_QGADGET_macro, arginfo_qt_widgets_qsizepolicy_qsizepolicy_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, new_, arginfo_qt_widgets_qsizepolicy_qsizepolicy_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, newQSizePolicyPolicyQSizePolicyPolicyQSizePolicyControlType, arginfo_qt_widgets_qsizepolicy_qsizepolicy_newqsizepolicypolicyqsizepolicypolicyqsizepolicycontroltype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, horizontalPolicy, arginfo_qt_widgets_qsizepolicy_qsizepolicy_horizontalpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, verticalPolicy, arginfo_qt_widgets_qsizepolicy_qsizepolicy_verticalpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, controlType, arginfo_qt_widgets_qsizepolicy_qsizepolicy_controltype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, setHorizontalPolicy, arginfo_qt_widgets_qsizepolicy_qsizepolicy_sethorizontalpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, setVerticalPolicy, arginfo_qt_widgets_qsizepolicy_qsizepolicy_setverticalpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, setControlType, arginfo_qt_widgets_qsizepolicy_qsizepolicy_setcontroltype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, expandingDirections, arginfo_qt_widgets_qsizepolicy_qsizepolicy_expandingdirections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, setHeightForWidth, arginfo_qt_widgets_qsizepolicy_qsizepolicy_setheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, hasHeightForWidth, arginfo_qt_widgets_qsizepolicy_qsizepolicy_hasheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, setWidthForHeight, arginfo_qt_widgets_qsizepolicy_qsizepolicy_setwidthforheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, hasWidthForHeight, arginfo_qt_widgets_qsizepolicy_qsizepolicy_haswidthforheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, horizontalStretch, arginfo_qt_widgets_qsizepolicy_qsizepolicy_horizontalstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, verticalStretch, arginfo_qt_widgets_qsizepolicy_qsizepolicy_verticalstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, setHorizontalStretch, arginfo_qt_widgets_qsizepolicy_qsizepolicy_sethorizontalstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, setVerticalStretch, arginfo_qt_widgets_qsizepolicy_qsizepolicy_setverticalstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, retainSizeWhenHidden, arginfo_qt_widgets_qsizepolicy_qsizepolicy_retainsizewhenhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, setRetainSizeWhenHidden, arginfo_qt_widgets_qsizepolicy_qsizepolicy_setretainsizewhenhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, transpose, arginfo_qt_widgets_qsizepolicy_qsizepolicy_transpose, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizePolicy_QSizePolicy, transposed, arginfo_qt_widgets_qsizepolicy_qsizepolicy_transposed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
