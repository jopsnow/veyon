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

# Utility rule file for el.qm.

# Include the progress variables for this target.
include translations/CMakeFiles/el.qm.dir/progress.make

translations/CMakeFiles/el.qm: translations/el.qm


translations/el.qm: ../translations/el.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating el.qm"
	cd /home/jopper/veyon/build/translations && /usr/lib/qt5/bin/lrelease /home/jopper/veyon/translations/el.ts -qm /home/jopper/veyon/build/translations/el.qm

el.qm: translations/CMakeFiles/el.qm
el.qm: translations/el.qm
el.qm: translations/CMakeFiles/el.qm.dir/build.make

.PHONY : el.qm

# Rule to build all files generated by this target.
translations/CMakeFiles/el.qm.dir/build: el.qm

.PHONY : translations/CMakeFiles/el.qm.dir/build

translations/CMakeFiles/el.qm.dir/clean:
	cd /home/jopper/veyon/build/translations && $(CMAKE_COMMAND) -P CMakeFiles/el.qm.dir/cmake_clean.cmake
.PHONY : translations/CMakeFiles/el.qm.dir/clean

translations/CMakeFiles/el.qm.dir/depend:
	cd /home/jopper/veyon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/translations /home/jopper/veyon/build /home/jopper/veyon/build/translations /home/jopper/veyon/build/translations/CMakeFiles/el.qm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : translations/CMakeFiles/el.qm.dir/depend

