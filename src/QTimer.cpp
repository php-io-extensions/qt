#include "runtime.h"
#include "../stubs/QTimer_arginfo.h"

#include <QtCore/QTimer>

void phpqt_register_QTimer()
{
	phpqt_ce_QTimer = register_class_QTimer(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QTimer);
	phpqt_map_class("QTimer", phpqt_ce_QTimer);
}

ZEND_METHOD(QTimer, __construct)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();

	QObject *qparent = phpqt_arg(parent, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QTimer(qparent));
}

static bool phpqt_msec(zend_long msec, uint32_t arg_num)
{
	if (msec < 0 || msec > INT_MAX) {
		zend_argument_value_error(arg_num, "must be between 0 and %d", INT_MAX);
		return false;
	}

	return true;
}

ZEND_METHOD(QTimer, start)
{
	zend_long msec = 0;
	bool msec_null = true;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG_OR_NULL(msec, msec_null)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTimer, timer);

	if (msec_null) {
		timer->start();
		return;
	}
	if (!phpqt_msec(msec, 1)) {
		RETURN_THROWS();
	}

	timer->start(static_cast<int>(msec));
}

ZEND_METHOD(QTimer, stop)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTimer, timer);

	timer->stop();
}

ZEND_METHOD(QTimer, isActive)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTimer, timer);

	RETURN_BOOL(timer->isActive());
}

ZEND_METHOD(QTimer, interval)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTimer, timer);

	RETURN_LONG(timer->interval());
}

ZEND_METHOD(QTimer, setInterval)
{
	zend_long msec;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(msec)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTimer, timer);

	if (!phpqt_msec(msec, 1)) {
		RETURN_THROWS();
	}

	timer->setInterval(static_cast<int>(msec));
}

ZEND_METHOD(QTimer, isSingleShot)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTimer, timer);

	RETURN_BOOL(timer->isSingleShot());
}

ZEND_METHOD(QTimer, setSingleShot)
{
	bool single_shot;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(single_shot)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTimer, timer);

	timer->setSingleShot(single_shot);
}

ZEND_METHOD(QTimer, timerType)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTimer, timer);

	phpqt_return_enum(return_value, phpqt_ce_Qt_TimerType, static_cast<zend_long>(timer->timerType()));
}

ZEND_METHOD(QTimer, setTimerType)
{
	zend_object *atype;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(atype, phpqt_ce_Qt_TimerType)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTimer, timer);

	timer->setTimerType(static_cast<Qt::TimerType>(phpqt_enum_value(atype, 0)));
}

ZEND_METHOD(QTimer, remainingTime)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTimer, timer);

	RETURN_LONG(timer->remainingTime());
}

ZEND_METHOD(QTimer, timerId)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTimer, timer);

	RETURN_LONG(timer->timerId());
}

ZEND_METHOD(QTimer, singleShot)
{
	zend_long msec;
	zval *functor;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(msec)
		Z_PARAM_ZVAL(functor)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_msec(msec, 1) || !phpqt_require_callable(functor, 2)) {
		RETURN_THROWS();
	}

	/* The slot is the functor's context: deleting it at request end cancels a shot not yet fired. */
	PhpSlot *slot = new PhpSlot(functor, QMetaMethod());

	QTimer::singleShot(static_cast<int>(msec), slot, [slot]() {
		slot->fire();
		slot->detach();
		slot->deleteLater();
	});
}
