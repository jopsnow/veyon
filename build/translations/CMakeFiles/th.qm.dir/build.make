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

# Utility rule file for th.qm.

# Include the progress variables for this target.
include translations/CMakeFiles/th.qm.dir/progress.make

translations/CMakeFiles/th.qm: translations/th.qm


translations/th.qm: ../translations/th.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating th.qm"
	cd /home/jopper/veyon/build/translations && /usr/lib/qt5/bin/lrelease /home/jopper/veyon/translations/th.ts -qm /home/jopper/veyon/build/translations/th.qm

th.qm: translations/CMakeFiles/th.qm
th.qm: translations/th.qm
th.qm: translations/CMakeFiles/th.qm.dir/build.make

.PHONY : th.qm

# Rule to build all files generated by this target.
translations/CMakeFiles/th.qm.dir/build: th.qm

.PHONY : translations/CMakeFiles/th.qm.dir/build

translations/CMakeFiles/th.qm.dir/clean:
	cd /home/jopper/veyon/build/translations && $(CMAKE_COMMAND) -P CMakeFiles/th.qm.dir/cmake_clean.cmake
.PHONY : translations/CMakeFiles/th.qm.dir/clean

translations/CMakeFiles/th.qm.dir/depend:
	cd /home/jopper/veyon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/translations /home/jopper/veyon/build /home/jopper/veyon/build/translations /home/jopper/veyon/build/translations/CMakeFiles/th.qm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : translations/CMakeFiles/th.qm.dir/depend

