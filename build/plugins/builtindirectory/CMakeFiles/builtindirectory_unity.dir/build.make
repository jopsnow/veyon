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
CMAKE_BINARY_DIR = /home/jopper/veyon/build

# Include any dependencies generated for this target.
include plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend.make

# Include the progress variables for this target.
include plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/flags.make

plugins/builtindirectory/moc_BuiltinDirectoryPlugin.cpp: ../plugins/builtindirectory/BuiltinDirectoryPlugin.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_BuiltinDirectoryPlugin.cpp"
	cd /home/jopper/veyon/build/plugins/builtindirectory && /usr/lib/qt5/bin/moc @/home/jopper/veyon/build/plugins/builtindirectory/moc_BuiltinDirectoryPlugin.cpp_parameters

plugins/builtindirectory/moc_BuiltinDirectoryConfiguration.cpp: ../plugins/builtindirectory/BuiltinDirectoryConfiguration.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_BuiltinDirectoryConfiguration.cpp"
	cd /home/jopper/veyon/build/plugins/builtindirectory && /usr/lib/qt5/bin/moc @/home/jopper/veyon/build/plugins/builtindirectory/moc_BuiltinDirectoryConfiguration.cpp_parameters

plugins/builtindirectory/moc_BuiltinDirectoryConfigurationPage.cpp: ../plugins/builtindirectory/BuiltinDirectoryConfigurationPage.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_BuiltinDirectoryConfigurationPage.cpp"
	cd /home/jopper/veyon/build/plugins/builtindirectory && /usr/lib/qt5/bin/moc @/home/jopper/veyon/build/plugins/builtindirectory/moc_BuiltinDirectoryConfigurationPage.cpp_parameters

plugins/builtindirectory/moc_BuiltinDirectory.cpp: ../plugins/builtindirectory/BuiltinDirectory.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating moc_BuiltinDirectory.cpp"
	cd /home/jopper/veyon/build/plugins/builtindirectory && /usr/lib/qt5/bin/moc @/home/jopper/veyon/build/plugins/builtindirectory/moc_BuiltinDirectory.cpp_parameters

plugins/builtindirectory/qrc_builtindirectory.cpp: ../plugins/builtindirectory/application-msonenote.png
plugins/builtindirectory/qrc_builtindirectory.cpp: ../plugins/builtindirectory/builtindirectory.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating qrc_builtindirectory.cpp"
	cd /home/jopper/veyon/build/plugins/builtindirectory && /usr/lib/qt5/bin/rcc --name builtindirectory --output /home/jopper/veyon/build/plugins/builtindirectory/qrc_builtindirectory.cpp /home/jopper/veyon/plugins/builtindirectory/builtindirectory.qrc

plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx: plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating CXX prefix header plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/build/plugins/builtindirectory/builtindirectory_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/build/plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx /home/jopper/veyon/build/plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.cxx

plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx: plugins/builtindirectory/builtindirectory_CXX_relwithdebinfo_cotire.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Generating CXX unity source plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx"
	cd /home/jopper/veyon/plugins/builtindirectory && /usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake unity /home/jopper/veyon/build/plugins/builtindirectory/builtindirectory_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/build/plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx

plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.cxx: ../core/include/Cotire.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Generating CXX prefix source plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.cxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/build/plugins/builtindirectory/builtindirectory_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/build/plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.cxx /home/jopper/veyon/core/include/Cotire.h

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/flags.make
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o: plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o: plugins/builtindirectory/moc_BuiltinDirectoryPlugin.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o: plugins/builtindirectory/moc_BuiltinDirectoryConfiguration.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o: plugins/builtindirectory/moc_BuiltinDirectoryConfigurationPage.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o: plugins/builtindirectory/moc_BuiltinDirectory.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o: plugins/builtindirectory/qrc_builtindirectory.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o: plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o"
	cd /home/jopper/veyon/build/plugins/builtindirectory && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/build/plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx"  -o CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o -c /home/jopper/veyon/build/plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.i"
	cd /home/jopper/veyon/build/plugins/builtindirectory && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/build/plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx"  -E /home/jopper/veyon/build/plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx > CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.i

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.s"
	cd /home/jopper/veyon/build/plugins/builtindirectory && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/build/plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx"  -S /home/jopper/veyon/build/plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx -o CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.s

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o.requires:

.PHONY : plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o.requires

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o.provides: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o.requires
	$(MAKE) -f plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/build.make plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o.provides.build
.PHONY : plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o.provides

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o.provides.build: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o


# Object files for target builtindirectory_unity
builtindirectory_unity_OBJECTS = \
"CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o"

# External object files for target builtindirectory_unity
builtindirectory_unity_EXTERNAL_OBJECTS =

plugins/builtindirectory/builtindirectory.so: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o
plugins/builtindirectory/builtindirectory.so: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/build.make
plugins/builtindirectory/builtindirectory.so: core/libveyon-core.so
plugins/builtindirectory/builtindirectory.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.9.5
plugins/builtindirectory/builtindirectory.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.9.5
plugins/builtindirectory/builtindirectory.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.9.5
plugins/builtindirectory/builtindirectory.so: /usr/lib/x86_64-linux-gnu/libQt5Concurrent.so.5.9.5
plugins/builtindirectory/builtindirectory.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
plugins/builtindirectory/builtindirectory.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/builtindirectory/builtindirectory.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
plugins/builtindirectory/builtindirectory.so: /usr/lib/x86_64-linux-gnu/libpng.so
plugins/builtindirectory/builtindirectory.so: /usr/lib/x86_64-linux-gnu/liblzo2.so
plugins/builtindirectory/builtindirectory.so: /usr/lib/x86_64-linux-gnu/libqca-qt5.so
plugins/builtindirectory/builtindirectory.so: /usr/lib/x86_64-linux-gnu/libssl.so
plugins/builtindirectory/builtindirectory.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
plugins/builtindirectory/builtindirectory.so: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX shared module builtindirectory.so"
	cd /home/jopper/veyon/build/plugins/builtindirectory && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/builtindirectory_unity.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/build: plugins/builtindirectory/builtindirectory.so

.PHONY : plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/build

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/requires: plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/cotire/builtindirectory_CXX_unity.cxx.o.requires

.PHONY : plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/requires

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/clean:
	cd /home/jopper/veyon/build/plugins/builtindirectory && $(CMAKE_COMMAND) -P CMakeFiles/builtindirectory_unity.dir/cmake_clean.cmake
.PHONY : plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/clean

plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/moc_BuiltinDirectoryPlugin.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/moc_BuiltinDirectoryConfiguration.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/moc_BuiltinDirectoryConfigurationPage.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/moc_BuiltinDirectory.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/qrc_builtindirectory.cpp
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.hxx
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/cotire/builtindirectory_CXX_unity.cxx
plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend: plugins/builtindirectory/cotire/builtindirectory_CXX_prefix.cxx
	cd /home/jopper/veyon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/plugins/builtindirectory /home/jopper/veyon/build /home/jopper/veyon/build/plugins/builtindirectory /home/jopper/veyon/build/plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/builtindirectory/CMakeFiles/builtindirectory_unity.dir/depend

