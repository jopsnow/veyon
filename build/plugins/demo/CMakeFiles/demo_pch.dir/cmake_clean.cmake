file(REMOVE_RECURSE
  "moc_DemoFeaturePlugin.cpp"
  "moc_DemoConfiguration.cpp"
  "moc_DemoConfigurationPage.cpp"
  "moc_DemoServer.cpp"
  "moc_DemoServerConnection.cpp"
  "moc_DemoServerProtocol.cpp"
  "moc_DemoClient.cpp /home/jopper/veyon/build/plugins/demo/qrc_demo.cpp"
  "CMakeFiles/demo_pch"
  "cotire/demo_CXX_prefix.hxx.gch"
  "cotire/demo_CXX_prefix.hxx"
  "cotire/demo_CXX_prefix.cxx"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/demo_pch.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
