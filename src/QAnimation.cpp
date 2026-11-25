#include "runtime.h"
#include "../stubs/QAnimation_arginfo.h"

#include <QtCore/QAbstractAnimation>
#include <QtCore/QEasingCurve>
#include <QtCore/QList>
#include <QtCore/QPointF>
#include <QtCore/QPropertyAnimation>
#include <QtCore/QVariantAnimation>

#include "checks/QEasingCurve_Type.inc"

zend_class_entry *phpqt_ce_QEasingCurve;
zend_class_entry *phpqt_ce_QEasingCurve_Type;

static void phpqt_destroy_easing_curve(void *ptr) { delete static_cast<QEasingCurve *>(ptr); }

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

	phpqt_ce_QEasingCurve_Type = register_class_QEasingCurve_Type();
	phpqt_ce_QEasingCurve = register_class_QEasingCurve();
	phpqt_value_setup(phpqt_ce_QEasingCurve);
}

/* ---- QEasingCurve ------------------------------------------------------- */

ZEND_METHOD(QEasingCurve, __construct)
{
	zend_object *type = nullptr;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(type, phpqt_ce_QEasingCurve_Type)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}

	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QEasingCurve(static_cast<QEasingCurve::Type>(phpqt_enum_value(type, QEasingCurve::Linear))),
		true, phpqt_destroy_easing_curve);
}

ZEND_METHOD(QEasingCurve, type)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QEasingCurve, curve);

	phpqt_return_enum(return_value, phpqt_ce_QEasingCurve_Type, static_cast<zend_long>(curve->type()));
}

ZEND_METHOD(QEasingCurve, setType)
{
	zend_object *type;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(type, phpqt_ce_QEasingCurve_Type)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QEasingCurve, curve);

	curve->setType(static_cast<QEasingCurve::Type>(phpqt_enum_value(type, QEasingCurve::Linear)));
}

ZEND_METHOD(QEasingCurve, valueForProgress)
{
	double progress;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(progress)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QEasingCurve, curve);

	RETURN_DOUBLE(curve->valueForProgress(progress));
}

ZEND_METHOD(QEasingCurve, addCubicBezierSegment)
{
	zend_object *c1_obj, *c2_obj, *end_obj;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJ_OF_CLASS(c1_obj, phpqt_ce_QPointF)
		Z_PARAM_OBJ_OF_CLASS(c2_obj, phpqt_ce_QPointF)
		Z_PARAM_OBJ_OF_CLASS(end_obj, phpqt_ce_QPointF)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QEasingCurve, curve);

	QPointF *c1 = static_cast<QPointF *>(phpqt_value_arg(c1_obj, 1));
	QPointF *c2 = c1 == nullptr ? nullptr : static_cast<QPointF *>(phpqt_value_arg(c2_obj, 2));
	QPointF *end = c2 == nullptr ? nullptr : static_cast<QPointF *>(phpqt_value_arg(end_obj, 3));
	if (end == nullptr) {
		RETURN_THROWS();
	}

	curve->addCubicBezierSegment(*c1, *c2, *end);
}

ZEND_METHOD(QEasingCurve, toCubicSpline)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QEasingCurve, curve);

	const QList<QPointF> points = curve->toCubicSpline();
	array_init_size(return_value, static_cast<uint32_t>(points.size()));
	for (const QPointF &point : points) {
		zval boxed;
		phpqt_return_qpointf(&boxed, point);
		add_next_index_zval(return_value, &boxed);
	}
}

ZEND_METHOD(QVariantAnimation, easingCurve)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QVariantAnimation, animation);

	object_init_ex(return_value, phpqt_ce_QEasingCurve);
	phpqt_value_hold(Z_OBJ_P(return_value), new QEasingCurve(animation->easingCurve()), true, phpqt_destroy_easing_curve);
}

ZEND_METHOD(QVariantAnimation, setEasingCurve)
{
	zend_object *curve_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(curve_obj, phpqt_ce_QEasingCurve)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QVariantAnimation, animation);

	QEasingCurve *curve = static_cast<QEasingCurve *>(phpqt_value_arg(curve_obj, 1));
	if (curve == nullptr) {
		RETURN_THROWS();
	}

	animation->setEasingCurve(*curve);
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
