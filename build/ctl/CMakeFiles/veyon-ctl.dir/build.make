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
include ctl/CMakeFiles/veyon-ctl.dir/depend.make

# Include the progress variables for this target.
include ctl/CMakeFiles/veyon-ctl.dir/progress.make

# Include the compile flags for this target's objects.
include ctl/CMakeFiles/veyon-ctl.dir/flags.make

ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o: ctl/CMakeFiles/veyon-ctl.dir/flags.make
ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o: ../ctl/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o"
	cd /home/jopper/veyon/build/ctl && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/veyon-ctl.dir/src/main.cpp.o -c /home/jopper/veyon/ctl/src/main.cpp

ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/veyon-ctl.dir/src/main.cpp.i"
	cd /home/jopper/veyon/build/ctl && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jopper/veyon/ctl/src/main.cpp > CMakeFiles/veyon-ctl.dir/src/main.cpp.i

ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/veyon-ctl.dir/src/main.cpp.s"
	cd /home/jopper/veyon/build/ctl && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jopper/veyon/ctl/src/main.cpp -o CMakeFiles/veyon-ctl.dir/src/main.cpp.s

ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o.requires:

.PHONY : ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o.requires

ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o.provides: ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o.requires
	$(MAKE) -f ctl/CMakeFiles/veyon-ctl.dir/build.make ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o.provides.build
.PHONY : ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o.provides

ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o.provides.build: ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o


# Object files for target veyon-ctl
veyon__ctl_OBJECTS = \
"CMakeFiles/veyon-ctl.dir/src/main.cpp.o"

# External object files for target veyon-ctl
veyon__ctl_EXTERNAL_OBJECTS =

ctl/veyon-ctl: ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o
ctl/veyon-ctl: ctl/CMakeFiles/veyon-ctl.dir/build.make
ctl/veyon-ctl: core/libveyon-core.so
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.9.5
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libQt5Concurrent.so.5.9.5
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.9.5
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.9.5
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libz.so
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libjpeg.so
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libpng.so
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libz.so
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libjpeg.so
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libpng.so
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/liblzo2.so
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libqca-qt5.so
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libssl.so
ctl/veyon-ctl: /usr/lib/x86_64-linux-gnu/libcrypto.so
ctl/veyon-ctl: ctl/CMakeFiles/veyon-ctl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable veyon-ctl"
	cd /home/jopper/veyon/build/ctl && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/veyon-ctl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ctl/CMakeFiles/veyon-ctl.dir/build: ctl/veyon-ctl

.PHONY : ctl/CMakeFiles/veyon-ctl.dir/build

ctl/CMakeFiles/veyon-ctl.dir/requires: ctl/CMakeFiles/veyon-ctl.dir/src/main.cpp.o.requires

.PHONY : ctl/CMakeFiles/veyon-ctl.dir/requires

ctl/CMakeFiles/veyon-ctl.dir/clean:
	cd /home/jopper/veyon/build/ctl && $(CMAKE_COMMAND) -P CMakeFiles/veyon-ctl.dir/cmake_clean.cmake
.PHONY : ctl/CMakeFiles/veyon-ctl.dir/clean

ctl/CMakeFiles/veyon-ctl.dir/depend:
	cd /home/jopper/veyon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/ctl /home/jopper/veyon/build /home/jopper/veyon/build/ctl /home/jopper/veyon/build/ctl/CMakeFiles/veyon-ctl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ctl/CMakeFiles/veyon-ctl.dir/depend

