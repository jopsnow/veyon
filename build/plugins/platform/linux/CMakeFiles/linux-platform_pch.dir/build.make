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

# Utility rule file for linux-platform_pch.

# Include the progress variables for this target.
include plugins/platform/linux/CMakeFiles/linux-platform_pch.dir/progress.make

plugins/platform/linux/CMakeFiles/linux-platform_pch: plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx.gch


plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx.gch: plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx
plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx.gch: /usr/bin/c++
plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx.gch: plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX precompiled header plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx.gch"
	cd /home/jopper/veyon/plugins/platform/linux && /usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake precompile /home/jopper/veyon/build/plugins/platform/linux/linux-platform_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/build/plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx /home/jopper/veyon/build/plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx.gch LinuxPlatformPlugin.cpp

plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx: plugins/platform/linux/cotire/linux-platform_CXX_prefix.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating CXX prefix header plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/build/plugins/platform/linux/linux-platform_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/build/plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx /home/jopper/veyon/build/plugins/platform/linux/cotire/linux-platform_CXX_prefix.cxx

plugins/platform/linux/cotire/linux-platform_CXX_prefix.cxx: ../core/include/Cotire.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating CXX prefix source plugins/platform/linux/cotire/linux-platform_CXX_prefix.cxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/build/plugins/platform/linux/linux-platform_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/build/plugins/platform/linux/cotire/linux-platform_CXX_prefix.cxx /home/jopper/veyon/core/include/Cotire.h

linux-platform_pch: plugins/platform/linux/CMakeFiles/linux-platform_pch
linux-platform_pch: plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx.gch
linux-platform_pch: plugins/platform/linux/cotire/linux-platform_CXX_prefix.hxx
linux-platform_pch: plugins/platform/linux/cotire/linux-platform_CXX_prefix.cxx
linux-platform_pch: plugins/platform/linux/CMakeFiles/linux-platform_pch.dir/build.make

.PHONY : linux-platform_pch

# Rule to build all files generated by this target.
plugins/platform/linux/CMakeFiles/linux-platform_pch.dir/build: linux-platform_pch

.PHONY : plugins/platform/linux/CMakeFiles/linux-platform_pch.dir/build

plugins/platform/linux/CMakeFiles/linux-platform_pch.dir/clean:
	cd /home/jopper/veyon/build/plugins/platform/linux && $(CMAKE_COMMAND) -P CMakeFiles/linux-platform_pch.dir/cmake_clean.cmake
.PHONY : plugins/platform/linux/CMakeFiles/linux-platform_pch.dir/clean

plugins/platform/linux/CMakeFiles/linux-platform_pch.dir/depend:
	cd /home/jopper/veyon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/plugins/platform/linux /home/jopper/veyon/build /home/jopper/veyon/build/plugins/platform/linux /home/jopper/veyon/build/plugins/platform/linux/CMakeFiles/linux-platform_pch.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/platform/linux/CMakeFiles/linux-platform_pch.dir/depend

