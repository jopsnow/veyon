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

# Utility rule file for th.ts.

# Include the progress variables for this target.
include translations/CMakeFiles/th.ts.dir/progress.make

translations/CMakeFiles/th.ts:
	cd /home/jopper/veyon/cmake/translations && /usr/x86_64-w64-mingw32/bin/lupdate -I/home/jopper/veyon/core/include -locations none -no-obsolete /home/jopper/veyon/build/CMakeFiles/3.10.2/CompilerIdCXX/CMakeCXXCompilerId.cpp /home/jopper/veyon/build/configurator/qrc_veyon-configurator.cpp /home/jopper/veyon/build/configurator/src/moc_AccessControlPage.cpp /home/jopper/veyon/build/configurator/src/moc_AccessControlRuleEditDialog.cpp /home/jopper/veyon/build/configurator/src/moc_AccessControlRuleListModel.cpp /home/jopper/veyon/build/configurator/src/moc_AccessControlRulesTestDialog.cpp /home/jopper/veyon/build/configurator/src/moc_ConfigurationTestController.cpp /home/jopper/veyon/build/configurator/src/moc_GeneralConfigurationPage.cpp /home/jopper/veyon/build/configurator/src/moc_MainWindow.cpp /home/jopper/veyon/build/configurator/src/moc_MasterConfigurationPage.cpp /home/jopper/veyon/build/configurator/src/moc_ServiceConfigurationPage.cpp /home/jopper/veyon/build/core/include/Configuration/moc_JsonStore.cpp /home/jopper/veyon/build/core/include/Configuration/moc_LocalStore.cpp /home/jopper/veyon/build/core/include/Configuration/moc_Object.cpp /home/jopper/veyon/build/core/include/Configuration/moc_Proxy.cpp /home/jopper/veyon/build/core/include/Configuration/moc_Store.cpp /home/jopper/veyon/build/core/include/Configuration/moc_UiMapping.cpp /home/jopper/veyon/build/core/include/moc_AboutDialog.cpp /home/jopper/veyon/build/core/include/moc_AccessControlProvider.cpp /home/jopper/veyon/build/core/include/moc_AccessControlRule.cpp /home/jopper/veyon/build/core/include/moc_AuthenticationCredentials.cpp /home/jopper/veyon/build/core/include/moc_BuiltinFeatures.cpp /home/jopper/veyon/build/core/include/moc_CommandLineIO.cpp /home/jopper/veyon/build/core/include/moc_CommandLinePluginInterface.cpp /home/jopper/veyon/build/core/include/moc_Computer.cpp /home/jopper/veyon/build/core/include/moc_ComputerControlInterface.cpp /home/jopper/veyon/build/core/include/moc_ConfigurationManager.cpp /home/jopper/veyon/build/core/include/moc_ConfigurationPage.cpp /home/jopper/veyon/build/core/include/moc_ConfigurationPagePluginInterface.cpp /home/jopper/veyon/build/core/include/moc_Cotire.cpp /home/jopper/veyon/build/core/include/moc_CryptoCore.cpp /home/jopper/veyon/build/core/include/moc_DesktopAccessDialog.cpp /home/jopper/veyon/build/core/include/moc_Feature.cpp /home/jopper/veyon/build/core/include/moc_FeatureControl.cpp /home/jopper/veyon/build/core/include/moc_FeatureManager.cpp /home/jopper/veyon/build/core/include/moc_FeatureMessage.cpp /home/jopper/veyon/build/core/include/moc_FeatureProviderInterface.cpp /home/jopper/veyon/build/core/include/moc_FeatureWorkerManager.cpp /home/jopper/veyon/build/core/include/moc_FileSystemBrowser.cpp /home/jopper/veyon/build/core/include/moc_Filesystem.cpp /home/jopper/veyon/build/core/include/moc_InternetAccessControlBackendInterface.cpp /home/jopper/veyon/build/core/include/moc_KeyboardShortcutTrapper.cpp /home/jopper/veyon/build/core/include/moc_LockWidget.cpp /home/jopper/veyon/build/core/include/moc_Logger.cpp /home/jopper/veyon/build/core/include/moc_MonitoringMode.cpp /home/jopper/veyon/build/core/include/moc_NetworkObject.cpp /home/jopper/veyon/build/core/include/moc_NetworkObjectDirectory.cpp /home/jopper/veyon/build/core/include/moc_NetworkObjectDirectoryManager.cpp /home/jopper/veyon/build/core/include/moc_NetworkObjectDirectoryPluginInterface.cpp /home/jopper/veyon/build/core/include/moc_NetworkObjectModel.cpp /home/jopper/veyon/build/core/include/moc_ObjectManager.cpp /home/jopper/veyon/build/core/include/moc_PasswordDialog.cpp /home/jopper/veyon/build/core/include/moc_PlatformCoreFunctions.cpp /home/jopper/veyon/build/core/include/moc_PlatformFilesystemFunctions.cpp /home/jopper/veyon/build/core/include/moc_PlatformInputDeviceFunctions.cpp /home/jopper/veyon/build/core/include/moc_PlatformNetworkFunctions.cpp /home/jopper/veyon/build/core/include/moc_PlatformPluginInterface.cpp /home/jopper/veyon/build/core/include/moc_PlatformPluginManager.cpp /home/jopper/veyon/build/core/include/moc_PlatformServiceCore.cpp /home/jopper/veyon/build/core/include/moc_PlatformServiceFunctions.cpp /home/jopper/veyon/build/core/include/moc_PlatformUserFunctions.cpp /home/jopper/veyon/build/core/include/moc_Plugin.cpp /home/jopper/veyon/build/core/include/moc_PluginInterface.cpp /home/jopper/veyon/build/core/include/moc_PluginManager.cpp /home/jopper/veyon/build/core/include/moc_ProgressWidget.cpp /home/jopper/veyon/build/core/include/moc_QtCompat.cpp /home/jopper/veyon/build/core/include/moc_RfbVeyonAuth.cpp /home/jopper/veyon/build/core/include/moc_Screenshot.cpp /home/jopper/veyon/build/core/include/moc_ServiceControl.cpp /home/jopper/veyon/build/core/include/moc_SimpleFeatureProvider.cpp /home/jopper/veyon/build/core/include/moc_SocketDevice.cpp /home/jopper/veyon/build/core/include/moc_SystemTrayIcon.cpp /home/jopper/veyon/build/core/include/moc_ToolButton.cpp /home/jopper/veyon/build/core/include/moc_UserGroupsBackendInterface.cpp /home/jopper/veyon/build/core/include/moc_UserGroupsBackendManager.cpp /home/jopper/veyon/build/core/include/moc_UserSessionControl.cpp /home/jopper/veyon/build/core/include/moc_VariantArrayMessage.cpp /home/jopper/veyon/build/core/include/moc_VariantStream.cpp /home/jopper/veyon/build/core/include/moc_VeyonConfiguration.cpp /home/jopper/veyon/build/core/include/moc_VeyonConfigurationProperties.cpp /home/jopper/veyon/build/core/include/moc_VeyonConnection.cpp /home/jopper/veyon/build/core/include/moc_VeyonCore.cpp /home/jopper/veyon/build/core/include/moc_VeyonMasterInterface.cpp /home/jopper/veyon/build/core/include/moc_VeyonRfbExt.cpp /home/jopper/veyon/build/core/include/moc_VeyonServerInterface.cpp /home/jopper/veyon/build/core/include/moc_VeyonServiceControl.cpp /home/jopper/veyon/build/core/include/moc_VeyonWorkerInterface.cpp /home/jopper/veyon/build/core/include/moc_VncClientProtocol.cpp /home/jopper/veyon/build/core/include/moc_VncConnection.cpp /home/jopper/veyon/build/core/include/moc_VncServerClient.cpp /home/jopper/veyon/build/core/include/moc_VncServerPluginInterface.cpp /home/jopper/veyon/build/core/include/moc_VncServerProtocol.cpp /home/jopper/veyon/build/core/include/moc_VncView.cpp /home/jopper/veyon/build/core/qrc_builddata.cpp /home/jopper/veyon/build/core/qrc_core.cpp /home/jopper/veyon/build/master/qrc_master.cpp /home/jopper/veyon/build/master/src/moc_CheckableItemProxyModel.cpp /home/jopper/veyon/build/master/src/moc_ComputerControlListModel.cpp /home/jopper/veyon/build/master/src/moc_ComputerManagementView.cpp /home/jopper/veyon/build/master/src/moc_ComputerManager.cpp /home/jopper/veyon/build/master/src/moc_ComputerMonitoringView.cpp /home/jopper/veyon/build/master/src/moc_ComputerSortFilterProxyModel.cpp /home/jopper/veyon/build/master/src/moc_FlexibleListView.cpp /home/jopper/veyon/build/master/src/moc_MainToolBar.cpp /home/jopper/veyon/build/master/src/moc_MainWindow.cpp /home/jopper/veyon/build/master/src/moc_NetworkObjectFilterProxyModel.cpp /home/jopper/veyon/build/master/src/moc_NetworkObjectOverlayDataModel.cpp /home/jopper/veyon/build/master/src/moc_NetworkObjectTreeModel.cpp /home/jopper/veyon/build/master/src/moc_RecursiveFilterProxyModel.cpp /home/jopper/veyon/build/master/src/moc_RoomSelectionDialog.cpp /home/jopper/veyon/build/master/src/moc_ScreenshotManagementView.cpp /home/jopper/veyon/build/master/src/moc_UserConfig.cpp /home/jopper/veyon/build/master/src/moc_VeyonMaster.cpp /home/jopper/veyon/build/plugins/authkeys/moc_AuthKeysConfigurationPage.cpp /home/jopper/veyon/build/plugins/authkeys/moc_AuthKeysManager.cpp /home/jopper/veyon/build/plugins/authkeys/moc_AuthKeysPlugin.cpp /home/jopper/veyon/build/plugins/authkeys/moc_AuthKeysTableModel.cpp /home/jopper/veyon/build/plugins/authkeys/qrc_authkeys.cpp /home/jopper/veyon/build/plugins/builtindirectory/moc_BuiltinDirectory.cpp /home/jopper/veyon/build/plugins/builtindirectory/moc_BuiltinDirectoryConfiguration.cpp /home/jopper/veyon/build/plugins/builtindirectory/moc_BuiltinDirectoryConfigurationPage.cpp /home/jopper/veyon/build/plugins/builtindirectory/moc_BuiltinDirectoryPlugin.cpp /home/jopper/veyon/build/plugins/builtindirectory/qrc_builtindirectory.cpp /home/jopper/veyon/build/plugins/config/moc_ConfigCommandLinePlugin.cpp /home/jopper/veyon/build/plugins/demo/moc_DemoClient.cpp /home/jopper/veyon/build/plugins/demo/moc_DemoConfiguration.cpp /home/jopper/veyon/build/plugins/demo/moc_DemoConfigurationPage.cpp /home/jopper/veyon/build/plugins/demo/moc_DemoFeaturePlugin.cpp /home/jopper/veyon/build/plugins/demo/moc_DemoServer.cpp /home/jopper/veyon/build/plugins/demo/moc_DemoServerConnection.cpp /home/jopper/veyon/build/plugins/demo/moc_DemoServerProtocol.cpp /home/jopper/veyon/build/plugins/demo/qrc_demo.cpp /home/jopper/veyon/build/plugins/desktopservices/moc_DesktopServiceObject.cpp /home/jopper/veyon/build/plugins/desktopservices/moc_DesktopServicesConfiguration.cpp /home/jopper/veyon/build/plugins/desktopservices/moc_DesktopServicesConfigurationPage.cpp /home/jopper/veyon/build/plugins/desktopservices/moc_DesktopServicesFeaturePlugin.cpp /home/jopper/veyon/build/plugins/desktopservices/moc_RunProgramDialog.cpp /home/jopper/veyon/build/plugins/desktopservices/qrc_desktopservices.cpp /home/jopper/veyon/build/plugins/ldap/moc_LdapConfiguration.cpp /home/jopper/veyon/build/plugins/ldap/moc_LdapConfigurationPage.cpp /home/jopper/veyon/build/plugins/ldap/moc_LdapDirectory.cpp /home/jopper/veyon/build/plugins/ldap/moc_LdapNetworkObjectDirectory.cpp /home/jopper/veyon/build/plugins/ldap/moc_LdapPlugin.cpp /home/jopper/veyon/build/plugins/ldap/qrc_ldap.cpp /home/jopper/veyon/build/plugins/platform/linux/moc_LinuxCoreFunctions.cpp /home/jopper/veyon/build/plugins/platform/linux/moc_LinuxDesktopIntegration.cpp /home/jopper/veyon/build/plugins/platform/linux/moc_LinuxFilesystemFunctions.cpp /home/jopper/veyon/build/plugins/platform/linux/moc_LinuxInputDeviceFunctions.cpp /home/jopper/veyon/build/plugins/platform/linux/moc_LinuxKeyboardShortcutTrapper.cpp /home/jopper/veyon/build/plugins/platform/linux/moc_LinuxNetworkFunctions.cpp /home/jopper/veyon/build/plugins/platform/linux/moc_LinuxPlatformPlugin.cpp /home/jopper/veyon/build/plugins/platform/linux/moc_LinuxServiceCore.cpp /home/jopper/veyon/build/plugins/platform/linux/moc_LinuxServiceFunctions.cpp /home/jopper/veyon/build/plugins/platform/linux/moc_LinuxUserFunctions.cpp /home/jopper/veyon/build/plugins/powercontrol/moc_PowerControlFeaturePlugin.cpp /home/jopper/veyon/build/plugins/powercontrol/qrc_powercontrol.cpp /home/jopper/veyon/build/plugins/remoteaccess/moc_RemoteAccessFeaturePlugin.cpp /home/jopper/veyon/build/plugins/remoteaccess/moc_RemoteAccessWidget.cpp /home/jopper/veyon/build/plugins/remoteaccess/qrc_remoteaccess.cpp /home/jopper/veyon/build/plugins/screenlock/moc_ScreenLockFeaturePlugin.cpp /home/jopper/veyon/build/plugins/screenlock/qrc_screenlock.cpp /home/jopper/veyon/build/plugins/screenshot/moc_ScreenshotFeaturePlugin.cpp /home/jopper/veyon/build/plugins/screenshot/qrc_screenshot.cpp /home/jopper/veyon/build/plugins/servicecontrol/moc_ServiceControlPlugin.cpp /home/jopper/veyon/build/plugins/shell/moc_ShellCommandLinePlugin.cpp /home/jopper/veyon/build/plugins/systemusergroups/moc_SystemUserGroupsPlugin.cpp /home/jopper/veyon/build/plugins/textmessage/moc_TextMessageDialog.cpp /home/jopper/veyon/build/plugins/textmessage/moc_TextMessageFeaturePlugin.cpp /home/jopper/veyon/build/plugins/textmessage/qrc_textmessage.cpp /home/jopper/veyon/build/plugins/vncserver/external/moc_ExternalVncServer.cpp /home/jopper/veyon/build/plugins/vncserver/external/moc_ExternalVncServerConfiguration.cpp /home/jopper/veyon/build/plugins/vncserver/external/moc_ExternalVncServerConfigurationWidget.cpp /home/jopper/veyon/build/plugins/vncserver/x11vnc-builtin/moc_BuiltinX11VncServer.cpp /home/jopper/veyon/build/plugins/vncserver/x11vnc-builtin/moc_X11VncConfiguration.cpp /home/jopper/veyon/build/plugins/vncserver/x11vnc-builtin/moc_X11VncConfigurationWidget.cpp /home/jopper/veyon/build/server/src/moc_ComputerControlClient.cpp /home/jopper/veyon/build/server/src/moc_ComputerControlServer.cpp /home/jopper/veyon/build/server/src/moc_ServerAccessControlManager.cpp /home/jopper/veyon/build/server/src/moc_ServerAuthenticationManager.cpp /home/jopper/veyon/build/server/src/moc_VeyonServerProtocol.cpp /home/jopper/veyon/build/server/src/moc_VncProxyConnection.cpp /home/jopper/veyon/build/server/src/moc_VncProxyConnectionFactory.cpp /home/jopper/veyon/build/server/src/moc_VncProxyServer.cpp /home/jopper/veyon/build/server/src/moc_VncServer.cpp /home/jopper/veyon/build/worker/src/moc_FeatureWorkerManagerConnection.cpp /home/jopper/veyon/build/worker/src/moc_VeyonWorker.cpp /home/jopper/veyon/cmake/CMakeFiles/3.10.2/CompilerIdCXX/CMakeCXXCompilerId.cpp /home/jopper/veyon/configurator/src/AccessControlPage.cpp /home/jopper/veyon/configurator/src/AccessControlRuleEditDialog.cpp /home/jopper/veyon/configurator/src/AccessControlRuleListModel.cpp /home/jopper/veyon/configurator/src/AccessControlRulesTestDialog.cpp /home/jopper/veyon/configurator/src/ConfigurationTestController.cpp /home/jopper/veyon/configurator/src/GeneralConfigurationPage.cpp /home/jopper/veyon/configurator/src/MainWindow.cpp /home/jopper/veyon/configurator/src/MasterConfigurationPage.cpp /home/jopper/veyon/configurator/src/ServiceConfigurationPage.cpp /home/jopper/veyon/configurator/src/main.cpp /home/jopper/veyon/core/src/AboutDialog.cpp /home/jopper/veyon/core/src/AccessControlProvider.cpp /home/jopper/veyon/core/src/AccessControlRule.cpp /home/jopper/veyon/core/src/AuthenticationCredentials.cpp /home/jopper/veyon/core/src/BuiltinFeatures.cpp /home/jopper/veyon/core/src/CommandLineIO.cpp /home/jopper/veyon/core/src/Computer.cpp /home/jopper/veyon/core/src/ComputerControlInterface.cpp /home/jopper/veyon/core/src/Configuration/JsonStore.cpp /home/jopper/veyon/core/src/Configuration/LocalStore.cpp /home/jopper/veyon/core/src/Configuration/Object.cpp /home/jopper/veyon/core/src/ConfigurationManager.cpp /home/jopper/veyon/core/src/ConfigurationPage.cpp /home/jopper/veyon/core/src/CryptoCore.cpp /home/jopper/veyon/core/src/DesktopAccessDialog.cpp /home/jopper/veyon/core/src/FeatureControl.cpp /home/jopper/veyon/core/src/FeatureManager.cpp /home/jopper/veyon/core/src/FeatureMessage.cpp /home/jopper/veyon/core/src/FeatureWorkerManager.cpp /home/jopper/veyon/core/src/FileSystemBrowser.cpp /home/jopper/veyon/core/src/Filesystem.cpp /home/jopper/veyon/core/src/LockWidget.cpp /home/jopper/veyon/core/src/Logger.cpp /home/jopper/veyon/core/src/MonitoringMode.cpp /home/jopper/veyon/core/src/NetworkObject.cpp /home/jopper/veyon/core/src/NetworkObjectDirectory.cpp /home/jopper/veyon/core/src/NetworkObjectDirectoryManager.cpp /home/jopper/veyon/core/src/PasswordDialog.cpp /home/jopper/veyon/core/src/PlatformPluginManager.cpp /home/jopper/veyon/core/src/PlatformServiceCore.cpp /home/jopper/veyon/core/src/PluginManager.cpp /home/jopper/veyon/core/src/ProgressWidget.cpp /home/jopper/veyon/core/src/QtCompat.cpp /home/jopper/veyon/core/src/Screenshot.cpp /home/jopper/veyon/core/src/ServiceControl.cpp /home/jopper/veyon/core/src/SimpleFeatureProvider.cpp /home/jopper/veyon/core/src/SystemTrayIcon.cpp /home/jopper/veyon/core/src/ToolButton.cpp /home/jopper/veyon/core/src/UserGroupsBackendManager.cpp /home/jopper/veyon/core/src/UserSessionControl.cpp /home/jopper/veyon/core/src/VariantArrayMessage.cpp /home/jopper/veyon/core/src/VariantStream.cpp /home/jopper/veyon/core/src/VeyonConfiguration.cpp /home/jopper/veyon/core/src/VeyonConnection.cpp /home/jopper/veyon/core/src/VeyonCore.cpp /home/jopper/veyon/core/src/VeyonServiceControl.cpp /home/jopper/veyon/core/src/VncClientProtocol.cpp /home/jopper/veyon/core/src/VncConnection.cpp /home/jopper/veyon/core/src/VncServerProtocol.cpp /home/jopper/veyon/core/src/VncView.cpp /home/jopper/veyon/ctl/src/main.cpp /home/jopper/veyon/master/src/CheckableItemProxyModel.cpp /home/jopper/veyon/master/src/ComputerControlListModel.cpp /home/jopper/veyon/master/src/ComputerManagementView.cpp /home/jopper/veyon/master/src/ComputerManager.cpp /home/jopper/veyon/master/src/ComputerMonitoringView.cpp /home/jopper/veyon/master/src/ComputerSortFilterProxyModel.cpp /home/jopper/veyon/master/src/FlexibleListView.cpp /home/jopper/veyon/master/src/MainToolBar.cpp /home/jopper/veyon/master/src/MainWindow.cpp /home/jopper/veyon/master/src/NetworkObjectFilterProxyModel.cpp /home/jopper/veyon/master/src/NetworkObjectOverlayDataModel.cpp /home/jopper/veyon/master/src/NetworkObjectTreeModel.cpp /home/jopper/veyon/master/src/RecursiveFilterProxyModel.cpp /home/jopper/veyon/master/src/RoomSelectionDialog.cpp /home/jopper/veyon/master/src/ScreenshotManagementView.cpp /home/jopper/veyon/master/src/UserConfig.cpp /home/jopper/veyon/master/src/VeyonMaster.cpp /home/jopper/veyon/master/src/main.cpp /home/jopper/veyon/plugins/authkeys/AuthKeysConfigurationPage.cpp /home/jopper/veyon/plugins/authkeys/AuthKeysManager.cpp /home/jopper/veyon/plugins/authkeys/AuthKeysPlugin.cpp /home/jopper/veyon/plugins/authkeys/AuthKeysTableModel.cpp /home/jopper/veyon/plugins/builtindirectory/BuiltinDirectory.cpp /home/jopper/veyon/plugins/builtindirectory/BuiltinDirectoryConfiguration.cpp /home/jopper/veyon/plugins/builtindirectory/BuiltinDirectoryConfigurationPage.cpp /home/jopper/veyon/plugins/builtindirectory/BuiltinDirectoryPlugin.cpp /home/jopper/veyon/plugins/config/ConfigCommandLinePlugin.cpp /home/jopper/veyon/plugins/demo/DemoClient.cpp /home/jopper/veyon/plugins/demo/DemoConfiguration.cpp /home/jopper/veyon/plugins/demo/DemoConfigurationPage.cpp /home/jopper/veyon/plugins/demo/DemoFeaturePlugin.cpp /home/jopper/veyon/plugins/demo/DemoServer.cpp /home/jopper/veyon/plugins/demo/DemoServerConnection.cpp /home/jopper/veyon/plugins/demo/DemoServerProtocol.cpp /home/jopper/veyon/plugins/desktopservices/DesktopServiceObject.cpp /home/jopper/veyon/plugins/desktopservices/DesktopServicesConfiguration.cpp /home/jopper/veyon/plugins/desktopservices/DesktopServicesConfigurationPage.cpp /home/jopper/veyon/plugins/desktopservices/DesktopServicesFeaturePlugin.cpp /home/jopper/veyon/plugins/desktopservices/RunProgramDialog.cpp /home/jopper/veyon/plugins/ldap/KLdapIntegration.cpp /home/jopper/veyon/plugins/ldap/LdapConfiguration.cpp /home/jopper/veyon/plugins/ldap/LdapConfigurationPage.cpp /home/jopper/veyon/plugins/ldap/LdapDirectory.cpp /home/jopper/veyon/plugins/ldap/LdapNetworkObjectDirectory.cpp /home/jopper/veyon/plugins/ldap/LdapPlugin.cpp /home/jopper/veyon/plugins/platform/linux/LinuxCoreFunctions.cpp /home/jopper/veyon/plugins/platform/linux/LinuxFilesystemFunctions.cpp /home/jopper/veyon/plugins/platform/linux/LinuxInputDeviceFunctions.cpp /home/jopper/veyon/plugins/platform/linux/LinuxNetworkFunctions.cpp /home/jopper/veyon/plugins/platform/linux/LinuxPlatformPlugin.cpp /home/jopper/veyon/plugins/platform/linux/LinuxServiceCore.cpp /home/jopper/veyon/plugins/platform/linux/LinuxServiceFunctions.cpp /home/jopper/veyon/plugins/platform/linux/LinuxUserFunctions.cpp /home/jopper/veyon/plugins/platform/linux/auth-helper/VeyonAuthHelper.cpp /home/jopper/veyon/plugins/platform/windows/SasEventListener.cpp /home/jopper/veyon/plugins/platform/windows/WindowsCoreFunctions.cpp /home/jopper/veyon/plugins/platform/windows/WindowsFilesystemFunctions.cpp /home/jopper/veyon/plugins/platform/windows/WindowsInputDeviceFunctions.cpp /home/jopper/veyon/plugins/platform/windows/WindowsKeyboardShortcutTrapper.cpp /home/jopper/veyon/plugins/platform/windows/WindowsNetworkFunctions.cpp /home/jopper/veyon/plugins/platform/windows/WindowsPlatformPlugin.cpp /home/jopper/veyon/plugins/platform/windows/WindowsServiceControl.cpp /home/jopper/veyon/plugins/platform/windows/WindowsServiceCore.cpp /home/jopper/veyon/plugins/platform/windows/WindowsServiceFunctions.cpp /home/jopper/veyon/plugins/platform/windows/WindowsUserFunctions.cpp /home/jopper/veyon/plugins/platform/windows/WtsSessionManager.cpp /home/jopper/veyon/plugins/platform/windows/XEventLog.cpp /home/jopper/veyon/plugins/powercontrol/PowerControlFeaturePlugin.cpp /home/jopper/veyon/plugins/remoteaccess/RemoteAccessFeaturePlugin.cpp /home/jopper/veyon/plugins/remoteaccess/RemoteAccessWidget.cpp /home/jopper/veyon/plugins/screenlock/ScreenLockFeaturePlugin.cpp /home/jopper/veyon/plugins/screenshot/ScreenshotFeaturePlugin.cpp /home/jopper/veyon/plugins/servicecontrol/ServiceControlPlugin.cpp /home/jopper/veyon/plugins/shell/ShellCommandLinePlugin.cpp /home/jopper/veyon/plugins/systemusergroups/SystemUserGroupsPlugin.cpp /home/jopper/veyon/plugins/textmessage/TextMessageDialog.cpp /home/jopper/veyon/plugins/textmessage/TextMessageFeaturePlugin.cpp /home/jopper/veyon/plugins/vncserver/external/ExternalVncServer.cpp /home/jopper/veyon/plugins/vncserver/external/ExternalVncServerConfiguration.cpp /home/jopper/veyon/plugins/vncserver/external/ExternalVncServerConfigurationWidget.cpp /home/jopper/veyon/plugins/vncserver/ultravnc-builtin/BuiltinUltraVncServer.cpp /home/jopper/veyon/plugins/vncserver/ultravnc-builtin/LogoffEventFilter.cpp /home/jopper/veyon/plugins/vncserver/ultravnc-builtin/UltraVncConfiguration.cpp /home/jopper/veyon/plugins/vncserver/ultravnc-builtin/UltraVncConfigurationWidget.cpp /home/jopper/veyon/plugins/vncserver/ultravnc-builtin/ultravnc.cpp /home/jopper/veyon/plugins/vncserver/ultravnc-builtin/vncntlm.cpp /home/jopper/veyon/plugins/vncserver/x11vnc-builtin/BuiltinX11VncServer.cpp /home/jopper/veyon/plugins/vncserver/x11vnc-builtin/X11VncConfiguration.cpp /home/jopper/veyon/plugins/vncserver/x11vnc-builtin/X11VncConfigurationWidget.cpp /home/jopper/veyon/server/src/ComputerControlClient.cpp /home/jopper/veyon/server/src/ComputerControlServer.cpp /home/jopper/veyon/server/src/ServerAccessControlManager.cpp /home/jopper/veyon/server/src/ServerAuthenticationManager.cpp /home/jopper/veyon/server/src/VeyonServerProtocol.cpp /home/jopper/veyon/server/src/VncProxyConnection.cpp /home/jopper/veyon/server/src/VncProxyServer.cpp /home/jopper/veyon/server/src/VncServer.cpp /home/jopper/veyon/server/src/main.cpp /home/jopper/veyon/service/src/main.cpp /home/jopper/veyon/worker/src/FeatureWorkerManagerConnection.cpp /home/jopper/veyon/worker/src/VeyonWorker.cpp /home/jopper/veyon/worker/src/main.cpp /home/jopper/veyon/build/configurator/ui_AccessControlPage.h /home/jopper/veyon/build/configurator/ui_AccessControlRuleEditDialog.h /home/jopper/veyon/build/configurator/ui_AccessControlRulesTestDialog.h /home/jopper/veyon/build/configurator/ui_GeneralConfigurationPage.h /home/jopper/veyon/build/configurator/ui_MainWindow.h /home/jopper/veyon/build/configurator/ui_MasterConfigurationPage.h /home/jopper/veyon/build/configurator/ui_ServiceConfigurationPage.h /home/jopper/veyon/build/core/include/rfb/rfbconfig.h /home/jopper/veyon/build/core/include/veyonconfig.h /home/jopper/veyon/build/core/ui_AboutDialog.h /home/jopper/veyon/build/core/ui_PasswordDialog.h /home/jopper/veyon/build/master/ui_ComputerManagementView.h /home/jopper/veyon/build/master/ui_ComputerMonitoringView.h /home/jopper/veyon/build/master/ui_MainWindow.h /home/jopper/veyon/build/master/ui_RoomSelectionDialog.h /home/jopper/veyon/build/master/ui_ScreenshotManagementView.h /home/jopper/veyon/build/plugins/authkeys/ui_AuthKeysConfigurationPage.h /home/jopper/veyon/build/plugins/builtindirectory/ui_BuiltinDirectoryConfigurationPage.h /home/jopper/veyon/build/plugins/demo/ui_DemoConfigurationPage.h /home/jopper/veyon/build/plugins/desktopservices/ui_DesktopServicesConfigurationPage.h /home/jopper/veyon/build/plugins/desktopservices/ui_RunProgramDialog.h /home/jopper/veyon/build/plugins/ldap/kldap_config.h /home/jopper/veyon/build/plugins/ldap/ui_LdapConfigurationPage.h /home/jopper/veyon/build/plugins/textmessage/ui_TextMessageDialog.h /home/jopper/veyon/build/plugins/vncserver/external/ui_ExternalVncServerConfigurationWidget.h /home/jopper/veyon/build/plugins/vncserver/x11vnc-builtin/config.h /home/jopper/veyon/build/plugins/vncserver/x11vnc-builtin/ui_X11VncConfigurationWidget.h /home/jopper/veyon/cmake/core/include/rfb/rfbconfig.h /home/jopper/veyon/cmake/core/include/veyonconfig.h /home/jopper/veyon/cmake/plugins/ldap/kldap_config.h /home/jopper/veyon/configurator/src/AccessControlPage.h /home/jopper/veyon/configurator/src/AccessControlRuleEditDialog.h /home/jopper/veyon/configurator/src/AccessControlRuleListModel.h /home/jopper/veyon/configurator/src/AccessControlRulesTestDialog.h /home/jopper/veyon/configurator/src/ConfigurationTestController.h /home/jopper/veyon/configurator/src/GeneralConfigurationPage.h /home/jopper/veyon/configurator/src/MainWindow.h /home/jopper/veyon/configurator/src/MasterConfigurationPage.h /home/jopper/veyon/configurator/src/ServiceConfigurationPage.h /home/jopper/veyon/core/include/AboutDialog.h /home/jopper/veyon/core/include/AccessControlProvider.h /home/jopper/veyon/core/include/AccessControlRule.h /home/jopper/veyon/core/include/AuthenticationCredentials.h /home/jopper/veyon/core/include/BuiltinFeatures.h /home/jopper/veyon/core/include/CommandLineIO.h /home/jopper/veyon/core/include/CommandLinePluginInterface.h /home/jopper/veyon/core/include/Computer.h /home/jopper/veyon/core/include/ComputerControlInterface.h /home/jopper/veyon/core/include/Configuration/JsonStore.h /home/jopper/veyon/core/include/Configuration/LocalStore.h /home/jopper/veyon/core/include/Configuration/Object.h /home/jopper/veyon/core/include/Configuration/Proxy.h /home/jopper/veyon/core/include/Configuration/Store.h /home/jopper/veyon/core/include/Configuration/UiMapping.h /home/jopper/veyon/core/include/ConfigurationManager.h /home/jopper/veyon/core/include/ConfigurationPage.h /home/jopper/veyon/core/include/ConfigurationPagePluginInterface.h /home/jopper/veyon/core/include/Cotire.h /home/jopper/veyon/core/include/CryptoCore.h /home/jopper/veyon/core/include/DesktopAccessDialog.h /home/jopper/veyon/core/include/Feature.h /home/jopper/veyon/core/include/FeatureControl.h /home/jopper/veyon/core/include/FeatureManager.h /home/jopper/veyon/core/include/FeatureMessage.h /home/jopper/veyon/core/include/FeatureProviderInterface.h /home/jopper/veyon/core/include/FeatureWorkerManager.h /home/jopper/veyon/core/include/FileSystemBrowser.h /home/jopper/veyon/core/include/Filesystem.h /home/jopper/veyon/core/include/InternetAccessControlBackendInterface.h /home/jopper/veyon/core/include/KeyboardShortcutTrapper.h /home/jopper/veyon/core/include/LockWidget.h /home/jopper/veyon/core/include/Logger.h /home/jopper/veyon/core/include/MonitoringMode.h /home/jopper/veyon/core/include/NetworkObject.h /home/jopper/veyon/core/include/NetworkObjectDirectory.h /home/jopper/veyon/core/include/NetworkObjectDirectoryManager.h /home/jopper/veyon/core/include/NetworkObjectDirectoryPluginInterface.h /home/jopper/veyon/core/include/NetworkObjectModel.h /home/jopper/veyon/core/include/ObjectManager.h /home/jopper/veyon/core/include/PasswordDialog.h /home/jopper/veyon/core/include/PlatformCoreFunctions.h /home/jopper/veyon/core/include/PlatformFilesystemFunctions.h /home/jopper/veyon/core/include/PlatformInputDeviceFunctions.h /home/jopper/veyon/core/include/PlatformNetworkFunctions.h /home/jopper/veyon/core/include/PlatformPluginInterface.h /home/jopper/veyon/core/include/PlatformPluginManager.h /home/jopper/veyon/core/include/PlatformServiceCore.h /home/jopper/veyon/core/include/PlatformServiceFunctions.h /home/jopper/veyon/core/include/PlatformUserFunctions.h /home/jopper/veyon/core/include/Plugin.h /home/jopper/veyon/core/include/PluginInterface.h /home/jopper/veyon/core/include/PluginManager.h /home/jopper/veyon/core/include/ProgressWidget.h /home/jopper/veyon/core/include/QtCompat.h /home/jopper/veyon/core/include/RfbVeyonAuth.h /home/jopper/veyon/core/include/Screenshot.h /home/jopper/veyon/core/include/ServiceControl.h /home/jopper/veyon/core/include/SimpleFeatureProvider.h /home/jopper/veyon/core/include/SocketDevice.h /home/jopper/veyon/core/include/SystemTrayIcon.h /home/jopper/veyon/core/include/ToolButton.h /home/jopper/veyon/core/include/UserGroupsBackendInterface.h /home/jopper/veyon/core/include/UserGroupsBackendManager.h /home/jopper/veyon/core/include/UserSessionControl.h /home/jopper/veyon/core/include/VariantArrayMessage.h /home/jopper/veyon/core/include/VariantStream.h /home/jopper/veyon/core/include/VeyonConfiguration.h /home/jopper/veyon/core/include/VeyonConfigurationProperties.h /home/jopper/veyon/core/include/VeyonConnection.h /home/jopper/veyon/core/include/VeyonCore.h /home/jopper/veyon/core/include/VeyonMasterInterface.h /home/jopper/veyon/core/include/VeyonRfbExt.h /home/jopper/veyon/core/include/VeyonServerInterface.h /home/jopper/veyon/core/include/VeyonServiceControl.h /home/jopper/veyon/core/include/VeyonWorkerInterface.h /home/jopper/veyon/core/include/VncClientProtocol.h /home/jopper/veyon/core/include/VncConnection.h /home/jopper/veyon/core/include/VncServerClient.h /home/jopper/veyon/core/include/VncServerPluginInterface.h /home/jopper/veyon/core/include/VncServerProtocol.h /home/jopper/veyon/core/include/VncView.h /home/jopper/veyon/master/src/CheckableItemProxyModel.h /home/jopper/veyon/master/src/ComputerControlListModel.h /home/jopper/veyon/master/src/ComputerManagementView.h /home/jopper/veyon/master/src/ComputerManager.h /home/jopper/veyon/master/src/ComputerMonitoringView.h /home/jopper/veyon/master/src/ComputerSortFilterProxyModel.h /home/jopper/veyon/master/src/FlexibleListView.h /home/jopper/veyon/master/src/MainToolBar.h /home/jopper/veyon/master/src/MainWindow.h /home/jopper/veyon/master/src/NetworkObjectFilterProxyModel.h /home/jopper/veyon/master/src/NetworkObjectOverlayDataModel.h /home/jopper/veyon/master/src/NetworkObjectTreeModel.h /home/jopper/veyon/master/src/RecursiveFilterProxyModel.h /home/jopper/veyon/master/src/RoomSelectionDialog.h /home/jopper/veyon/master/src/ScreenshotManagementView.h /home/jopper/veyon/master/src/UserConfig.h /home/jopper/veyon/master/src/VeyonMaster.h /home/jopper/veyon/plugins/authkeys/AuthKeysConfigurationPage.h /home/jopper/veyon/plugins/authkeys/AuthKeysManager.h /home/jopper/veyon/plugins/authkeys/AuthKeysPlugin.h /home/jopper/veyon/plugins/authkeys/AuthKeysTableModel.h /home/jopper/veyon/plugins/builtindirectory/BuiltinDirectory.h /home/jopper/veyon/plugins/builtindirectory/BuiltinDirectoryConfiguration.h /home/jopper/veyon/plugins/builtindirectory/BuiltinDirectoryConfigurationPage.h /home/jopper/veyon/plugins/builtindirectory/BuiltinDirectoryPlugin.h /home/jopper/veyon/plugins/config/ConfigCommandLinePlugin.h /home/jopper/veyon/plugins/demo/DemoClient.h /home/jopper/veyon/plugins/demo/DemoConfiguration.h /home/jopper/veyon/plugins/demo/DemoConfigurationPage.h /home/jopper/veyon/plugins/demo/DemoFeaturePlugin.h /home/jopper/veyon/plugins/demo/DemoServer.h /home/jopper/veyon/plugins/demo/DemoServerConnection.h /home/jopper/veyon/plugins/demo/DemoServerProtocol.h /home/jopper/veyon/plugins/desktopservices/DesktopServiceObject.h /home/jopper/veyon/plugins/desktopservices/DesktopServicesConfiguration.h /home/jopper/veyon/plugins/desktopservices/DesktopServicesConfigurationPage.h /home/jopper/veyon/plugins/desktopservices/DesktopServicesFeaturePlugin.h /home/jopper/veyon/plugins/desktopservices/RunProgramDialog.h /home/jopper/veyon/plugins/ldap/LdapConfiguration.h /home/jopper/veyon/plugins/ldap/LdapConfigurationPage.h /home/jopper/veyon/plugins/ldap/LdapDirectory.h /home/jopper/veyon/plugins/ldap/LdapNetworkObjectDirectory.h /home/jopper/veyon/plugins/ldap/LdapPlugin.h /home/jopper/veyon/plugins/ldap/kldap_export.h /home/jopper/veyon/plugins/ldap/klocalizedstring.h /home/jopper/veyon/plugins/ldap/ldap_debug.h /home/jopper/veyon/plugins/platform/linux/LinuxCoreFunctions.h /home/jopper/veyon/plugins/platform/linux/LinuxDesktopIntegration.h /home/jopper/veyon/plugins/platform/linux/LinuxFilesystemFunctions.h /home/jopper/veyon/plugins/platform/linux/LinuxInputDeviceFunctions.h /home/jopper/veyon/plugins/platform/linux/LinuxKeyboardShortcutTrapper.h /home/jopper/veyon/plugins/platform/linux/LinuxNetworkFunctions.h /home/jopper/veyon/plugins/platform/linux/LinuxPlatformPlugin.h /home/jopper/veyon/plugins/platform/linux/LinuxServiceCore.h /home/jopper/veyon/plugins/platform/linux/LinuxServiceFunctions.h /home/jopper/veyon/plugins/platform/linux/LinuxUserFunctions.h /home/jopper/veyon/plugins/platform/windows/SasEventListener.h /home/jopper/veyon/plugins/platform/windows/WindowsCoreFunctions.h /home/jopper/veyon/plugins/platform/windows/WindowsFilesystemFunctions.h /home/jopper/veyon/plugins/platform/windows/WindowsInputDeviceFunctions.h /home/jopper/veyon/plugins/platform/windows/WindowsKeyboardShortcutTrapper.h /home/jopper/veyon/plugins/platform/windows/WindowsNetworkFunctions.h /home/jopper/veyon/plugins/platform/windows/WindowsPlatformPlugin.h /home/jopper/veyon/plugins/platform/windows/WindowsServiceControl.h /home/jopper/veyon/plugins/platform/windows/WindowsServiceCore.h /home/jopper/veyon/plugins/platform/windows/WindowsServiceFunctions.h /home/jopper/veyon/plugins/platform/windows/WindowsUserFunctions.h /home/jopper/veyon/plugins/platform/windows/WtsSessionManager.h /home/jopper/veyon/plugins/platform/windows/XEventLog.h /home/jopper/veyon/plugins/platform/windows/netfw.h /home/jopper/veyon/plugins/powercontrol/PowerControlFeaturePlugin.h /home/jopper/veyon/plugins/remoteaccess/RemoteAccessFeaturePlugin.h /home/jopper/veyon/plugins/remoteaccess/RemoteAccessWidget.h /home/jopper/veyon/plugins/screenlock/ScreenLockFeaturePlugin.h /home/jopper/veyon/plugins/screenshot/ScreenshotFeaturePlugin.h /home/jopper/veyon/plugins/servicecontrol/ServiceControlPlugin.h /home/jopper/veyon/plugins/shell/ShellCommandLinePlugin.h /home/jopper/veyon/plugins/systemusergroups/SystemUserGroupsPlugin.h /home/jopper/veyon/plugins/textmessage/TextMessageDialog.h /home/jopper/veyon/plugins/textmessage/TextMessageFeaturePlugin.h /home/jopper/veyon/plugins/vncserver/external/ExternalVncServer.h /home/jopper/veyon/plugins/vncserver/external/ExternalVncServerConfiguration.h /home/jopper/veyon/plugins/vncserver/external/ExternalVncServerConfigurationWidget.h /home/jopper/veyon/plugins/vncserver/ultravnc-builtin/BuiltinUltraVncServer.h /home/jopper/veyon/plugins/vncserver/ultravnc-builtin/LogoffEventFilter.h /home/jopper/veyon/plugins/vncserver/ultravnc-builtin/UltraVncConfiguration.h /home/jopper/veyon/plugins/vncserver/ultravnc-builtin/UltraVncConfigurationWidget.h /home/jopper/veyon/plugins/vncserver/ultravnc-builtin/ultravnc-rfbproto.h /home/jopper/veyon/plugins/vncserver/x11vnc-builtin/BuiltinX11VncServer.h /home/jopper/veyon/plugins/vncserver/x11vnc-builtin/X11VncConfiguration.h /home/jopper/veyon/plugins/vncserver/x11vnc-builtin/X11VncConfigurationWidget.h /home/jopper/veyon/server/src/ComputerControlClient.h /home/jopper/veyon/server/src/ComputerControlServer.h /home/jopper/veyon/server/src/ServerAccessControlManager.h /home/jopper/veyon/server/src/ServerAuthenticationManager.h /home/jopper/veyon/server/src/VeyonServerProtocol.h /home/jopper/veyon/server/src/VncProxyConnection.h /home/jopper/veyon/server/src/VncProxyConnectionFactory.h /home/jopper/veyon/server/src/VncProxyServer.h /home/jopper/veyon/server/src/VncServer.h /home/jopper/veyon/worker/src/FeatureWorkerManagerConnection.h /home/jopper/veyon/worker/src/VeyonWorker.h /home/jopper/veyon/configurator/forms/AccessControlPage.ui /home/jopper/veyon/configurator/forms/AccessControlRuleEditDialog.ui /home/jopper/veyon/configurator/forms/AccessControlRulesTestDialog.ui /home/jopper/veyon/configurator/forms/GeneralConfigurationPage.ui /home/jopper/veyon/configurator/forms/MainWindow.ui /home/jopper/veyon/configurator/forms/MasterConfigurationPage.ui /home/jopper/veyon/configurator/forms/ServiceConfigurationPage.ui /home/jopper/veyon/core/dialogs/AboutDialog.ui /home/jopper/veyon/core/dialogs/PasswordDialog.ui /home/jopper/veyon/master/forms/ComputerManagementView.ui /home/jopper/veyon/master/forms/ComputerMonitoringView.ui /home/jopper/veyon/master/forms/MainWindow.ui /home/jopper/veyon/master/forms/RoomSelectionDialog.ui /home/jopper/veyon/master/forms/ScreenshotManagementView.ui /home/jopper/veyon/plugins/authkeys/AuthKeysConfigurationPage.ui /home/jopper/veyon/plugins/builtindirectory/BuiltinDirectoryConfigurationPage.ui /home/jopper/veyon/plugins/demo/DemoConfigurationPage.ui /home/jopper/veyon/plugins/desktopservices/DesktopServicesConfigurationPage.ui /home/jopper/veyon/plugins/desktopservices/RunProgramDialog.ui /home/jopper/veyon/plugins/ldap/LdapConfigurationPage.ui /home/jopper/veyon/plugins/textmessage/TextMessageDialog.ui /home/jopper/veyon/plugins/vncserver/external/ExternalVncServerConfigurationWidget.ui /home/jopper/veyon/plugins/vncserver/ultravnc-builtin/UltraVncConfigurationWidget.ui /home/jopper/veyon/plugins/vncserver/x11vnc-builtin/X11VncConfigurationWidget.ui -ts /home/jopper/veyon/translations/th.ts

th.ts: translations/CMakeFiles/th.ts
th.ts: translations/CMakeFiles/th.ts.dir/build.make

.PHONY : th.ts

# Rule to build all files generated by this target.
translations/CMakeFiles/th.ts.dir/build: th.ts

.PHONY : translations/CMakeFiles/th.ts.dir/build

translations/CMakeFiles/th.ts.dir/clean:
	cd /home/jopper/veyon/cmake/translations && $(CMAKE_COMMAND) -P CMakeFiles/th.ts.dir/cmake_clean.cmake
.PHONY : translations/CMakeFiles/th.ts.dir/clean

translations/CMakeFiles/th.ts.dir/depend:
	cd /home/jopper/veyon/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jopper/veyon /home/jopper/veyon/translations /home/jopper/veyon/cmake /home/jopper/veyon/cmake/translations /home/jopper/veyon/cmake/translations/CMakeFiles/th.ts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : translations/CMakeFiles/th.ts.dir/depend

