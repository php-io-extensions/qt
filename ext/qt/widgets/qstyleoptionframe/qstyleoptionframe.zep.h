
extern zend_class_entry *qt_widgets_qstyleoptionframe_qstyleoptionframe_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame);

PHP_METHOD(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, lineWidth);
PHP_METHOD(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, setLineWidth);
PHP_METHOD(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, midLineWidth);
PHP_METHOD(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, setMidLineWidth);
PHP_METHOD(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, features);
PHP_METHOD(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, setFeatures);
PHP_METHOD(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, frameShape);
PHP_METHOD(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, setFrameShape);
PHP_METHOD(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, new_);
PHP_METHOD(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, newQStyleOptionFrame);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_linewidth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_setlinewidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_midlinewidth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_setmidlinewidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_features, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_setfeatures, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_frameshape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_setframeshape, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_newqstyleoptionframe, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qstyleoptionframe_qstyleoptionframe_method_entry) {
	PHP_ME(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, lineWidth, arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_linewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, setLineWidth, arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_setlinewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, midLineWidth, arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_midlinewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, setMidLineWidth, arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_setmidlinewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, features, arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_features, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, setFeatures, arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_setfeatures, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, frameShape, arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_frameshape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, setFrameShape, arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_setframeshape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, new_, arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionFrame_QStyleOptionFrame, newQStyleOptionFrame, arginfo_qt_widgets_qstyleoptionframe_qstyleoptionframe_newqstyleoptionframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
