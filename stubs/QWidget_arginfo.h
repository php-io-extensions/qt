/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 12879659c1f161c055ec2830d966d8bbdf234dc5 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QWidget___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWidget_show, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWidget_hide arginfo_class_QWidget_show

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWidget_close, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWidget_isVisible arginfo_class_QWidget_close

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWidget_setVisible, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWidget_isWindow arginfo_class_QWidget_close

#define arginfo_class_QWidget_isActiveWindow arginfo_class_QWidget_close

#define arginfo_class_QWidget_activateWindow arginfo_class_QWidget_show

#define arginfo_class_QWidget_raise arginfo_class_QWidget_show

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWidget_windowTitle, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWidget_setWindowTitle, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWidget_resize, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWidget_width, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWidget_height arginfo_class_QWidget_width

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QWidget_parentWidget, 0, 0, QWidget, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWidget_setAttribute, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, attribute, Qt\\WidgetAttribute, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, on, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWidget_testAttribute, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, attribute, Qt\\WidgetAttribute, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QWidget, __construct);
ZEND_METHOD(QWidget, show);
ZEND_METHOD(QWidget, hide);
ZEND_METHOD(QWidget, close);
ZEND_METHOD(QWidget, isVisible);
ZEND_METHOD(QWidget, setVisible);
ZEND_METHOD(QWidget, isWindow);
ZEND_METHOD(QWidget, isActiveWindow);
ZEND_METHOD(QWidget, activateWindow);
ZEND_METHOD(QWidget, raise);
ZEND_METHOD(QWidget, windowTitle);
ZEND_METHOD(QWidget, setWindowTitle);
ZEND_METHOD(QWidget, resize);
ZEND_METHOD(QWidget, width);
ZEND_METHOD(QWidget, height);
ZEND_METHOD(QWidget, parentWidget);
ZEND_METHOD(QWidget, setAttribute);
ZEND_METHOD(QWidget, testAttribute);

static const zend_function_entry class_QWidget_methods[] = {
	ZEND_ME(QWidget, __construct, arginfo_class_QWidget___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, show, arginfo_class_QWidget_show, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, hide, arginfo_class_QWidget_hide, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, close, arginfo_class_QWidget_close, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, isVisible, arginfo_class_QWidget_isVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, setVisible, arginfo_class_QWidget_setVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, isWindow, arginfo_class_QWidget_isWindow, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, isActiveWindow, arginfo_class_QWidget_isActiveWindow, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, activateWindow, arginfo_class_QWidget_activateWindow, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, raise, arginfo_class_QWidget_raise, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, windowTitle, arginfo_class_QWidget_windowTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, setWindowTitle, arginfo_class_QWidget_setWindowTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, resize, arginfo_class_QWidget_resize, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, width, arginfo_class_QWidget_width, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, height, arginfo_class_QWidget_height, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, parentWidget, arginfo_class_QWidget_parentWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, setAttribute, arginfo_class_QWidget_setAttribute, ZEND_ACC_PUBLIC)
	ZEND_ME(QWidget, testAttribute, arginfo_class_QWidget_testAttribute, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QWidget(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QWidget", class_QWidget_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
