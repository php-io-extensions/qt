
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
#include "src/core-qtdisambiguated_t.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QtDisambiguated_t_QtDisambiguated_t)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QtDisambiguated_t, QtDisambiguated_t, qt, core_qtdisambiguated_t_qtdisambiguated_t, qt_core_qtdisambiguated_t_qtdisambiguated_t_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QtDisambiguated_t_QtDisambiguated_t, new_)
{

	RETURN_LONG(phpqt_qtdisambiguated_t_new());
}

