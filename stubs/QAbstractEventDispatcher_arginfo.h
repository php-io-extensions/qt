/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 817ea68c28e92e1b623b28fba670c5ee97de2196 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QAbstractEventDispatcher_instance, 0, 0, QAbstractEventDispatcher, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractEventDispatcher_processEvents, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, flags, QEventLoop\\ProcessEventsFlag, MAY_BE_LONG, NULL)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractEventDispatcher_wakeUp, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAbstractEventDispatcher_interrupt arginfo_class_QAbstractEventDispatcher_wakeUp

ZEND_METHOD(QAbstractEventDispatcher, instance);
ZEND_METHOD(QAbstractEventDispatcher, processEvents);
ZEND_METHOD(QAbstractEventDispatcher, wakeUp);
ZEND_METHOD(QAbstractEventDispatcher, interrupt);

static const zend_function_entry class_QAbstractEventDispatcher_methods[] = {
	ZEND_ME(QAbstractEventDispatcher, instance, arginfo_class_QAbstractEventDispatcher_instance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QAbstractEventDispatcher, processEvents, arginfo_class_QAbstractEventDispatcher_processEvents, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractEventDispatcher, wakeUp, arginfo_class_QAbstractEventDispatcher_wakeUp, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractEventDispatcher, interrupt, arginfo_class_QAbstractEventDispatcher_interrupt, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QAbstractEventDispatcher(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QAbstractEventDispatcher", class_QAbstractEventDispatcher_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
