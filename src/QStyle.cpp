#include "runtime.h"
#include "../stubs/QStyle_arginfo.h"

#include <QtCore/QRect>
#include <QtWidgets/QStyle>
#include <QtWidgets/QStyleOption>
#include <QtWidgets/QWidget>

/* A QStyleOptionButton's wrapper holds it as its QStyleOption base, so QStyleOption's methods read either. */
static void phpqt_destroy_style_option(void *ptr)
{
	delete static_cast<QStyleOption *>(ptr);
}

static void phpqt_destroy_style_option_button(void *ptr)
{
	delete static_cast<QStyleOptionButton *>(static_cast<QStyleOption *>(ptr));
}

void phpqt_register_QStyle()
{
	phpqt_ce_QStyle_SubElement = register_class_QStyle_SubElement();
	phpqt_ce_QStyle = register_class_QStyle(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QStyle);
	phpqt_map_class("QStyle", phpqt_ce_QStyle);

	phpqt_ce_QStyleOption = register_class_QStyleOption();
	phpqt_value_setup(phpqt_ce_QStyleOption);
	phpqt_ce_QStyleOptionButton = register_class_QStyleOptionButton(phpqt_ce_QStyleOption);
	phpqt_value_setup(phpqt_ce_QStyleOptionButton);
}

/* ---- QStyle ------------------------------------------------------------ */

ZEND_METHOD(QStyle, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QStyle, subElementRect)
{
	zend_object *element;
	zend_object *option;
	zend_object *widget = nullptr;

	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_OBJ_OF_CLASS(element, phpqt_ce_QStyle_SubElement)
		Z_PARAM_OBJ_OF_CLASS(option, phpqt_ce_QStyleOption)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(widget, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QStyle, style);
	QStyleOption *opt = static_cast<QStyleOption *>(phpqt_value_arg(option, 2));
	if (opt == nullptr) {
		RETURN_THROWS();
	}
	bool failed = false;
	QWidget *qwidget = static_cast<QWidget *>(phpqt_arg(widget, 3, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_return_qrect(return_value, style->subElementRect(static_cast<QStyle::SubElement>(phpqt_enum_value(element, 0)), opt, qwidget));
}

/* ---- QStyleOption ------------------------------------------------------ */

ZEND_METHOD(QStyleOption, __construct)
{
	zend_long version = QStyleOption::Version;
	zend_long type = QStyleOption::SO_Default;

	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(version)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	if (!phpqt_long_fits(version, INT_MIN, INT_MAX, 1) || !phpqt_long_fits(type, INT_MIN, INT_MAX, 2)) {
		RETURN_THROWS();
	}

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QStyleOption(static_cast<int>(version), static_cast<int>(type)), true, phpqt_destroy_style_option);
}

ZEND_METHOD(QStyleOption, initFrom)
{
	zend_object *widget;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(widget, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QStyleOption, option);
	bool failed = false;
	QWidget *qwidget = static_cast<QWidget *>(phpqt_arg(widget, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	option->initFrom(qwidget);
}

/* ---- QStyleOptionButton ------------------------------------------------ */

ZEND_METHOD(QStyleOptionButton, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), static_cast<QStyleOption *>(new QStyleOptionButton()), true, phpqt_destroy_style_option_button);
}
