
extern zend_class_entry *qt_core_qanimationgroup_qanimationgroup_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QAnimationGroup_QAnimationGroup);

PHP_METHOD(Qt_Core_QAnimationGroup_QAnimationGroup, staticMetaObject);
PHP_METHOD(Qt_Core_QAnimationGroup_QAnimationGroup, tr);
PHP_METHOD(Qt_Core_QAnimationGroup_QAnimationGroup, new_);
PHP_METHOD(Qt_Core_QAnimationGroup_QAnimationGroup, animationAt);
PHP_METHOD(Qt_Core_QAnimationGroup_QAnimationGroup, animationCount);
PHP_METHOD(Qt_Core_QAnimationGroup_QAnimationGroup, indexOfAnimation);
PHP_METHOD(Qt_Core_QAnimationGroup_QAnimationGroup, addAnimation);
PHP_METHOD(Qt_Core_QAnimationGroup_QAnimationGroup, insertAnimation);
PHP_METHOD(Qt_Core_QAnimationGroup_QAnimationGroup, removeAnimation);
PHP_METHOD(Qt_Core_QAnimationGroup_QAnimationGroup, takeAnimation);
PHP_METHOD(Qt_Core_QAnimationGroup_QAnimationGroup, clear);
PHP_METHOD(Qt_Core_QAnimationGroup_QAnimationGroup, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationgroup_qanimationgroup_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationgroup_qanimationgroup_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationgroup_qanimationgroup_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationgroup_qanimationgroup_animationat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationgroup_qanimationgroup_animationcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationgroup_qanimationgroup_indexofanimation, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationgroup_qanimationgroup_addanimation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationgroup_qanimationgroup_insertanimation, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationgroup_qanimationgroup_removeanimation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationgroup_qanimationgroup_takeanimation, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationgroup_qanimationgroup_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationgroup_qanimationgroup_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qanimationgroup_qanimationgroup_method_entry) {
	PHP_ME(Qt_Core_QAnimationGroup_QAnimationGroup, staticMetaObject, arginfo_qt_core_qanimationgroup_qanimationgroup_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationGroup_QAnimationGroup, tr, arginfo_qt_core_qanimationgroup_qanimationgroup_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationGroup_QAnimationGroup, new_, arginfo_qt_core_qanimationgroup_qanimationgroup_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationGroup_QAnimationGroup, animationAt, arginfo_qt_core_qanimationgroup_qanimationgroup_animationat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationGroup_QAnimationGroup, animationCount, arginfo_qt_core_qanimationgroup_qanimationgroup_animationcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationGroup_QAnimationGroup, indexOfAnimation, arginfo_qt_core_qanimationgroup_qanimationgroup_indexofanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationGroup_QAnimationGroup, addAnimation, arginfo_qt_core_qanimationgroup_qanimationgroup_addanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationGroup_QAnimationGroup, insertAnimation, arginfo_qt_core_qanimationgroup_qanimationgroup_insertanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationGroup_QAnimationGroup, removeAnimation, arginfo_qt_core_qanimationgroup_qanimationgroup_removeanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationGroup_QAnimationGroup, takeAnimation, arginfo_qt_core_qanimationgroup_qanimationgroup_takeanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationGroup_QAnimationGroup, clear, arginfo_qt_core_qanimationgroup_qanimationgroup_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationGroup_QAnimationGroup, event, arginfo_qt_core_qanimationgroup_qanimationgroup_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
