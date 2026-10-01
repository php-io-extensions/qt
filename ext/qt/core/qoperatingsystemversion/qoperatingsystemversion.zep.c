
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
#include "src/core-qoperatingsystemversion.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QOperatingSystemVersion, QOperatingSystemVersion, qt, core_qoperatingsystemversion_qoperatingsystemversion, qt_core_qoperatingsystemversion_qoperatingsystemversion_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows7)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows7());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows8)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows8());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows8_1)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows8_1());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows10)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows10());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, OSXMavericks)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_o_s_x_mavericks());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, OSXYosemite)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_o_s_x_yosemite());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, OSXElCapitan)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_o_s_x_el_capitan());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, MacOSSierra)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_mac_o_s_sierra());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, MacOSHighSierra)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_mac_o_s_high_sierra());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, MacOSMojave)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_mac_o_s_mojave());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, MacOSCatalina)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_mac_o_s_catalina());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, MacOSBigSur)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_mac_o_s_big_sur());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, MacOSMonterey)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_mac_o_s_monterey());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, AndroidJellyBean)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android_jelly_bean());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, AndroidJellyBean_MR1)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android_jelly_bean__m_r1());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, AndroidJellyBean_MR2)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android_jelly_bean__m_r2());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, AndroidKitKat)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android_kit_kat());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, AndroidLollipop)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android_lollipop());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, AndroidLollipop_MR1)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android_lollipop__m_r1());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, AndroidMarshmallow)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android_marshmallow());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, AndroidNougat)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android_nougat());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, AndroidNougat_MR1)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android_nougat__m_r1());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, AndroidOreo)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android_oreo());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, AndroidOreo_MR1)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android_oreo__m_r1());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, AndroidPie)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android_pie());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Android10)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android10());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Android11)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android11());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows10_1809)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows10_1809());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows10_1903)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows10_1903());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows10_1909)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows10_1909());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows10_2004)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows10_2004());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows10_20H2)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows10_20_h2());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows10_21H1)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows10_21_h1());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows10_21H2)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows10_21_h2());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows10_22H2)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows10_22_h2());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows11)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows11());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows11_21H2)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows11_21_h2());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Windows11_22H2)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_windows11_22_h2());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Android12)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android12());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Android12L)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android12_l());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, Android13)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_android13());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, MacOSVentura)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_mac_o_s_ventura());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, new_)
{
	zval *osversion_param = NULL, _0;
	zend_long osversion;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(osversion)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &osversion_param);
	ZVAL_LONG(&_0, osversion);
	RETURN_LONG(phpqt_qoperatingsystemversion_new(&_0));
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, newQOperatingSystemVersionOSTypeIntIntInt)
{
	zval *osType_param = NULL, *vmajor_param = NULL, *vminor_param = NULL, *vmicro_param = NULL, _0, _1, _2, _3;
	zend_long osType, vmajor, vminor, vmicro;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(osType)
		Z_PARAM_LONG(vmajor)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(vminor)
		Z_PARAM_LONG(vmicro)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &osType_param, &vmajor_param, &vminor_param, &vmicro_param);
	if (!vminor_param) {
		vminor = -1;
	} else {
		}
	if (!vmicro_param) {
		vmicro = -1;
	} else {
		}
	ZVAL_LONG(&_0, osType);
	ZVAL_LONG(&_1, vmajor);
	ZVAL_LONG(&_2, vminor);
	ZVAL_LONG(&_3, vmicro);
	RETURN_LONG(phpqt_qoperatingsystemversion_new_q_operating_system_version_o_s_type_int_int_int(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, currentType)
{

	RETURN_LONG(phpqt_qoperatingsystemversion_current_type());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersion_QOperatingSystemVersion, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qoperatingsystemversion_type(&_0));
}

