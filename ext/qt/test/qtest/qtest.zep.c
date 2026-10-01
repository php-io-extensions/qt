
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/test-qtest.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Test_QTest_QTest)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Test\\QTest, QTest, qt, test_qtest_qtest, qt_test_qtest_qtest_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Test_QTest_QTest, qRun)
{

	RETURN_LONG(phpqt_qtest_q_run());
}

PHP_METHOD(Qt_Test_QTest_QTest, qCleanup)
{

	phpqt_qtest_q_cleanup();
}

PHP_METHOD(Qt_Test_QTest_QTest, qExec)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arguments;
	zval *testObject_param = NULL, *arguments_param = NULL, _0;
	zend_long testObject;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&arguments);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(testObject)
		Z_PARAM_ARRAY(arguments)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &testObject_param, &arguments_param);
	zephir_get_arrval(&arguments, arguments_param);
	ZVAL_LONG(&_0, testObject);
	RETURN_MM_LONG(phpqt_qtest_q_exec(&_0, &arguments));
}

PHP_METHOD(Qt_Test_QTest_QTest, setMainSourcePath)
{
	zval *file = NULL, file_sub, *builddir = NULL, builddir_sub, __$null;

	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&builddir_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(file)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(builddir)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &file, &builddir);
	if (!builddir) {
		builddir = &builddir_sub;
		builddir = &__$null;
	}
	phpqt_qtest_set_main_source_path(file, builddir);
}

PHP_METHOD(Qt_Test_QTest_QTest, setThrowOnFail)
{
	zval *enable_param = NULL, _0;
	zend_bool enable;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &enable_param);
	ZVAL_BOOL(&_0, (enable ? 1 : 0));
	phpqt_qtest_set_throw_on_fail(&_0);
}

PHP_METHOD(Qt_Test_QTest_QTest, setThrowOnSkip)
{
	zval *enable_param = NULL, _0;
	zend_bool enable;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &enable_param);
	ZVAL_BOOL(&_0, (enable ? 1 : 0));
	phpqt_qtest_set_throw_on_skip(&_0);
}

PHP_METHOD(Qt_Test_QTest_QTest, qVerify)
{
	zend_long line, r = 0;
	zval *statement_param = NULL, *statementStr = NULL, statementStr_sub, *description = NULL, description_sub, *file = NULL, file_sub, *line_param = NULL, _0, _1;
	zend_bool statement;

	ZVAL_UNDEF(&statementStr_sub);
	ZVAL_UNDEF(&description_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_BOOL(statement)
		Z_PARAM_ZVAL(statementStr)
		Z_PARAM_ZVAL(description)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &statement_param, &statementStr, &description, &file, &line_param);
	ZVAL_BOOL(&_0, (statement ? 1 : 0));
	ZVAL_LONG(&_1, line);
	r = phpqt_qtest_q_verify(&_0, statementStr, description, file, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qFail)
{
	zend_long line;
	zval *message = NULL, message_sub, *file = NULL, file_sub, *line_param = NULL, _0;

	ZVAL_UNDEF(&message_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(message)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &message, &file, &line_param);
	ZVAL_LONG(&_0, line);
	phpqt_qtest_q_fail(message, file, &_0);
}

PHP_METHOD(Qt_Test_QTest_QTest, qSkip)
{
	zend_long line;
	zval *message = NULL, message_sub, *file = NULL, file_sub, *line_param = NULL, _0;

	ZVAL_UNDEF(&message_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(message)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &message, &file, &line_param);
	ZVAL_LONG(&_0, line);
	phpqt_qtest_q_skip(message, file, &_0);
}

PHP_METHOD(Qt_Test_QTest_QTest, qExpectFail)
{
	zend_long mode, line, r = 0;
	zval *dataIndex = NULL, dataIndex_sub, *comment = NULL, comment_sub, *mode_param = NULL, *file = NULL, file_sub, *line_param = NULL, _0, _1;

	ZVAL_UNDEF(&dataIndex_sub);
	ZVAL_UNDEF(&comment_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(dataIndex)
		Z_PARAM_ZVAL(comment)
		Z_PARAM_LONG(mode)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &dataIndex, &comment, &mode_param, &file, &line_param);
	ZVAL_LONG(&_0, mode);
	ZVAL_LONG(&_1, line);
	r = phpqt_qtest_q_expect_fail(dataIndex, comment, &_0, file, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCaught)
{
	zend_long line;
	zval *expected = NULL, expected_sub, *what = NULL, what_sub, *file = NULL, file_sub, *line_param = NULL, _0;

	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&what_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(what)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &expected, &what, &file, &line_param);
	ZVAL_LONG(&_0, line);
	phpqt_qtest_q_caught(expected, what, file, &_0);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCaughtCharCharInt)
{
	zend_long line;
	zval *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0;

	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &expected, &file, &line_param);
	ZVAL_LONG(&_0, line);
	phpqt_qtest_q_caught_char_char_int(expected, file, &_0);
}

PHP_METHOD(Qt_Test_QTest_QTest, ignoreMessage)
{
	zval *type_param = NULL, *message = NULL, message_sub, _0;
	zend_long type;

	ZVAL_UNDEF(&message_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(message)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &type_param, &message);
	ZVAL_LONG(&_0, type);
	phpqt_qtest_ignore_message(&_0, message);
}

PHP_METHOD(Qt_Test_QTest_QTest, ignoreMessageQtMsgTypeQRegularExpression)
{
	zval *type_param = NULL, *messagePattern_param = NULL, _0, _1;
	zend_long type, messagePattern;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(messagePattern)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &type_param, &messagePattern_param);
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, messagePattern);
	phpqt_qtest_ignore_message_qt_msg_type_q_regular_expression(&_0, &_1);
}

PHP_METHOD(Qt_Test_QTest_QTest, failOnWarning)
{

	phpqt_qtest_fail_on_warning();
}

PHP_METHOD(Qt_Test_QTest_QTest, failOnWarningChar)
{
	zval *message = NULL, message_sub;

	ZVAL_UNDEF(&message_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(message)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &message);
	phpqt_qtest_fail_on_warning_char(message);
}

PHP_METHOD(Qt_Test_QTest_QTest, failOnWarningQRegularExpression)
{
	zval *messagePattern_param = NULL, _0;
	zend_long messagePattern;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(messagePattern)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &messagePattern_param);
	ZVAL_LONG(&_0, messagePattern);
	phpqt_qtest_fail_on_warning_q_regular_expression(&_0);
}

PHP_METHOD(Qt_Test_QTest_QTest, qFindTestData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long line;
	zval *basepath = NULL, basepath_sub, *file = NULL, file_sub, *line_param = NULL, *builddir = NULL, builddir_sub, *sourcedir = NULL, sourcedir_sub, __$null, result, _0;

	ZVAL_UNDEF(&basepath_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&builddir_sub);
	ZVAL_UNDEF(&sourcedir_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 5)
		Z_PARAM_ZVAL(basepath)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(file)
		Z_PARAM_LONG(line)
		Z_PARAM_ZVAL_OR_NULL(builddir)
		Z_PARAM_ZVAL_OR_NULL(sourcedir)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 4, &basepath, &file, &line_param, &builddir, &sourcedir);
	if (!file) {
		file = &file_sub;
		file = &__$null;
	}
	if (!line_param) {
		line = 0;
	} else {
		}
	if (!builddir) {
		builddir = &builddir_sub;
		builddir = &__$null;
	}
	if (!sourcedir) {
		sourcedir = &sourcedir_sub;
		sourcedir = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, line);
	phpqt_qtest_q_find_test_data(&result, basepath, file, &_0, builddir, sourcedir);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Test_QTest_QTest, qFindTestDataQStringCharIntCharChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long line;
	zval *basepath_param = NULL, *file = NULL, file_sub, *line_param = NULL, *builddir = NULL, builddir_sub, *sourcedir = NULL, sourcedir_sub, __$null, result, _0;
	zval basepath;

	ZVAL_UNDEF(&basepath);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&builddir_sub);
	ZVAL_UNDEF(&sourcedir_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 5)
		Z_PARAM_STR(basepath)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(file)
		Z_PARAM_LONG(line)
		Z_PARAM_ZVAL_OR_NULL(builddir)
		Z_PARAM_ZVAL_OR_NULL(sourcedir)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 4, &basepath_param, &file, &line_param, &builddir, &sourcedir);
	zephir_get_strval(&basepath, basepath_param);
	if (!file) {
		file = &file_sub;
		file = &__$null;
	}
	if (!line_param) {
		line = 0;
	} else {
		}
	if (!builddir) {
		builddir = &builddir_sub;
		builddir = &__$null;
	}
	if (!sourcedir) {
		sourcedir = &sourcedir_sub;
		sourcedir = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, line);
	phpqt_qtest_q_find_test_data_q_string_char_int_char_char(&result, &basepath, file, &_0, builddir, sourcedir);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Test_QTest_QTest, testObject)
{

	RETURN_LONG(phpqt_qtest_test_object());
}

PHP_METHOD(Qt_Test_QTest_QTest, currentAppName)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qtest_current_app_name(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Test_QTest_QTest, currentTestFunction)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qtest_current_test_function(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Test_QTest_QTest, currentDataTag)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qtest_current_data_tag(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Test_QTest_QTest, currentTestFailed)
{
	zend_long r = 0;
	r = phpqt_qtest_current_test_failed();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, currentTestResolved)
{
	zend_long r = 0;
	r = phpqt_qtest_current_test_resolved();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, runningTest)
{
	zend_long r = 0;
	r = phpqt_qtest_running_test();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, asciiToKey)
{
	zval *ascii_param = NULL, _0;
	zend_long ascii;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ascii)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ascii_param);
	ZVAL_LONG(&_0, ascii);
	RETURN_LONG(phpqt_qtest_ascii_to_key(&_0));
}

PHP_METHOD(Qt_Test_QTest_QTest, keyToAscii)
{
	zval *key_param = NULL, _0;
	zend_long key;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &key_param);
	ZVAL_LONG(&_0, key);
	RETURN_LONG(phpqt_qtest_key_to_ascii(&_0));
}

PHP_METHOD(Qt_Test_QTest_QTest, compare_helper)
{
	zend_long line, r = 0;
	zval *success_param = NULL, *failureMsg = NULL, failureMsg_sub, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0, _1;
	zend_bool success;

	ZVAL_UNDEF(&failureMsg_sub);
	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_BOOL(success)
		Z_PARAM_ZVAL(failureMsg)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &success_param, &failureMsg, &actual, &expected, &file, &line_param);
	ZVAL_BOOL(&_0, (success ? 1 : 0));
	ZVAL_LONG(&_1, line);
	r = phpqt_qtest_compare_helper(&_0, failureMsg, actual, expected, file, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, addColumnInternal)
{
	zval *id_param = NULL, *name = NULL, name_sub, _0;
	zend_long id;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(id)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &id_param, &name);
	ZVAL_LONG(&_0, id);
	phpqt_qtest_add_column_internal(&_0, name);
}

PHP_METHOD(Qt_Test_QTest_QTest, newRow)
{
	zval *dataTag = NULL, dataTag_sub;

	ZVAL_UNDEF(&dataTag_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(dataTag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dataTag);
	RETURN_LONG(phpqt_qtest_new_row(dataTag));
}

PHP_METHOD(Qt_Test_QTest_QTest, addRow)
{
	zval *format = NULL, format_sub;

	ZVAL_UNDEF(&format_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &format);
	RETURN_LONG(phpqt_qtest_add_row(format));
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompare)
{
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0, _1, _2;
	zend_long t1, t2, line, r = 0;

	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(t1)
		Z_PARAM_LONG(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	ZVAL_LONG(&_0, t1);
	ZVAL_LONG(&_1, t2);
	ZVAL_LONG(&_2, line);
	r = phpqt_qtest_q_compare(&_0, &_1, actual, expected, file, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareFloatFloatCharCharCharInt)
{
	zend_long line, r = 0;
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0, _1, _2;
	double t1, t2;

	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(t1)
		Z_PARAM_ZVAL(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	t1 = zephir_get_doubleval(t1_param);
	t2 = zephir_get_doubleval(t2_param);
	ZVAL_DOUBLE(&_0, t1);
	ZVAL_DOUBLE(&_1, t2);
	ZVAL_LONG(&_2, line);
	r = phpqt_qtest_q_compare_float_float_char_char_char_int(&_0, &_1, actual, expected, file, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareDoubleDoubleCharCharCharInt)
{
	zend_long line, r = 0;
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0, _1, _2;
	double t1, t2;

	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(t1)
		Z_PARAM_ZVAL(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	t1 = zephir_get_doubleval(t1_param);
	t2 = zephir_get_doubleval(t2_param);
	ZVAL_DOUBLE(&_0, t1);
	ZVAL_DOUBLE(&_1, t2);
	ZVAL_LONG(&_2, line);
	r = phpqt_qtest_q_compare_double_double_char_char_char_int(&_0, &_1, actual, expected, file, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareIntIntCharCharCharInt)
{
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0, _1, _2;
	zend_long t1, t2, line, r = 0;

	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(t1)
		Z_PARAM_LONG(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	ZVAL_LONG(&_0, t1);
	ZVAL_LONG(&_1, t2);
	ZVAL_LONG(&_2, line);
	r = phpqt_qtest_q_compare_int_int_char_char_char_int(&_0, &_1, actual, expected, file, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareQsizetypeQsizetypeCharCharCharInt)
{
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0, _1, _2;
	zend_long t1, t2, line, r = 0;

	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(t1)
		Z_PARAM_LONG(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	ZVAL_LONG(&_0, t1);
	ZVAL_LONG(&_1, t2);
	ZVAL_LONG(&_2, line);
	r = phpqt_qtest_q_compare_qsizetype_qsizetype_char_char_char_int(&_0, &_1, actual, expected, file, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareUnsignedIntUnsignedIntCharCharCharInt)
{
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0, _1, _2;
	zend_long t1, t2, line, r = 0;

	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(t1)
		Z_PARAM_LONG(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	ZVAL_LONG(&_0, t1);
	ZVAL_LONG(&_1, t2);
	ZVAL_LONG(&_2, line);
	r = phpqt_qtest_q_compare_unsigned_int_unsigned_int_char_char_char_int(&_0, &_1, actual, expected, file, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareQStringViewQStringViewCharCharCharInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long line, r = 0;
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0;
	zval t1, t2;

	ZVAL_UNDEF(&t1);
	ZVAL_UNDEF(&t2);
	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_STR(t1)
		Z_PARAM_STR(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	zephir_get_strval(&t1, t1_param);
	zephir_get_strval(&t2, t2_param);
	ZVAL_LONG(&_0, line);
	r = phpqt_qtest_q_compare_q_string_view_q_string_view_char_char_char_int(&t1, &t2, actual, expected, file, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareQStringViewQLatin1StringViewCharCharCharInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long line, r = 0;
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0;
	zval t1, t2;

	ZVAL_UNDEF(&t1);
	ZVAL_UNDEF(&t2);
	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_STR(t1)
		Z_PARAM_STR(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	zephir_get_strval(&t1, t1_param);
	zephir_get_strval(&t2, t2_param);
	ZVAL_LONG(&_0, line);
	r = phpqt_qtest_q_compare_q_string_view_q_latin1_string_view_char_char_char_int(&t1, &t2, actual, expected, file, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareQLatin1StringViewQStringViewCharCharCharInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long line, r = 0;
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0;
	zval t1, t2;

	ZVAL_UNDEF(&t1);
	ZVAL_UNDEF(&t2);
	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_STR(t1)
		Z_PARAM_STR(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	zephir_get_strval(&t1, t1_param);
	zephir_get_strval(&t2, t2_param);
	ZVAL_LONG(&_0, line);
	r = phpqt_qtest_q_compare_q_latin1_string_view_q_string_view_char_char_char_int(&t1, &t2, actual, expected, file, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareQStringQStringCharCharCharInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long line, r = 0;
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0;
	zval t1, t2;

	ZVAL_UNDEF(&t1);
	ZVAL_UNDEF(&t2);
	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_STR(t1)
		Z_PARAM_STR(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	zephir_get_strval(&t1, t1_param);
	zephir_get_strval(&t2, t2_param);
	ZVAL_LONG(&_0, line);
	r = phpqt_qtest_q_compare_q_string_q_string_char_char_char_int(&t1, &t2, actual, expected, file, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareQStringQLatin1StringViewCharCharCharInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long line, r = 0;
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0;
	zval t1, t2;

	ZVAL_UNDEF(&t1);
	ZVAL_UNDEF(&t2);
	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_STR(t1)
		Z_PARAM_STR(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	zephir_get_strval(&t1, t1_param);
	zephir_get_strval(&t2, t2_param);
	ZVAL_LONG(&_0, line);
	r = phpqt_qtest_q_compare_q_string_q_latin1_string_view_char_char_char_int(&t1, &t2, actual, expected, file, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareQLatin1StringViewQStringCharCharCharInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long line, r = 0;
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0;
	zval t1, t2;

	ZVAL_UNDEF(&t1);
	ZVAL_UNDEF(&t2);
	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_STR(t1)
		Z_PARAM_STR(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	zephir_get_strval(&t1, t1_param);
	zephir_get_strval(&t2, t2_param);
	ZVAL_LONG(&_0, line);
	r = phpqt_qtest_q_compare_q_latin1_string_view_q_string_char_char_char_int(&t1, &t2, actual, expected, file, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, compare_ptr_helper)
{
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0, _1, _2;
	zend_long t1, t2, line, r = 0;

	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(t1)
		Z_PARAM_LONG(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	ZVAL_LONG(&_0, t1);
	ZVAL_LONG(&_1, t2);
	ZVAL_LONG(&_2, line);
	r = phpqt_qtest_compare_ptr_helper(&_0, &_1, actual, expected, file, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareDoubleFloatCharCharCharInt)
{
	zend_long line, r = 0;
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0, _1, _2;
	double t1, t2;

	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(t1)
		Z_PARAM_ZVAL(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	t1 = zephir_get_doubleval(t1_param);
	t2 = zephir_get_doubleval(t2_param);
	ZVAL_DOUBLE(&_0, t1);
	ZVAL_DOUBLE(&_1, t2);
	ZVAL_LONG(&_2, line);
	r = phpqt_qtest_q_compare_double_float_char_char_char_int(&_0, &_1, actual, expected, file, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareFloatDoubleCharCharCharInt)
{
	zend_long line, r = 0;
	zval *t1_param = NULL, *t2_param = NULL, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0, _1, _2;
	double t1, t2;

	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(t1)
		Z_PARAM_ZVAL(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &t1_param, &t2_param, &actual, &expected, &file, &line_param);
	t1 = zephir_get_doubleval(t1_param);
	t2 = zephir_get_doubleval(t2_param);
	ZVAL_DOUBLE(&_0, t1);
	ZVAL_DOUBLE(&_1, t2);
	ZVAL_LONG(&_2, line);
	r = phpqt_qtest_q_compare_float_double_char_char_char_int(&_0, &_1, actual, expected, file, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, qCompareCharCharCharCharCharInt)
{
	zend_long line, r = 0;
	zval *t1 = NULL, t1_sub, *t2 = NULL, t2_sub, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0;

	ZVAL_UNDEF(&t1_sub);
	ZVAL_UNDEF(&t2_sub);
	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(t1)
		Z_PARAM_ZVAL(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &t1, &t2, &actual, &expected, &file, &line_param);
	ZVAL_LONG(&_0, line);
	r = phpqt_qtest_q_compare_char_char_char_char_char_int(t1, t2, actual, expected, file, &_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, compare_string_helper)
{
	zend_long line, r = 0;
	zval *t1 = NULL, t1_sub, *t2 = NULL, t2_sub, *actual = NULL, actual_sub, *expected = NULL, expected_sub, *file = NULL, file_sub, *line_param = NULL, _0;

	ZVAL_UNDEF(&t1_sub);
	ZVAL_UNDEF(&t2_sub);
	ZVAL_UNDEF(&actual_sub);
	ZVAL_UNDEF(&expected_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(t1)
		Z_PARAM_ZVAL(t2)
		Z_PARAM_ZVAL(actual)
		Z_PARAM_ZVAL(expected)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &t1, &t2, &actual, &expected, &file, &line_param);
	ZVAL_LONG(&_0, line);
	r = phpqt_qtest_compare_string_helper(t1, t2, actual, expected, file, &_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTest_QTest, setBenchmarkResult)
{
	zend_long metric;
	zval *result_param = NULL, *metric_param = NULL, _0, _1;
	double result;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(result)
		Z_PARAM_LONG(metric)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &result_param, &metric_param);
	result = zephir_get_doubleval(result_param);
	ZVAL_DOUBLE(&_0, result);
	ZVAL_LONG(&_1, metric);
	phpqt_qtest_set_benchmark_result(&_0, &_1);
}

