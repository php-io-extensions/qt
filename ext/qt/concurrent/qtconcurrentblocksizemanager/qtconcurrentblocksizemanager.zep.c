
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
#include "src/concurrent-qtconcurrentblocksizemanager.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Concurrent_QtConcurrentBlockSizeManager_QtConcurrentBlockSizeManager)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Concurrent\\QtConcurrentBlockSizeManager, QtConcurrentBlockSizeManager, qt, concurrent_qtconcurrentblocksizemanager_qtconcurrentblocksizemanager, qt_concurrent_qtconcurrentblocksizemanager_qtconcurrentblocksizemanager_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Concurrent_QtConcurrentBlockSizeManager_QtConcurrentBlockSizeManager, new_)
{
	zval *pool_param = NULL, *iterationCount_param = NULL, _0, _1;
	zend_long pool, iterationCount;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(pool)
		Z_PARAM_LONG(iterationCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &pool_param, &iterationCount_param);
	ZVAL_LONG(&_0, pool);
	ZVAL_LONG(&_1, iterationCount);
	RETURN_LONG(phpqt_qtconcurrentblocksizemanager_new(&_0, &_1));
}

PHP_METHOD(Qt_Concurrent_QtConcurrentBlockSizeManager_QtConcurrentBlockSizeManager, timeBeforeUser)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtconcurrentblocksizemanager_time_before_user(&_0);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentBlockSizeManager_QtConcurrentBlockSizeManager, timeAfterUser)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtconcurrentblocksizemanager_time_after_user(&_0);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentBlockSizeManager_QtConcurrentBlockSizeManager, blockSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtconcurrentblocksizemanager_block_size(&_0));
}

