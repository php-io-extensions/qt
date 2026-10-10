/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 575a06dafe8239a3ffe783eff9d7384e29617d6a */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QMenuBar___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_QMenuBar_addMenu, 0, 1, QMenu|QAction, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, menuOrTitle, QMenu, MAY_BE_STRING, NULL)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QMenuBar_addAction, 0, 1, QAction, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMenuBar_clear, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMenuBar_isNativeMenuBar, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMenuBar_setNativeMenuBar, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, nativeMenuBar, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QMenu___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, title, IS_STRING, 0, "\"\"")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMenu_title, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMenu_setTitle, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QMenu_addAction arginfo_class_QMenuBar_addAction

#define arginfo_class_QMenu_addMenu arginfo_class_QMenuBar_addMenu

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QMenu_addSeparator, 0, 0, QAction, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QMenu_clear arginfo_class_QMenuBar_clear

#define arginfo_class_QMenu_isEmpty arginfo_class_QMenuBar_isNativeMenuBar

#define arginfo_class_QMenu_menuAction arginfo_class_QMenu_addSeparator

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMenu_popup, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QMenuBar, __construct);
ZEND_METHOD(QMenuBar, addMenu);
ZEND_METHOD(QMenuBar, addAction);
ZEND_METHOD(QMenuBar, clear);
ZEND_METHOD(QMenuBar, isNativeMenuBar);
ZEND_METHOD(QMenuBar, setNativeMenuBar);
ZEND_METHOD(QMenu, __construct);
ZEND_METHOD(QMenu, title);
ZEND_METHOD(QMenu, setTitle);
ZEND_METHOD(QMenu, addAction);
ZEND_METHOD(QMenu, addMenu);
ZEND_METHOD(QMenu, addSeparator);
ZEND_METHOD(QMenu, clear);
ZEND_METHOD(QMenu, isEmpty);
ZEND_METHOD(QMenu, menuAction);
ZEND_METHOD(QMenu, popup);

static const zend_function_entry class_QMenuBar_methods[] = {
	ZEND_ME(QMenuBar, __construct, arginfo_class_QMenuBar___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenuBar, addMenu, arginfo_class_QMenuBar_addMenu, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenuBar, addAction, arginfo_class_QMenuBar_addAction, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenuBar, clear, arginfo_class_QMenuBar_clear, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenuBar, isNativeMenuBar, arginfo_class_QMenuBar_isNativeMenuBar, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenuBar, setNativeMenuBar, arginfo_class_QMenuBar_setNativeMenuBar, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QMenu_methods[] = {
	ZEND_ME(QMenu, __construct, arginfo_class_QMenu___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenu, title, arginfo_class_QMenu_title, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenu, setTitle, arginfo_class_QMenu_setTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenu, addAction, arginfo_class_QMenu_addAction, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenu, addMenu, arginfo_class_QMenu_addMenu, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenu, addSeparator, arginfo_class_QMenu_addSeparator, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenu, clear, arginfo_class_QMenu_clear, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenu, isEmpty, arginfo_class_QMenu_isEmpty, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenu, menuAction, arginfo_class_QMenu_menuAction, ZEND_ACC_PUBLIC)
	ZEND_ME(QMenu, popup, arginfo_class_QMenu_popup, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QMenuBar(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QMenuBar", class_QMenuBar_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QMenu(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QMenu", class_QMenu_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
