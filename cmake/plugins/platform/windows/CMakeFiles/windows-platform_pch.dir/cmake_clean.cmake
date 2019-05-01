file(REMOVE_RECURSE
  "moc_WindowsPlatformPlugin.cpp"
  "moc_WindowsCoreFunctions.cpp"
  "moc_WindowsFilesystemFunctions.cpp"
  "moc_WindowsInputDeviceFunctions.cpp"
  "moc_WindowsKeyboardShortcutTrapper.cpp"
  "moc_WindowsNetworkFunctions.cpp"
  "moc_WindowsServiceControl.cpp"
  "moc_WindowsServiceCore.cpp"
  "moc_WindowsServiceFunctions.cpp"
  "moc_WindowsUserFunctions.cpp"
  "moc_WtsSessionManager.cpp"
  "moc_SasEventListener.cpp"
  "moc_XEventLog.cpp "
  "CMakeFiles/windows-platform_pch"
  "cotire/windows-platform_CXX_prefix.hxx.gch"
  "cotire/windows-platform_CXX_prefix.hxx"
  "cotire/windows-platform_CXX_prefix.cxx"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/windows-platform_pch.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
