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

# Utility rule file for update-locales.

# Include the progress variables for this target.
include translations/CMakeFiles/update-locales.dir/progress.make

update-locales: translations/CMakeFiles/update-locales.dir/build.make

.PHONY : update-locales

# Rule to build all files generated by this target.
translations/CMakeFiles/update-locales.dir/build: update-locales

.PHONY : translations/CMakeFiles/update-locales.dir/build

translations/CMakeFiles/update-locales.dir/clean:
	cd /home/jopper/veyon/cmake/translations && $(CMAKE_COMMAND) -P CMakeFiles/update-locales.dir/cmake_clean.cmake
.PHONY : translations/CMakeFiles/update-locales.dir/clean

translations/CMakeFiles/update-locales.dir/depend:
	cd /home/jopper/veyon/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/translations /home/jopper/veyon/cmake /home/jopper/veyon/cmake/translations /home/jopper/veyon/cmake/translations/CMakeFiles/update-locales.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : translations/CMakeFiles/update-locales.dir/depend

