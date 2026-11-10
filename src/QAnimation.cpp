#include "runtime.h"
#include "../stubs/QAnimation_arginfo.h"

#include <QtCore/QAbstractAnimation>
#include <QtCore/QPropertyAnimation>
#include <QtCore/QVariantAnimation>

static_assert(QAbstractAnimation::KeepWhenStopped == 0 && QAbstractAnimation::DeleteWhenStopped == 1,
	"QAbstractAnimation::DeletionPolicy values differ from the stub's QAbstractAnimation\\DeletionPolicy enum");

void phpqt_register_QAnimation()
{
	phpqt_ce_QAbstractAnimation_DeletionPolicy = register_class_QAbstractAnimation_DeletionPolicy();

	phpqt_ce_QAbstractAnimation = register_class_QAbstractAnimation(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QAbstractAnimation);
	phpqt_map_class("QAbstractAnimation", phpqt_ce_QAbstractAnimation);

	phpqt_ce_QVariantAnimation = register_class_QVariantAnimation(phpqt_ce_QAbstractAnimation);
	phpqt_object_setup(phpqt_ce_QVariantAnimation);
	phpqt_map_class("QVariantAnimation", phpqt_ce_QVariantAnimation);

	phpqt_ce_QPropertyAnimation = register_class_QPropertyAnimation(phpqt_ce_QVariantAnimation);
	phpqt_object_setup(phpqt_ce_QPropertyAnimation);
	phpqt_map_class("QPropertyAnimation", phpqt_ce_QPropertyAnimation);
}

ZEND_METHOD(QAbstractAnimation, start)
{
	zend_object *policy = nullptr;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(policy, phpqt_ce_QAbstractAnimation_DeletionPolicy)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QAbstractAnimation, animation);

	animation->start(policy == nullptr
		? QAbstractAnimation::KeepWhenStopped
		: static_cast<QAbstractAnimation::DeletionPolicy>(phpqt_enum_value(policy, 0)));
}

ZEND_METHOD(QAbstractAnimation, stop)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAbstractAnimation, animation);

	animation->stop();
}

ZEND_METHOD(QAbstractAnimation, duration)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAbstractAnimation, animation);

	RETURN_LONG(animation->duration());
}

ZEND_METHOD(QVariantAnimation, setStartValue)
{
	zval *value;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QVariantAnimation, animation);

	QVariant variant;
	if (!phpqt_zval_to_variant(value, QMetaType(), &variant, 1)) {
		RETURN_THROWS();
	}

	animation->setStartValue(variant);
}

ZEND_METHOD(QVariantAnimation, setEndValue)
{
	zval *value;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QVariantAnimation, animation);

	QVariant variant;
	if (!phpqt_zval_to_variant(value, QMetaType(), &variant, 1)) {
		RETURN_THROWS();
	}

	animation->setEndValue(variant);
}

ZEND_METHOD(QVariantAnimation, setDuration)
{
	zend_long msecs;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QVariantAnimation, animation);

	if (!phpqt_long_fits(msecs, INT_MIN, INT_MAX, 1)) {
		RETURN_THROWS();
	}

	animation->setDuration(static_cast<int>(msecs));
}

ZEND_METHOD(QPropertyAnimation, __construct)
{
	zend_object *target;
	zend_string *property_name;
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_OBJ_OF_CLASS(target, phpqt_ce_QObject)
		Z_PARAM_STR(property_name)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();

	QObject *qtarget = phpqt_arg(target, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}
	QObject *qparent = phpqt_arg(parent, 3, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QPropertyAnimation(qtarget, QByteArray(ZSTR_VAL(property_name), ZSTR_LEN(property_name)), qparent));
}
