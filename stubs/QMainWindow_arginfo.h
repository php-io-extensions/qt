/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 9885e71eaef2f9c4f7e9a88399e732e9dcee9169 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QMainWindow___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QMainWindow_menuBar, 0, 0, QMenuBar, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMainWindow_setMenuBar, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, menubar, QMenuBar, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QMainWindow_centralWidget, 0, 0, QWidget, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMainWindow_setCentralWidget, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, widget, QWidget, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QMainWindow, __construct);
ZEND_METHOD(QMainWindow, menuBar);
ZEND_METHOD(QMainWindow, setMenuBar);
ZEND_METHOD(QMainWindow, centralWidget);
ZEND_METHOD(QMainWindow, setCentralWidget);

static const zend_function_entry class_QMainWindow_methods[] = {
	ZEND_ME(QMainWindow, __construct, arginfo_class_QMainWindow___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QMainWindow, menuBar, arginfo_class_QMainWindow_menuBar, ZEND_ACC_PUBLIC)
	ZEND_ME(QMainWindow, setMenuBar, arginfo_class_QMainWindow_setMenuBar, ZEND_ACC_PUBLIC)
	ZEND_ME(QMainWindow, centralWidget, arginfo_class_QMainWindow_centralWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QMainWindow, setCentralWidget, arginfo_class_QMainWindow_setCentralWidget, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QMainWindow(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QMainWindow", class_QMainWindow_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
