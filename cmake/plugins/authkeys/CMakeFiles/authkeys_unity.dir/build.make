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
include plugins/authkeys/CMakeFiles/authkeys_unity.dir/depend.make

# Include the progress variables for this target.
include plugins/authkeys/CMakeFiles/authkeys_unity.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/authkeys/CMakeFiles/authkeys_unity.dir/flags.make

plugins/authkeys/moc_AuthKeysPlugin.cpp: ../plugins/authkeys/AuthKeysPlugin.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_AuthKeysPlugin.cpp"
	cd /home/jopper/veyon/cmake/plugins/authkeys && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/authkeys/moc_AuthKeysPlugin.cpp_parameters

plugins/authkeys/moc_AuthKeysConfigurationPage.cpp: ../plugins/authkeys/AuthKeysConfigurationPage.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_AuthKeysConfigurationPage.cpp"
	cd /home/jopper/veyon/cmake/plugins/authkeys && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/authkeys/moc_AuthKeysConfigurationPage.cpp_parameters

plugins/authkeys/moc_AuthKeysTableModel.cpp: ../plugins/authkeys/AuthKeysTableModel.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_AuthKeysTableModel.cpp"
	cd /home/jopper/veyon/cmake/plugins/authkeys && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/authkeys/moc_AuthKeysTableModel.cpp_parameters

plugins/authkeys/moc_AuthKeysManager.cpp: ../plugins/authkeys/AuthKeysManager.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating moc_AuthKeysManager.cpp"
	cd /home/jopper/veyon/cmake/plugins/authkeys && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/authkeys/moc_AuthKeysManager.cpp_parameters

plugins/authkeys/qrc_authkeys.cpp: ../plugins/authkeys/authkeys.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating qrc_authkeys.cpp"
	cd /home/jopper/veyon/cmake/plugins/authkeys && /usr/x86_64-w64-mingw32/bin/rcc --name authkeys --output /home/jopper/veyon/cmake/plugins/authkeys/qrc_authkeys.cpp /home/jopper/veyon/plugins/authkeys/authkeys.qrc

plugins/authkeys/cotire/authkeys_CXX_prefix.hxx: plugins/authkeys/cotire/authkeys_CXX_prefix.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating CXX prefix header plugins/authkeys/cotire/authkeys_CXX_prefix.hxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/cmake/plugins/authkeys/authkeys_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/cmake/plugins/authkeys/cotire/authkeys_CXX_prefix.hxx /home/jopper/veyon/cmake/plugins/authkeys/cotire/authkeys_CXX_prefix.cxx

plugins/authkeys/cotire/authkeys_CXX_unity.cxx: plugins/authkeys/authkeys_CXX_relwithdebinfo_cotire.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Generating CXX unity source plugins/authkeys/cotire/authkeys_CXX_unity.cxx"
	cd /home/jopper/veyon/plugins/authkeys && /usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake unity /home/jopper/veyon/cmake/plugins/authkeys/authkeys_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/cmake/plugins/authkeys/cotire/authkeys_CXX_unity.cxx

plugins/authkeys/cotire/authkeys_CXX_prefix.cxx: ../core/include/Cotire.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Generating CXX prefix source plugins/authkeys/cotire/authkeys_CXX_prefix.cxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/cmake/plugins/authkeys/authkeys_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/cmake/plugins/authkeys/cotire/authkeys_CXX_prefix.cxx /home/jopper/veyon/core/include/Cotire.h

plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj: plugins/authkeys/CMakeFiles/authkeys_unity.dir/flags.make
plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj: plugins/authkeys/CMakeFiles/authkeys_unity.dir/includes_CXX.rsp
plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj: plugins/authkeys/cotire/authkeys_CXX_unity.cxx
plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj: plugins/authkeys/moc_AuthKeysPlugin.cpp
plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj: plugins/authkeys/moc_AuthKeysConfigurationPage.cpp
plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj: plugins/authkeys/moc_AuthKeysTableModel.cpp
plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj: plugins/authkeys/moc_AuthKeysManager.cpp
plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj: plugins/authkeys/qrc_authkeys.cpp
plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj: plugins/authkeys/cotire/authkeys_CXX_prefix.hxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj"
	cd /home/jopper/veyon/cmake/plugins/authkeys && /usr/bin/x86_64-w64-mingw32-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/cmake/plugins/authkeys/cotire/authkeys_CXX_prefix.hxx"  -o CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj -c /home/jopper/veyon/cmake/plugins/authkeys/cotire/authkeys_CXX_unity.cxx

plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.i"
	cd /home/jopper/veyon/cmake/plugins/authkeys && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/cmake/plugins/authkeys/cotire/authkeys_CXX_prefix.hxx"  -E /home/jopper/veyon/cmake/plugins/authkeys/cotire/authkeys_CXX_unity.cxx > CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.i

plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.s"
	cd /home/jopper/veyon/cmake/plugins/authkeys && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/cmake/plugins/authkeys/cotire/authkeys_CXX_prefix.hxx"  -S /home/jopper/veyon/cmake/plugins/authkeys/cotire/authkeys_CXX_unity.cxx -o CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.s

plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj.requires:

.PHONY : plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj.requires

plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj.provides: plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj.requires
	$(MAKE) -f plugins/authkeys/CMakeFiles/authkeys_unity.dir/build.make plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj.provides.build
.PHONY : plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj.provides

plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj.provides.build: plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj


# Object files for target authkeys_unity
authkeys_unity_OBJECTS = \
"CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj"

# External object files for target authkeys_unity
authkeys_unity_EXTERNAL_OBJECTS =

plugins/authkeys/authkeys.dll: plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj
plugins/authkeys/authkeys.dll: plugins/authkeys/CMakeFiles/authkeys_unity.dir/build.make
plugins/authkeys/authkeys.dll: core/libveyon-core.dll.a
plugins/authkeys/authkeys.dll: /usr/x86_64-w64-mingw32/lib/libQt5Widgets.a
plugins/authkeys/authkeys.dll: /usr/x86_64-w64-mingw32/lib/libQt5Network.a
plugins/authkeys/authkeys.dll: /usr/x86_64-w64-mingw32/lib/libQt5Gui.a
plugins/authkeys/authkeys.dll: /usr/x86_64-w64-mingw32/lib/libQt5Concurrent.a
plugins/authkeys/authkeys.dll: /usr/x86_64-w64-mingw32/lib/libQt5Core.a
plugins/authkeys/authkeys.dll: /usr/x86_64-w64-mingw32/lib/libz.dll.a
plugins/authkeys/authkeys.dll: /usr/x86_64-w64-mingw32/lib/libjpeg.dll.a
plugins/authkeys/authkeys.dll: /usr/x86_64-w64-mingw32/lib/libpng.dll.a
plugins/authkeys/authkeys.dll: /usr/x86_64-w64-mingw32/lib/liblzo2.dll.a
plugins/authkeys/authkeys.dll: /usr/x86_64-w64-mingw32/bin/libqca-qt5.dll
plugins/authkeys/authkeys.dll: /usr/x86_64-w64-mingw32/lib/libssl.dll.a
plugins/authkeys/authkeys.dll: /usr/x86_64-w64-mingw32/lib/libcrypto.dll.a
plugins/authkeys/authkeys.dll: plugins/authkeys/CMakeFiles/authkeys_unity.dir/linklibs.rsp
plugins/authkeys/authkeys.dll: plugins/authkeys/CMakeFiles/authkeys_unity.dir/objects1.rsp
plugins/authkeys/authkeys.dll: plugins/authkeys/CMakeFiles/authkeys_unity.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX shared module authkeys.dll"
	cd /home/jopper/veyon/cmake/plugins/authkeys && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/authkeys_unity.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/authkeys/CMakeFiles/authkeys_unity.dir/build: plugins/authkeys/authkeys.dll

.PHONY : plugins/authkeys/CMakeFiles/authkeys_unity.dir/build

plugins/authkeys/CMakeFiles/authkeys_unity.dir/requires: plugins/authkeys/CMakeFiles/authkeys_unity.dir/cotire/authkeys_CXX_unity.cxx.obj.requires

.PHONY : plugins/authkeys/CMakeFiles/authkeys_unity.dir/requires

plugins/authkeys/CMakeFiles/authkeys_unity.dir/clean:
	cd /home/jopper/veyon/cmake/plugins/authkeys && $(CMAKE_COMMAND) -P CMakeFiles/authkeys_unity.dir/cmake_clean.cmake
.PHONY : plugins/authkeys/CMakeFiles/authkeys_unity.dir/clean

plugins/authkeys/CMakeFiles/authkeys_unity.dir/depend: plugins/authkeys/moc_AuthKeysPlugin.cpp
plugins/authkeys/CMakeFiles/authkeys_unity.dir/depend: plugins/authkeys/moc_AuthKeysConfigurationPage.cpp
plugins/authkeys/CMakeFiles/authkeys_unity.dir/depend: plugins/authkeys/moc_AuthKeysTableModel.cpp
plugins/authkeys/CMakeFiles/authkeys_unity.dir/depend: plugins/authkeys/moc_AuthKeysManager.cpp
plugins/authkeys/CMakeFiles/authkeys_unity.dir/depend: plugins/authkeys/qrc_authkeys.cpp
plugins/authkeys/CMakeFiles/authkeys_unity.dir/depend: plugins/authkeys/cotire/authkeys_CXX_prefix.hxx
plugins/authkeys/CMakeFiles/authkeys_unity.dir/depend: plugins/authkeys/cotire/authkeys_CXX_unity.cxx
plugins/authkeys/CMakeFiles/authkeys_unity.dir/depend: plugins/authkeys/cotire/authkeys_CXX_prefix.cxx
	cd /home/jopper/veyon/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/plugins/authkeys /home/jopper/veyon/cmake /home/jopper/veyon/cmake/plugins/authkeys /home/jopper/veyon/cmake/plugins/authkeys/CMakeFiles/authkeys_unity.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/authkeys/CMakeFiles/authkeys_unity.dir/depend

