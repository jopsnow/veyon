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
include plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend.make

# Include the progress variables for this target.
include plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/flags.make

plugins/builtindirectory/moc_BuiltinDirectoryPlugin.cpp: ../plugins/builtindirectory/BuiltinDirectoryPlugin.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_BuiltinDirectoryPlugin.cpp"
	cd /home/jopper/veyon/cmake/plugins/builtindirectory && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/builtindirectory/moc_BuiltinDirectoryPlugin.cpp_parameters

plugins/builtindirectory/moc_BuiltinDirectoryConfiguration.cpp: ../plugins/builtindirectory/BuiltinDirectoryConfiguration.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_BuiltinDirectoryConfiguration.cpp"
	cd /home/jopper/veyon/cmake/plugins/builtindirectory && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/builtindirectory/moc_BuiltinDirectoryConfiguration.cpp_parameters

plugins/builtindirectory/moc_BuiltinDirectoryConfigurationPage.cpp: ../plugins/builtindirectory/BuiltinDirectoryConfigurationPage.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_BuiltinDirectoryConfigurationPage.cpp"
	cd /home/jopper/veyon/cmake/plugins/builtindirectory && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/builtindirectory/moc_BuiltinDirectoryConfigurationPage.cpp_parameters

plugins/builtindirectory/moc_BuiltinDirectory.cpp: ../plugins/builtindirectory/BuiltinDirectory.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating moc_BuiltinDirectory.cpp"
	cd /home/jopper/veyon/cmake/plugins/builtindirectory && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/builtindirectory/moc_BuiltinDirectory.cpp_parameters

plugins/builtindirectory/qrc_builtindirectory.cpp: ../plugins/builtindirectory/application-msonenote.png
plugins/builtindirectory/qrc_builtindirectory.cpp: ../plugins/builtindirectory/builtindirectory.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating qrc_builtindirectory.cpp"
	cd /home/jopper/veyon/cmake/plugins/builtindirectory && /usr/x86_64-w64-mingw32/bin/rcc --name builtindirectory --output /home/jopper/veyon/cmake/plugins/builtindirectory/qrc_builtindirectory.cpp /home/jopper/veyon/plugins/builtindirectory/builtindirectory.qrc

plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx: plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating CXX prefix header plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/cmake/plugins/builtindirectory/builtindirectory_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/cmake/plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx /home/jopper/veyon/cmake/plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.cxx

plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx: plugins/builtindirectory/builtindirectory_CXX_relwithdebinfo_cotire.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Generating CXX unity source plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx"
	cd /home/jopper/veyon/plugins/builtindirectory && /usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake unity /home/jopper/veyon/cmake/plugins/builtindirectory/builtindirectory_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/cmake/plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx

plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.cxx: ../core/include/Cotire.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Generating CXX prefix source plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.cxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/cmake/plugins/builtindirectory/builtindirectory_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/cmake/plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.cxx /home/jopper/veyon/core/include/Cotire.h

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/flags.make
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/includes_CXX.rsp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj: plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj: plugins/builtindirectory/moc_BuiltinDirectoryPlugin.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj: plugins/builtindirectory/moc_BuiltinDirectoryConfiguration.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj: plugins/builtindirectory/moc_BuiltinDirectoryConfigurationPage.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj: plugins/builtindirectory/moc_BuiltinDirectory.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj: plugins/builtindirectory/qrc_builtindirectory.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj: plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj"
	cd /home/jopper/veyon/cmake/plugins/builtindirectory && /usr/bin/x86_64-w64-mingw32-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/cmake/plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx"  -o CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj -c /home/jopper/veyon/cmake/plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.i"
	cd /home/jopper/veyon/cmake/plugins/builtindirectory && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/cmake/plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx"  -E /home/jopper/veyon/cmake/plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx > CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.i

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.s"
	cd /home/jopper/veyon/cmake/plugins/builtindirectory && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/cmake/plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx"  -S /home/jopper/veyon/cmake/plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx -o CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.s

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj.requires:

.PHONY : plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj.requires

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj.provides: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj.requires
	$(MAKE) -f plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/build.make plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj.provides.build
.PHONY : plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj.provides

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj.provides.build: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj


# Object files for target builtindirectory_unity
builtindirectory_unity_OBJECTS = \
"CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj"

# External object files for target builtindirectory_unity
builtindirectory_unity_EXTERNAL_OBJECTS =

plugins/builtindirectory/builtindirectory.dll: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj
plugins/builtindirectory/builtindirectory.dll: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/build.make
plugins/builtindirectory/builtindirectory.dll: core/libveyon-core.dll.a
plugins/builtindirectory/builtindirectory.dll: /usr/x86_64-w64-mingw32/lib/libQt5Widgets.a
plugins/builtindirectory/builtindirectory.dll: /usr/x86_64-w64-mingw32/lib/libQt5Network.a
plugins/builtindirectory/builtindirectory.dll: /usr/x86_64-w64-mingw32/lib/libQt5Gui.a
plugins/builtindirectory/builtindirectory.dll: /usr/x86_64-w64-mingw32/lib/libQt5Concurrent.a
plugins/builtindirectory/builtindirectory.dll: /usr/x86_64-w64-mingw32/lib/libQt5Core.a
plugins/builtindirectory/builtindirectory.dll: /usr/x86_64-w64-mingw32/lib/libz.dll.a
plugins/builtindirectory/builtindirectory.dll: /usr/x86_64-w64-mingw32/lib/libjpeg.dll.a
plugins/builtindirectory/builtindirectory.dll: /usr/x86_64-w64-mingw32/lib/libpng.dll.a
plugins/builtindirectory/builtindirectory.dll: /usr/x86_64-w64-mingw32/lib/liblzo2.dll.a
plugins/builtindirectory/builtindirectory.dll: /usr/x86_64-w64-mingw32/bin/libqca-qt5.dll
plugins/builtindirectory/builtindirectory.dll: /usr/x86_64-w64-mingw32/lib/libssl.dll.a
plugins/builtindirectory/builtindirectory.dll: /usr/x86_64-w64-mingw32/lib/libcrypto.dll.a
plugins/builtindirectory/builtindirectory.dll: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/linklibs.rsp
plugins/builtindirectory/builtindirectory.dll: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/objects1.rsp
plugins/builtindirectory/builtindirectory.dll: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX shared module builtindirectory.dll"
	cd /home/jopper/veyon/cmake/plugins/builtindirectory && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/builtindirectory_unity.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/build: plugins/builtindirectory/builtindirectory.dll

.PHONY : plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/build

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/requires: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.obj.requires

.PHONY : plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/requires

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/clean:
	cd /home/jopper/veyon/cmake/plugins/builtindirectory && $(CMAKE_COMMAND) -P CMakeFiles/builtindirectory_unity.dir/cmake_clean.cmake
.PHONY : plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/clean

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/moc_BuiltinDirectoryPlugin.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/moc_BuiltinDirectoryConfiguration.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/moc_BuiltinDirectoryConfigurationPage.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/moc_BuiltinDirectory.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/qrc_builtindirectory.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.cxx
	cd /home/jopper/veyon/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/plugins/builtindirectory /home/jopper/veyon/cmake /home/jopper/veyon/cmake/plugins/builtindirectory /home/jopper/veyon/cmake/plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend

