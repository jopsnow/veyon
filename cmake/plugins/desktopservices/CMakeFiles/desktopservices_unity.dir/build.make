# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jopper/veyon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jopper/veyon/cmake

# Include any dependencies generated for this target.
include plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/depend.make

# Include the progress variables for this target.
include plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/flags.make

plugins/desktopservices/moc_DesktopServiceObject.cpp: ../plugins/desktopservices/DesktopServiceObject.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_DesktopServiceObject.cpp"
	cd /home/jopper/veyon/cmake/plugins/desktopservices && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/desktopservices/moc_DesktopServiceObject.cpp_parameters

plugins/desktopservices/moc_DesktopServicesConfiguration.cpp: ../plugins/desktopservices/DesktopServicesConfiguration.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_DesktopServicesConfiguration.cpp"
	cd /home/jopper/veyon/cmake/plugins/desktopservices && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/desktopservices/moc_DesktopServicesConfiguration.cpp_parameters

plugins/desktopservices/moc_DesktopServicesConfigurationPage.cpp: ../plugins/desktopservices/DesktopServicesConfigurationPage.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_DesktopServicesConfigurationPage.cpp"
	cd /home/jopper/veyon/cmake/plugins/desktopservices && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/desktopservices/moc_DesktopServicesConfigurationPage.cpp_parameters

plugins/desktopservices/moc_DesktopServicesFeaturePlugin.cpp: ../plugins/desktopservices/DesktopServicesFeaturePlugin.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating moc_DesktopServicesFeaturePlugin.cpp"
	cd /home/jopper/veyon/cmake/plugins/desktopservices && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/desktopservices/moc_DesktopServicesFeaturePlugin.cpp_parameters

plugins/desktopservices/moc_RunProgramDialog.cpp: ../plugins/desktopservices/RunProgramDialog.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating moc_RunProgramDialog.cpp"
	cd /home/jopper/veyon/cmake/plugins/desktopservices && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/desktopservices/moc_RunProgramDialog.cpp_parameters

plugins/desktopservices/qrc_desktopservices.cpp: ../plugins/desktopservices/internet-web-browser.png
plugins/desktopservices/qrc_desktopservices.cpp: ../plugins/desktopservices/preferences-desktop-launch-feedback.png
plugins/desktopservices/qrc_desktopservices.cpp: ../plugins/desktopservices/desktop-services.png
plugins/desktopservices/qrc_desktopservices.cpp: ../plugins/desktopservices/desktopservices.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating qrc_desktopservices.cpp"
	cd /home/jopper/veyon/cmake/plugins/desktopservices && /usr/x86_64-w64-mingw32/bin/rcc --name desktopservices --output /home/jopper/veyon/cmake/plugins/desktopservices/qrc_desktopservices.cpp /home/jopper/veyon/plugins/desktopservices/desktopservices.qrc

plugins/desktopservices/cotire/desktopservices_CXX_prefix.hxx: plugins/desktopservices/cotire/desktopservices_CXX_prefix.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Generating CXX prefix header plugins/desktopservices/cotire/desktopservices_CXX_prefix.hxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/cmake/plugins/desktopservices/desktopservices_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/cmake/plugins/desktopservices/cotire/desktopservices_CXX_prefix.hxx /home/jopper/veyon/cmake/plugins/desktopservices/cotire/desktopservices_CXX_prefix.cxx

plugins/desktopservices/cotire/desktopservices_CXX_unity.cxx: plugins/desktopservices/desktopservices_CXX_relwithdebinfo_cotire.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Generating CXX unity source plugins/desktopservices/cotire/desktopservices_CXX_unity.cxx"
	cd /home/jopper/veyon/plugins/desktopservices && /usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake unity /home/jopper/veyon/cmake/plugins/desktopservices/desktopservices_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/cmake/plugins/desktopservices/cotire/desktopservices_CXX_unity.cxx

plugins/desktopservices/cotire/desktopservices_CXX_prefix.cxx: ../core/include/Cotire.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Generating CXX prefix source plugins/desktopservices/cotire/desktopservices_CXX_prefix.cxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/cmake/plugins/desktopservices/desktopservices_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/cmake/plugins/desktopservices/cotire/desktopservices_CXX_prefix.cxx /home/jopper/veyon/core/include/Cotire.h

plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj: plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/flags.make
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj: plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/includes_CXX.rsp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj: plugins/desktopservices/cotire/desktopservices_CXX_unity.cxx
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj: plugins/desktopservices/moc_DesktopServiceObject.cpp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj: plugins/desktopservices/moc_DesktopServicesConfiguration.cpp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj: plugins/desktopservices/moc_DesktopServicesConfigurationPage.cpp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj: plugins/desktopservices/moc_DesktopServicesFeaturePlugin.cpp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj: plugins/desktopservices/moc_RunProgramDialog.cpp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj: plugins/desktopservices/qrc_desktopservices.cpp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj: plugins/desktopservices/cotire/desktopservices_CXX_prefix.hxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj"
	cd /home/jopper/veyon/cmake/plugins/desktopservices && /usr/bin/x86_64-w64-mingw32-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/cmake/plugins/desktopservices/cotire/desktopservices_CXX_prefix.hxx"  -o CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj -c /home/jopper/veyon/cmake/plugins/desktopservices/cotire/desktopservices_CXX_unity.cxx

plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.i"
	cd /home/jopper/veyon/cmake/plugins/desktopservices && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/cmake/plugins/desktopservices/cotire/desktopservices_CXX_prefix.hxx"  -E /home/jopper/veyon/cmake/plugins/desktopservices/cotire/desktopservices_CXX_unity.cxx > CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.i

plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.s"
	cd /home/jopper/veyon/cmake/plugins/desktopservices && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/cmake/plugins/desktopservices/cotire/desktopservices_CXX_prefix.hxx"  -S /home/jopper/veyon/cmake/plugins/desktopservices/cotire/desktopservices_CXX_unity.cxx -o CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.s

plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj.requires:

.PHONY : plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj.requires

plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj.provides: plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj.requires
	$(MAKE) -f plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/build.make plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj.provides.build
.PHONY : plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj.provides

plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj.provides.build: plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj


# Object files for target desktopservices_unity
desktopservices_unity_OBJECTS = \
"CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj"

# External object files for target desktopservices_unity
desktopservices_unity_EXTERNAL_OBJECTS =

plugins/desktopservices/desktopservices.dll: plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj
plugins/desktopservices/desktopservices.dll: plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/build.make
plugins/desktopservices/desktopservices.dll: core/libveyon-core.dll.a
plugins/desktopservices/desktopservices.dll: /usr/x86_64-w64-mingw32/lib/libQt5Widgets.a
plugins/desktopservices/desktopservices.dll: /usr/x86_64-w64-mingw32/lib/libQt5Network.a
plugins/desktopservices/desktopservices.dll: /usr/x86_64-w64-mingw32/lib/libQt5Gui.a
plugins/desktopservices/desktopservices.dll: /usr/x86_64-w64-mingw32/lib/libQt5Concurrent.a
plugins/desktopservices/desktopservices.dll: /usr/x86_64-w64-mingw32/lib/libQt5Core.a
plugins/desktopservices/desktopservices.dll: /usr/x86_64-w64-mingw32/lib/libz.dll.a
plugins/desktopservices/desktopservices.dll: /usr/x86_64-w64-mingw32/lib/libjpeg.dll.a
plugins/desktopservices/desktopservices.dll: /usr/x86_64-w64-mingw32/lib/libpng.dll.a
plugins/desktopservices/desktopservices.dll: /usr/x86_64-w64-mingw32/lib/liblzo2.dll.a
plugins/desktopservices/desktopservices.dll: /usr/x86_64-w64-mingw32/bin/libqca-qt5.dll
plugins/desktopservices/desktopservices.dll: /usr/x86_64-w64-mingw32/lib/libssl.dll.a
plugins/desktopservices/desktopservices.dll: /usr/x86_64-w64-mingw32/lib/libcrypto.dll.a
plugins/desktopservices/desktopservices.dll: plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/linklibs.rsp
plugins/desktopservices/desktopservices.dll: plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/objects1.rsp
plugins/desktopservices/desktopservices.dll: plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX shared module desktopservices.dll"
	cd /home/jopper/veyon/cmake/plugins/desktopservices && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/desktopservices_unity.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/build: plugins/desktopservices/desktopservices.dll

.PHONY : plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/build

plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/requires: plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/cotire/desktopservices_CXX_unity.cxx.obj.requires

.PHONY : plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/requires

plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/clean:
	cd /home/jopper/veyon/cmake/plugins/desktopservices && $(CMAKE_COMMAND) -P CMakeFiles/desktopservices_unity.dir/cmake_clean.cmake
.PHONY : plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/clean

plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/depend: plugins/desktopservices/moc_DesktopServiceObject.cpp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/depend: plugins/desktopservices/moc_DesktopServicesConfiguration.cpp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/depend: plugins/desktopservices/moc_DesktopServicesConfigurationPage.cpp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/depend: plugins/desktopservices/moc_DesktopServicesFeaturePlugin.cpp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/depend: plugins/desktopservices/moc_RunProgramDialog.cpp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/depend: plugins/desktopservices/qrc_desktopservices.cpp
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/depend: plugins/desktopservices/cotire/desktopservices_CXX_prefix.hxx
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/depend: plugins/desktopservices/cotire/desktopservices_CXX_unity.cxx
plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/depend: plugins/desktopservices/cotire/desktopservices_CXX_prefix.cxx
	cd /home/jopper/veyon/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/plugins/desktopservices /home/jopper/veyon/cmake /home/jopper/veyon/cmake/plugins/desktopservices /home/jopper/veyon/cmake/plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/desktopservices/CMakeFiles/desktopservices_unity.dir/depend

