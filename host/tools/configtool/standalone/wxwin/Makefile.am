ACLOCAL_AMFLAGS = -I ./aclocal

AUTOMAKE_OPTIONS =	subdir-objects

bin_PROGRAMS =	configtool
CONFIGTOOL_GUI_SRC = \
	aboutdlg.cpp \
	admindlg.cpp \
	appsettings.cpp \
	buildoptionsdlg.cpp \
	choosereposdlg.cpp \
	configitem.cpp \
	configpropdlg.cpp \
	configtool.cpp \
	configtooldoc.cpp \
	configtoolview.cpp \
	configtree.cpp \
	conflictsdlg.cpp \
	conflictwin.cpp \
	docsystem.cpp \
	ecutils.cpp \
	filename.cpp \
	finddlg.cpp \
	folderdlg.cpp \
	htmlparser.cpp \
	licensedlg.cpp \
	mainwin.cpp \
	mltwin.cpp \
	outputwin.cpp \
	packagesdlg.cpp \
	platformeditordlg.cpp \
	platformsdlg.cpp \
	propertywin.cpp \
	reposdlg.cpp \
	runtestsdlg.cpp \
	sectiondlg.cpp \
	settingsdlg.cpp \
	shortdescrwin.cpp \
	solutionswin.cpp \
	templatesdlg.cpp

COMMON_SRC_DIR =	common/common
UTILS_SRC_DIR =		Utils/common
ECOSTEST_SRC_DIR =	ecostest/common

COMMON_SRC = \
	common/common/build.cxx \
	common/common/flags.cxx \
	Utils/common/Collections.cpp \
	Utils/common/Properties.cpp \
	Utils/common/Subprocess.cpp \
	Utils/common/eCosSerial.cpp \
	Utils/common/eCosSocket.cpp \
	Utils/common/eCosStd.cpp \
	Utils/common/eCosThreadUtils.cpp \
	Utils/common/eCosTrace.cpp \
	ecostest/common/eCosTest.cpp \
	ecostest/common/eCosTestDownloadFilter.cpp \
	ecostest/common/eCosTestPlatform.cpp \
	ecostest/common/eCosTestSerialFilter.cpp \
	ecostest/common/eCosTestUtils.cpp \
	ecostest/common/ResetAttributes.cpp \
	ecostest/common/TestResource.cpp

AM_CPPFLAGS = -I${top_srcdir}/${COMMON_SRC_DIR} \
		-I${top_srcdir}/${UTILS_SRC_DIR} \
		-I${top_srcdir}/${ECOSTEST_SRC_DIR}

WXGTK_CXXFLAGS = @WXGTK_CXXFLAGS@
WXGTK_LIBS = @WXGTK_LIBS@

INFRA_CXXFLAGS = @INFRA_CXXFLAGS@
INFRA_LDFLAGS = @INFRA_LDFLAGS@
LIBCDL_CXXFLAGS = @LIBCDL_CXXFLAGS@
LIBCDL_LDFLAGS = @LIBCDL_LDFLAGS@

configtool_CXXFLAGS = ${WXGTK_CXXFLAGS} ${INFRA_CXXFLAGS} ${LIBCDL_CXXFLAGS} \
			@TCL_CFLAGS@ @TK_CFLAGS@ \
			-fpermissive -DecUSE_EXPERIMENTAL_CODE=1

configtool_LDFLAGS = @TCL_LIBS@ @TK_LIBS@ ${WXGTK_LIBS}
configtool_LDADD = ${INFRA_LDFLAGS} ${LIBCDL_LDFLAGS}

configtool_SOURCES = \
	${CONFIGTOOL_GUI_SRC} \
	${COMMON_SRC}
