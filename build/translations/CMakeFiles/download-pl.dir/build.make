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

# Utility rule file for download-pl.

# Include the progress variables for this target.
include translations/CMakeFiles/download-pl.dir/progress.make

translations/CMakeFiles/download-pl:
	cd /home/jopper/veyon/build/translations && curl --user api: -o /home/jopper/veyon/translations/pl.ts -X GET https://www.transifex.com/api/2/project/veyon/resource/veyon_41/translation/pl/?mode=default\&file

download-pl: translations/CMakeFiles/download-pl
download-pl: translations/CMakeFiles/download-pl.dir/build.make

.PHONY : download-pl

# Rule to build all files generated by this target.
translations/CMakeFiles/download-pl.dir/build: download-pl

.PHONY : translations/CMakeFiles/download-pl.dir/build

translations/CMakeFiles/download-pl.dir/clean:
	cd /home/jopper/veyon/build/translations && $(CMAKE_COMMAND) -P CMakeFiles/download-pl.dir/cmake_clean.cmake
.PHONY : translations/CMakeFiles/download-pl.dir/clean

translations/CMakeFiles/download-pl.dir/depend:
	cd /home/jopper/veyon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/translations /home/jopper/veyon/build /home/jopper/veyon/build/translations /home/jopper/veyon/build/translations/CMakeFiles/download-pl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : translations/CMakeFiles/download-pl.dir/depend

