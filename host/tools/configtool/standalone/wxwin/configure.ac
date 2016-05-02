#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT(eCos Configuration Tool, 3.0, ryo_on@yk.rim.or.jp, configtool)
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([aboutdlg.cpp])
AC_CONFIG_HEADERS([config.h])

AC_LANG_CPLUSPLUS

# Checks for programs.
AC_PROG_YACC
AC_PROG_CXX
AC_PROG_MAKE_SET

# Localtion of wxGTK
AC_ARG_WITH(wx, [  --with-wx=DIR	wxGTK location],
	[ if test "${with_wx}" != "no"; then
		WXGTK_PATH="${with_wx}"
	fi ])

# Use specific wx-config
AC_ARG_WITH(wxconfig-path,
	[  --with-wxconfig-path=PATH	full path to wx-config],
	[ if test "${with_wxconfig_path}" != "no"; then
		WX_CONFIG="${with_wxconfig_path}"
	else
		WX_CONFIG=""
	fi ])

# Location of wx-config command
AC_PATH_PROG(WX_CONFIG, wx-config, no, ${WXGTK_PATH})
if test "${WX_CONFIG}" = "no"; then
  AC_MSG_ERROR(wx-config is required)
fi

# wx-config is found
if test "${WX_CONFIG}" != ""; then
# Check wxGTK version
WXGTK_VERSION=`${WX_CONFIG} --release`
if expr 2.8 \> ${WXGTK_VERSION} > /dev/null; then
	AC_MSG_ERROR(wxGTK 2.8 is required)
fi
if expr 2.8 \< ${WXGTK_VERSION} > /dev/null; then
	AC_MSG_ERROR(wxGTK 2.8 is required)
fi
fi

WXGTK_CXXFLAGS=`${WX_CONFIG} --unicode=no --cppflags std,gizmos`
WXGTK_LIBS="`${WX_CONFIG} --unicode=no --libs std,gizmos` -Wl,-R${with_wx}/lib"

AC_SUBST(WX_CONFIG)
AC_SUBST(WXGTK_CXXFLAGS)
AC_SUBST(WXGTK_LIBS)

# Checks for pkg-config modules
PKG_CHECK_MODULES(TCL, tcl)
PKG_CHECK_MODULES(TK, tk)

# Checks for libraries.
AC_ARG_WITH(infra,
	[  --with-infra=DIR	location of eCos infrastructure installation])
if test "${with_infra}" = "yes" -o "${with_infra}" = ""; then
	with_infra=${prefix}
fi
AC_MSG_RESULT(eCos infra: ${with_infra})

AC_ARG_WITH(libcdl,
	[  --with-libcdl=DIR	location of eCos libcdl installation])
if test "${with_libcdl}" = "yes" -o "${with_libcdl}" = ""; then
	with_libcdl=${prefix}
fi
AC_MSG_RESULT(eCos libcdl: ${with_libcdl})

INFRA_CXXFLAGS=-I${with_infra}/include
INFRA_LDFLAGS="-lcyginfra -L${with_infra}/lib"
LIBCDL_CXXFLAGS=-I${with_libcdl}/include
LIBCDL_LDFLAGS="-lcdl -L${with_libcdl}/lib"

AC_SUBST(INFRA_CXXFLAGS)
AC_SUBST(INFRA_LDFLAGS)
AC_SUBST(LIBCDL_CXXFLAGS)
AC_SUBST(LIBCDL_LDFLAGS)

AC_SEARCH_LIBS(ftime, compat)

# Checks for header files.
AC_CHECK_HEADERS([float.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_OFF_T
AC_TYPE_SIZE_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([memset strerror])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
