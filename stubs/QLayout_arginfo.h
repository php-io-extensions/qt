/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 121adf3758e0c47827089a9b90d508992db1230c */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QLayout___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLayout_setSpacing, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLayout_spacing, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLayout_setContentsMargins, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QLayout_count arginfo_class_QLayout_spacing

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLayout_removeWidget, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, widget, QWidget, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLayout_indexOf, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, widget, QWidget, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QLayout_itemAtWidget, 0, 1, QWidget, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLayout_invalidate, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QSpacerItem___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, hPolicy, QSizePolicy\\Policy, 0, "QSizePolicy\\Policy::MINIMUM")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, vPolicy, QSizePolicy\\Policy, 0, "QSizePolicy\\Policy::MINIMUM")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSpacerItem_changeSize, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, hPolicy, QSizePolicy\\Policy, 0, "QSizePolicy\\Policy::MINIMUM")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, vPolicy, QSizePolicy\\Policy, 0, "QSizePolicy\\Policy::MINIMUM")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSpacerItem_sizeHint, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QBoxLayout___construct arginfo_class_QLayout___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QBoxLayout_addWidget, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, widget, QWidget, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, stretch, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_TYPE_MASK(0, alignment, Qt\\AlignmentFlag, MAY_BE_LONG, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QBoxLayout_insertWidget, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, widget, QWidget, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, stretch, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_TYPE_MASK(0, alignment, Qt\\AlignmentFlag, MAY_BE_LONG, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QBoxLayout_addLayout, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, layout, QLayout, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, stretch, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QBoxLayout_addStretch, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, stretch, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QBoxLayout_setStretch, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QBoxLayout_stretch, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QBoxLayout_setAlignment, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, widget, QWidget, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, alignment, Qt\\AlignmentFlag, MAY_BE_LONG, NULL)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QVBoxLayout___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_QHBoxLayout___construct arginfo_class_QVBoxLayout___construct

#define arginfo_class_QGridLayout___construct arginfo_class_QVBoxLayout___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QGridLayout_addWidget, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, widget, QWidget, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rowSpan, IS_LONG, 0, "1")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, columnSpan, IS_LONG, 0, "1")
	ZEND_ARG_OBJ_TYPE_MASK(0, alignment, Qt\\AlignmentFlag, MAY_BE_LONG, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_QGridLayout_rowCount arginfo_class_QLayout_spacing

#define arginfo_class_QGridLayout_columnCount arginfo_class_QLayout_spacing

#define arginfo_class_QGridLayout_setHorizontalSpacing arginfo_class_QLayout_setSpacing

#define arginfo_class_QGridLayout_setVerticalSpacing arginfo_class_QLayout_setSpacing

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QGridLayout_itemAtPosition, 0, 2, QWidget, 1)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QGridLayout_setRowStretch, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QGridLayout_setColumnStretch, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QGridLayout_rowStretch, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QGridLayout_columnStretch, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QGridLayout_addItem, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, item, QSpacerItem, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rowSpan, IS_LONG, 0, "1")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, columnSpan, IS_LONG, 0, "1")
	ZEND_ARG_OBJ_TYPE_MASK(0, alignment, Qt\\AlignmentFlag, MAY_BE_LONG, "0")
ZEND_END_ARG_INFO()

ZEND_METHOD(QLayout, __construct);
ZEND_METHOD(QLayout, setSpacing);
ZEND_METHOD(QLayout, spacing);
ZEND_METHOD(QLayout, setContentsMargins);
ZEND_METHOD(QLayout, count);
ZEND_METHOD(QLayout, removeWidget);
ZEND_METHOD(QLayout, indexOf);
ZEND_METHOD(QLayout, itemAtWidget);
ZEND_METHOD(QLayout, invalidate);
ZEND_METHOD(QSpacerItem, __construct);
ZEND_METHOD(QSpacerItem, changeSize);
ZEND_METHOD(QSpacerItem, sizeHint);
ZEND_METHOD(QBoxLayout, __construct);
ZEND_METHOD(QBoxLayout, addWidget);
ZEND_METHOD(QBoxLayout, insertWidget);
ZEND_METHOD(QBoxLayout, addLayout);
ZEND_METHOD(QBoxLayout, addStretch);
ZEND_METHOD(QBoxLayout, setStretch);
ZEND_METHOD(QBoxLayout, stretch);
ZEND_METHOD(QBoxLayout, setAlignment);
ZEND_METHOD(QVBoxLayout, __construct);
ZEND_METHOD(QHBoxLayout, __construct);
ZEND_METHOD(QGridLayout, __construct);
ZEND_METHOD(QGridLayout, addWidget);
ZEND_METHOD(QGridLayout, rowCount);
ZEND_METHOD(QGridLayout, columnCount);
ZEND_METHOD(QGridLayout, setHorizontalSpacing);
ZEND_METHOD(QGridLayout, setVerticalSpacing);
ZEND_METHOD(QGridLayout, itemAtPosition);
ZEND_METHOD(QGridLayout, setRowStretch);
ZEND_METHOD(QGridLayout, setColumnStretch);
ZEND_METHOD(QGridLayout, rowStretch);
ZEND_METHOD(QGridLayout, columnStretch);
ZEND_METHOD(QGridLayout, addItem);

static const zend_function_entry class_QLayout_methods[] = {
	ZEND_ME(QLayout, __construct, arginfo_class_QLayout___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QLayout, setSpacing, arginfo_class_QLayout_setSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(QLayout, spacing, arginfo_class_QLayout_spacing, ZEND_ACC_PUBLIC)
	ZEND_ME(QLayout, setContentsMargins, arginfo_class_QLayout_setContentsMargins, ZEND_ACC_PUBLIC)
	ZEND_ME(QLayout, count, arginfo_class_QLayout_count, ZEND_ACC_PUBLIC)
	ZEND_ME(QLayout, removeWidget, arginfo_class_QLayout_removeWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QLayout, indexOf, arginfo_class_QLayout_indexOf, ZEND_ACC_PUBLIC)
	ZEND_ME(QLayout, itemAtWidget, arginfo_class_QLayout_itemAtWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QLayout, invalidate, arginfo_class_QLayout_invalidate, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QSpacerItem_methods[] = {
	ZEND_ME(QSpacerItem, __construct, arginfo_class_QSpacerItem___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QSpacerItem, changeSize, arginfo_class_QSpacerItem_changeSize, ZEND_ACC_PUBLIC)
	ZEND_ME(QSpacerItem, sizeHint, arginfo_class_QSpacerItem_sizeHint, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QBoxLayout_methods[] = {
	ZEND_ME(QBoxLayout, __construct, arginfo_class_QBoxLayout___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QBoxLayout, addWidget, arginfo_class_QBoxLayout_addWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QBoxLayout, insertWidget, arginfo_class_QBoxLayout_insertWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QBoxLayout, addLayout, arginfo_class_QBoxLayout_addLayout, ZEND_ACC_PUBLIC)
	ZEND_ME(QBoxLayout, addStretch, arginfo_class_QBoxLayout_addStretch, ZEND_ACC_PUBLIC)
	ZEND_ME(QBoxLayout, setStretch, arginfo_class_QBoxLayout_setStretch, ZEND_ACC_PUBLIC)
	ZEND_ME(QBoxLayout, stretch, arginfo_class_QBoxLayout_stretch, ZEND_ACC_PUBLIC)
	ZEND_ME(QBoxLayout, setAlignment, arginfo_class_QBoxLayout_setAlignment, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QVBoxLayout_methods[] = {
	ZEND_ME(QVBoxLayout, __construct, arginfo_class_QVBoxLayout___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QHBoxLayout_methods[] = {
	ZEND_ME(QHBoxLayout, __construct, arginfo_class_QHBoxLayout___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QGridLayout_methods[] = {
	ZEND_ME(QGridLayout, __construct, arginfo_class_QGridLayout___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QGridLayout, addWidget, arginfo_class_QGridLayout_addWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QGridLayout, rowCount, arginfo_class_QGridLayout_rowCount, ZEND_ACC_PUBLIC)
	ZEND_ME(QGridLayout, columnCount, arginfo_class_QGridLayout_columnCount, ZEND_ACC_PUBLIC)
	ZEND_ME(QGridLayout, setHorizontalSpacing, arginfo_class_QGridLayout_setHorizontalSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(QGridLayout, setVerticalSpacing, arginfo_class_QGridLayout_setVerticalSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(QGridLayout, itemAtPosition, arginfo_class_QGridLayout_itemAtPosition, ZEND_ACC_PUBLIC)
	ZEND_ME(QGridLayout, setRowStretch, arginfo_class_QGridLayout_setRowStretch, ZEND_ACC_PUBLIC)
	ZEND_ME(QGridLayout, setColumnStretch, arginfo_class_QGridLayout_setColumnStretch, ZEND_ACC_PUBLIC)
	ZEND_ME(QGridLayout, rowStretch, arginfo_class_QGridLayout_rowStretch, ZEND_ACC_PUBLIC)
	ZEND_ME(QGridLayout, columnStretch, arginfo_class_QGridLayout_columnStretch, ZEND_ACC_PUBLIC)
	ZEND_ME(QGridLayout, addItem, arginfo_class_QGridLayout_addItem, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QSizePolicy_Policy(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QSizePolicy\\Policy", IS_LONG, NULL);

	zval enum_case_FIXED_value;
	ZVAL_LONG(&enum_case_FIXED_value, 0);
	zend_enum_add_case_cstr(class_entry, "FIXED", &enum_case_FIXED_value);

	zval enum_case_MINIMUM_value;
	ZVAL_LONG(&enum_case_MINIMUM_value, 1);
	zend_enum_add_case_cstr(class_entry, "MINIMUM", &enum_case_MINIMUM_value);

	zval enum_case_MAXIMUM_value;
	ZVAL_LONG(&enum_case_MAXIMUM_value, 4);
	zend_enum_add_case_cstr(class_entry, "MAXIMUM", &enum_case_MAXIMUM_value);

	zval enum_case_PREFERRED_value;
	ZVAL_LONG(&enum_case_PREFERRED_value, 5);
	zend_enum_add_case_cstr(class_entry, "PREFERRED", &enum_case_PREFERRED_value);

	zval enum_case_MINIMUM_EXPANDING_value;
	ZVAL_LONG(&enum_case_MINIMUM_EXPANDING_value, 3);
	zend_enum_add_case_cstr(class_entry, "MINIMUM_EXPANDING", &enum_case_MINIMUM_EXPANDING_value);

	zval enum_case_EXPANDING_value;
	ZVAL_LONG(&enum_case_EXPANDING_value, 7);
	zend_enum_add_case_cstr(class_entry, "EXPANDING", &enum_case_EXPANDING_value);

	zval enum_case_IGNORED_value;
	ZVAL_LONG(&enum_case_IGNORED_value, 13);
	zend_enum_add_case_cstr(class_entry, "IGNORED", &enum_case_IGNORED_value);

	return class_entry;
}

static zend_class_entry *register_class_QLayout(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QLayout", class_QLayout_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QSpacerItem(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QSpacerItem", class_QSpacerItem_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QBoxLayout(zend_class_entry *class_entry_QLayout)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QBoxLayout", class_QBoxLayout_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QLayout, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QVBoxLayout(zend_class_entry *class_entry_QBoxLayout)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QVBoxLayout", class_QVBoxLayout_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QBoxLayout, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QHBoxLayout(zend_class_entry *class_entry_QBoxLayout)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QHBoxLayout", class_QHBoxLayout_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QBoxLayout, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QGridLayout(zend_class_entry *class_entry_QLayout)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QGridLayout", class_QGridLayout_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QLayout, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
