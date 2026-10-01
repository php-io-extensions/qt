
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
#include "src/core-qdirlistingconst_iterator.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QDirListingconst_iterator_QDirListingconst_iterator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QDirListingconst_iterator, QDirListingconst_iterator, qt, core_qdirlistingconst_iterator_qdirlistingconst_iterator, qt_core_qdirlistingconst_iterator_qdirlistingconst_iterator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QDirListingconst_iterator_QDirListingconst_iterator, new_)
{

	RETURN_LONG(phpqt_qdirlistingconst_iterator_new());
}

