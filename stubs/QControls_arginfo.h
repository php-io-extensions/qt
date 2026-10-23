/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 06f531f062ac8af384c7af6c269bd025046ed7bd */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QLabel___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 0, "\"\"")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
	ZEND_ARG_OBJ_TYPE_MASK(0, f, Qt\\WindowType, MAY_BE_LONG, "0")
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

#define arginfo_class_QLabel_openExternalLinks arginfo_class_QLabel_wordWrap

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLabel_setOpenExternalLinks, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, open, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QLabel_textInteractionFlags arginfo_class_QLabel_alignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLabel_setTextInteractionFlags, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, flags, Qt\\TextInteractionFlag, MAY_BE_LONG, NULL)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QLabel_setPixmap, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, pixmap, QPixmap, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QLabel_pixmap, 0, 0, QPixmap, 0)
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

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QPushButton___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 0, "\"\"")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_QPushButton_isDefault arginfo_class_QLabel_wordWrap

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPushButton_setDefault, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, default, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QCheckBox___construct arginfo_class_QPushButton___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QAbstractSlider___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

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

#define arginfo_class_QScrollBar___construct arginfo_class_QAbstractSlider___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QSlider___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, orientation, Qt\\Orientation, 0, "Qt\\Orientation::VERTICAL")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QComboBox___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QComboBox_addItem, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, userData, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

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

#define arginfo_class_QLineEdit___construct arginfo_class_QPushButton___construct

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

#define arginfo_class_QLineEdit_cut arginfo_class_QAbstractButton_click

#define arginfo_class_QLineEdit_copy arginfo_class_QAbstractButton_click

#define arginfo_class_QLineEdit_paste arginfo_class_QAbstractButton_click

#define arginfo_class_QLineEdit_selectAll arginfo_class_QAbstractButton_click

#define arginfo_class_QLineEdit_undo arginfo_class_QAbstractButton_click

#define arginfo_class_QLineEdit_redo arginfo_class_QAbstractButton_click

#define arginfo_class_QLineEdit_selectedText arginfo_class_QLabel_text

#define arginfo_class_QPlainTextEdit___construct arginfo_class_QComboBox___construct

#define arginfo_class_QPlainTextEdit_toPlainText arginfo_class_QLabel_text

#define arginfo_class_QPlainTextEdit_setPlainText arginfo_class_QLabel_setText

#define arginfo_class_QPlainTextEdit_isReadOnly arginfo_class_QLabel_wordWrap

#define arginfo_class_QPlainTextEdit_setReadOnly arginfo_class_QLineEdit_setReadOnly

#define arginfo_class_QPlainTextEdit_cut arginfo_class_QAbstractButton_click

#define arginfo_class_QPlainTextEdit_copy arginfo_class_QAbstractButton_click

#define arginfo_class_QPlainTextEdit_paste arginfo_class_QAbstractButton_click

#define arginfo_class_QPlainTextEdit_selectAll arginfo_class_QAbstractButton_click

#define arginfo_class_QPlainTextEdit_undo arginfo_class_QAbstractButton_click

#define arginfo_class_QPlainTextEdit_redo arginfo_class_QAbstractButton_click

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QPlainTextEdit_document, 0, 0, QTextDocument, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QPlainTextEdit_textCursor, 0, 0, QTextCursor, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPlainTextEdit_setTextCursor, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, cursor, QTextCursor, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QPlainTextEdit_ensureCursorVisible arginfo_class_QAbstractButton_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPlainTextEdit_setExtraSelections, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selections, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPlainTextEdit_extraSelections, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QPlainTextEdit_lineWrapMode, 0, 0, QPlainTextEdit\\LineWrapMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPlainTextEdit_setLineWrapMode, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, mode, QPlainTextEdit\\LineWrapMode, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QPlainTextEdit_textInteractionFlags arginfo_class_QLabel_alignment

#define arginfo_class_QPlainTextEdit_setTextInteractionFlags arginfo_class_QLabel_setTextInteractionFlags

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QPlainTextEdit_verticalScrollBar, 0, 0, QScrollBar, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QPlainTextEdit_horizontalScrollBar arginfo_class_QPlainTextEdit_verticalScrollBar

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QPlainTextEdit_viewport, 0, 0, QWidget, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QCalendarWidget___construct arginfo_class_QAbstractSlider___construct

#define arginfo_class_QDateEdit___construct arginfo_class_QComboBox___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QDateEdit_date, 0, 0, QDate, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDateEdit_setDate, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, date, QDate, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDateEdit_setCalendarPopup, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QDateEdit_calendarWidget, 0, 0, QCalendarWidget, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_QDateEdit_minimumDate arginfo_class_QDateEdit_date

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDateEdit_setMinimumDate, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, min, QDate, 0)
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

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QFrame___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
	ZEND_ARG_OBJ_TYPE_MASK(0, f, Qt\\WindowType, MAY_BE_LONG, "0")
ZEND_END_ARG_INFO()

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

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QScrollArea_widget, 0, 0, QWidget, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QScrollArea_setWidgetResizable, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, resizable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QScrollArea_setHorizontalScrollBarPolicy, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, policy, Qt\\ScrollBarPolicy, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QScrollArea_setVerticalScrollBarPolicy arginfo_class_QScrollArea_setHorizontalScrollBarPolicy

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

#define arginfo_class_QTableWidget_selectedItems arginfo_class_QPlainTextEdit_extraSelections

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QTableWidget_horizontalHeaderItem, 0, 1, QTableWidgetItem, 1)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTableWidget_clearContents arginfo_class_QAbstractButton_click

#define arginfo_class_QTableWidget_currentRow arginfo_class_QLabel_alignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTableWidget_selectRow, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTreeWidget___construct arginfo_class_QComboBox___construct

#define arginfo_class_QTreeWidget_columnCount arginfo_class_QLabel_alignment

#define arginfo_class_QTreeWidget_setColumnCount arginfo_class_QTableWidget_setColumnCount

#define arginfo_class_QTreeWidget_setHeaderLabels arginfo_class_QTableWidget_setHorizontalHeaderLabels

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTreeWidget_addTopLevelItem, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, item, QTreeWidgetItem, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTreeWidget_clear arginfo_class_QAbstractButton_click

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QTreeWidget_currentItem, 0, 0, QTreeWidgetItem, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTreeWidget_setCurrentItem, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, item, QTreeWidgetItem, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTreeWidget_scrollToItem, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, item, QTreeWidgetItem, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, hint, QAbstractItemView\\ScrollHint, 0, "QAbstractItemView\\ScrollHint::ENSURE_VISIBLE")
ZEND_END_ARG_INFO()

#define arginfo_class_QTreeWidget_expandItem arginfo_class_QTreeWidget_addTopLevelItem

#define arginfo_class_QTreeWidget_collapseItem arginfo_class_QTreeWidget_addTopLevelItem

#define arginfo_class_QTreeWidget_selectedItems arginfo_class_QPlainTextEdit_extraSelections

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QSplitter___construct, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, orientation, Qt\\Orientation, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_QSplitter_orientation arginfo_class_QAbstractSlider_orientation

#define arginfo_class_QSplitter_setOrientation arginfo_class_QAbstractSlider_setOrientation

#define arginfo_class_QSplitter_addWidget arginfo_class_QScrollArea_setWidget

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSplitter_insertWidget, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, widget, QWidget, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QSplitter_count arginfo_class_QLabel_alignment

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QSplitter_widget, 0, 1, QWidget, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSplitter_indexOf, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, widget, QWidget, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSplitter_setSizes, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, sizes, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QSplitter_sizes arginfo_class_QPlainTextEdit_extraSelections

#define arginfo_class_QSplitter_handleWidth arginfo_class_QLabel_alignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSplitter_setHandleWidth, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QSplitter_opaqueResize arginfo_class_QLabel_wordWrap

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSplitter_setOpaqueResize, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, opaque, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QSplitter_childrenCollapsible arginfo_class_QLabel_wordWrap

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSplitter_setChildrenCollapsible, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, collapsible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSplitter_setStretchFactor, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QSplitter_handle, 0, 1, QSplitterHandle, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QSplitterHandle___construct arginfo_class_QAbstractSlider___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QSplitterHandle_splitter, 0, 0, QSplitter, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_QTabWidget___construct arginfo_class_QComboBox___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTabWidget_addTab, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, page, QWidget, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTabWidget_removeTab arginfo_class_QComboBox_setCurrentIndex

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTabWidget_indexOf, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, page, QWidget, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTabWidget_count arginfo_class_QLabel_alignment

#define arginfo_class_QTabWidget_currentIndex arginfo_class_QLabel_alignment

#define arginfo_class_QTabWidget_setCurrentIndex arginfo_class_QComboBox_setCurrentIndex

#define arginfo_class_QTabWidget_currentWidget arginfo_class_QScrollArea_widget

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTabWidget_setTabText, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTabWidget_tabText arginfo_class_QComboBox_itemText

#define arginfo_class_QTabWidget_widget arginfo_class_QSplitter_widget

#define arginfo_class_QTabWidget_documentMode arginfo_class_QLabel_wordWrap

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTabWidget_setDocumentMode, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, set, _IS_BOOL, 0)
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
ZEND_METHOD(QLabel, openExternalLinks);
ZEND_METHOD(QLabel, setOpenExternalLinks);
ZEND_METHOD(QLabel, textInteractionFlags);
ZEND_METHOD(QLabel, setTextInteractionFlags);
ZEND_METHOD(QLabel, setPixmap);
ZEND_METHOD(QLabel, pixmap);
ZEND_METHOD(QAbstractButton, text);
ZEND_METHOD(QAbstractButton, setText);
ZEND_METHOD(QAbstractButton, isCheckable);
ZEND_METHOD(QAbstractButton, setCheckable);
ZEND_METHOD(QAbstractButton, isChecked);
ZEND_METHOD(QAbstractButton, setChecked);
ZEND_METHOD(QAbstractButton, click);
ZEND_METHOD(QAbstractButton, toggle);
ZEND_METHOD(QPushButton, __construct);
ZEND_METHOD(QPushButton, isDefault);
ZEND_METHOD(QPushButton, setDefault);
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
ZEND_METHOD(QScrollBar, __construct);
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
ZEND_METHOD(QLineEdit, cut);
ZEND_METHOD(QLineEdit, copy);
ZEND_METHOD(QLineEdit, paste);
ZEND_METHOD(QLineEdit, selectAll);
ZEND_METHOD(QLineEdit, undo);
ZEND_METHOD(QLineEdit, redo);
ZEND_METHOD(QLineEdit, selectedText);
ZEND_METHOD(QPlainTextEdit, __construct);
ZEND_METHOD(QPlainTextEdit, toPlainText);
ZEND_METHOD(QPlainTextEdit, setPlainText);
ZEND_METHOD(QPlainTextEdit, isReadOnly);
ZEND_METHOD(QPlainTextEdit, setReadOnly);
ZEND_METHOD(QPlainTextEdit, cut);
ZEND_METHOD(QPlainTextEdit, copy);
ZEND_METHOD(QPlainTextEdit, paste);
ZEND_METHOD(QPlainTextEdit, selectAll);
ZEND_METHOD(QPlainTextEdit, undo);
ZEND_METHOD(QPlainTextEdit, redo);
ZEND_METHOD(QPlainTextEdit, document);
ZEND_METHOD(QPlainTextEdit, textCursor);
ZEND_METHOD(QPlainTextEdit, setTextCursor);
ZEND_METHOD(QPlainTextEdit, ensureCursorVisible);
ZEND_METHOD(QPlainTextEdit, setExtraSelections);
ZEND_METHOD(QPlainTextEdit, extraSelections);
ZEND_METHOD(QPlainTextEdit, lineWrapMode);
ZEND_METHOD(QPlainTextEdit, setLineWrapMode);
ZEND_METHOD(QPlainTextEdit, textInteractionFlags);
ZEND_METHOD(QPlainTextEdit, setTextInteractionFlags);
ZEND_METHOD(QPlainTextEdit, verticalScrollBar);
ZEND_METHOD(QPlainTextEdit, horizontalScrollBar);
ZEND_METHOD(QPlainTextEdit, viewport);
ZEND_METHOD(QCalendarWidget, __construct);
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
ZEND_METHOD(QTreeWidget, __construct);
ZEND_METHOD(QTreeWidget, columnCount);
ZEND_METHOD(QTreeWidget, setColumnCount);
ZEND_METHOD(QTreeWidget, setHeaderLabels);
ZEND_METHOD(QTreeWidget, addTopLevelItem);
ZEND_METHOD(QTreeWidget, clear);
ZEND_METHOD(QTreeWidget, currentItem);
ZEND_METHOD(QTreeWidget, setCurrentItem);
ZEND_METHOD(QTreeWidget, scrollToItem);
ZEND_METHOD(QTreeWidget, expandItem);
ZEND_METHOD(QTreeWidget, collapseItem);
ZEND_METHOD(QTreeWidget, selectedItems);
ZEND_METHOD(QSplitter, __construct);
ZEND_METHOD(QSplitter, orientation);
ZEND_METHOD(QSplitter, setOrientation);
ZEND_METHOD(QSplitter, addWidget);
ZEND_METHOD(QSplitter, insertWidget);
ZEND_METHOD(QSplitter, count);
ZEND_METHOD(QSplitter, widget);
ZEND_METHOD(QSplitter, indexOf);
ZEND_METHOD(QSplitter, setSizes);
ZEND_METHOD(QSplitter, sizes);
ZEND_METHOD(QSplitter, handleWidth);
ZEND_METHOD(QSplitter, setHandleWidth);
ZEND_METHOD(QSplitter, opaqueResize);
ZEND_METHOD(QSplitter, setOpaqueResize);
ZEND_METHOD(QSplitter, childrenCollapsible);
ZEND_METHOD(QSplitter, setChildrenCollapsible);
ZEND_METHOD(QSplitter, setStretchFactor);
ZEND_METHOD(QSplitter, handle);
ZEND_METHOD(QSplitterHandle, __construct);
ZEND_METHOD(QSplitterHandle, splitter);
ZEND_METHOD(QTabWidget, __construct);
ZEND_METHOD(QTabWidget, addTab);
ZEND_METHOD(QTabWidget, removeTab);
ZEND_METHOD(QTabWidget, indexOf);
ZEND_METHOD(QTabWidget, count);
ZEND_METHOD(QTabWidget, currentIndex);
ZEND_METHOD(QTabWidget, setCurrentIndex);
ZEND_METHOD(QTabWidget, currentWidget);
ZEND_METHOD(QTabWidget, setTabText);
ZEND_METHOD(QTabWidget, tabText);
ZEND_METHOD(QTabWidget, widget);
ZEND_METHOD(QTabWidget, documentMode);
ZEND_METHOD(QTabWidget, setDocumentMode);

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
	ZEND_ME(QLabel, openExternalLinks, arginfo_class_QLabel_openExternalLinks, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, setOpenExternalLinks, arginfo_class_QLabel_setOpenExternalLinks, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, textInteractionFlags, arginfo_class_QLabel_textInteractionFlags, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, setTextInteractionFlags, arginfo_class_QLabel_setTextInteractionFlags, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, setPixmap, arginfo_class_QLabel_setPixmap, ZEND_ACC_PUBLIC)
	ZEND_ME(QLabel, pixmap, arginfo_class_QLabel_pixmap, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QAbstractButton_methods[] = {
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
	ZEND_ME(QPushButton, isDefault, arginfo_class_QPushButton_isDefault, ZEND_ACC_PUBLIC)
	ZEND_ME(QPushButton, setDefault, arginfo_class_QPushButton_setDefault, ZEND_ACC_PUBLIC)
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

static const zend_function_entry class_QScrollBar_methods[] = {
	ZEND_ME(QScrollBar, __construct, arginfo_class_QScrollBar___construct, ZEND_ACC_PRIVATE)
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
	ZEND_ME(QLineEdit, cut, arginfo_class_QLineEdit_cut, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, copy, arginfo_class_QLineEdit_copy, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, paste, arginfo_class_QLineEdit_paste, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, selectAll, arginfo_class_QLineEdit_selectAll, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, undo, arginfo_class_QLineEdit_undo, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, redo, arginfo_class_QLineEdit_redo, ZEND_ACC_PUBLIC)
	ZEND_ME(QLineEdit, selectedText, arginfo_class_QLineEdit_selectedText, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QPlainTextEdit_methods[] = {
	ZEND_ME(QPlainTextEdit, __construct, arginfo_class_QPlainTextEdit___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, toPlainText, arginfo_class_QPlainTextEdit_toPlainText, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, setPlainText, arginfo_class_QPlainTextEdit_setPlainText, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, isReadOnly, arginfo_class_QPlainTextEdit_isReadOnly, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, setReadOnly, arginfo_class_QPlainTextEdit_setReadOnly, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, cut, arginfo_class_QPlainTextEdit_cut, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, copy, arginfo_class_QPlainTextEdit_copy, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, paste, arginfo_class_QPlainTextEdit_paste, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, selectAll, arginfo_class_QPlainTextEdit_selectAll, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, undo, arginfo_class_QPlainTextEdit_undo, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, redo, arginfo_class_QPlainTextEdit_redo, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, document, arginfo_class_QPlainTextEdit_document, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, textCursor, arginfo_class_QPlainTextEdit_textCursor, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, setTextCursor, arginfo_class_QPlainTextEdit_setTextCursor, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, ensureCursorVisible, arginfo_class_QPlainTextEdit_ensureCursorVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, setExtraSelections, arginfo_class_QPlainTextEdit_setExtraSelections, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, extraSelections, arginfo_class_QPlainTextEdit_extraSelections, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, lineWrapMode, arginfo_class_QPlainTextEdit_lineWrapMode, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, setLineWrapMode, arginfo_class_QPlainTextEdit_setLineWrapMode, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, textInteractionFlags, arginfo_class_QPlainTextEdit_textInteractionFlags, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, setTextInteractionFlags, arginfo_class_QPlainTextEdit_setTextInteractionFlags, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, verticalScrollBar, arginfo_class_QPlainTextEdit_verticalScrollBar, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, horizontalScrollBar, arginfo_class_QPlainTextEdit_horizontalScrollBar, ZEND_ACC_PUBLIC)
	ZEND_ME(QPlainTextEdit, viewport, arginfo_class_QPlainTextEdit_viewport, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QCalendarWidget_methods[] = {
	ZEND_ME(QCalendarWidget, __construct, arginfo_class_QCalendarWidget___construct, ZEND_ACC_PRIVATE)
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

static const zend_function_entry class_QTreeWidget_methods[] = {
	ZEND_ME(QTreeWidget, __construct, arginfo_class_QTreeWidget___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidget, columnCount, arginfo_class_QTreeWidget_columnCount, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidget, setColumnCount, arginfo_class_QTreeWidget_setColumnCount, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidget, setHeaderLabels, arginfo_class_QTreeWidget_setHeaderLabels, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidget, addTopLevelItem, arginfo_class_QTreeWidget_addTopLevelItem, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidget, clear, arginfo_class_QTreeWidget_clear, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidget, currentItem, arginfo_class_QTreeWidget_currentItem, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidget, setCurrentItem, arginfo_class_QTreeWidget_setCurrentItem, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidget, scrollToItem, arginfo_class_QTreeWidget_scrollToItem, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidget, expandItem, arginfo_class_QTreeWidget_expandItem, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidget, collapseItem, arginfo_class_QTreeWidget_collapseItem, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidget, selectedItems, arginfo_class_QTreeWidget_selectedItems, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QSplitter_methods[] = {
	ZEND_ME(QSplitter, __construct, arginfo_class_QSplitter___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, orientation, arginfo_class_QSplitter_orientation, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, setOrientation, arginfo_class_QSplitter_setOrientation, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, addWidget, arginfo_class_QSplitter_addWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, insertWidget, arginfo_class_QSplitter_insertWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, count, arginfo_class_QSplitter_count, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, widget, arginfo_class_QSplitter_widget, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, indexOf, arginfo_class_QSplitter_indexOf, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, setSizes, arginfo_class_QSplitter_setSizes, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, sizes, arginfo_class_QSplitter_sizes, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, handleWidth, arginfo_class_QSplitter_handleWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, setHandleWidth, arginfo_class_QSplitter_setHandleWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, opaqueResize, arginfo_class_QSplitter_opaqueResize, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, setOpaqueResize, arginfo_class_QSplitter_setOpaqueResize, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, childrenCollapsible, arginfo_class_QSplitter_childrenCollapsible, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, setChildrenCollapsible, arginfo_class_QSplitter_setChildrenCollapsible, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, setStretchFactor, arginfo_class_QSplitter_setStretchFactor, ZEND_ACC_PUBLIC)
	ZEND_ME(QSplitter, handle, arginfo_class_QSplitter_handle, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QSplitterHandle_methods[] = {
	ZEND_ME(QSplitterHandle, __construct, arginfo_class_QSplitterHandle___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QSplitterHandle, splitter, arginfo_class_QSplitterHandle_splitter, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QTabWidget_methods[] = {
	ZEND_ME(QTabWidget, __construct, arginfo_class_QTabWidget___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QTabWidget, addTab, arginfo_class_QTabWidget_addTab, ZEND_ACC_PUBLIC)
	ZEND_ME(QTabWidget, removeTab, arginfo_class_QTabWidget_removeTab, ZEND_ACC_PUBLIC)
	ZEND_ME(QTabWidget, indexOf, arginfo_class_QTabWidget_indexOf, ZEND_ACC_PUBLIC)
	ZEND_ME(QTabWidget, count, arginfo_class_QTabWidget_count, ZEND_ACC_PUBLIC)
	ZEND_ME(QTabWidget, currentIndex, arginfo_class_QTabWidget_currentIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(QTabWidget, setCurrentIndex, arginfo_class_QTabWidget_setCurrentIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(QTabWidget, currentWidget, arginfo_class_QTabWidget_currentWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(QTabWidget, setTabText, arginfo_class_QTabWidget_setTabText, ZEND_ACC_PUBLIC)
	ZEND_ME(QTabWidget, tabText, arginfo_class_QTabWidget_tabText, ZEND_ACC_PUBLIC)
	ZEND_ME(QTabWidget, widget, arginfo_class_QTabWidget_widget, ZEND_ACC_PUBLIC)
	ZEND_ME(QTabWidget, documentMode, arginfo_class_QTabWidget_documentMode, ZEND_ACC_PUBLIC)
	ZEND_ME(QTabWidget, setDocumentMode, arginfo_class_QTabWidget_setDocumentMode, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QPlainTextEdit_LineWrapMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QPlainTextEdit\\LineWrapMode", IS_LONG, NULL);

	zval enum_case_NO_WRAP_value;
	ZVAL_LONG(&enum_case_NO_WRAP_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_WRAP", &enum_case_NO_WRAP_value);

	zval enum_case_WIDGET_WIDTH_value;
	ZVAL_LONG(&enum_case_WIDGET_WIDTH_value, 1);
	zend_enum_add_case_cstr(class_entry, "WIDGET_WIDTH", &enum_case_WIDGET_WIDTH_value);

	return class_entry;
}

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

static zend_class_entry *register_class_QAbstractItemView_ScrollHint(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QAbstractItemView\\ScrollHint", IS_LONG, NULL);

	zval enum_case_ENSURE_VISIBLE_value;
	ZVAL_LONG(&enum_case_ENSURE_VISIBLE_value, 0);
	zend_enum_add_case_cstr(class_entry, "ENSURE_VISIBLE", &enum_case_ENSURE_VISIBLE_value);

	zval enum_case_POSITION_AT_TOP_value;
	ZVAL_LONG(&enum_case_POSITION_AT_TOP_value, 1);
	zend_enum_add_case_cstr(class_entry, "POSITION_AT_TOP", &enum_case_POSITION_AT_TOP_value);

	zval enum_case_POSITION_AT_BOTTOM_value;
	ZVAL_LONG(&enum_case_POSITION_AT_BOTTOM_value, 2);
	zend_enum_add_case_cstr(class_entry, "POSITION_AT_BOTTOM", &enum_case_POSITION_AT_BOTTOM_value);

	zval enum_case_POSITION_AT_CENTER_value;
	ZVAL_LONG(&enum_case_POSITION_AT_CENTER_value, 3);
	zend_enum_add_case_cstr(class_entry, "POSITION_AT_CENTER", &enum_case_POSITION_AT_CENTER_value);

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
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_ABSTRACT|ZEND_ACC_NOT_SERIALIZABLE);

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

static zend_class_entry *register_class_QScrollBar(zend_class_entry *class_entry_QAbstractSlider)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QScrollBar", class_QScrollBar_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QAbstractSlider, ZEND_ACC_NOT_SERIALIZABLE);

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

static zend_class_entry *register_class_QCalendarWidget(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QCalendarWidget", class_QCalendarWidget_methods);
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
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QFrame, ZEND_ACC_ABSTRACT|ZEND_ACC_NOT_SERIALIZABLE);

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

static zend_class_entry *register_class_QTreeWidget(zend_class_entry *class_entry_QAbstractItemView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QTreeWidget", class_QTreeWidget_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QAbstractItemView, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QSplitter(zend_class_entry *class_entry_QFrame)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QSplitter", class_QSplitter_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QFrame, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QSplitterHandle(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QSplitterHandle", class_QSplitterHandle_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QTabWidget(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QTabWidget", class_QTabWidget_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
