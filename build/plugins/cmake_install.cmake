# Install script for directory: /home/jopper/veyon/plugins

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/jopper/veyon/build/plugins/authkeys/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/builtindirectory/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/config/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/demo/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/desktopservices/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/ldap/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/platform/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/powercontrol/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/remoteaccess/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/screenlock/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/screenshot/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/servicecontrol/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/shell/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/systemusergroups/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/textmessage/cmake_install.cmake")
  include("/home/jopper/veyon/build/plugins/vncserver/cmake_install.cmake")

endif()

