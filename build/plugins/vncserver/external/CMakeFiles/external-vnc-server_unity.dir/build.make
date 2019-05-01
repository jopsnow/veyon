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
include plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/depend.make

# Include the progress variables for this target.
include plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/flags.make

plugins/vncserver/external/moc_ExternalVncServer.cpp: ../plugins/vncserver/external/ExternalVncServer.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_ExternalVncServer.cpp"
	cd /home/jopper/veyon/build/plugins/vncserver/external && /usr/lib/qt5/bin/moc @/home/jopper/veyon/build/plugins/vncserver/external/moc_ExternalVncServer.cpp_parameters

plugins/vncserver/external/moc_ExternalVncServerConfiguration.cpp: ../plugins/vncserver/external/ExternalVncServerConfiguration.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_ExternalVncServerConfiguration.cpp"
	cd /home/jopper/veyon/build/plugins/vncserver/external && /usr/lib/qt5/bin/moc @/home/jopper/veyon/build/plugins/vncserver/external/moc_ExternalVncServerConfiguration.cpp_parameters

plugins/vncserver/external/moc_ExternalVncServerConfigurationWidget.cpp: ../plugins/vncserver/external/ExternalVncServerConfigurationWidget.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_ExternalVncServerConfigurationWidget.cpp"
	cd /home/jopper/veyon/build/plugins/vncserver/external && /usr/lib/qt5/bin/moc @/home/jopper/veyon/build/plugins/vncserver/external/moc_ExternalVncServerConfigurationWidget.cpp_parameters

plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.hxx: plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating CXX prefix header plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.hxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/build/plugins/vncserver/external/external-vnc-server_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/build/plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.hxx /home/jopper/veyon/build/plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.cxx

plugins/vncserver/external/cotire/external-vnc-server_CXX_unity.cxx: plugins/vncserver/external/external-vnc-server_CXX_relwithdebinfo_cotire.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating CXX unity source plugins/vncserver/external/cotire/external-vnc-server_CXX_unity.cxx"
	cd /home/jopper/veyon/plugins/vncserver/external && /usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake unity /home/jopper/veyon/build/plugins/vncserver/external/external-vnc-server_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/build/plugins/vncserver/external/cotire/external-vnc-server_CXX_unity.cxx

plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.cxx: ../core/include/Cotire.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating CXX prefix source plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.cxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/build/plugins/vncserver/external/external-vnc-server_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/build/plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.cxx /home/jopper/veyon/core/include/Cotire.h

plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o: plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/flags.make
plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o: plugins/vncserver/external/cotire/external-vnc-server_CXX_unity.cxx
plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o: plugins/vncserver/external/moc_ExternalVncServer.cpp
plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o: plugins/vncserver/external/moc_ExternalVncServerConfiguration.cpp
plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o: plugins/vncserver/external/moc_ExternalVncServerConfigurationWidget.cpp
plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o: plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.hxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o"
	cd /home/jopper/veyon/build/plugins/vncserver/external && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/build/plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.hxx"  -o CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o -c /home/jopper/veyon/build/plugins/vncserver/external/cotire/external-vnc-server_CXX_unity.cxx

plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.i"
	cd /home/jopper/veyon/build/plugins/vncserver/external && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/build/plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.hxx"  -E /home/jopper/veyon/build/plugins/vncserver/external/cotire/external-vnc-server_CXX_unity.cxx > CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.i

plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.s"
	cd /home/jopper/veyon/build/plugins/vncserver/external && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/build/plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.hxx"  -S /home/jopper/veyon/build/plugins/vncserver/external/cotire/external-vnc-server_CXX_unity.cxx -o CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.s

plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o.requires:

.PHONY : plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o.requires

plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o.provides: plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o.requires
	$(MAKE) -f plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/build.make plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o.provides.build
.PHONY : plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o.provides

plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o.provides.build: plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o


# Object files for target external-vnc-server_unity
external__vnc__server_unity_OBJECTS = \
"CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o"

# External object files for target external-vnc-server_unity
external__vnc__server_unity_EXTERNAL_OBJECTS =

plugins/vncserver/external/external-vnc-server.so: plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o
plugins/vncserver/external/external-vnc-server.so: plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/build.make
plugins/vncserver/external/external-vnc-server.so: core/libveyon-core.so
plugins/vncserver/external/external-vnc-server.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.9.5
plugins/vncserver/external/external-vnc-server.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.9.5
plugins/vncserver/external/external-vnc-server.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.9.5
plugins/vncserver/external/external-vnc-server.so: /usr/lib/x86_64-linux-gnu/libQt5Concurrent.so.5.9.5
plugins/vncserver/external/external-vnc-server.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
plugins/vncserver/external/external-vnc-server.so: /usr/lib/x86_64-linux-gnu/libz.so
plugins/vncserver/external/external-vnc-server.so: /usr/lib/x86_64-linux-gnu/libjpeg.so
plugins/vncserver/external/external-vnc-server.so: /usr/lib/x86_64-linux-gnu/libpng.so
plugins/vncserver/external/external-vnc-server.so: /usr/lib/x86_64-linux-gnu/liblzo2.so
plugins/vncserver/external/external-vnc-server.so: /usr/lib/x86_64-linux-gnu/libqca-qt5.so
plugins/vncserver/external/external-vnc-server.so: /usr/lib/x86_64-linux-gnu/libssl.so
plugins/vncserver/external/external-vnc-server.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
plugins/vncserver/external/external-vnc-server.so: plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jopper/veyon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX shared module external-vnc-server.so"
	cd /home/jopper/veyon/build/plugins/vncserver/external && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/external-vnc-server_unity.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/build: plugins/vncserver/external/external-vnc-server.so

.PHONY : plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/build

plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/requires: plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/cotire/external-vnc-server_CXX_unity.cxx.o.requires

.PHONY : plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/requires

plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/clean:
	cd /home/jopper/veyon/build/plugins/vncserver/external && $(CMAKE_COMMAND) -P CMakeFiles/external-vnc-server_unity.dir/cmake_clean.cmake
.PHONY : plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/clean

plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/depend: plugins/vncserver/external/moc_ExternalVncServer.cpp
plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/depend: plugins/vncserver/external/moc_ExternalVncServerConfiguration.cpp
plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/depend: plugins/vncserver/external/moc_ExternalVncServerConfigurationWidget.cpp
plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/depend: plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.hxx
plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/depend: plugins/vncserver/external/cotire/external-vnc-server_CXX_unity.cxx
plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/depend: plugins/vncserver/external/cotire/external-vnc-server_CXX_prefix.cxx
	cd /home/jopper/veyon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/plugins/vncserver/external /home/jopper/veyon/build /home/jopper/veyon/build/plugins/vncserver/external /home/jopper/veyon/build/plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/vncserver/external/CMakeFiles/external-vnc-server_unity.dir/depend

