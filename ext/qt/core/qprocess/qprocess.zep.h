
extern zend_class_entry *qt_core_qprocess_qprocess_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QProcess_QProcess);

PHP_METHOD(Qt_Core_QProcess_QProcess, staticMetaObject);
PHP_METHOD(Qt_Core_QProcess_QProcess, tr);
PHP_METHOD(Qt_Core_QProcess_QProcess, new_);
PHP_METHOD(Qt_Core_QProcess_QProcess, start);
PHP_METHOD(Qt_Core_QProcess_QProcess, startQIODeviceBaseOpenMode);
PHP_METHOD(Qt_Core_QProcess_QProcess, startCommand);
PHP_METHOD(Qt_Core_QProcess_QProcess, startDetached);
PHP_METHOD(Qt_Core_QProcess_QProcess, open);
PHP_METHOD(Qt_Core_QProcess_QProcess, program);
PHP_METHOD(Qt_Core_QProcess_QProcess, setProgram);
PHP_METHOD(Qt_Core_QProcess_QProcess, arguments);
PHP_METHOD(Qt_Core_QProcess_QProcess, setArguments);
PHP_METHOD(Qt_Core_QProcess_QProcess, processChannelMode);
PHP_METHOD(Qt_Core_QProcess_QProcess, setProcessChannelMode);
PHP_METHOD(Qt_Core_QProcess_QProcess, inputChannelMode);
PHP_METHOD(Qt_Core_QProcess_QProcess, setInputChannelMode);
PHP_METHOD(Qt_Core_QProcess_QProcess, readChannel);
PHP_METHOD(Qt_Core_QProcess_QProcess, setReadChannel);
PHP_METHOD(Qt_Core_QProcess_QProcess, closeReadChannel);
PHP_METHOD(Qt_Core_QProcess_QProcess, closeWriteChannel);
PHP_METHOD(Qt_Core_QProcess_QProcess, setStandardInputFile);
PHP_METHOD(Qt_Core_QProcess_QProcess, setStandardOutputFile);
PHP_METHOD(Qt_Core_QProcess_QProcess, setStandardErrorFile);
PHP_METHOD(Qt_Core_QProcess_QProcess, setStandardOutputProcess);
PHP_METHOD(Qt_Core_QProcess_QProcess, failChildProcessModifier);
PHP_METHOD(Qt_Core_QProcess_QProcess, unixProcessParameters);
PHP_METHOD(Qt_Core_QProcess_QProcess, setUnixProcessParameters);
PHP_METHOD(Qt_Core_QProcess_QProcess, setUnixProcessParametersQProcessUnixProcessFlags);
PHP_METHOD(Qt_Core_QProcess_QProcess, workingDirectory);
PHP_METHOD(Qt_Core_QProcess_QProcess, setWorkingDirectory);
PHP_METHOD(Qt_Core_QProcess_QProcess, setEnvironment);
PHP_METHOD(Qt_Core_QProcess_QProcess, environment);
PHP_METHOD(Qt_Core_QProcess_QProcess, setProcessEnvironment);
PHP_METHOD(Qt_Core_QProcess_QProcess, processEnvironment);
PHP_METHOD(Qt_Core_QProcess_QProcess, error);
PHP_METHOD(Qt_Core_QProcess_QProcess, state);
PHP_METHOD(Qt_Core_QProcess_QProcess, processId);
PHP_METHOD(Qt_Core_QProcess_QProcess, waitForStarted);
PHP_METHOD(Qt_Core_QProcess_QProcess, waitForReadyRead);
PHP_METHOD(Qt_Core_QProcess_QProcess, waitForBytesWritten);
PHP_METHOD(Qt_Core_QProcess_QProcess, waitForFinished);
PHP_METHOD(Qt_Core_QProcess_QProcess, readAllStandardOutput);
PHP_METHOD(Qt_Core_QProcess_QProcess, readAllStandardError);
PHP_METHOD(Qt_Core_QProcess_QProcess, exitCode);
PHP_METHOD(Qt_Core_QProcess_QProcess, exitStatus);
PHP_METHOD(Qt_Core_QProcess_QProcess, bytesToWrite);
PHP_METHOD(Qt_Core_QProcess_QProcess, isSequential);
PHP_METHOD(Qt_Core_QProcess_QProcess, close);
PHP_METHOD(Qt_Core_QProcess_QProcess, execute);
PHP_METHOD(Qt_Core_QProcess_QProcess, startDetachedQStringQStringListQStringQint64);
PHP_METHOD(Qt_Core_QProcess_QProcess, systemEnvironment);
PHP_METHOD(Qt_Core_QProcess_QProcess, nullDevice);
PHP_METHOD(Qt_Core_QProcess_QProcess, splitCommand);
PHP_METHOD(Qt_Core_QProcess_QProcess, terminate);
PHP_METHOD(Qt_Core_QProcess_QProcess, kill);
PHP_METHOD(Qt_Core_QProcess_QProcess, finished);
PHP_METHOD(Qt_Core_QProcess_QProcess, errorOccurred);
PHP_METHOD(Qt_Core_QProcess_QProcess, setProcessState);
PHP_METHOD(Qt_Core_QProcess_QProcess, writeData);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_start, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, program, IS_STRING, 0)
	ZEND_ARG_INFO(0, arguments)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_startqiodevicebaseopenmode, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_startcommand, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_startdetached, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, pid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_open, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_program, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setprogram, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, program, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_arguments, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setarguments, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, arguments, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_processchannelmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setprocesschannelmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_inputchannelmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setinputchannelmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_readchannel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setreadchannel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_closereadchannel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_closewritechannel, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setstandardinputfile, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setstandardoutputfile, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setstandarderrorfile, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setstandardoutputprocess, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destination, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_failchildprocessmodifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, description)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_unixprocessparameters, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setunixprocessparameters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, params, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setunixprocessparametersqprocessunixprocessflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flagsOnly, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_workingdirectory, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setworkingdirectory, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dir, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setenvironment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, environment, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_environment, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setprocessenvironment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, environment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_processenvironment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_processid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_waitforstarted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_waitforreadyread, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_waitforbyteswritten, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_waitforfinished, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_readallstandardoutput, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_readallstandarderror, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_exitcode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_exitstatus, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_bytestowrite, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_issequential, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_execute, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, program, IS_STRING, 0)
	ZEND_ARG_INFO(0, arguments)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_startdetachedqstringqstringlistqstringqint64, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, program, IS_STRING, 0)
	ZEND_ARG_INFO(0, arguments)
	ZEND_ARG_TYPE_INFO(0, workingDirectory, IS_STRING, 0)
	ZEND_ARG_INFO(0, pid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_systemenvironment, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_nulldevice, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_splitcommand, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_terminate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_kill, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_finished, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, exitCode, IS_LONG, 0)
	ZEND_ARG_INFO(0, exitStatus)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_erroroccurred, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_setprocessstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocess_qprocess_writedata, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qprocess_qprocess_method_entry) {
	PHP_ME(Qt_Core_QProcess_QProcess, staticMetaObject, arginfo_qt_core_qprocess_qprocess_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, tr, arginfo_qt_core_qprocess_qprocess_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, new_, arginfo_qt_core_qprocess_qprocess_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, start, arginfo_qt_core_qprocess_qprocess_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, startQIODeviceBaseOpenMode, arginfo_qt_core_qprocess_qprocess_startqiodevicebaseopenmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, startCommand, arginfo_qt_core_qprocess_qprocess_startcommand, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, startDetached, arginfo_qt_core_qprocess_qprocess_startdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, open, arginfo_qt_core_qprocess_qprocess_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, program, arginfo_qt_core_qprocess_qprocess_program, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setProgram, arginfo_qt_core_qprocess_qprocess_setprogram, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, arguments, arginfo_qt_core_qprocess_qprocess_arguments, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setArguments, arginfo_qt_core_qprocess_qprocess_setarguments, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, processChannelMode, arginfo_qt_core_qprocess_qprocess_processchannelmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setProcessChannelMode, arginfo_qt_core_qprocess_qprocess_setprocesschannelmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, inputChannelMode, arginfo_qt_core_qprocess_qprocess_inputchannelmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setInputChannelMode, arginfo_qt_core_qprocess_qprocess_setinputchannelmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, readChannel, arginfo_qt_core_qprocess_qprocess_readchannel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setReadChannel, arginfo_qt_core_qprocess_qprocess_setreadchannel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, closeReadChannel, arginfo_qt_core_qprocess_qprocess_closereadchannel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, closeWriteChannel, arginfo_qt_core_qprocess_qprocess_closewritechannel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setStandardInputFile, arginfo_qt_core_qprocess_qprocess_setstandardinputfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setStandardOutputFile, arginfo_qt_core_qprocess_qprocess_setstandardoutputfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setStandardErrorFile, arginfo_qt_core_qprocess_qprocess_setstandarderrorfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setStandardOutputProcess, arginfo_qt_core_qprocess_qprocess_setstandardoutputprocess, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, failChildProcessModifier, arginfo_qt_core_qprocess_qprocess_failchildprocessmodifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, unixProcessParameters, arginfo_qt_core_qprocess_qprocess_unixprocessparameters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setUnixProcessParameters, arginfo_qt_core_qprocess_qprocess_setunixprocessparameters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setUnixProcessParametersQProcessUnixProcessFlags, arginfo_qt_core_qprocess_qprocess_setunixprocessparametersqprocessunixprocessflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, workingDirectory, arginfo_qt_core_qprocess_qprocess_workingdirectory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setWorkingDirectory, arginfo_qt_core_qprocess_qprocess_setworkingdirectory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setEnvironment, arginfo_qt_core_qprocess_qprocess_setenvironment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, environment, arginfo_qt_core_qprocess_qprocess_environment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setProcessEnvironment, arginfo_qt_core_qprocess_qprocess_setprocessenvironment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, processEnvironment, arginfo_qt_core_qprocess_qprocess_processenvironment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, error, arginfo_qt_core_qprocess_qprocess_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, state, arginfo_qt_core_qprocess_qprocess_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, processId, arginfo_qt_core_qprocess_qprocess_processid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, waitForStarted, arginfo_qt_core_qprocess_qprocess_waitforstarted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, waitForReadyRead, arginfo_qt_core_qprocess_qprocess_waitforreadyread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, waitForBytesWritten, arginfo_qt_core_qprocess_qprocess_waitforbyteswritten, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, waitForFinished, arginfo_qt_core_qprocess_qprocess_waitforfinished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, readAllStandardOutput, arginfo_qt_core_qprocess_qprocess_readallstandardoutput, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, readAllStandardError, arginfo_qt_core_qprocess_qprocess_readallstandarderror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, exitCode, arginfo_qt_core_qprocess_qprocess_exitcode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, exitStatus, arginfo_qt_core_qprocess_qprocess_exitstatus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, bytesToWrite, arginfo_qt_core_qprocess_qprocess_bytestowrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, isSequential, arginfo_qt_core_qprocess_qprocess_issequential, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, close, arginfo_qt_core_qprocess_qprocess_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, execute, arginfo_qt_core_qprocess_qprocess_execute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, startDetachedQStringQStringListQStringQint64, arginfo_qt_core_qprocess_qprocess_startdetachedqstringqstringlistqstringqint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, systemEnvironment, arginfo_qt_core_qprocess_qprocess_systemenvironment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, nullDevice, arginfo_qt_core_qprocess_qprocess_nulldevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, splitCommand, arginfo_qt_core_qprocess_qprocess_splitcommand, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, terminate, arginfo_qt_core_qprocess_qprocess_terminate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, kill, arginfo_qt_core_qprocess_qprocess_kill, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, finished, arginfo_qt_core_qprocess_qprocess_finished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, errorOccurred, arginfo_qt_core_qprocess_qprocess_erroroccurred, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, setProcessState, arginfo_qt_core_qprocess_qprocess_setprocessstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcess_QProcess, writeData, arginfo_qt_core_qprocess_qprocess_writedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
