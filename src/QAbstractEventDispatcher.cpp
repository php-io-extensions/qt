#include "runtime.h"
#include "../stubs/QAbstractEventDispatcher_arginfo.h"

#include <QtCore/QAbstractEventDispatcher>

void phpqt_register_QAbstractEventDispatcher()
{
	phpqt_ce_QAbstractEventDispatcher = register_class_QAbstractEventDispatcher(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QAbstractEventDispatcher);
	phpqt_map_class("QAbstractEventDispatcher", phpqt_ce_QAbstractEventDispatcher);
}

ZEND_METHOD(QAbstractEventDispatcher, instance)
{
	ZEND_PARSE_PARAMETERS_NONE();

	phpqt_box(return_value, QAbstractEventDispatcher::instance());
}

ZEND_METHOD(QAbstractEventDispatcher, processEvents)
{
	zend_object *flags_case = nullptr;
	zend_long flags_long = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(flags_case, phpqt_ce_QEventLoop_ProcessEventsFlag, flags_long)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QAbstractEventDispatcher, dispatcher);

	RETURN_BOOL(dispatcher->processEvents(QEventLoop::ProcessEventsFlags(static_cast<int>(phpqt_enum_value(flags_case, flags_long)))));
}

ZEND_METHOD(QAbstractEventDispatcher, wakeUp)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAbstractEventDispatcher, dispatcher);

	dispatcher->wakeUp();
}

ZEND_METHOD(QAbstractEventDispatcher, interrupt)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAbstractEventDispatcher, dispatcher);

	dispatcher->interrupt();
}
