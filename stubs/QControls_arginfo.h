/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 37b49c8cdb9f0bc165eeda4c063458d53cab4259 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QLabel___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 0, "\"\"")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLabel_text, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLabel_setText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLabel_alignment, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLabel_setAlignment, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, alignment, Qt\\AlignmentFlag, MAY_BE_LONG, NULL)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLabel_wordWrap, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLabel_setWordWrap, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLabel_setScaledContents, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, scaled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QLabel_textFormat, 0, 0, Qt\\TextFormat, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLabel_setTextFormat, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, format, Qt\\TextFormat, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLabel_setPixmap, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pixmap, QPixmap, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QLabel_pixmap, 0, 0, QPixmap, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QAbstractButton___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAbstractButton_text arginfo_class_QLabel_text

#define arginfo_class_QAbstractButton_setText arginfo_class_QLabel_setText

#define arginfo_class_QAbstractButton_isCheckable arginfo_class_QLabel_wordWrap

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractButton_setCheckable, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, checkable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAbstractButton_isChecked arginfo_class_QLabel_wordWrap

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractButton_setChecked, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, checked, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractButton_click, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAbstractButton_toggle arginfo_class_QAbstractButton_click

#define arginfo_class_QPushButton___construct arginfo_class_QLabel___construct

#define arginfo_class_QCheckBox___construct arginfo_class_QLabel___construct

#define arginfo_class_QAbstractSlider___construct arginfo_class_QAbstractButton___construct

#define arginfo_class_QAbstractSlider_minimum arginfo_class_QLabel_alignment

#define arginfo_class_QAbstractSlider_maximum arginfo_class_QLabel_alignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractSlider_setRange, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAbstractSlider_value arginfo_class_QLabel_alignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractSlider_setValue, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QAbstractSlider_orientation, 0, 0, Qt\\Orientation, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractSlider_setOrientation, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, orientation, Qt\\Orientation, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAbstractSlider_singleStep arginfo_class_QLabel_alignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractSlider_setSingleStep, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAbstractSlider_pageStep arginfo_class_QLabel_alignment

#define arginfo_class_QAbstractSlider_setPageStep arginfo_class_QAbstractSlider_setSingleStep

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QSlider___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, orientation, Qt\\Orientation, 0, "Qt\\Orientation::VERTICAL")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QComboBox___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_QComboBox_addItem arginfo_class_QLabel_setText

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QComboBox_addItems, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, texts, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QComboBox_clear arginfo_class_QAbstractButton_click

#define arginfo_class_QComboBox_count arginfo_class_QLabel_alignment

#define arginfo_class_QComboBox_currentIndex arginfo_class_QLabel_alignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QComboBox_setCurrentIndex, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QComboBox_currentText arginfo_class_QLabel_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QComboBox_itemText, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QLineEdit___construct arginfo_class_QLabel___construct

#define arginfo_class_QLineEdit_text arginfo_class_QLabel_text

#define arginfo_class_QLineEdit_setText arginfo_class_QLabel_setText

#define arginfo_class_QLineEdit_placeholderText arginfo_class_QLabel_text

#define arginfo_class_QLineEdit_setPlaceholderText arginfo_class_QLabel_setText

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QLineEdit_echoMode, 0, 0, QLineEdit\\EchoMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLineEdit_setEchoMode, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, mode, QLineEdit\\EchoMode, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QLineEdit_isReadOnly arginfo_class_QLabel_wordWrap

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLineEdit_setReadOnly, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, readOnly, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QPlainTextEdit___construct arginfo_class_QComboBox___construct

#define arginfo_class_QPlainTextEdit_toPlainText arginfo_class_QLabel_text

#define arginfo_class_QPlainTextEdit_setPlainText arginfo_class_QLabel_setText

#define arginfo_class_QPlainTextEdit_isReadOnly arginfo_class_QLabel_wordWrap

#define arginfo_class_QPlainTextEdit_setReadOnly arginfo_class_QLineEdit_setReadOnly

#define arginfo_class_QDateEdit___construct arginfo_class_QComboBox___construct

#define arginfo_class_QDateEdit_date arginfo_class_QLabel_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDateEdit_setDate, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDateEdit_setCalendarPopup, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QDateEdit_calendarWidget, 0, 0, QWidget, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_QDateEdit_minimumDate arginfo_class_QLabel_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDateEdit_setMinimumDate, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDateEdit_setDisplayFormat, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QProgressBar___construct arginfo_class_QComboBox___construct

#define arginfo_class_QProgressBar_minimum arginfo_class_QLabel_alignment

#define arginfo_class_QProgressBar_maximum arginfo_class_QLabel_alignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QProgressBar_setRange, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, minimum, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximum, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QProgressBar_value arginfo_class_QLabel_alignment

#define arginfo_class_QProgressBar_setValue arginfo_class_QAbstractSlider_setValue

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QProgressBar_setTextVisible, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QProgressBar_reset arginfo_class_QAbstractButton_click

#define arginfo_class_QFrame___construct arginfo_class_QComboBox___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QFrame_frameShape, 0, 0, QFrame\\Shape, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFrame_setFrameShape, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, shape, QFrame\\Shape, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFrame_setFrameShadow, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, shadow, QFrame\\Shadow, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QScrollArea___construct arginfo_class_QComboBox___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QScrollArea_setWidget, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, widget, QWidget, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QScrollArea_widget arginfo_class_QDateEdit_calendarWidget

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QScrollArea_setWidgetResizable, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, resizable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QScrollArea_setHorizontalScrollBarPolicy, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, policy, Qt\\ScrollBarPolicy, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QScrollArea_setVerticalScrollBarPolicy arginfo_class_QScrollArea_setHorizontalScrollBarPolicy

#define arginfo_class_QAbstractItemView___construct arginfo_class_QAbstractButton___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractItemView_setSelectionBehavior, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, behavior, QAbstractItemView\\SelectionBehavior, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractItemView_setSelectionMode, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, mode, QAbstractItemView\\SelectionMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractItemView_setEditTriggers, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, triggers, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAbstractItemView_clearSelection arginfo_class_QAbstractButton_click

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QTableWidget___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rows, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, columns, IS_LONG, 0, "0")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_QTableWidget_rowCount arginfo_class_QLabel_alignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTableWidget_setRowCount, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTableWidget_columnCount arginfo_class_QLabel_alignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTableWidget_setColumnCount, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTableWidget_setHorizontalHeaderLabels, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, labels, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTableWidget_setItem, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, item, QTableWidgetItem, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QTableWidget_item, 0, 2, QTableWidgetItem, 1)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTableWidget_selectedItems, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QTableWidget_horizontalHeaderItem, 0, 1, QTableWidgetItem, 1)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTableWidget_clearContents arginfo_class_QAbstractButton_click

#define arginfo_class_QTableWidget_currentRow arginfo_class_QLabel_alignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTableWidget_selectRow, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QLabel, __construct);
ZEND_METHOD(QLabel, text);
ZEND_METHOD(QLabel, setText);
ZEND_METHOD(QLabel, alignment);
ZEND_METHOD(QLabel, setAlignment);
ZEND_METHOD(QLabel, wordWrap);
ZEND_METHOD(QLabel, setWordWrap);
ZEND_METHOD(QLabel, setScaledContents);
ZEND_METHOD(QLabel, textFormat);
ZEND_METHOD(QLabel, setTextFormat);
ZEND_METHOD(QLabel, setPixmap);
ZEND_METHOD(QLabel, pixmap);
ZEND_METHOD(QAbstractButton, __construct);
ZEND_METHOD(QAbstractButton, text);
ZEND_METHOD(QAbstractButton, setText);
ZEND_METHOD(QAbstractButton, isCheckable);
ZEND_METHOD(QAbstractButton, setCheckable);
ZEND_METHOD(QAbstractButton, isChecked);
ZEND_METHOD(QAbstractButton, setChecked);
ZEND_METHOD(QAbstractButton, click);
ZEND_METHOD(QAbstractButton, toggle);
ZEND_METHOD(QPushButton, __construct);
ZEND_METHOD(QCheckBox, __construct);
ZEND_METHOD(QAbstractSlider, __construct);
ZEND_METHOD(QAbstractSlider, minimum);
ZEND_METHOD(QAbstractSlider, maximum);
ZEND_METHOD(QAbstractSlider, setRange);
ZEND_METHOD(QAbstractSlider, value);
ZEND_METHOD(QAbstractSlider, setValue);
ZEND_METHOD(QAbstractSlider, orientation);
ZEND_METHOD(QAbstractSlider, setOrientation);
ZEND_METHOD(QAbstractSlider, singleStep);
ZEND_METHOD(QAbstractSlider, setSingleStep);
ZEND_METHOD(QAbstractSlider, pageStep);
ZEND_METHOD(QAbstractSlider, setPageStep);
ZEND_METHOD(QSlider, __construct);
ZEND_METHOD(QComboBox, __construct);
ZEND_METHOD(QComboBox, addItem);
ZEND_METHOD(QComboBox, addItems);
ZEND_METHOD(QComboBox, clear);
ZEND_METHOD(QComboBox, count);
ZEND_METHOD(QComboBox, currentIndex);
ZEND_METHOD(QComboBox, setCurrentIndex);
ZEND_METHOD(QComboBox, currentText);
ZEND_METHOD(QComboBox, itemText);
ZEND_METHOD(QLineEdit, __construct);
ZEND_METHOD(QLineEdit, text);
ZEND_METHOD(QLineEdit, setText);
ZEND_METHOD(QLineEdit, placeholderText);
ZEND_METHOD(QLineEdit, setPlaceholderText);
ZEND_METHOD(QLineEdit, echoMode);
ZEND_METHOD(QLineEdit, setEchoMode);
ZEND_METHOD(QLineEdit, isReadOnly);
ZEND_METHOD(QLineEdit, setReadOnly);
ZEND_METHOD(QPlainTextEdit, __construct);
ZEND_METHOD(QPlainTextEdit, toPlainText);
ZEND_METHOD(QPlainTextEdit, setPlainText);
ZEND_METHOD(QPlainTextEdit, isReadOnly);
ZEND_METHOD(QPlainTextEdit, setReadOnly);
ZEND_METHOD(QDateEdit, __construct);
ZEND_METHOD(QDateEdit, date);
ZEND_METHOD(QDateEdit, setDate);
ZEND_METHOD(QDateEdit, setCalendarPopup);
ZEND_METHOD(QDateEdit, calendarWidget);
ZEND_METHOD(QDateEdit, minimumDate);
ZEND_METHOD(QDateEdit, setMinimumDate);
ZEND_METHOD(QDateEdit, setDisplayFormat);
ZEND_METHOD(QProgressBar, __construct);
ZEND_METHOD(QProgressBar, minimum);
ZEND_METHOD(QProgressBar, maximum);
ZEND_METHOD(QProgressBar, setRange);
ZEND_METHOD(QProgressBar, value);
ZEND_METHOD(QProgressBar, setValue);
ZEND_METHOD(QProgressBar, setTextVisible);
ZEND_METHOD(QProgressBar, reset);
ZEND_METHOD(QFrame, __construct);
ZEND_METHOD(QFrame, frameShape);
ZEND_METHOD(QFrame, setFrameShape);
ZEND_METHOD(QFrame, setFrameShadow);
ZEND_METHOD(QScrollArea, __construct);
ZEND_METHOD(QScrollArea, setWidget);
ZEND_METHOD(QScrollArea, widget);
ZEND_METHOD(QScrollArea, setWidgetResizable);
ZEND_METHOD(QScrollArea, setHorizontalScrollBarPolicy);
ZEND_METHOD(QScrollArea, setVerticalScrollBarPolicy);
ZEND_METHOD(QAbstractItemView, __construct);
ZEND_METHOD(QAbstractItemView, setSelectionBehavior);
ZEND_METHOD(QAbstractItemView, setSelectionMode);
ZEND_METHOD(QAbstractItemView, setEditTriggers);
ZEND_METHOD(QAbstractItemView, clearSelection);
ZEND_METHOD(QTableWidget, __construct);
ZEND_METHOD(QTableWidget, rowCount);
ZEND_METHOD(QTableWidget, setRowCount);
ZEND_METHOD(QTableWidget, columnCount);
ZEND_METHOD(QTableWidget, setColumnCount);
ZEND_METHOD(QTableWidget, setHorizontalHeaderLabels);
ZEND_METHOD(QTableWidget, setItem);
ZEND_METHOD(QTableWidget, item);
ZEND_METHOD(QTableWidget, selectedItems);
ZEND_METHOD(QTableWidget, horizontalHeaderItem);
ZEND_METHOD(QTableWidget, clearContents);
ZEND_METHOD(QTableWidget, currentRow);
ZEND_METHOD(QTableWidget, selectRow);

static const zend_function_entry class_QLabel_methods[] = {
	ZEND_ME(QLabel, __construct, arginfo_class_QLabel___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, text, arginfo_class_QLabel_text, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, setText, arginfo_class_QLabel_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, alignment, arginfo_class_QLabel_alignment, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, setAlignment, arginfo_class_QLabel_setAlignment, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, wordWrap, arginfo_class_QLabel_wordWrap, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, setWordWrap, arginfo_class_QLabel_setWordWrap, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, setScaledContents, arginfo_class_QLabel_setScaledContents, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, textFormat, arginfo_class_QLabel_textFormat, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, setTextFormat, arginfo_class_QLabel_setTextFormat, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, setPixmap, arginfo_class_QLabel_setPixmap, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, pixmap, arginfo_class_QLabel_pixmap, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QAbstractButton_methods[] = {
	ZEND_ME(QAbstractButton, __construct, arginfo_class_QAbstractButton___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QAbstractButton, text, arginfo_class_QAbstractButton_text, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractButton, setText, arginfo_class_QAbstractButton_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractButton, isCheckable, arginfo_class_QAbstractButton_isCheckable, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractButton, setCheckable, arginfo_class_QAbstractButton_setCheckable, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractButton, isChecked, arginfo_class_QAbstractButton_isChecked, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractButton, setChecked, arginfo_class_QAbstractButton_setChecked, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractButton, click, arginfo_class_QAbstractButton_click, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractButton, toggle, arginfo_class_QAbstractButton_toggle, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QPushButton_methods[] = {
	ZEND_ME(QPushButton, __construct, arginfo_class_QPushButton___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QCheckBox_methods[] = {
	ZEND_ME(QCheckBox, __construct, arginfo_class_QCheckBox___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QAbstractSlider_methods[] = {
	ZEND_ME(QAbstractSlider, __construct, arginfo_class_QAbstractSlider___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QAbstractSlider, minimum, arginfo_class_QAbstractSlider_minimum, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractSlider, maximum, arginfo_class_QAbstractSlider_maximum, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractSlider, setRange, arginfo_class_QAbstractSlider_setRange, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractSlider, value, arginfo_class_QAbstractSlider_value, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractSlider, setValue, arginfo_class_QAbstractSlider_setValue, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractSlider, orientation, arginfo_class_QAbstractSlider_orientation, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractSlider, setOrientation, arginfo_class_QAbstractSlider_setOrientation, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractSlider, singleStep, arginfo_class_QAbstractSlider_singleStep, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractSlider, setSingleStep, arginfo_class_QAbstractSlider_setSingleStep, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractSlider, pageStep, arginfo_class_QAbstractSlider_pageStep, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractSlider, setPageStep, arginfo_class_QAbstractSlider_setPageStep, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QSlider_methods[] = {
	ZEND_ME(QSlider, __construct, arginfo_class_QSlider___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QComboBox_methods[] = {
	ZEND_ME(QComboBox, __construct, arginfo_class_QComboBox___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QComboBox, addItem, arginfo_class_QComboBox_addItem, ZEND_ACC_PUBLIC)
	ZEND_ME(QComboBox, addItems, arginfo_class_QComboBox_addItems, ZEND_ACC_PUBLIC)
	ZEND_ME(QComboBox, clear, arginfo_class_QComboBox_clear, ZEND_ACC_PUBLIC)
	ZEND_ME(QComboBox, count, arginfo_class_QComboBox_count, ZEND_ACC_PUBLIC)
	ZEND_ME(QComboBox, currentIndex, arginfo_class_QComboBox_currentIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(QComboBox, setCurrentIndex, arginfo_class_QComboBox_setCurrentIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(QComboBox, currentText, arginfo_class_QComboBox_currentText, ZEND_ACC_PUBLIC)
	ZEND_ME(QComboBox, itemText, arginfo_class_QComboBox_itemText, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QLineEdit_methods[] = {
	ZEND_ME(QLineEdit, __construct, arginfo_class_QLineEdit___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, text, arginfo_class_QLineEdit_text, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, setText, arginfo_class_QLineEdit_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, placeholderText, arginfo_class_QLineEdit_placeholderText, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, setPlaceholderText, arginfo_class_QLineEdit_setPlaceholderText, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, echoMode, arginfo_class_QLineEdit_echoMode, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, setEchoMode, arginfo_class_QLineEdit_setEchoMode, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, isReadOnly, arginfo_class_QLineEdit_isReadOnly, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, setReadOnly, arginfo_class_QLineEdit_setReadOnly, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QPlainTextEdit_methods[] = {
	ZEND_ME(QPlainTextEdit, __construct, arginfo_class_QPlainTextEdit___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, toPlainText, arginfo_class_QPlainTextEdit_toPlainText, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, setPlainText, arginfo_class_QPlainTextEdit_setPlainText, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, isReadOnly, arginfo_class_QPlainTextEdit_isReadOnly, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, setReadOnly, arginfo_class_QPlainTextEdit_setReadOnly, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QDateEdit_methods[] = {
	ZEND_ME(QDateEdit, __construct, arginfo_class_QDateEdit___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QDateEdit, date, arginfo_class_QDateEdit_date, ZEND_ACC_PUBLIC)
	ZEND_ME(QDateEdit, setDate, arginfo_class_QDateEdit_setDate, ZEND_ACC_PUBLIC)
	ZEND_ME(QDateEdit, setCalendarPopup, arginfo_class_QDateEdit_setCalendarPopup, ZEND_ACC_PUBLIC)
	ZEND_ME(QDateEdit, calendarWidget, arginfo_class_QDateEdit_calendarWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QDateEdit, minimumDate, arginfo_class_QDateEdit_minimumDate, ZEND_ACC_PUBLIC)
	ZEND_ME(QDateEdit, setMinimumDate, arginfo_class_QDateEdit_setMinimumDate, ZEND_ACC_PUBLIC)
	ZEND_ME(QDateEdit, setDisplayFormat, arginfo_class_QDateEdit_setDisplayFormat, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QProgressBar_methods[] = {
	ZEND_ME(QProgressBar, __construct, arginfo_class_QProgressBar___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QProgressBar, minimum, arginfo_class_QProgressBar_minimum, ZEND_ACC_PUBLIC)
	ZEND_ME(QProgressBar, maximum, arginfo_class_QProgressBar_maximum, ZEND_ACC_PUBLIC)
	ZEND_ME(QProgressBar, setRange, arginfo_class_QProgressBar_setRange, ZEND_ACC_PUBLIC)
	ZEND_ME(QProgressBar, value, arginfo_class_QProgressBar_value, ZEND_ACC_PUBLIC)
	ZEND_ME(QProgressBar, setValue, arginfo_class_QProgressBar_setValue, ZEND_ACC_PUBLIC)
	ZEND_ME(QProgressBar, setTextVisible, arginfo_class_QProgressBar_setTextVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(QProgressBar, reset, arginfo_class_QProgressBar_reset, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QFrame_methods[] = {
	ZEND_ME(QFrame, __construct, arginfo_class_QFrame___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QFrame, frameShape, arginfo_class_QFrame_frameShape, ZEND_ACC_PUBLIC)
	ZEND_ME(QFrame, setFrameShape, arginfo_class_QFrame_setFrameShape, ZEND_ACC_PUBLIC)
	ZEND_ME(QFrame, setFrameShadow, arginfo_class_QFrame_setFrameShadow, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QScrollArea_methods[] = {
	ZEND_ME(QScrollArea, __construct, arginfo_class_QScrollArea___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QScrollArea, setWidget, arginfo_class_QScrollArea_setWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QScrollArea, widget, arginfo_class_QScrollArea_widget, ZEND_ACC_PUBLIC)
	ZEND_ME(QScrollArea, setWidgetResizable, arginfo_class_QScrollArea_setWidgetResizable, ZEND_ACC_PUBLIC)
	ZEND_ME(QScrollArea, setHorizontalScrollBarPolicy, arginfo_class_QScrollArea_setHorizontalScrollBarPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(QScrollArea, setVerticalScrollBarPolicy, arginfo_class_QScrollArea_setVerticalScrollBarPolicy, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QAbstractItemView_methods[] = {
	ZEND_ME(QAbstractItemView, __construct, arginfo_class_QAbstractItemView___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QAbstractItemView, setSelectionBehavior, arginfo_class_QAbstractItemView_setSelectionBehavior, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractItemView, setSelectionMode, arginfo_class_QAbstractItemView_setSelectionMode, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractItemView, setEditTriggers, arginfo_class_QAbstractItemView_setEditTriggers, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractItemView, clearSelection, arginfo_class_QAbstractItemView_clearSelection, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QTableWidget_methods[] = {
	ZEND_ME(QTableWidget, __construct, arginfo_class_QTableWidget___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidget, rowCount, arginfo_class_QTableWidget_rowCount, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidget, setRowCount, arginfo_class_QTableWidget_setRowCount, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidget, columnCount, arginfo_class_QTableWidget_columnCount, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidget, setColumnCount, arginfo_class_QTableWidget_setColumnCount, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidget, setHorizontalHeaderLabels, arginfo_class_QTableWidget_setHorizontalHeaderLabels, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidget, setItem, arginfo_class_QTableWidget_setItem, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidget, item, arginfo_class_QTableWidget_item, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidget, selectedItems, arginfo_class_QTableWidget_selectedItems, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidget, horizontalHeaderItem, arginfo_class_QTableWidget_horizontalHeaderItem, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidget, clearContents, arginfo_class_QTableWidget_clearContents, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidget, currentRow, arginfo_class_QTableWidget_currentRow, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidget, selectRow, arginfo_class_QTableWidget_selectRow, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QLineEdit_EchoMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QLineEdit\\EchoMode", IS_LONG, NULL);

	zval enum_case_NORMAL_value;
	ZVAL_LONG(&enum_case_NORMAL_value, 0);
	zend_enum_add_case_cstr(class_entry, "NORMAL", &enum_case_NORMAL_value);

	zval enum_case_NO_ECHO_value;
	ZVAL_LONG(&enum_case_NO_ECHO_value, 1);
	zend_enum_add_case_cstr(class_entry, "NO_ECHO", &enum_case_NO_ECHO_value);

	zval enum_case_PASSWORD_value;
	ZVAL_LONG(&enum_case_PASSWORD_value, 2);
	zend_enum_add_case_cstr(class_entry, "PASSWORD", &enum_case_PASSWORD_value);

	zval enum_case_PASSWORD_ECHO_ON_EDIT_value;
	ZVAL_LONG(&enum_case_PASSWORD_ECHO_ON_EDIT_value, 3);
	zend_enum_add_case_cstr(class_entry, "PASSWORD_ECHO_ON_EDIT", &enum_case_PASSWORD_ECHO_ON_EDIT_value);

	return class_entry;
}

static zend_class_entry *register_class_QFrame_Shape(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QFrame\\Shape", IS_LONG, NULL);

	zval enum_case_NO_FRAME_value;
	ZVAL_LONG(&enum_case_NO_FRAME_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_FRAME", &enum_case_NO_FRAME_value);

	zval enum_case_BOX_value;
	ZVAL_LONG(&enum_case_BOX_value, 1);
	zend_enum_add_case_cstr(class_entry, "BOX", &enum_case_BOX_value);

	zval enum_case_PANEL_value;
	ZVAL_LONG(&enum_case_PANEL_value, 2);
	zend_enum_add_case_cstr(class_entry, "PANEL", &enum_case_PANEL_value);

	zval enum_case_WIN_PANEL_value;
	ZVAL_LONG(&enum_case_WIN_PANEL_value, 3);
	zend_enum_add_case_cstr(class_entry, "WIN_PANEL", &enum_case_WIN_PANEL_value);

	zval enum_case_H_LINE_value;
	ZVAL_LONG(&enum_case_H_LINE_value, 4);
	zend_enum_add_case_cstr(class_entry, "H_LINE", &enum_case_H_LINE_value);

	zval enum_case_V_LINE_value;
	ZVAL_LONG(&enum_case_V_LINE_value, 5);
	zend_enum_add_case_cstr(class_entry, "V_LINE", &enum_case_V_LINE_value);

	zval enum_case_STYLED_PANEL_value;
	ZVAL_LONG(&enum_case_STYLED_PANEL_value, 6);
	zend_enum_add_case_cstr(class_entry, "STYLED_PANEL", &enum_case_STYLED_PANEL_value);

	return class_entry;
}

static zend_class_entry *register_class_QFrame_Shadow(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QFrame\\Shadow", IS_LONG, NULL);

	zval enum_case_PLAIN_value;
	ZVAL_LONG(&enum_case_PLAIN_value, 16);
	zend_enum_add_case_cstr(class_entry, "PLAIN", &enum_case_PLAIN_value);

	zval enum_case_RAISED_value;
	ZVAL_LONG(&enum_case_RAISED_value, 32);
	zend_enum_add_case_cstr(class_entry, "RAISED", &enum_case_RAISED_value);

	zval enum_case_SUNKEN_value;
	ZVAL_LONG(&enum_case_SUNKEN_value, 48);
	zend_enum_add_case_cstr(class_entry, "SUNKEN", &enum_case_SUNKEN_value);

	return class_entry;
}

static zend_class_entry *register_class_QAbstractItemView_SelectionBehavior(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QAbstractItemView\\SelectionBehavior", IS_LONG, NULL);

	zval enum_case_SELECT_ITEMS_value;
	ZVAL_LONG(&enum_case_SELECT_ITEMS_value, 0);
	zend_enum_add_case_cstr(class_entry, "SELECT_ITEMS", &enum_case_SELECT_ITEMS_value);

	zval enum_case_SELECT_ROWS_value;
	ZVAL_LONG(&enum_case_SELECT_ROWS_value, 1);
	zend_enum_add_case_cstr(class_entry, "SELECT_ROWS", &enum_case_SELECT_ROWS_value);

	zval enum_case_SELECT_COLUMNS_value;
	ZVAL_LONG(&enum_case_SELECT_COLUMNS_value, 2);
	zend_enum_add_case_cstr(class_entry, "SELECT_COLUMNS", &enum_case_SELECT_COLUMNS_value);

	return class_entry;
}

static zend_class_entry *register_class_QAbstractItemView_SelectionMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QAbstractItemView\\SelectionMode", IS_LONG, NULL);

	zval enum_case_NO_SELECTION_value;
	ZVAL_LONG(&enum_case_NO_SELECTION_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_SELECTION", &enum_case_NO_SELECTION_value);

	zval enum_case_SINGLE_SELECTION_value;
	ZVAL_LONG(&enum_case_SINGLE_SELECTION_value, 1);
	zend_enum_add_case_cstr(class_entry, "SINGLE_SELECTION", &enum_case_SINGLE_SELECTION_value);

	zval enum_case_MULTI_SELECTION_value;
	ZVAL_LONG(&enum_case_MULTI_SELECTION_value, 2);
	zend_enum_add_case_cstr(class_entry, "MULTI_SELECTION", &enum_case_MULTI_SELECTION_value);

	zval enum_case_EXTENDED_SELECTION_value;
	ZVAL_LONG(&enum_case_EXTENDED_SELECTION_value, 3);
	zend_enum_add_case_cstr(class_entry, "EXTENDED_SELECTION", &enum_case_EXTENDED_SELECTION_value);

	zval enum_case_CONTIGUOUS_SELECTION_value;
	ZVAL_LONG(&enum_case_CONTIGUOUS_SELECTION_value, 4);
	zend_enum_add_case_cstr(class_entry, "CONTIGUOUS_SELECTION", &enum_case_CONTIGUOUS_SELECTION_value);

	return class_entry;
}

static zend_class_entry *register_class_QLabel(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QLabel", class_QLabel_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QAbstractButton(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QAbstractButton", class_QAbstractButton_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QPushButton(zend_class_entry *class_entry_QAbstractButton)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QPushButton", class_QPushButton_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QAbstractButton, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QCheckBox(zend_class_entry *class_entry_QAbstractButton)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QCheckBox", class_QCheckBox_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QAbstractButton, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QAbstractSlider(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QAbstractSlider", class_QAbstractSlider_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QSlider(zend_class_entry *class_entry_QAbstractSlider)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QSlider", class_QSlider_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QAbstractSlider, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QComboBox(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QComboBox", class_QComboBox_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QLineEdit(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QLineEdit", class_QLineEdit_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QPlainTextEdit(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QPlainTextEdit", class_QPlainTextEdit_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QDateEdit(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QDateEdit", class_QDateEdit_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QProgressBar(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QProgressBar", class_QProgressBar_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QFrame(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QFrame", class_QFrame_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QScrollArea(zend_class_entry *class_entry_QFrame)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QScrollArea", class_QScrollArea_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QFrame, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QAbstractItemView(zend_class_entry *class_entry_QFrame)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QAbstractItemView", class_QAbstractItemView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QFrame, ZEND_ACC_NOT_SERIALIZABLE);

	zval const_NO_EDIT_TRIGGERS_value;
	ZVAL_LONG(&const_NO_EDIT_TRIGGERS_value, QAbstractItemView::NoEditTriggers);
	zend_string *const_NO_EDIT_TRIGGERS_name = zend_string_init_interned("NO_EDIT_TRIGGERS", sizeof("NO_EDIT_TRIGGERS") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_NO_EDIT_TRIGGERS_name, &const_NO_EDIT_TRIGGERS_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_NO_EDIT_TRIGGERS_name);

	return class_entry;
}

static zend_class_entry *register_class_QTableWidget(zend_class_entry *class_entry_QAbstractItemView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QTableWidget", class_QTableWidget_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QAbstractItemView, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
