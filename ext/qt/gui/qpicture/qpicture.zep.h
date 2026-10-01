
extern zend_class_entry *qt_gui_qpicture_qpicture_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPicture_QPicture);

PHP_METHOD(Qt_Gui_QPicture_QPicture, new_);
PHP_METHOD(Qt_Gui_QPicture_QPicture, newQPicture);
PHP_METHOD(Qt_Gui_QPicture_QPicture, isNull);
PHP_METHOD(Qt_Gui_QPicture_QPicture, devType);
PHP_METHOD(Qt_Gui_QPicture_QPicture, size);
PHP_METHOD(Qt_Gui_QPicture_QPicture, data);
PHP_METHOD(Qt_Gui_QPicture_QPicture, setData);
PHP_METHOD(Qt_Gui_QPicture_QPicture, play);
PHP_METHOD(Qt_Gui_QPicture_QPicture, load);
PHP_METHOD(Qt_Gui_QPicture_QPicture, loadQString);
PHP_METHOD(Qt_Gui_QPicture_QPicture, save);
PHP_METHOD(Qt_Gui_QPicture_QPicture, saveQString);
PHP_METHOD(Qt_Gui_QPicture_QPicture, boundingRect);
PHP_METHOD(Qt_Gui_QPicture_QPicture, setBoundingRect);
PHP_METHOD(Qt_Gui_QPicture_QPicture, swap);
PHP_METHOD(Qt_Gui_QPicture_QPicture, detach);
PHP_METHOD(Qt_Gui_QPicture_QPicture, isDetached);
PHP_METHOD(Qt_Gui_QPicture_QPicture, paintEngine);
PHP_METHOD(Qt_Gui_QPicture_QPicture, metric);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, formatVersion, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_newqpicture, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_devtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qpicture_qpicture_data, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_setdata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_play, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_load, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_loadqstring, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_save, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_saveqstring, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_setboundingrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_detach, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_paintengine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicture_qpicture_metric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpicture_qpicture_method_entry) {
	PHP_ME(Qt_Gui_QPicture_QPicture, new_, arginfo_qt_gui_qpicture_qpicture_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, newQPicture, arginfo_qt_gui_qpicture_qpicture_newqpicture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, isNull, arginfo_qt_gui_qpicture_qpicture_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, devType, arginfo_qt_gui_qpicture_qpicture_devtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, size, arginfo_qt_gui_qpicture_qpicture_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, data, arginfo_qt_gui_qpicture_qpicture_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, setData, arginfo_qt_gui_qpicture_qpicture_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, play, arginfo_qt_gui_qpicture_qpicture_play, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, load, arginfo_qt_gui_qpicture_qpicture_load, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, loadQString, arginfo_qt_gui_qpicture_qpicture_loadqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, save, arginfo_qt_gui_qpicture_qpicture_save, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, saveQString, arginfo_qt_gui_qpicture_qpicture_saveqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, boundingRect, arginfo_qt_gui_qpicture_qpicture_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, setBoundingRect, arginfo_qt_gui_qpicture_qpicture_setboundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, swap, arginfo_qt_gui_qpicture_qpicture_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, detach, arginfo_qt_gui_qpicture_qpicture_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, isDetached, arginfo_qt_gui_qpicture_qpicture_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, paintEngine, arginfo_qt_gui_qpicture_qpicture_paintengine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPicture_QPicture, metric, arginfo_qt_gui_qpicture_qpicture_metric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
