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

# Utility rule file for ru.qm.

# Include the progress variables for this target.
include translations/CMakeFiles/ru.qm.dir/progress.make

translations/CMakeFiles/ru.qm: translations/ru.qm


translations/ru.qm: ../translations/ru.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ru.qm"
	cd /home/jopper/veyon/build/translations && /usr/lib/qt5/bin/lrelease /home/jopper/veyon/translations/ru.ts -qm /home/jopper/veyon/build/translations/ru.qm

ru.qm: translations/CMakeFiles/ru.qm
ru.qm: translations/ru.qm
ru.qm: translations/CMakeFiles/ru.qm.dir/build.make

.PHONY : ru.qm

# Rule to build all files generated by this target.
translations/CMakeFiles/ru.qm.dir/build: ru.qm

.PHONY : translations/CMakeFiles/ru.qm.dir/build

translations/CMakeFiles/ru.qm.dir/clean:
	cd /home/jopper/veyon/build/translations && $(CMAKE_COMMAND) -P CMakeFiles/ru.qm.dir/cmake_clean.cmake
.PHONY : translations/CMakeFiles/ru.qm.dir/clean

translations/CMakeFiles/ru.qm.dir/depend:
	cd /home/jopper/veyon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/translations /home/jopper/veyon/build /home/jopper/veyon/build/translations /home/jopper/veyon/build/translations/CMakeFiles/ru.qm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : translations/CMakeFiles/ru.qm.dir/depend

