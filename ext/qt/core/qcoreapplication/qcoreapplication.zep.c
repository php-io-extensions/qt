
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
#include "src/core-qcoreapplication.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCoreApplication_QCoreApplication)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCoreApplication, QCoreApplication, qt, core_qcoreapplication_qcoreapplication, qt_core_qcoreapplication_qcoreapplication_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, staticMetaObject)
{

	RETURN_LONG(phpqt_qcoreapplication_static_meta_object());
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qcoreapplication_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *argv_param = NULL, *arg0 = NULL, arg0_sub, __$null;
	zval argv;

	ZVAL_UNDEF(&argv);
	ZVAL_UNDEF(&arg0_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ARRAY(argv)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &argv_param, &arg0);
	zephir_get_arrval(&argv, argv_param);
	if (!arg0) {
		arg0 = &arg0_sub;
		arg0 = &__$null;
	}
	RETURN_MM_LONG(phpqt_qcoreapplication_new(&argv, arg0));
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, arguments)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qcoreapplication_arguments(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, setAttribute)
{
	zend_bool on;
	zval *attribute_param = NULL, *on_param = NULL, _0, _1;
	zend_long attribute;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(attribute)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &attribute_param, &on_param);
	if (!on_param) {
		on = 1;
	} else {
		}
	ZVAL_LONG(&_0, attribute);
	ZVAL_BOOL(&_1, (on ? 1 : 0));
	phpqt_qcoreapplication_set_attribute(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, testAttribute)
{
	zval *attribute_param = NULL, _0;
	zend_long attribute, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(attribute)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &attribute_param);
	ZVAL_LONG(&_0, attribute);
	r = phpqt_qcoreapplication_test_attribute(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, setOrganizationDomain)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *orgDomain_param = NULL;
	zval orgDomain;

	ZVAL_UNDEF(&orgDomain);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(orgDomain)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &orgDomain_param);
	zephir_get_strval(&orgDomain, orgDomain_param);
	phpqt_qcoreapplication_set_organization_domain(&orgDomain);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, organizationDomain)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qcoreapplication_organization_domain(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, setOrganizationName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *orgName_param = NULL;
	zval orgName;

	ZVAL_UNDEF(&orgName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(orgName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &orgName_param);
	zephir_get_strval(&orgName, orgName_param);
	phpqt_qcoreapplication_set_organization_name(&orgName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, organizationName)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qcoreapplication_organization_name(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, setApplicationName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *application_param = NULL;
	zval application;

	ZVAL_UNDEF(&application);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(application)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &application_param);
	zephir_get_strval(&application, application_param);
	phpqt_qcoreapplication_set_application_name(&application);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, applicationName)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qcoreapplication_application_name(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, setApplicationVersion)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *version_param = NULL;
	zval version;

	ZVAL_UNDEF(&version);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(version)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &version_param);
	zephir_get_strval(&version, version_param);
	phpqt_qcoreapplication_set_application_version(&version);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, applicationVersion)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qcoreapplication_application_version(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, setSetuidAllowed)
{
	zval *allow_param = NULL, _0;
	zend_bool allow;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(allow)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &allow_param);
	ZVAL_BOOL(&_0, (allow ? 1 : 0));
	phpqt_qcoreapplication_set_setuid_allowed(&_0);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, isSetuidAllowed)
{
	zend_long r = 0;
	r = phpqt_qcoreapplication_is_setuid_allowed();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, instance)
{

	RETURN_LONG(phpqt_qcoreapplication_instance());
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, exec)
{

	RETURN_LONG(phpqt_qcoreapplication_exec());
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, processEvents)
{
	zval *flags = NULL, flags_sub, __$null;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	phpqt_qcoreapplication_process_events(flags);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, processEventsQEventLoopProcessEventsFlagsInt)
{
	zval *flags_param = NULL, *maxtime_param = NULL, _0, _1;
	zend_long flags, maxtime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(flags)
		Z_PARAM_LONG(maxtime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &flags_param, &maxtime_param);
	ZVAL_LONG(&_0, flags);
	ZVAL_LONG(&_1, maxtime);
	phpqt_qcoreapplication_process_events_q_event_loop_process_events_flags_int(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, processEventsQEventLoopProcessEventsFlagsQDeadlineTimer)
{
	zval *flags_param = NULL, *deadline_param = NULL, _0, _1;
	zend_long flags, deadline;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(flags)
		Z_PARAM_LONG(deadline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &flags_param, &deadline_param);
	ZVAL_LONG(&_0, flags);
	ZVAL_LONG(&_1, deadline);
	phpqt_qcoreapplication_process_events_q_event_loop_process_events_flags_q_deadline_timer(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, sendEvent)
{
	zval *receiver_param = NULL, *event_param = NULL, _0, _1;
	zend_long receiver, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(receiver)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &receiver_param, &event_param);
	ZVAL_LONG(&_0, receiver);
	ZVAL_LONG(&_1, event);
	r = phpqt_qcoreapplication_send_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, postEvent)
{
	zval *receiver_param = NULL, *event_param = NULL, *priority = NULL, priority_sub, __$null, _0, _1;
	zend_long receiver, event;

	ZVAL_UNDEF(&priority_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(receiver)
		Z_PARAM_LONG(event)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(priority)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &receiver_param, &event_param, &priority);
	if (!priority) {
		priority = &priority_sub;
		priority = &__$null;
	}
	ZVAL_LONG(&_0, receiver);
	ZVAL_LONG(&_1, event);
	phpqt_qcoreapplication_post_event(&_0, &_1, priority);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, sendPostedEvents)
{
	zval *receiver_param = NULL, *event_type_param = NULL, _0, _1;
	zend_long receiver, event_type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(receiver)
		Z_PARAM_LONG(event_type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &receiver_param, &event_type_param);
	if (!receiver_param) {
		receiver = 0;
	} else {
		}
	if (!event_type_param) {
		event_type = 0;
	} else {
		}
	ZVAL_LONG(&_0, receiver);
	ZVAL_LONG(&_1, event_type);
	phpqt_qcoreapplication_send_posted_events(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, removePostedEvents)
{
	zval *receiver_param = NULL, *eventType_param = NULL, _0, _1;
	zend_long receiver, eventType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(receiver)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(eventType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &receiver_param, &eventType_param);
	if (!eventType_param) {
		eventType = 0;
	} else {
		}
	ZVAL_LONG(&_0, receiver);
	ZVAL_LONG(&_1, eventType);
	phpqt_qcoreapplication_remove_posted_events(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, eventDispatcher)
{

	RETURN_LONG(phpqt_qcoreapplication_event_dispatcher());
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, setEventDispatcher)
{
	zval *eventDispatcher_param = NULL, _0;
	zend_long eventDispatcher;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(eventDispatcher)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &eventDispatcher_param);
	ZVAL_LONG(&_0, eventDispatcher);
	phpqt_qcoreapplication_set_event_dispatcher(&_0);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, notify)
{
	zval *handle_param = NULL, *arg0_param = NULL, *arg1_param = NULL, _0, _1, _2;
	zend_long handle, arg0, arg1, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &arg0_param, &arg1_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	ZVAL_LONG(&_2, arg1);
	r = phpqt_qcoreapplication_notify(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, startingUp)
{
	zend_long r = 0;
	r = phpqt_qcoreapplication_starting_up();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, closingDown)
{
	zend_long r = 0;
	r = phpqt_qcoreapplication_closing_down();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, applicationDirPath)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qcoreapplication_application_dir_path(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, applicationFilePath)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qcoreapplication_application_file_path(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, applicationPid)
{

	RETURN_LONG(phpqt_qcoreapplication_application_pid());
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, checkPermission)
{
	zval *handle_param = NULL, *permission_param = NULL, _0, _1;
	zend_long handle, permission;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(permission)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &permission_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, permission);
	RETURN_LONG(phpqt_qcoreapplication_check_permission(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, setLibraryPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_arrval(&arg0, arg0_param);
	phpqt_qcoreapplication_set_library_paths(&arg0);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, libraryPaths)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qcoreapplication_library_paths(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, addLibraryPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	phpqt_qcoreapplication_add_library_path(&arg0);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, removeLibraryPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	phpqt_qcoreapplication_remove_library_path(&arg0);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, installTranslator)
{
	zval *messageFile_param = NULL, _0;
	zend_long messageFile, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(messageFile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &messageFile_param);
	ZVAL_LONG(&_0, messageFile);
	r = phpqt_qcoreapplication_install_translator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, removeTranslator)
{
	zval *messageFile_param = NULL, _0;
	zend_long messageFile, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(messageFile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &messageFile_param);
	ZVAL_LONG(&_0, messageFile);
	r = phpqt_qcoreapplication_remove_translator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, translate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *context = NULL, context_sub, *key = NULL, key_sub, *disambiguation = NULL, disambiguation_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&context_sub);
	ZVAL_UNDEF(&key_sub);
	ZVAL_UNDEF(&disambiguation_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_ZVAL(context)
		Z_PARAM_ZVAL(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(disambiguation)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &context, &key, &disambiguation, &n_param);
	if (!disambiguation) {
		disambiguation = &disambiguation_sub;
		disambiguation = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qcoreapplication_translate(&result, context, key, disambiguation, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, installNativeEventFilter)
{
	zval *handle_param = NULL, *filterObj_param = NULL, _0, _1;
	zend_long handle, filterObj;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(filterObj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &filterObj_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, filterObj);
	phpqt_qcoreapplication_install_native_event_filter(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, removeNativeEventFilter)
{
	zval *handle_param = NULL, *filterObj_param = NULL, _0, _1;
	zend_long handle, filterObj;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(filterObj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &filterObj_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, filterObj);
	phpqt_qcoreapplication_remove_native_event_filter(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, isQuitLockEnabled)
{
	zend_long r = 0;
	r = phpqt_qcoreapplication_is_quit_lock_enabled();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, setQuitLockEnabled)
{
	zval *enabled_param = NULL, _0;
	zend_bool enabled;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &enabled_param);
	ZVAL_BOOL(&_0, (enabled ? 1 : 0));
	phpqt_qcoreapplication_set_quit_lock_enabled(&_0);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, quit)
{

	phpqt_qcoreapplication_quit();
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, exit_)
{
	zval *retcode_param = NULL, _0;
	zend_long retcode;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(retcode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &retcode_param);
	if (!retcode_param) {
		retcode = 0;
	} else {
		}
	ZVAL_LONG(&_0, retcode);
	phpqt_qcoreapplication_exit(&_0);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, organizationNameChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcoreapplication_organization_name_changed(&_0);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, organizationDomainChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcoreapplication_organization_domain_changed(&_0);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, applicationNameChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcoreapplication_application_name_changed(&_0);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, applicationVersionChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcoreapplication_application_version_changed(&_0);
}

PHP_METHOD(Qt_Core_QCoreApplication_QCoreApplication, event)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	r = phpqt_qcoreapplication_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

