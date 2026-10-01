
extern zend_class_entry *qt_widgets_qstyleoptionbutton_qstyleoptionbutton_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QStyleOptionButton_QStyleOptionButton);

PHP_METHOD(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, features);
PHP_METHOD(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, setFeatures);
PHP_METHOD(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, text);
PHP_METHOD(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, setText);
PHP_METHOD(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, icon);
PHP_METHOD(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, setIcon);
PHP_METHOD(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, iconSize);
PHP_METHOD(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, setIconSize);
PHP_METHOD(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, new_);
PHP_METHOD(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, newQStyleOptionButton);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_features, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_setfeatures, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_settext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_icon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_seticon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_iconsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_seticonsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_newqstyleoptionbutton, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qstyleoptionbutton_qstyleoptionbutton_method_entry) {
	PHP_ME(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, features, arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_features, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, setFeatures, arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_setfeatures, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, text, arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, setText, arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, icon, arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_icon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, setIcon, arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_seticon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, iconSize, arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_iconsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, setIconSize, arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_seticonsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, new_, arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOptionButton_QStyleOptionButton, newQStyleOptionButton, arginfo_qt_widgets_qstyleoptionbutton_qstyleoptionbutton_newqstyleoptionbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
