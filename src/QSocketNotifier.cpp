#include "runtime.h"
#include "../stubs/QSocketNotifier_arginfo.h"

#include <QtCore/QSocketNotifier>

void phpqt_register_QSocketNotifier()
{
	phpqt_ce_QSocketNotifier_Type = register_class_QSocketNotifier_Type();
	phpqt_ce_QSocketNotifier = register_class_QSocketNotifier(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QSocketNotifier);
	phpqt_map_class("QSocketNotifier", phpqt_ce_QSocketNotifier);
}

ZEND_METHOD(QSocketNotifier, __construct)
{
	zval *socket;
	zend_object *type;
	zend_object *parent = nullptr;
	int fd;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_ZVAL(socket)
		Z_PARAM_OBJ_OF_CLASS(type, phpqt_ce_QSocketNotifier_Type)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_fd_from_zval(socket, 1, &fd)) {
		RETURN_THROWS();
	}

	QObject *qparent = phpqt_arg(parent, 3, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QSocketNotifier(
		static_cast<qintptr>(fd),
		static_cast<QSocketNotifier::Type>(phpqt_enum_value(type, 0)),
		qparent
	));
}

ZEND_METHOD(QSocketNotifier, socket)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QSocketNotifier, notifier);

	RETURN_LONG(static_cast<zend_long>(notifier->socket()));
}

ZEND_METHOD(QSocketNotifier, type)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QSocketNotifier, notifier);

	phpqt_return_enum(return_value, phpqt_ce_QSocketNotifier_Type, static_cast<zend_long>(notifier->type()));
}

ZEND_METHOD(QSocketNotifier, isEnabled)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QSocketNotifier, notifier);

	RETURN_BOOL(notifier->isEnabled());
}

ZEND_METHOD(QSocketNotifier, setEnabled)
{
	bool enable;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QSocketNotifier, notifier);

	notifier->setEnabled(enable);
}

ZEND_METHOD(QSocketNotifier, isValid)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QSocketNotifier, notifier);

	RETURN_BOOL(notifier->isValid());
}
