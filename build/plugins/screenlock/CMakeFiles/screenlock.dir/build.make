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
include plugins/screenlock/CMakeFiles/screenlock.dir/depend.make

# Include the progress variables for this target.
include plugins/screenlock/CMakeFiles/screenlock.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/screenlock/CMakeFiles/screenlock.dir/flags.make

plugins/screenlock/moc_ScreenLockFeaturePlugin.cpp: ../plugins/screenlock/ScreenLockFeaturePlugin.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_ScreenLockFeaturePlugin.cpp"
	cd /home/jopper/veyon/build/plugins/screenlock && /usr/lib/qt5/bin/moc @/home/jopper/veyon/build/plugins/screenlock/moc_ScreenLockFeaturePlugin.cpp_parameters

plugins/screenlock/qrc_screenlock.cpp: ../plugins/screenlock/system-lock-screen.png
plugins/screenlock/qrc_screenlock.cpp: ../plugins/screenlock/locked-screen-background.png
plugins/screenlock/qrc_screenlock.cpp: ../plugins/screenlock/screenlock.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating qrc_screenlock.cpp"
	cd /home/jopper/veyon/build/plugins/screenlock && /usr/lib/qt5/bin/rcc --name screenlock --output /home/jopper/veyon/build/plugins/screenlock/qrc_screenlock.cpp /home/jopper/veyon/plugins/screenlock/screenlock.qrc

plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o: plugins/screenlock/CMakeFiles/screenlock.dir/flags.make
plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o: ../plugins/screenlock/ScreenLockFeaturePlugin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o"
	cd /home/jopper/veyon/build/plugins/screenlock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o -c /home/jopper/veyon/plugins/screenlock/ScreenLockFeaturePlugin.cpp

plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.i"
	cd /home/jopper/veyon/build/plugins/screenlock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jopper/veyon/plugins/screenlock/ScreenLockFeaturePlugin.cpp > CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.i

plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.s"
	cd /home/jopper/veyon/build/plugins/screenlock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jopper/veyon/plugins/screenlock/ScreenLockFeaturePlugin.cpp -o CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.s

plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o.requires:

.PHONY : plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o.requires

plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o.provides: plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o.requires
	$(MAKE) -f plugins/screenlock/CMakeFiles/screenlock.dir/build.make plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o.provides.build
.PHONY : plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o.provides

plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o.provides.build: plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o


plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o: plugins/screenlock/CMakeFiles/screenlock.dir/flags.make
plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o: plugins/screenlock/moc_ScreenLockFeaturePlugin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o"
	cd /home/jopper/veyon/build/plugins/screenlock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o -c /home/jopper/veyon/build/plugins/screenlock/moc_ScreenLockFeaturePlugin.cpp

plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.i"
	cd /home/jopper/veyon/build/plugins/screenlock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jopper/veyon/build/plugins/screenlock/moc_ScreenLockFeaturePlugin.cpp > CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.i

plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.s"
	cd /home/jopper/veyon/build/plugins/screenlock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jopper/veyon/build/plugins/screenlock/moc_ScreenLockFeaturePlugin.cpp -o CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.s

plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o.requires:

.PHONY : plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o.requires

plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o.provides: plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o.requires
	$(MAKE) -f plugins/screenlock/CMakeFiles/screenlock.dir/build.make plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o.provides.build
.PHONY : plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o.provides

plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o.provides.build: plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o


plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o: plugins/screenlock/CMakeFiles/screenlock.dir/flags.make
plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o: plugins/screenlock/qrc_screenlock.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o"
	cd /home/jopper/veyon/build/plugins/screenlock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o -c /home/jopper/veyon/build/plugins/screenlock/qrc_screenlock.cpp

plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/screenlock.dir/qrc_screenlock.cpp.i"
	cd /home/jopper/veyon/build/plugins/screenlock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jopper/veyon/build/plugins/screenlock/qrc_screenlock.cpp > CMakeFiles/screenlock.dir/qrc_screenlock.cpp.i

plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/screenlock.dir/qrc_screenlock.cpp.s"
	cd /home/jopper/veyon/build/plugins/screenlock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jopper/veyon/build/plugins/screenlock/qrc_screenlock.cpp -o CMakeFiles/screenlock.dir/qrc_screenlock.cpp.s

plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o.requires:

.PHONY : plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o.requires

plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o.provides: plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o.requires
	$(MAKE) -f plugins/screenlock/CMakeFiles/screenlock.dir/build.make plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o.provides.build
.PHONY : plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o.provides

plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o.provides.build: plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o


# Object files for target screenlock
screenlock_OBJECTS = \
"CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o" \
"CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o" \
"CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o"

# External object files for target screenlock
screenlock_EXTERNAL_OBJECTS =

plugins/screenlock/screenlock.so: plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o
plugins/screenlock/screenlock.so: plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o
plugins/screenlock/screenlock.so: plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o
plugins/screenlock/screenlock.so: plugins/screenlock/CMakeFiles/screenlock.dir/build.make
plugins/screenlock/screenlock.so: core/libveyon-core.so
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.9.5
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.9.5
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.9.5
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libQt5Concurrent.so.5.9.5
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libpng.so
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libpng.so
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/liblzo2.so
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libqca-qt5.so
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libssl.so
plugins/screenlock/screenlock.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
plugins/screenlock/screenlock.so: plugins/screenlock/CMakeFiles/screenlock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared module screenlock.so"
	cd /home/jopper/veyon/build/plugins/screenlock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/screenlock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/screenlock/CMakeFiles/screenlock.dir/build: plugins/screenlock/screenlock.so

.PHONY : plugins/screenlock/CMakeFiles/screenlock.dir/build

plugins/screenlock/CMakeFiles/screenlock.dir/requires: plugins/screenlock/CMakeFiles/screenlock.dir/ScreenLockFeaturePlugin.cpp.o.requires
plugins/screenlock/CMakeFiles/screenlock.dir/requires: plugins/screenlock/CMakeFiles/screenlock.dir/moc_ScreenLockFeaturePlugin.cpp.o.requires
plugins/screenlock/CMakeFiles/screenlock.dir/requires: plugins/screenlock/CMakeFiles/screenlock.dir/qrc_screenlock.cpp.o.requires

.PHONY : plugins/screenlock/CMakeFiles/screenlock.dir/requires

plugins/screenlock/CMakeFiles/screenlock.dir/clean:
	cd /home/jopper/veyon/build/plugins/screenlock && $(CMAKE_COMMAND) -P CMakeFiles/screenlock.dir/cmake_clean.cmake
.PHONY : plugins/screenlock/CMakeFiles/screenlock.dir/clean

plugins/screenlock/CMakeFiles/screenlock.dir/depend: plugins/screenlock/moc_ScreenLockFeaturePlugin.cpp
plugins/screenlock/CMakeFiles/screenlock.dir/depend: plugins/screenlock/qrc_screenlock.cpp
	cd /home/jopper/veyon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/plugins/screenlock /home/jopper/veyon/build /home/jopper/veyon/build/plugins/screenlock /home/jopper/veyon/build/plugins/screenlock/CMakeFiles/screenlock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/screenlock/CMakeFiles/screenlock.dir/depend

