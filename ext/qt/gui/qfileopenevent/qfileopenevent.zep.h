
extern zend_class_entry *qt_gui_qfileopenevent_qfileopenevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QFileOpenEvent_QFileOpenEvent);

PHP_METHOD(Qt_Gui_QFileOpenEvent_QFileOpenEvent, new_);
PHP_METHOD(Qt_Gui_QFileOpenEvent_QFileOpenEvent, clone_);
PHP_METHOD(Qt_Gui_QFileOpenEvent_QFileOpenEvent, newQString);
PHP_METHOD(Qt_Gui_QFileOpenEvent_QFileOpenEvent, newQUrl);
PHP_METHOD(Qt_Gui_QFileOpenEvent_QFileOpenEvent, file);
PHP_METHOD(Qt_Gui_QFileOpenEvent_QFileOpenEvent, url);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfileopenevent_qfileopenevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfileopenevent_qfileopenevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfileopenevent_qfileopenevent_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfileopenevent_qfileopenevent_newqurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfileopenevent_qfileopenevent_file, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfileopenevent_qfileopenevent_url, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qfileopenevent_qfileopenevent_method_entry) {
	PHP_ME(Qt_Gui_QFileOpenEvent_QFileOpenEvent, new_, arginfo_qt_gui_qfileopenevent_qfileopenevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileOpenEvent_QFileOpenEvent, clone_, arginfo_qt_gui_qfileopenevent_qfileopenevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileOpenEvent_QFileOpenEvent, newQString, arginfo_qt_gui_qfileopenevent_qfileopenevent_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileOpenEvent_QFileOpenEvent, newQUrl, arginfo_qt_gui_qfileopenevent_qfileopenevent_newqurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileOpenEvent_QFileOpenEvent, file, arginfo_qt_gui_qfileopenevent_qfileopenevent_file, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileOpenEvent_QFileOpenEvent, url, arginfo_qt_gui_qfileopenevent_qfileopenevent_url, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
