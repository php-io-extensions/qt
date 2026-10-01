
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
#include "src/core-qsemaphorereleaser.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QSemaphoreReleaser, QSemaphoreReleaser, qt, core_qsemaphorereleaser_qsemaphorereleaser, qt_core_qsemaphorereleaser_qsemaphorereleaser_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, new_)
{

	RETURN_LONG(phpqt_qsemaphorereleaser_new());
}

PHP_METHOD(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, newQSemaphoreInt)
{
	zval *sem_param = NULL, *n_param = NULL, _0, _1;
	zend_long sem, n;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(sem)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &sem_param, &n_param);
	if (!n_param) {
		n = 1;
	} else {
		}
	ZVAL_LONG(&_0, sem);
	ZVAL_LONG(&_1, n);
	RETURN_LONG(phpqt_qsemaphorereleaser_new_q_semaphore_int(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, newQSemaphoreInt2)
{
	zval *sem_param = NULL, *n_param = NULL, _0, _1;
	zend_long sem, n;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(sem)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &sem_param, &n_param);
	if (!n_param) {
		n = 1;
	} else {
		}
	ZVAL_LONG(&_0, sem);
	ZVAL_LONG(&_1, n);
	RETURN_LONG(phpqt_qsemaphorereleaser_new_q_semaphore_int2(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qsemaphorereleaser_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, semaphore)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsemaphorereleaser_semaphore(&_0));
}

PHP_METHOD(Qt_Core_QSemaphoreReleaser_QSemaphoreReleaser, cancel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsemaphorereleaser_cancel(&_0));
}

