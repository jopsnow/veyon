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
include master/CMakeFiles/veyon-master_unity.dir/depend.make

# Include the progress variables for this target.
include master/CMakeFiles/veyon-master_unity.dir/progress.make

# Include the compile flags for this target's objects.
include master/CMakeFiles/veyon-master_unity.dir/flags.make

master/ui_ComputerManagementView.h: ../master/forms/ComputerManagementView.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_ComputerManagementView.h"
	cd /home/jopper/veyon/cmake/master && /usr/x86_64-w64-mingw32/bin/uic -o /home/jopper/veyon/cmake/master/ui_ComputerManagementView.h /home/jopper/veyon/master/forms/ComputerManagementView.ui

master/ui_ComputerMonitoringView.h: ../master/forms/ComputerMonitoringView.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_ComputerMonitoringView.h"
	cd /home/jopper/veyon/cmake/master && /usr/x86_64-w64-mingw32/bin/uic -o /home/jopper/veyon/cmake/master/ui_ComputerMonitoringView.h /home/jopper/veyon/master/forms/ComputerMonitoringView.ui

master/ui_MainWindow.h: ../master/forms/MainWindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ui_MainWindow.h"
	cd /home/jopper/veyon/cmake/master && /usr/x86_64-w64-mingw32/bin/uic -o /home/jopper/veyon/cmake/master/ui_MainWindow.h /home/jopper/veyon/master/forms/MainWindow.ui

master/ui_RoomSelectionDialog.h: ../master/forms/RoomSelectionDialog.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating ui_RoomSelectionDialog.h"
	cd /home/jopper/veyon/cmake/master && /usr/x86_64-w64-mingw32/bin/uic -o /home/jopper/veyon/cmake/master/ui_RoomSelectionDialog.h /home/jopper/veyon/master/forms/RoomSelectionDialog.ui

master/ui_ScreenshotManagementView.h: ../master/forms/ScreenshotManagementView.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating ui_ScreenshotManagementView.h"
	cd /home/jopper/veyon/cmake/master && /usr/x86_64-w64-mingw32/bin/uic -o /home/jopper/veyon/cmake/master/ui_ScreenshotManagementView.h /home/jopper/veyon/master/forms/ScreenshotManagementView.ui

master/winrc.obj: master/veyon-master.rc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating winrc.obj"
	cd /home/jopper/veyon/cmake/master && /usr/bin/x86_64-w64-mingw32-windres -I/home/jopper/veyon/master -o/home/jopper/veyon/cmake/master/winrc.obj -i/home/jopper/veyon/cmake/master/veyon-master.rc

master/src/moc_CheckableItemProxyModel.cpp: ../master/src/CheckableItemProxyModel.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Generating src/moc_CheckableItemProxyModel.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_CheckableItemProxyModel.cpp_parameters

master/src/moc_ComputerControlListModel.cpp: ../master/src/ComputerControlListModel.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Generating src/moc_ComputerControlListModel.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_ComputerControlListModel.cpp_parameters

master/src/moc_ComputerManagementView.cpp: ../master/src/ComputerManagementView.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Generating src/moc_ComputerManagementView.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_ComputerManagementView.cpp_parameters

master/src/moc_ComputerManager.cpp: ../master/src/ComputerManager.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Generating src/moc_ComputerManager.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_ComputerManager.cpp_parameters

master/src/moc_ComputerMonitoringView.cpp: ../master/src/ComputerMonitoringView.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Generating src/moc_ComputerMonitoringView.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_ComputerMonitoringView.cpp_parameters

master/src/moc_ComputerSortFilterProxyModel.cpp: ../master/src/ComputerSortFilterProxyModel.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Generating src/moc_ComputerSortFilterProxyModel.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_ComputerSortFilterProxyModel.cpp_parameters

master/src/moc_FlexibleListView.cpp: ../master/src/FlexibleListView.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Generating src/moc_FlexibleListView.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_FlexibleListView.cpp_parameters

master/src/moc_MainToolBar.cpp: ../master/src/MainToolBar.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Generating src/moc_MainToolBar.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_MainToolBar.cpp_parameters

master/src/moc_MainWindow.cpp: ../master/src/MainWindow.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Generating src/moc_MainWindow.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_MainWindow.cpp_parameters

master/src/moc_NetworkObjectFilterProxyModel.cpp: ../master/src/NetworkObjectFilterProxyModel.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Generating src/moc_NetworkObjectFilterProxyModel.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_NetworkObjectFilterProxyModel.cpp_parameters

master/src/moc_NetworkObjectOverlayDataModel.cpp: ../master/src/NetworkObjectOverlayDataModel.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Generating src/moc_NetworkObjectOverlayDataModel.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_NetworkObjectOverlayDataModel.cpp_parameters

master/src/moc_NetworkObjectTreeModel.cpp: ../master/src/NetworkObjectTreeModel.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Generating src/moc_NetworkObjectTreeModel.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_NetworkObjectTreeModel.cpp_parameters

master/src/moc_RecursiveFilterProxyModel.cpp: ../master/src/RecursiveFilterProxyModel.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Generating src/moc_RecursiveFilterProxyModel.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_RecursiveFilterProxyModel.cpp_parameters

master/src/moc_RoomSelectionDialog.cpp: ../master/src/RoomSelectionDialog.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Generating src/moc_RoomSelectionDialog.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_RoomSelectionDialog.cpp_parameters

master/src/moc_ScreenshotManagementView.cpp: ../master/src/ScreenshotManagementView.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Generating src/moc_ScreenshotManagementView.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_ScreenshotManagementView.cpp_parameters

master/src/moc_UserConfig.cpp: ../master/src/UserConfig.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Generating src/moc_UserConfig.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_UserConfig.cpp_parameters

master/src/moc_VeyonMaster.cpp: ../master/src/VeyonMaster.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Generating src/moc_VeyonMaster.cpp"
	cd /home/jopper/veyon/cmake/master/src && /usr/x86_64-w64-mingw32/bin/moc @/home/jopper/veyon/cmake/master/src/moc_VeyonMaster.cpp_parameters

master/qrc_master.cpp: ../master/resources/zoom-fit-best.png
master/qrc_master.cpp: ../master/resources/camera-photo.png
master/qrc_master.cpp: ../master/resources/preferences-desktop-display.png
master/qrc_master.cpp: ../master/resources/preferences-desktop-display-blue.png
master/qrc_master.cpp: ../master/resources/preferences-desktop-display-orange.png
master/qrc_master.cpp: ../master/resources/preferences-desktop-display-gray.png
master/qrc_master.cpp: ../master/resources/preferences-desktop-display-red.png
master/qrc_master.cpp: ../master/resources/splash.png
master/qrc_master.cpp: ../master/resources/applications-education.png
master/qrc_master.cpp: ../master/resources/edit-find.png
master/qrc_master.cpp: ../master/resources/align-grid.png
master/qrc_master.cpp: ../master/resources/exchange-positions-zorder.png
master/qrc_master.cpp: ../master/resources/powered-on.png
master/qrc_master.cpp: ../master/master.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_24) "Generating qrc_master.cpp"
	cd /home/jopper/veyon/cmake/master && /usr/x86_64-w64-mingw32/bin/rcc --name master --output /home/jopper/veyon/cmake/master/qrc_master.cpp /home/jopper/veyon/master/master.qrc

master/cotire/veyon-master_CXX_prefix.hxx: master/cotire/veyon-master_CXX_prefix.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_25) "Generating CXX prefix header master/cotire/veyon-master_CXX_prefix.hxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/cmake/master/veyon-master_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/cmake/master/cotire/veyon-master_CXX_prefix.hxx /home/jopper/veyon/cmake/master/cotire/veyon-master_CXX_prefix.cxx

master/cotire/veyon-master_CXX_unity.cxx: master/veyon-master_CXX_relwithdebinfo_cotire.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_26) "Generating CXX unity source master/cotire/veyon-master_CXX_unity.cxx"
	cd /home/jopper/veyon/master && /usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake unity /home/jopper/veyon/cmake/master/veyon-master_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/cmake/master/cotire/veyon-master_CXX_unity.cxx

master/cotire/veyon-master_CXX_prefix.cxx: ../core/include/Cotire.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_27) "Generating CXX prefix source master/cotire/veyon-master_CXX_prefix.cxx"
	/usr/bin/cmake -DCOTIRE_BUILD_TYPE:STRING=relwithdebinfo -DCOTIRE_VERBOSE:BOOL=$(VERBOSE) -P /home/jopper/veyon/cmake/modules/cotire.cmake combine /home/jopper/veyon/cmake/master/veyon-master_CXX_relwithdebinfo_cotire.cmake /home/jopper/veyon/cmake/master/cotire/veyon-master_CXX_prefix.cxx /home/jopper/veyon/core/include/Cotire.h

master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/CMakeFiles/veyon-master_unity.dir/flags.make
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/CMakeFiles/veyon-master_unity.dir/includes_CXX.rsp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/cotire/veyon-master_CXX_unity.cxx
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/ui_ComputerManagementView.h
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/ui_ComputerMonitoringView.h
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/ui_MainWindow.h
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/ui_RoomSelectionDialog.h
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/ui_ScreenshotManagementView.h
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_CheckableItemProxyModel.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_ComputerControlListModel.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_ComputerManagementView.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_ComputerManager.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_ComputerMonitoringView.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_ComputerSortFilterProxyModel.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_FlexibleListView.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_MainToolBar.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_MainWindow.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_NetworkObjectFilterProxyModel.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_NetworkObjectOverlayDataModel.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_NetworkObjectTreeModel.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_RecursiveFilterProxyModel.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_RoomSelectionDialog.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_ScreenshotManagementView.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_UserConfig.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/src/moc_VeyonMaster.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/qrc_master.cpp
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/winrc.obj
master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj: master/cotire/veyon-master_CXX_prefix.hxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_28) "Building CXX object master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj"
	cd /home/jopper/veyon/cmake/master && /usr/bin/x86_64-w64-mingw32-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/cmake/master/cotire/veyon-master_CXX_prefix.hxx"  -o CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj -c /home/jopper/veyon/cmake/master/cotire/veyon-master_CXX_unity.cxx

master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.i"
	cd /home/jopper/veyon/cmake/master && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/cmake/master/cotire/veyon-master_CXX_prefix.hxx"  -E /home/jopper/veyon/cmake/master/cotire/veyon-master_CXX_unity.cxx > CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.i

master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.s"
	cd /home/jopper/veyon/cmake/master && /usr/bin/x86_64-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -Winvalid-pch -include "/home/jopper/veyon/cmake/master/cotire/veyon-master_CXX_prefix.hxx"  -S /home/jopper/veyon/cmake/master/cotire/veyon-master_CXX_unity.cxx -o CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.s

master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj.requires:

.PHONY : master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj.requires

master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj.provides: master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj.requires
	$(MAKE) -f master/CMakeFiles/veyon-master_unity.dir/build.make master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj.provides.build
.PHONY : master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj.provides

master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj.provides.build: master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj


# Object files for target veyon-master_unity
veyon__master_unity_OBJECTS = \
"CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj"

# External object files for target veyon-master_unity
veyon__master_unity_EXTERNAL_OBJECTS = \
"/home/jopper/veyon/cmake/master/winrc.obj"

master/veyon-master.exe: master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj
master/veyon-master.exe: master/winrc.obj
master/veyon-master.exe: master/CMakeFiles/veyon-master_unity.dir/build.make
master/veyon-master.exe: core/libveyon-core.dll.a
master/veyon-master.exe: /usr/x86_64-w64-mingw32/lib/libQt5Concurrent.a
master/veyon-master.exe: /usr/x86_64-w64-mingw32/lib/libQt5Network.a
master/veyon-master.exe: /usr/x86_64-w64-mingw32/lib/libQt5Widgets.a
master/veyon-master.exe: /usr/x86_64-w64-mingw32/lib/libQt5Gui.a
master/veyon-master.exe: /usr/x86_64-w64-mingw32/lib/libQt5Core.a
master/veyon-master.exe: /usr/x86_64-w64-mingw32/lib/libz.dll.a
master/veyon-master.exe: /usr/x86_64-w64-mingw32/lib/libjpeg.dll.a
master/veyon-master.exe: /usr/x86_64-w64-mingw32/lib/libpng.dll.a
master/veyon-master.exe: /usr/x86_64-w64-mingw32/lib/liblzo2.dll.a
master/veyon-master.exe: /usr/x86_64-w64-mingw32/bin/libqca-qt5.dll
master/veyon-master.exe: /usr/x86_64-w64-mingw32/lib/libssl.dll.a
master/veyon-master.exe: /usr/x86_64-w64-mingw32/lib/libcrypto.dll.a
master/veyon-master.exe: master/CMakeFiles/veyon-master_unity.dir/linklibs.rsp
master/veyon-master.exe: master/CMakeFiles/veyon-master_unity.dir/objects1.rsp
master/veyon-master.exe: master/CMakeFiles/veyon-master_unity.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jopper/veyon/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_29) "Linking CXX executable veyon-master.exe"
	cd /home/jopper/veyon/cmake/master && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/veyon-master_unity.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
master/CMakeFiles/veyon-master_unity.dir/build: master/veyon-master.exe

.PHONY : master/CMakeFiles/veyon-master_unity.dir/build

master/CMakeFiles/veyon-master_unity.dir/requires: master/CMakeFiles/veyon-master_unity.dir/cotire/veyon-master_CXX_unity.cxx.obj.requires

.PHONY : master/CMakeFiles/veyon-master_unity.dir/requires

master/CMakeFiles/veyon-master_unity.dir/clean:
	cd /home/jopper/veyon/cmake/master && $(CMAKE_COMMAND) -P CMakeFiles/veyon-master_unity.dir/cmake_clean.cmake
.PHONY : master/CMakeFiles/veyon-master_unity.dir/clean

master/CMakeFiles/veyon-master_unity.dir/depend: master/ui_ComputerManagementView.h
master/CMakeFiles/veyon-master_unity.dir/depend: master/ui_ComputerMonitoringView.h
master/CMakeFiles/veyon-master_unity.dir/depend: master/ui_MainWindow.h
master/CMakeFiles/veyon-master_unity.dir/depend: master/ui_RoomSelectionDialog.h
master/CMakeFiles/veyon-master_unity.dir/depend: master/ui_ScreenshotManagementView.h
master/CMakeFiles/veyon-master_unity.dir/depend: master/winrc.obj
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_CheckableItemProxyModel.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_ComputerControlListModel.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_ComputerManagementView.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_ComputerManager.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_ComputerMonitoringView.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_ComputerSortFilterProxyModel.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_FlexibleListView.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_MainToolBar.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_MainWindow.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_NetworkObjectFilterProxyModel.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_NetworkObjectOverlayDataModel.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_NetworkObjectTreeModel.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_RecursiveFilterProxyModel.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_RoomSelectionDialog.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_ScreenshotManagementView.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_UserConfig.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/src/moc_VeyonMaster.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/qrc_master.cpp
master/CMakeFiles/veyon-master_unity.dir/depend: master/cotire/veyon-master_CXX_prefix.hxx
master/CMakeFiles/veyon-master_unity.dir/depend: master/cotire/veyon-master_CXX_unity.cxx
master/CMakeFiles/veyon-master_unity.dir/depend: master/cotire/veyon-master_CXX_prefix.cxx
	cd /home/jopper/veyon/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/master /home/jopper/veyon/cmake /home/jopper/veyon/cmake/master /home/jopper/veyon/cmake/master/CMakeFiles/veyon-master_unity.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : master/CMakeFiles/veyon-master_unity.dir/depend

