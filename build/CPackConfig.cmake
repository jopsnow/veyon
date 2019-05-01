# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


SET(CPACK_BINARY_7Z "")
SET(CPACK_BINARY_BUNDLE "")
SET(CPACK_BINARY_CYGWIN "")
SET(CPACK_BINARY_DEB "")
SET(CPACK_BINARY_DRAGNDROP "")
SET(CPACK_BINARY_FREEBSD "")
SET(CPACK_BINARY_IFW "")
SET(CPACK_BINARY_NSIS "")
SET(CPACK_BINARY_OSXX11 "")
SET(CPACK_BINARY_PACKAGEMAKER "")
SET(CPACK_BINARY_PRODUCTBUILD "")
SET(CPACK_BINARY_RPM "")
SET(CPACK_BINARY_STGZ "")
SET(CPACK_BINARY_TBZ2 "")
SET(CPACK_BINARY_TGZ "")
SET(CPACK_BINARY_TXZ "")
SET(CPACK_BINARY_TZ "")
SET(CPACK_BINARY_WIX "")
SET(CPACK_BINARY_ZIP "")
SET(CPACK_BUILD_SOURCE_DIRS "/home/jopper/veyon;/home/jopper/veyon/build")
SET(CPACK_CMAKE_GENERATOR "Unix Makefiles")
SET(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
SET(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
SET(CPACK_DEBIAN_COMPRESSION_TYPE "xz")
SET(CPACK_DEBIAN_PACKAGE_DEPENDS "libqca-qt5-2-plugins")
SET(CPACK_DEBIAN_PACKAGE_DESCRIPTION "Virtual Eye On Networks - OpenSource classroom management
  Veyon is an Open Source computer monitoring and classroom management software. 
  It enables teachers to view and control computer labs and interact with students. 
  Veyon is available in different languages and provides lots of useful features:
  .
  * see what's going on in computer labs in overview mode and take screenshots
  * remote control computers to support and help users
  * broadcast teacher's screen to students in realtime by using demo mode (either in fullscreen or in a window)
  * lock workstations for attracting attention to teacher
  * send text messages to students
  * powering on/off and rebooting computers remote
  * remote logoff and remote execution of arbitrary commands/scripts
  * home schooling - Veyon's network-technology is not restricted to a subnet and therefore students at home
  can join lessons via VPN connections just by installing the Veyon service
")
SET(CPACK_DEBIAN_PACKAGE_SECTION "Education")
SET(CPACK_DEBIAN_PACKAGE_SHLIBDEPS "ON")
SET(CPACK_GENERATOR "DEB")
SET(CPACK_INCLUDE_TOPLEVEL_DIRECTORY "TRUE")
SET(CPACK_INSTALL_CMAKE_PROJECTS "/home/jopper/veyon/build;veyon;ALL;/")
SET(CPACK_INSTALL_PREFIX "/usr")
SET(CPACK_MODULE_PATH "/home/jopper/veyon/cmake/modules")
SET(CPACK_NSIS_DISPLAY_NAME "veyon 4.1.8")
SET(CPACK_NSIS_INSTALLER_ICON_CODE "")
SET(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
SET(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
SET(CPACK_NSIS_PACKAGE_NAME "veyon 4.1.8")
SET(CPACK_OUTPUT_CONFIG_FILE "/home/jopper/veyon/build/CPackConfig.cmake")
SET(CPACK_PACKAGE_CONTACT "Tobias Junghans <tobydox@veyon.io>")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.10/Templates/CPack.GenericDescription.txt")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Virtual Eye On Networks - OpenSource classroom management")
SET(CPACK_PACKAGE_FILE_NAME "veyon_4.1.8_amd64")
SET(CPACK_PACKAGE_HOMEPAGE "http://veyon.io")
SET(CPACK_PACKAGE_INSTALL_DIRECTORY "veyon 4.1.8")
SET(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "veyon 4.1.8")
SET(CPACK_PACKAGE_NAME "veyon")
SET(CPACK_PACKAGE_RELOCATABLE "true")
SET(CPACK_PACKAGE_VENDOR "Humanity")
SET(CPACK_PACKAGE_VERSION "4.1.8")
SET(CPACK_PACKAGE_VERSION_MAJOR "4")
SET(CPACK_PACKAGE_VERSION_MINOR "1")
SET(CPACK_PACKAGE_VERSION_PATCH "8")
SET(CPACK_PACKAGING_INSTALL_PREFIX "/usr")
SET(CPACK_RESOURCE_FILE_LICENSE "/home/jopper/veyon/COPYING")
SET(CPACK_RESOURCE_FILE_README "/home/jopper/veyon/README.md")
SET(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-3.10/Templates/CPack.GenericWelcome.txt")
SET(CPACK_RPM_EXCLUDE_FROM_AUTO_FILELIST_ADDITION "/lib")
SET(CPACK_RPM_PACKAGE_DESCRIPTION "Veyon is an Open Source computer monitoring and classroom management software.
It enables teachers to view and control computer labs and interact with students.")
SET(CPACK_RPM_PACKAGE_LICENSE "GPLv2")
SET(CPACK_RPM_PACKAGE_REQUIRES "qca-qt5-ossl")
SET(CPACK_SET_DESTDIR "OFF")
SET(CPACK_SOURCE_7Z "")
SET(CPACK_SOURCE_CYGWIN "")
SET(CPACK_SOURCE_GENERATOR "TGZ")
SET(CPACK_SOURCE_IGNORE_FILES "/home/jopper/veyon/build/;/home/jopper/veyon/.git/;")
SET(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/jopper/veyon/build/CPackSourceConfig.cmake")
SET(CPACK_SOURCE_RPM "")
SET(CPACK_SOURCE_TBZ2 "")
SET(CPACK_SOURCE_TGZ "")
SET(CPACK_SOURCE_TXZ "")
SET(CPACK_SOURCE_TZ "")
SET(CPACK_SOURCE_ZIP "")
SET(CPACK_STRIP_FILES "TRUE")
SET(CPACK_SYSTEM_NAME "amd64")
SET(CPACK_TOPLEVEL_TAG "amd64")
SET(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/home/jopper/veyon/build/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
