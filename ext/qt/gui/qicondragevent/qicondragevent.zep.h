
extern zend_class_entry *qt_gui_qicondragevent_qicondragevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QIconDragEvent_QIconDragEvent);

PHP_METHOD(Qt_Gui_QIconDragEvent_QIconDragEvent, new_);
PHP_METHOD(Qt_Gui_QIconDragEvent_QIconDragEvent, clone_);
PHP_METHOD(Qt_Gui_QIconDragEvent_QIconDragEvent, new2);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicondragevent_qicondragevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicondragevent_qicondragevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicondragevent_qicondragevent_new2, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qicondragevent_qicondragevent_method_entry) {
	PHP_ME(Qt_Gui_QIconDragEvent_QIconDragEvent, new_, arginfo_qt_gui_qicondragevent_qicondragevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconDragEvent_QIconDragEvent, clone_, arginfo_qt_gui_qicondragevent_qicondragevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconDragEvent_QIconDragEvent, new2, arginfo_qt_gui_qicondragevent_qicondragevent_new2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
