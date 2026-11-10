/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: d90bf090bac5e5b9dd24a46a3df744001684b974 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QGraphicsOpacityEffect___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QObject, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QGraphicsOpacityEffect_opacity, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QGraphicsOpacityEffect_setOpacity, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, opacity, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QGraphicsOpacityEffect, __construct);
ZEND_METHOD(QGraphicsOpacityEffect, opacity);
ZEND_METHOD(QGraphicsOpacityEffect, setOpacity);

static const zend_function_entry class_QGraphicsOpacityEffect_methods[] = {
	ZEND_ME(QGraphicsOpacityEffect, __construct, arginfo_class_QGraphicsOpacityEffect___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QGraphicsOpacityEffect, opacity, arginfo_class_QGraphicsOpacityEffect_opacity, ZEND_ACC_PUBLIC)
	ZEND_ME(QGraphicsOpacityEffect, setOpacity, arginfo_class_QGraphicsOpacityEffect_setOpacity, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QGraphicsEffect(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QGraphicsEffect", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QGraphicsOpacityEffect(zend_class_entry *class_entry_QGraphicsEffect)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QGraphicsOpacityEffect", class_QGraphicsOpacityEffect_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QGraphicsEffect, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
