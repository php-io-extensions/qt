
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
#include "src/core-qyieldcpufunctions.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QYieldcpuFunctions_QYieldcpuFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QYieldcpuFunctions, QYieldcpuFunctions, qt, core_qyieldcpufunctions_qyieldcpufunctions, qt_core_qyieldcpufunctions_qyieldcpufunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QYieldcpuFunctions_QYieldcpuFunctions, qYieldCpu)
{

	phpqt_qyieldcpufunctions_q_yield_cpu();
}

