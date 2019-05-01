file(REMOVE_RECURSE
  "winrc.obj"
  "src/moc_ComputerControlClient.cpp"
  "src/moc_ComputerControlServer.cpp"
  "src/moc_ServerAccessControlManager.cpp"
  "src/moc_ServerAuthenticationManager.cpp"
  "src/moc_VeyonServerProtocol.cpp"
  "src/moc_VncProxyConnection.cpp"
  "src/moc_VncProxyConnectionFactory.cpp"
  "src/moc_VncProxyServer.cpp"
  "src/moc_VncServer.cpp"
  "cotire/veyon-server_CXX_prefix.hxx"
  "cotire/veyon-server_CXX_unity.cxx"
  "cotire/veyon-server_CXX_prefix.cxx"
  "CMakeFiles/veyon-server_unity.dir/cotire/veyon-server_CXX_unity.cxx.obj"
  "veyon-server.pdb"
  "veyon-server.exe"
  "libveyon-server.dll.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/veyon-server_unity.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
