
extern zend_class_entry *qt_test_qtest_qtest_ce;

ZEPHIR_INIT_CLASS(Qt_Test_QTest_QTest);

PHP_METHOD(Qt_Test_QTest_QTest, qRun);
PHP_METHOD(Qt_Test_QTest_QTest, qCleanup);
PHP_METHOD(Qt_Test_QTest_QTest, qExec);
PHP_METHOD(Qt_Test_QTest_QTest, setMainSourcePath);
PHP_METHOD(Qt_Test_QTest_QTest, setThrowOnFail);
PHP_METHOD(Qt_Test_QTest_QTest, setThrowOnSkip);
PHP_METHOD(Qt_Test_QTest_QTest, qVerify);
PHP_METHOD(Qt_Test_QTest_QTest, qFail);
PHP_METHOD(Qt_Test_QTest_QTest, qSkip);
PHP_METHOD(Qt_Test_QTest_QTest, qExpectFail);
PHP_METHOD(Qt_Test_QTest_QTest, qCaught);
PHP_METHOD(Qt_Test_QTest_QTest, qCaughtCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, ignoreMessage);
PHP_METHOD(Qt_Test_QTest_QTest, ignoreMessageQtMsgTypeQRegularExpression);
PHP_METHOD(Qt_Test_QTest_QTest, failOnWarning);
PHP_METHOD(Qt_Test_QTest_QTest, failOnWarningChar);
PHP_METHOD(Qt_Test_QTest_QTest, failOnWarningQRegularExpression);
PHP_METHOD(Qt_Test_QTest_QTest, qFindTestData);
PHP_METHOD(Qt_Test_QTest_QTest, qFindTestDataQStringCharIntCharChar);
PHP_METHOD(Qt_Test_QTest_QTest, testObject);
PHP_METHOD(Qt_Test_QTest_QTest, currentAppName);
PHP_METHOD(Qt_Test_QTest_QTest, currentTestFunction);
PHP_METHOD(Qt_Test_QTest_QTest, currentDataTag);
PHP_METHOD(Qt_Test_QTest_QTest, currentTestFailed);
PHP_METHOD(Qt_Test_QTest_QTest, currentTestResolved);
PHP_METHOD(Qt_Test_QTest_QTest, runningTest);
PHP_METHOD(Qt_Test_QTest_QTest, asciiToKey);
PHP_METHOD(Qt_Test_QTest_QTest, keyToAscii);
PHP_METHOD(Qt_Test_QTest_QTest, compare_helper);
PHP_METHOD(Qt_Test_QTest_QTest, addColumnInternal);
PHP_METHOD(Qt_Test_QTest_QTest, newRow);
PHP_METHOD(Qt_Test_QTest_QTest, addRow);
PHP_METHOD(Qt_Test_QTest_QTest, qCompare);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareFloatFloatCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareDoubleDoubleCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareIntIntCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareQsizetypeQsizetypeCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareUnsignedIntUnsignedIntCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareQStringViewQStringViewCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareQStringViewQLatin1StringViewCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareQLatin1StringViewQStringViewCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareQStringQStringCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareQStringQLatin1StringViewCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareQLatin1StringViewQStringCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, compare_ptr_helper);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareDoubleFloatCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareFloatDoubleCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, qCompareCharCharCharCharCharInt);
PHP_METHOD(Qt_Test_QTest_QTest, compare_string_helper);
PHP_METHOD(Qt_Test_QTest_QTest, setBenchmarkResult);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qrun, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcleanup, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qexec, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, testObject, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, arguments, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_setmainsourcepath, 0, 1, IS_VOID, 0)

	ZEND_ARG_INFO(0, file)
	ZEND_ARG_INFO(0, builddir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_setthrowonfail, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_setthrowonskip, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qverify, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, statement, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, statementStr)
	ZEND_ARG_INFO(0, description)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qfail, 0, 3, IS_VOID, 0)

	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qskip, 0, 3, IS_VOID, 0)

	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qexpectfail, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, dataIndex)
	ZEND_ARG_INFO(0, comment)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcaught, 0, 4, IS_VOID, 0)

	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, what)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcaughtcharcharint, 0, 3, IS_VOID, 0)

	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_ignoremessage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_INFO(0, message)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_ignoremessageqtmsgtypeqregularexpression, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, messagePattern, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_failonwarning, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_failonwarningchar, 0, 1, IS_VOID, 0)

	ZEND_ARG_INFO(0, message)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_failonwarningqregularexpression, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, messagePattern, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qfindtestdata, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, basepath)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
	ZEND_ARG_INFO(0, builddir)
	ZEND_ARG_INFO(0, sourcedir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qfindtestdataqstringcharintcharchar, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, basepath, IS_STRING, 0)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
	ZEND_ARG_INFO(0, builddir)
	ZEND_ARG_INFO(0, sourcedir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_testobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_test_qtest_qtest_currentappname, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_test_qtest_qtest_currenttestfunction, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_test_qtest_qtest_currentdatatag, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_currenttestfailed, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_currenttestresolved, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_runningtest, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_asciitokey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ascii, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_keytoascii, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_compare_helper, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, success, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, failureMsg)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_addcolumninternal, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_newrow, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, dataTag)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_addrow, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcompare, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_LONG, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcomparefloatfloatcharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcomparedoubledoublecharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcompareintintcharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_LONG, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcompareqsizetypeqsizetypecharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_LONG, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcompareunsignedintunsignedintcharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_LONG, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcompareqstringviewqstringviewcharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_STRING, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcompareqstringviewqlatin1stringviewcharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_STRING, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcompareqlatin1stringviewqstringviewcharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_STRING, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcompareqstringqstringcharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_STRING, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcompareqstringqlatin1stringviewcharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_STRING, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcompareqlatin1stringviewqstringcharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_STRING, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_compare_ptr_helper, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_LONG, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcomparedoublefloatcharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcomparefloatdoublecharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_qcomparecharcharcharcharcharint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, t1)
	ZEND_ARG_INFO(0, t2)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_compare_string_helper, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, t1)
	ZEND_ARG_INFO(0, t2)
	ZEND_ARG_INFO(0, actual)
	ZEND_ARG_INFO(0, expected)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtest_qtest_setbenchmarkresult, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, result, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_test_qtest_qtest_method_entry) {
	PHP_ME(Qt_Test_QTest_QTest, qRun, arginfo_qt_test_qtest_qtest_qrun, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCleanup, arginfo_qt_test_qtest_qtest_qcleanup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qExec, arginfo_qt_test_qtest_qtest_qexec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, setMainSourcePath, arginfo_qt_test_qtest_qtest_setmainsourcepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, setThrowOnFail, arginfo_qt_test_qtest_qtest_setthrowonfail, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, setThrowOnSkip, arginfo_qt_test_qtest_qtest_setthrowonskip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qVerify, arginfo_qt_test_qtest_qtest_qverify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qFail, arginfo_qt_test_qtest_qtest_qfail, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qSkip, arginfo_qt_test_qtest_qtest_qskip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qExpectFail, arginfo_qt_test_qtest_qtest_qexpectfail, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCaught, arginfo_qt_test_qtest_qtest_qcaught, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCaughtCharCharInt, arginfo_qt_test_qtest_qtest_qcaughtcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, ignoreMessage, arginfo_qt_test_qtest_qtest_ignoremessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, ignoreMessageQtMsgTypeQRegularExpression, arginfo_qt_test_qtest_qtest_ignoremessageqtmsgtypeqregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, failOnWarning, arginfo_qt_test_qtest_qtest_failonwarning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, failOnWarningChar, arginfo_qt_test_qtest_qtest_failonwarningchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, failOnWarningQRegularExpression, arginfo_qt_test_qtest_qtest_failonwarningqregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qFindTestData, arginfo_qt_test_qtest_qtest_qfindtestdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qFindTestDataQStringCharIntCharChar, arginfo_qt_test_qtest_qtest_qfindtestdataqstringcharintcharchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, testObject, arginfo_qt_test_qtest_qtest_testobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
PHP_ME(Qt_Test_QTest_QTest, currentAppName, arginfo_qt_test_qtest_qtest_currentappname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
PHP_ME(Qt_Test_QTest_QTest, currentTestFunction, arginfo_qt_test_qtest_qtest_currenttestfunction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
PHP_ME(Qt_Test_QTest_QTest, currentDataTag, arginfo_qt_test_qtest_qtest_currentdatatag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, currentTestFailed, arginfo_qt_test_qtest_qtest_currenttestfailed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, currentTestResolved, arginfo_qt_test_qtest_qtest_currenttestresolved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, runningTest, arginfo_qt_test_qtest_qtest_runningtest, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, asciiToKey, arginfo_qt_test_qtest_qtest_asciitokey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, keyToAscii, arginfo_qt_test_qtest_qtest_keytoascii, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, compare_helper, arginfo_qt_test_qtest_qtest_compare_helper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, addColumnInternal, arginfo_qt_test_qtest_qtest_addcolumninternal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, newRow, arginfo_qt_test_qtest_qtest_newrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, addRow, arginfo_qt_test_qtest_qtest_addrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompare, arginfo_qt_test_qtest_qtest_qcompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareFloatFloatCharCharCharInt, arginfo_qt_test_qtest_qtest_qcomparefloatfloatcharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareDoubleDoubleCharCharCharInt, arginfo_qt_test_qtest_qtest_qcomparedoubledoublecharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareIntIntCharCharCharInt, arginfo_qt_test_qtest_qtest_qcompareintintcharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareQsizetypeQsizetypeCharCharCharInt, arginfo_qt_test_qtest_qtest_qcompareqsizetypeqsizetypecharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareUnsignedIntUnsignedIntCharCharCharInt, arginfo_qt_test_qtest_qtest_qcompareunsignedintunsignedintcharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareQStringViewQStringViewCharCharCharInt, arginfo_qt_test_qtest_qtest_qcompareqstringviewqstringviewcharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareQStringViewQLatin1StringViewCharCharCharInt, arginfo_qt_test_qtest_qtest_qcompareqstringviewqlatin1stringviewcharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareQLatin1StringViewQStringViewCharCharCharInt, arginfo_qt_test_qtest_qtest_qcompareqlatin1stringviewqstringviewcharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareQStringQStringCharCharCharInt, arginfo_qt_test_qtest_qtest_qcompareqstringqstringcharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareQStringQLatin1StringViewCharCharCharInt, arginfo_qt_test_qtest_qtest_qcompareqstringqlatin1stringviewcharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareQLatin1StringViewQStringCharCharCharInt, arginfo_qt_test_qtest_qtest_qcompareqlatin1stringviewqstringcharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, compare_ptr_helper, arginfo_qt_test_qtest_qtest_compare_ptr_helper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareDoubleFloatCharCharCharInt, arginfo_qt_test_qtest_qtest_qcomparedoublefloatcharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareFloatDoubleCharCharCharInt, arginfo_qt_test_qtest_qtest_qcomparefloatdoublecharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, qCompareCharCharCharCharCharInt, arginfo_qt_test_qtest_qtest_qcomparecharcharcharcharcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, compare_string_helper, arginfo_qt_test_qtest_qtest_compare_string_helper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTest_QTest, setBenchmarkResult, arginfo_qt_test_qtest_qtest_setbenchmarkresult, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
