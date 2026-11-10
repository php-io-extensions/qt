#include "runtime.h"
#include "../stubs/QGraphicsEffect_arginfo.h"

#include <QtWidgets/QGraphicsEffect>

void phpqt_register_QGraphicsEffect()
{
	phpqt_ce_QGraphicsEffect = register_class_QGraphicsEffect(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QGraphicsEffect);
	phpqt_map_class("QGraphicsEffect", phpqt_ce_QGraphicsEffect);

	phpqt_ce_QGraphicsOpacityEffect = register_class_QGraphicsOpacityEffect(phpqt_ce_QGraphicsEffect);
	phpqt_object_setup(phpqt_ce_QGraphicsOpacityEffect);
	phpqt_map_class("QGraphicsOpacityEffect", phpqt_ce_QGraphicsOpacityEffect);
}

ZEND_METHOD(QGraphicsOpacityEffect, __construct)
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

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QGraphicsOpacityEffect(qparent));
}

ZEND_METHOD(QGraphicsOpacityEffect, opacity)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QGraphicsOpacityEffect, effect);

	RETURN_DOUBLE(effect->opacity());
}

ZEND_METHOD(QGraphicsOpacityEffect, setOpacity)
{
	double opacity;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(opacity)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QGraphicsOpacityEffect, effect);

	effect->setOpacity(opacity);
}
