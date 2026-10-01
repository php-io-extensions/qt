
extern zend_class_entry *qt_widgets_qgesturerecognizer_qgesturerecognizer_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGestureRecognizer_QGestureRecognizer);

PHP_METHOD(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, new_);
PHP_METHOD(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, create);
PHP_METHOD(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, recognize);
PHP_METHOD(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, reset);
PHP_METHOD(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, registerRecognizer);
PHP_METHOD(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, unregisterRecognizer);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesturerecognizer_qgesturerecognizer_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesturerecognizer_qgesturerecognizer_create, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesturerecognizer_qgesturerecognizer_recognize, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, watched, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesturerecognizer_qgesturerecognizer_reset, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesturerecognizer_qgesturerecognizer_registerrecognizer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, recognizer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesturerecognizer_qgesturerecognizer_unregisterrecognizer, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgesturerecognizer_qgesturerecognizer_method_entry) {
	PHP_ME(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, new_, arginfo_qt_widgets_qgesturerecognizer_qgesturerecognizer_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, create, arginfo_qt_widgets_qgesturerecognizer_qgesturerecognizer_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, recognize, arginfo_qt_widgets_qgesturerecognizer_qgesturerecognizer_recognize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, reset, arginfo_qt_widgets_qgesturerecognizer_qgesturerecognizer_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, registerRecognizer, arginfo_qt_widgets_qgesturerecognizer_qgesturerecognizer_registerrecognizer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, unregisterRecognizer, arginfo_qt_widgets_qgesturerecognizer_qgesturerecognizer_unregisterrecognizer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
