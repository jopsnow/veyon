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

# Utility rule file for download-zh_CN.

# Include the progress variables for this target.
include translations/CMakeFiles/download-zh_CN.dir/progress.make

translations/CMakeFiles/download-zh_CN:
	cd /home/jopper/veyon/build/translations && curl --user api: -o /home/jopper/veyon/translations/zh_CN.ts -X GET https://www.transifex.com/api/2/project/veyon/resource/veyon_41/translation/zh_CN/?mode=default\&file

download-zh_CN: translations/CMakeFiles/download-zh_CN
download-zh_CN: translations/CMakeFiles/download-zh_CN.dir/build.make

.PHONY : download-zh_CN

# Rule to build all files generated by this target.
translations/CMakeFiles/download-zh_CN.dir/build: download-zh_CN

.PHONY : translations/CMakeFiles/download-zh_CN.dir/build

translations/CMakeFiles/download-zh_CN.dir/clean:
	cd /home/jopper/veyon/build/translations && $(CMAKE_COMMAND) -P CMakeFiles/download-zh_CN.dir/cmake_clean.cmake
.PHONY : translations/CMakeFiles/download-zh_CN.dir/clean

translations/CMakeFiles/download-zh_CN.dir/depend:
	cd /home/jopper/veyon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/translations /home/jopper/veyon/build /home/jopper/veyon/build/translations /home/jopper/veyon/build/translations/CMakeFiles/download-zh_CN.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : translations/CMakeFiles/download-zh_CN.dir/depend

