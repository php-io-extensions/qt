
extern zend_class_entry *qt_core_qobjectdata_qobjectdata_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QObjectData_QObjectData);

PHP_METHOD(Qt_Core_QObjectData_QObjectData, q_ptr);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setQ_ptr);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, parent_);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setParent);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, children);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setChildren);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, isWidget);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setIsWidget);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, blockSig);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setBlockSig);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, wasDeleted);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setWasDeleted);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, isDeletingChildren);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setIsDeletingChildren);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, sendChildEvents);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setSendChildEvents);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, receiveChildEvents);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setReceiveChildEvents);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, isWindow);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setIsWindow);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, deleteLaterCalled);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setDeleteLaterCalled);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, isQuickItem);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setIsQuickItem);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, willBeWidget);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setWillBeWidget);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, wasWidget);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setWasWidget);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, receiveParentEvents);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setReceiveParentEvents);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, unused);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setUnused);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, postedEvents);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setPostedEvents);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, bindingStorage);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, setBindingStorage);
PHP_METHOD(Qt_Core_QObjectData_QObjectData, dynamicMetaObject);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_q_ptr, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setq_ptr, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_parent_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setparent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_children, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setchildren, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, value, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_iswidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setiswidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_blocksig, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setblocksig, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_wasdeleted, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setwasdeleted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_isdeletingchildren, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setisdeletingchildren, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_sendchildevents, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setsendchildevents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_receivechildevents, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setreceivechildevents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_iswindow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setiswindow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_deletelatercalled, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setdeletelatercalled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_isquickitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setisquickitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_willbewidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setwillbewidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_waswidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setwaswidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_receiveparentevents, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setreceiveparentevents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_unused, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setunused, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_postedevents, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setpostedevents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_bindingstorage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_setbindingstorage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdata_qobjectdata_dynamicmetaobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qobjectdata_qobjectdata_method_entry) {
	PHP_ME(Qt_Core_QObjectData_QObjectData, q_ptr, arginfo_qt_core_qobjectdata_qobjectdata_q_ptr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setQ_ptr, arginfo_qt_core_qobjectdata_qobjectdata_setq_ptr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, parent_, arginfo_qt_core_qobjectdata_qobjectdata_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setParent, arginfo_qt_core_qobjectdata_qobjectdata_setparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, children, arginfo_qt_core_qobjectdata_qobjectdata_children, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setChildren, arginfo_qt_core_qobjectdata_qobjectdata_setchildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, isWidget, arginfo_qt_core_qobjectdata_qobjectdata_iswidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setIsWidget, arginfo_qt_core_qobjectdata_qobjectdata_setiswidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, blockSig, arginfo_qt_core_qobjectdata_qobjectdata_blocksig, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setBlockSig, arginfo_qt_core_qobjectdata_qobjectdata_setblocksig, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, wasDeleted, arginfo_qt_core_qobjectdata_qobjectdata_wasdeleted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setWasDeleted, arginfo_qt_core_qobjectdata_qobjectdata_setwasdeleted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, isDeletingChildren, arginfo_qt_core_qobjectdata_qobjectdata_isdeletingchildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setIsDeletingChildren, arginfo_qt_core_qobjectdata_qobjectdata_setisdeletingchildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, sendChildEvents, arginfo_qt_core_qobjectdata_qobjectdata_sendchildevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setSendChildEvents, arginfo_qt_core_qobjectdata_qobjectdata_setsendchildevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, receiveChildEvents, arginfo_qt_core_qobjectdata_qobjectdata_receivechildevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setReceiveChildEvents, arginfo_qt_core_qobjectdata_qobjectdata_setreceivechildevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, isWindow, arginfo_qt_core_qobjectdata_qobjectdata_iswindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setIsWindow, arginfo_qt_core_qobjectdata_qobjectdata_setiswindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, deleteLaterCalled, arginfo_qt_core_qobjectdata_qobjectdata_deletelatercalled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setDeleteLaterCalled, arginfo_qt_core_qobjectdata_qobjectdata_setdeletelatercalled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, isQuickItem, arginfo_qt_core_qobjectdata_qobjectdata_isquickitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setIsQuickItem, arginfo_qt_core_qobjectdata_qobjectdata_setisquickitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, willBeWidget, arginfo_qt_core_qobjectdata_qobjectdata_willbewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setWillBeWidget, arginfo_qt_core_qobjectdata_qobjectdata_setwillbewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, wasWidget, arginfo_qt_core_qobjectdata_qobjectdata_waswidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setWasWidget, arginfo_qt_core_qobjectdata_qobjectdata_setwaswidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, receiveParentEvents, arginfo_qt_core_qobjectdata_qobjectdata_receiveparentevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setReceiveParentEvents, arginfo_qt_core_qobjectdata_qobjectdata_setreceiveparentevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, unused, arginfo_qt_core_qobjectdata_qobjectdata_unused, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setUnused, arginfo_qt_core_qobjectdata_qobjectdata_setunused, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, postedEvents, arginfo_qt_core_qobjectdata_qobjectdata_postedevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setPostedEvents, arginfo_qt_core_qobjectdata_qobjectdata_setpostedevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, bindingStorage, arginfo_qt_core_qobjectdata_qobjectdata_bindingstorage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, setBindingStorage, arginfo_qt_core_qobjectdata_qobjectdata_setbindingstorage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectData_QObjectData, dynamicMetaObject, arginfo_qt_core_qobjectdata_qobjectdata_dynamicmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
