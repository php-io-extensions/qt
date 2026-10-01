
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
#include "src/core-qt.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_Qt_Qt)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\Qt, Qt, qt, core_qt_qt, qt_core_qt_qt_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_Qt_Qt, beginPropertyUpdateGroup)
{

	phpqt_qt_begin_property_update_group();
}

PHP_METHOD(Qt_Core_Qt_Qt, endPropertyUpdateGroup)
{

	phpqt_qt_end_property_update_group();
}

PHP_METHOD(Qt_Core_Qt_Qt, bin)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_bin(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, oct)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_oct(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, dec)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_dec(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, hex)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_hex(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, showbase)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_showbase(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, forcesign)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_forcesign(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, forcepoint)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_forcepoint(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, noshowbase)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_noshowbase(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, noforcesign)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_noforcesign(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, noforcepoint)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_noforcepoint(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, uppercasebase)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_uppercasebase(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, uppercasedigits)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_uppercasedigits(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, lowercasebase)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_lowercasebase(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, lowercasedigits)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_lowercasedigits(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, fixed)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_fixed(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, scientific)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_scientific(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, left)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_left(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, right)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_right(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, center)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_center(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, endl)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_endl(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, flush)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_flush(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, reset)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_reset(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, bom)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_bom(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, ws)
{
	zval *s_param = NULL, _0;
	zend_long s;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s_param);
	ZVAL_LONG(&_0, s);
	RETURN_LONG(phpqt_qt_ws(&_0));
}

PHP_METHOD(Qt_Core_Qt_Qt, is_gteq)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_gteq(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_gt)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_gt(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_lteq)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_lteq(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_lt)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_lt(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_neq)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_neq(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_eq)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_eq(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_gteqQtStrongOrdering)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_gteq_qt_strong_ordering(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_gtQtStrongOrdering)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_gt_qt_strong_ordering(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_lteqQtStrongOrdering)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_lteq_qt_strong_ordering(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_ltQtStrongOrdering)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_lt_qt_strong_ordering(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_neqQtStrongOrdering)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_neq_qt_strong_ordering(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_eqQtStrongOrdering)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_eq_qt_strong_ordering(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_gteqQtPartialOrdering)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_gteq_qt_partial_ordering(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_gtQtPartialOrdering)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_gt_qt_partial_ordering(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_lteqQtPartialOrdering)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_lteq_qt_partial_ordering(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_ltQtPartialOrdering)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_lt_qt_partial_ordering(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_neqQtPartialOrdering)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_neq_qt_partial_ordering(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_Qt_Qt, is_eqQtPartialOrdering)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qt_is_eq_qt_partial_ordering(&_0);
	RETURN_BOOL(r == 1);
}

