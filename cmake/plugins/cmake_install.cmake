# Install script for directory: /home/jopper/veyon/plugins

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "relwithdebinfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/jopper/veyon/cmake/plugins/authkeys/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/builtindirectory/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/config/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/demo/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/desktopservices/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/ldap/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/platform/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/powercontrol/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/remoteaccess/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/screenlock/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/screenshot/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/servicecontrol/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/shell/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/systemusergroups/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/textmessage/cmake_install.cmake")
  include("/home/jopper/veyon/cmake/plugins/vncserver/cmake_install.cmake")

endif()

