/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: e18bc0714e47591baa4b644ce179bf26debae7f5 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QAbstractItemDelegate___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QStyledItemDelegate___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QObject, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_QStyleOptionViewItem___construct arginfo_class_QAbstractItemDelegate___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QStyleOptionViewItem_rect, 0, 0, QRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QStyleOptionViewItem_state, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QPainter___construct arginfo_class_QAbstractItemDelegate___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPainter_save, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QPainter_restore arginfo_class_QPainter_save

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPainter_setRenderHint, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, hint, QPainter\\RenderHint, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, on, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPainter_setOpacity, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, opacity, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPainter_setPen, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, color, QColor, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPainter_setBrush, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, brush, QBrush, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPainter_setFont, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, font, QFont, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPainter_fillRect, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, rectangle, QRect, 0)
	ZEND_ARG_OBJ_INFO(0, color, QColor, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPainter_drawRect, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, rectangle, QRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPainter_drawRoundedRect, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, rect, QRect, 0)
	ZEND_ARG_TYPE_INFO(0, xRadius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, yRadius, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, mode, Qt\\SizeMode, 0, "Qt\\SizeMode::ABSOLUTE_SIZE")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPainter_drawPixmap, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, targetRect, QRect, 0)
	ZEND_ARG_OBJ_INFO(0, pixmap, QPixmap, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPainter_drawText, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, r, QRect, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(1, br, QRect, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QListView___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QListView_viewMode, 0, 0, QListView\\ViewMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QListView_setViewMode, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, mode, QListView\\ViewMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QListView_flow, 0, 0, QListView\\Flow, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QListView_setFlow, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, flow, QListView\\Flow, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QListView_isWrapping, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QListView_setWrapping, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QListView_resizeMode, 0, 0, QListView\\ResizeMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QListView_setResizeMode, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, mode, QListView\\ResizeMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QListView_movement, 0, 0, QListView\\Movement, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QListView_setMovement, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, movement, QListView\\Movement, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QListView_gridSize, 0, 0, QSize, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QListView_setGridSize, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, size, QSize, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QListView_spacing arginfo_class_QStyleOptionViewItem_state

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QListView_setSpacing, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, space, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QListView_uniformItemSizes arginfo_class_QListView_isWrapping

#define arginfo_class_QListView_setUniformItemSizes arginfo_class_QListView_setWrapping

#define arginfo_class_QToolBar___construct arginfo_class_QListView___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QToolBar_addWidget, 0, 1, QAction, 0)
	ZEND_ARG_OBJ_INFO(0, widget, QWidget, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QToolBar_addSeparator, 0, 0, QAction, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QToolBar_isMovable arginfo_class_QListView_isWrapping

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QToolBar_setMovable, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, movable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QToolBar_isFloatable arginfo_class_QListView_isWrapping

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QToolBar_setFloatable, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, floatable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QToolBar_iconSize arginfo_class_QListView_gridSize

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QToolBar_setIconSize, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, iconSize, QSize, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QToolBar_toolButtonStyle, 0, 0, Qt\\ToolButtonStyle, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QToolBar_setToolButtonStyle, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, toolButtonStyle, Qt\\ToolButtonStyle, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QAbstractItemDelegate, __construct);
ZEND_METHOD(QStyledItemDelegate, __construct);
ZEND_METHOD(QStyleOptionViewItem, __construct);
ZEND_METHOD(QStyleOptionViewItem, rect);
ZEND_METHOD(QStyleOptionViewItem, state);
ZEND_METHOD(QPainter, __construct);
ZEND_METHOD(QPainter, save);
ZEND_METHOD(QPainter, restore);
ZEND_METHOD(QPainter, setRenderHint);
ZEND_METHOD(QPainter, setOpacity);
ZEND_METHOD(QPainter, setPen);
ZEND_METHOD(QPainter, setBrush);
ZEND_METHOD(QPainter, setFont);
ZEND_METHOD(QPainter, fillRect);
ZEND_METHOD(QPainter, drawRect);
ZEND_METHOD(QPainter, drawRoundedRect);
ZEND_METHOD(QPainter, drawPixmap);
ZEND_METHOD(QPainter, drawText);
ZEND_METHOD(QListView, __construct);
ZEND_METHOD(QListView, viewMode);
ZEND_METHOD(QListView, setViewMode);
ZEND_METHOD(QListView, flow);
ZEND_METHOD(QListView, setFlow);
ZEND_METHOD(QListView, isWrapping);
ZEND_METHOD(QListView, setWrapping);
ZEND_METHOD(QListView, resizeMode);
ZEND_METHOD(QListView, setResizeMode);
ZEND_METHOD(QListView, movement);
ZEND_METHOD(QListView, setMovement);
ZEND_METHOD(QListView, gridSize);
ZEND_METHOD(QListView, setGridSize);
ZEND_METHOD(QListView, spacing);
ZEND_METHOD(QListView, setSpacing);
ZEND_METHOD(QListView, uniformItemSizes);
ZEND_METHOD(QListView, setUniformItemSizes);
ZEND_METHOD(QToolBar, __construct);
ZEND_METHOD(QToolBar, addWidget);
ZEND_METHOD(QToolBar, addSeparator);
ZEND_METHOD(QToolBar, isMovable);
ZEND_METHOD(QToolBar, setMovable);
ZEND_METHOD(QToolBar, isFloatable);
ZEND_METHOD(QToolBar, setFloatable);
ZEND_METHOD(QToolBar, iconSize);
ZEND_METHOD(QToolBar, setIconSize);
ZEND_METHOD(QToolBar, toolButtonStyle);
ZEND_METHOD(QToolBar, setToolButtonStyle);

static const zend_function_entry class_QAbstractItemDelegate_methods[] = {
	ZEND_ME(QAbstractItemDelegate, __construct, arginfo_class_QAbstractItemDelegate___construct, ZEND_ACC_PRIVATE)
	ZEND_FE_END
};

static const zend_function_entry class_QStyledItemDelegate_methods[] = {
	ZEND_ME(QStyledItemDelegate, __construct, arginfo_class_QStyledItemDelegate___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QStyleOptionViewItem_methods[] = {
	ZEND_ME(QStyleOptionViewItem, __construct, arginfo_class_QStyleOptionViewItem___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QStyleOptionViewItem, rect, arginfo_class_QStyleOptionViewItem_rect, ZEND_ACC_PUBLIC)
	ZEND_ME(QStyleOptionViewItem, state, arginfo_class_QStyleOptionViewItem_state, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QPainter_methods[] = {
	ZEND_ME(QPainter, __construct, arginfo_class_QPainter___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QPainter, save, arginfo_class_QPainter_save, ZEND_ACC_PUBLIC)
	ZEND_ME(QPainter, restore, arginfo_class_QPainter_restore, ZEND_ACC_PUBLIC)
	ZEND_ME(QPainter, setRenderHint, arginfo_class_QPainter_setRenderHint, ZEND_ACC_PUBLIC)
	ZEND_ME(QPainter, setOpacity, arginfo_class_QPainter_setOpacity, ZEND_ACC_PUBLIC)
	ZEND_ME(QPainter, setPen, arginfo_class_QPainter_setPen, ZEND_ACC_PUBLIC)
	ZEND_ME(QPainter, setBrush, arginfo_class_QPainter_setBrush, ZEND_ACC_PUBLIC)
	ZEND_ME(QPainter, setFont, arginfo_class_QPainter_setFont, ZEND_ACC_PUBLIC)
	ZEND_ME(QPainter, fillRect, arginfo_class_QPainter_fillRect, ZEND_ACC_PUBLIC)
	ZEND_ME(QPainter, drawRect, arginfo_class_QPainter_drawRect, ZEND_ACC_PUBLIC)
	ZEND_ME(QPainter, drawRoundedRect, arginfo_class_QPainter_drawRoundedRect, ZEND_ACC_PUBLIC)
	ZEND_ME(QPainter, drawPixmap, arginfo_class_QPainter_drawPixmap, ZEND_ACC_PUBLIC)
	ZEND_ME(QPainter, drawText, arginfo_class_QPainter_drawText, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QListView_methods[] = {
	ZEND_ME(QListView, __construct, arginfo_class_QListView___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, viewMode, arginfo_class_QListView_viewMode, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, setViewMode, arginfo_class_QListView_setViewMode, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, flow, arginfo_class_QListView_flow, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, setFlow, arginfo_class_QListView_setFlow, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, isWrapping, arginfo_class_QListView_isWrapping, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, setWrapping, arginfo_class_QListView_setWrapping, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, resizeMode, arginfo_class_QListView_resizeMode, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, setResizeMode, arginfo_class_QListView_setResizeMode, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, movement, arginfo_class_QListView_movement, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, setMovement, arginfo_class_QListView_setMovement, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, gridSize, arginfo_class_QListView_gridSize, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, setGridSize, arginfo_class_QListView_setGridSize, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, spacing, arginfo_class_QListView_spacing, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, setSpacing, arginfo_class_QListView_setSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, uniformItemSizes, arginfo_class_QListView_uniformItemSizes, ZEND_ACC_PUBLIC)
	ZEND_ME(QListView, setUniformItemSizes, arginfo_class_QListView_setUniformItemSizes, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QToolBar_methods[] = {
	ZEND_ME(QToolBar, __construct, arginfo_class_QToolBar___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QToolBar, addWidget, arginfo_class_QToolBar_addWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QToolBar, addSeparator, arginfo_class_QToolBar_addSeparator, ZEND_ACC_PUBLIC)
	ZEND_ME(QToolBar, isMovable, arginfo_class_QToolBar_isMovable, ZEND_ACC_PUBLIC)
	ZEND_ME(QToolBar, setMovable, arginfo_class_QToolBar_setMovable, ZEND_ACC_PUBLIC)
	ZEND_ME(QToolBar, isFloatable, arginfo_class_QToolBar_isFloatable, ZEND_ACC_PUBLIC)
	ZEND_ME(QToolBar, setFloatable, arginfo_class_QToolBar_setFloatable, ZEND_ACC_PUBLIC)
	ZEND_ME(QToolBar, iconSize, arginfo_class_QToolBar_iconSize, ZEND_ACC_PUBLIC)
	ZEND_ME(QToolBar, setIconSize, arginfo_class_QToolBar_setIconSize, ZEND_ACC_PUBLIC)
	ZEND_ME(QToolBar, toolButtonStyle, arginfo_class_QToolBar_toolButtonStyle, ZEND_ACC_PUBLIC)
	ZEND_ME(QToolBar, setToolButtonStyle, arginfo_class_QToolBar_setToolButtonStyle, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QListView_ViewMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QListView\\ViewMode", IS_LONG, NULL);

	zval enum_case_LIST_MODE_value;
	ZVAL_LONG(&enum_case_LIST_MODE_value, 0);
	zend_enum_add_case_cstr(class_entry, "LIST_MODE", &enum_case_LIST_MODE_value);

	zval enum_case_ICON_MODE_value;
	ZVAL_LONG(&enum_case_ICON_MODE_value, 1);
	zend_enum_add_case_cstr(class_entry, "ICON_MODE", &enum_case_ICON_MODE_value);

	return class_entry;
}

static zend_class_entry *register_class_QListView_Flow(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QListView\\Flow", IS_LONG, NULL);

	zval enum_case_LEFT_TO_RIGHT_value;
	ZVAL_LONG(&enum_case_LEFT_TO_RIGHT_value, 0);
	zend_enum_add_case_cstr(class_entry, "LEFT_TO_RIGHT", &enum_case_LEFT_TO_RIGHT_value);

	zval enum_case_TOP_TO_BOTTOM_value;
	ZVAL_LONG(&enum_case_TOP_TO_BOTTOM_value, 1);
	zend_enum_add_case_cstr(class_entry, "TOP_TO_BOTTOM", &enum_case_TOP_TO_BOTTOM_value);

	return class_entry;
}

static zend_class_entry *register_class_QListView_ResizeMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QListView\\ResizeMode", IS_LONG, NULL);

	zval enum_case_FIXED_value;
	ZVAL_LONG(&enum_case_FIXED_value, 0);
	zend_enum_add_case_cstr(class_entry, "FIXED", &enum_case_FIXED_value);

	zval enum_case_ADJUST_value;
	ZVAL_LONG(&enum_case_ADJUST_value, 1);
	zend_enum_add_case_cstr(class_entry, "ADJUST", &enum_case_ADJUST_value);

	return class_entry;
}

static zend_class_entry *register_class_QListView_Movement(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QListView\\Movement", IS_LONG, NULL);

	zval enum_case_STATIC_value;
	ZVAL_LONG(&enum_case_STATIC_value, 0);
	zend_enum_add_case_cstr(class_entry, "STATIC", &enum_case_STATIC_value);

	zval enum_case_FREE_value;
	ZVAL_LONG(&enum_case_FREE_value, 1);
	zend_enum_add_case_cstr(class_entry, "FREE", &enum_case_FREE_value);

	zval enum_case_SNAP_value;
	ZVAL_LONG(&enum_case_SNAP_value, 2);
	zend_enum_add_case_cstr(class_entry, "SNAP", &enum_case_SNAP_value);

	return class_entry;
}

static zend_class_entry *register_class_QPainter_RenderHint(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QPainter\\RenderHint", IS_LONG, NULL);

	zval enum_case_ANTIALIASING_value;
	ZVAL_LONG(&enum_case_ANTIALIASING_value, 1);
	zend_enum_add_case_cstr(class_entry, "ANTIALIASING", &enum_case_ANTIALIASING_value);

	zval enum_case_TEXT_ANTIALIASING_value;
	ZVAL_LONG(&enum_case_TEXT_ANTIALIASING_value, 2);
	zend_enum_add_case_cstr(class_entry, "TEXT_ANTIALIASING", &enum_case_TEXT_ANTIALIASING_value);

	zval enum_case_SMOOTH_PIXMAP_TRANSFORM_value;
	ZVAL_LONG(&enum_case_SMOOTH_PIXMAP_TRANSFORM_value, 4);
	zend_enum_add_case_cstr(class_entry, "SMOOTH_PIXMAP_TRANSFORM", &enum_case_SMOOTH_PIXMAP_TRANSFORM_value);

	zval enum_case_VERTICAL_SUBPIXEL_POSITIONING_value;
	ZVAL_LONG(&enum_case_VERTICAL_SUBPIXEL_POSITIONING_value, 8);
	zend_enum_add_case_cstr(class_entry, "VERTICAL_SUBPIXEL_POSITIONING", &enum_case_VERTICAL_SUBPIXEL_POSITIONING_value);

	zval enum_case_LOSSLESS_IMAGE_RENDERING_value;
	ZVAL_LONG(&enum_case_LOSSLESS_IMAGE_RENDERING_value, 64);
	zend_enum_add_case_cstr(class_entry, "LOSSLESS_IMAGE_RENDERING", &enum_case_LOSSLESS_IMAGE_RENDERING_value);

	zval enum_case_NON_COSMETIC_BRUSH_PATTERNS_value;
	ZVAL_LONG(&enum_case_NON_COSMETIC_BRUSH_PATTERNS_value, 128);
	zend_enum_add_case_cstr(class_entry, "NON_COSMETIC_BRUSH_PATTERNS", &enum_case_NON_COSMETIC_BRUSH_PATTERNS_value);

	return class_entry;
}

static zend_class_entry *register_class_QAbstractItemDelegate(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QAbstractItemDelegate", class_QAbstractItemDelegate_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QStyledItemDelegate(zend_class_entry *class_entry_QAbstractItemDelegate)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QStyledItemDelegate", class_QStyledItemDelegate_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QAbstractItemDelegate, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QStyleOptionViewItem(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QStyleOptionViewItem", class_QStyleOptionViewItem_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QPainter(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QPainter", class_QPainter_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QListView(zend_class_entry *class_entry_QAbstractItemView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QListView", class_QListView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QAbstractItemView, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QToolBar(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QToolBar", class_QToolBar_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
