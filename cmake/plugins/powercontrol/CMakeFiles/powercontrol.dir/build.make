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
include plugins/powercontrol/CMakeFiles/powercontrol.dir/depend.make

# Include the progress variables for this target.
include plugins/powercontrol/CMakeFiles/powercontrol.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/powercontrol/CMakeFiles/powercontrol.dir/flags.make

plugins/powercontrol/moc_PowerControlFeaturePlugin.cpp: ../plugins/powercontrol/PowerControlFeaturePlugin.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_PowerControlFeaturePlugin.cpp"
	cd /home/jopper/veyon/cmake/plugins/powercontrol && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/plugins/powercontrol/moc_PowerControlFeaturePlugin.cpp_parameters

plugins/powercontrol/qrc_powercontrol.cpp: ../plugins/powercontrol/preferences-system-power-management.png
plugins/powercontrol/qrc_powercontrol.cpp: ../plugins/powercontrol/system-shutdown.png
plugins/powercontrol/qrc_powercontrol.cpp: ../plugins/powercontrol/system-reboot.png
plugins/powercontrol/qrc_powercontrol.cpp: ../plugins/powercontrol/powercontrol.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating qrc_powercontrol.cpp"
	cd /home/jopper/veyon/cmake/plugins/powercontrol && /usr/x86_64-w64-mingw32/bin/rcc --name powercontrol --output /home/jopper/veyon/cmake/plugins/powercontrol/qrc_powercontrol.cpp /home/jopper/veyon/plugins/powercontrol/powercontrol.qrc

plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj: plugins/powercontrol/CMakeFiles/powercontrol.dir/flags.make
plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj: plugins/powercontrol/CMakeFiles/powercontrol.dir/includes_CXX.rsp
plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj: ../plugins/powercontrol/PowerControlFeaturePlugin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj"
	cd /home/jopper/veyon/cmake/plugins/powercontrol && /usr/bin/x86_64-w64-mingw32-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj -c /home/jopper/veyon/plugins/powercontrol/PowerControlFeaturePlugin.cpp

plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.i"
	cd /home/jopper/veyon/cmake/plugins/powercontrol && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jopper/veyon/plugins/powercontrol/PowerControlFeaturePlugin.cpp > CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.i

plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.s"
	cd /home/jopper/veyon/cmake/plugins/powercontrol && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jopper/veyon/plugins/powercontrol/PowerControlFeaturePlugin.cpp -o CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.s

plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj.requires:

.PHONY : plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj.requires

plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj.provides: plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj.requires
	$(MAKE) -f plugins/powercontrol/CMakeFiles/powercontrol.dir/build.make plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj.provides.build
.PHONY : plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj.provides

plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj.provides.build: plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj


plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj: plugins/powercontrol/CMakeFiles/powercontrol.dir/flags.make
plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj: plugins/powercontrol/CMakeFiles/powercontrol.dir/includes_CXX.rsp
plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj: plugins/powercontrol/moc_PowerControlFeaturePlugin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj"
	cd /home/jopper/veyon/cmake/plugins/powercontrol && /usr/bin/x86_64-w64-mingw32-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj -c /home/jopper/veyon/cmake/plugins/powercontrol/moc_PowerControlFeaturePlugin.cpp

plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.i"
	cd /home/jopper/veyon/cmake/plugins/powercontrol && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jopper/veyon/cmake/plugins/powercontrol/moc_PowerControlFeaturePlugin.cpp > CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.i

plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.s"
	cd /home/jopper/veyon/cmake/plugins/powercontrol && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jopper/veyon/cmake/plugins/powercontrol/moc_PowerControlFeaturePlugin.cpp -o CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.s

plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj.requires:

.PHONY : plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj.requires

plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj.provides: plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj.requires
	$(MAKE) -f plugins/powercontrol/CMakeFiles/powercontrol.dir/build.make plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj.provides.build
.PHONY : plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj.provides

plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj.provides.build: plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj


plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj: plugins/powercontrol/CMakeFiles/powercontrol.dir/flags.make
plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj: plugins/powercontrol/CMakeFiles/powercontrol.dir/includes_CXX.rsp
plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj: plugins/powercontrol/qrc_powercontrol.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj"
	cd /home/jopper/veyon/cmake/plugins/powercontrol && /usr/bin/x86_64-w64-mingw32-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj -c /home/jopper/veyon/cmake/plugins/powercontrol/qrc_powercontrol.cpp

plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.i"
	cd /home/jopper/veyon/cmake/plugins/powercontrol && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jopper/veyon/cmake/plugins/powercontrol/qrc_powercontrol.cpp > CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.i

plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.s"
	cd /home/jopper/veyon/cmake/plugins/powercontrol && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jopper/veyon/cmake/plugins/powercontrol/qrc_powercontrol.cpp -o CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.s

plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj.requires:

.PHONY : plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj.requires

plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj.provides: plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj.requires
	$(MAKE) -f plugins/powercontrol/CMakeFiles/powercontrol.dir/build.make plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj.provides.build
.PHONY : plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj.provides

plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj.provides.build: plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj


# Object files for target powercontrol
powercontrol_OBJECTS = \
"CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj" \
"CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj" \
"CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj"

# External object files for target powercontrol
powercontrol_EXTERNAL_OBJECTS =

plugins/powercontrol/powercontrol.dll: plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj
plugins/powercontrol/powercontrol.dll: plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj
plugins/powercontrol/powercontrol.dll: plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj
plugins/powercontrol/powercontrol.dll: plugins/powercontrol/CMakeFiles/powercontrol.dir/build.make
plugins/powercontrol/powercontrol.dll: core/libveyon-core.dll.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libQt5Widgets.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libQt5Network.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libQt5Gui.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libQt5Concurrent.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libQt5Core.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libz.dll.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libjpeg.dll.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libpng.dll.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libz.dll.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libjpeg.dll.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libpng.dll.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/liblzo2.dll.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/bin/libqca-qt5.dll
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libssl.dll.a
plugins/powercontrol/powercontrol.dll: /usr/x86_64-w64-mingw32/lib/libcrypto.dll.a
plugins/powercontrol/powercontrol.dll: plugins/powercontrol/CMakeFiles/powercontrol.dir/linklibs.rsp
plugins/powercontrol/powercontrol.dll: plugins/powercontrol/CMakeFiles/powercontrol.dir/objects1.rsp
plugins/powercontrol/powercontrol.dll: plugins/powercontrol/CMakeFiles/powercontrol.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared module powercontrol.dll"
	cd /home/jopper/veyon/cmake/plugins/powercontrol && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/powercontrol.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/powercontrol/CMakeFiles/powercontrol.dir/build: plugins/powercontrol/powercontrol.dll

.PHONY : plugins/powercontrol/CMakeFiles/powercontrol.dir/build

plugins/powercontrol/CMakeFiles/powercontrol.dir/requires: plugins/powercontrol/CMakeFiles/powercontrol.dir/PowerControlFeaturePlugin.cpp.obj.requires
plugins/powercontrol/CMakeFiles/powercontrol.dir/requires: plugins/powercontrol/CMakeFiles/powercontrol.dir/moc_PowerControlFeaturePlugin.cpp.obj.requires
plugins/powercontrol/CMakeFiles/powercontrol.dir/requires: plugins/powercontrol/CMakeFiles/powercontrol.dir/qrc_powercontrol.cpp.obj.requires

.PHONY : plugins/powercontrol/CMakeFiles/powercontrol.dir/requires

plugins/powercontrol/CMakeFiles/powercontrol.dir/clean:
	cd /home/jopper/veyon/cmake/plugins/powercontrol && $(CMAKE_COMMAND) -P CMakeFiles/powercontrol.dir/cmake_clean.cmake
.PHONY : plugins/powercontrol/CMakeFiles/powercontrol.dir/clean

plugins/powercontrol/CMakeFiles/powercontrol.dir/depend: plugins/powercontrol/moc_PowerControlFeaturePlugin.cpp
plugins/powercontrol/CMakeFiles/powercontrol.dir/depend: plugins/powercontrol/qrc_powercontrol.cpp
	cd /home/jopper/veyon/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/plugins/powercontrol /home/jopper/veyon/cmake /home/jopper/veyon/cmake/plugins/powercontrol /home/jopper/veyon/cmake/plugins/powercontrol/CMakeFiles/powercontrol.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/powercontrol/CMakeFiles/powercontrol.dir/depend

