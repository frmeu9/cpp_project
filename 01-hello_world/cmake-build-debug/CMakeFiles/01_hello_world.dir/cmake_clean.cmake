file(REMOVE_RECURSE
  "01_hello_world.exe"
  "01_hello_world.exe.manifest"
  "01_hello_world.pdb"
  "CMakeFiles/01_hello_world.dir/main.cpp.obj"
  "lib01_hello_world.dll.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/01_hello_world.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
