# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\user418\Documents\Personnel\cpp_project\05-functions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user418\Documents\Personnel\cpp_project\05-functions\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/05_functions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/05_functions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/05_functions.dir/flags.make

CMakeFiles/05_functions.dir/main.cpp.obj: CMakeFiles/05_functions.dir/flags.make
CMakeFiles/05_functions.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user418\Documents\Personnel\cpp_project\05-functions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/05_functions.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\05_functions.dir\main.cpp.obj -c C:\Users\user418\Documents\Personnel\cpp_project\05-functions\main.cpp

CMakeFiles/05_functions.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/05_functions.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user418\Documents\Personnel\cpp_project\05-functions\main.cpp > CMakeFiles\05_functions.dir\main.cpp.i

CMakeFiles/05_functions.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/05_functions.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user418\Documents\Personnel\cpp_project\05-functions\main.cpp -o CMakeFiles\05_functions.dir\main.cpp.s

CMakeFiles/05_functions.dir/someFunctions.cpp.obj: CMakeFiles/05_functions.dir/flags.make
CMakeFiles/05_functions.dir/someFunctions.cpp.obj: ../someFunctions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user418\Documents\Personnel\cpp_project\05-functions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/05_functions.dir/someFunctions.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\05_functions.dir\someFunctions.cpp.obj -c C:\Users\user418\Documents\Personnel\cpp_project\05-functions\someFunctions.cpp

CMakeFiles/05_functions.dir/someFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/05_functions.dir/someFunctions.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user418\Documents\Personnel\cpp_project\05-functions\someFunctions.cpp > CMakeFiles\05_functions.dir\someFunctions.cpp.i

CMakeFiles/05_functions.dir/someFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/05_functions.dir/someFunctions.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user418\Documents\Personnel\cpp_project\05-functions\someFunctions.cpp -o CMakeFiles\05_functions.dir\someFunctions.cpp.s

# Object files for target 05_functions
05_functions_OBJECTS = \
"CMakeFiles/05_functions.dir/main.cpp.obj" \
"CMakeFiles/05_functions.dir/someFunctions.cpp.obj"

# External object files for target 05_functions
05_functions_EXTERNAL_OBJECTS =

05_functions.exe: CMakeFiles/05_functions.dir/main.cpp.obj
05_functions.exe: CMakeFiles/05_functions.dir/someFunctions.cpp.obj
05_functions.exe: CMakeFiles/05_functions.dir/build.make
05_functions.exe: CMakeFiles/05_functions.dir/linklibs.rsp
05_functions.exe: CMakeFiles/05_functions.dir/objects1.rsp
05_functions.exe: CMakeFiles/05_functions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user418\Documents\Personnel\cpp_project\05-functions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 05_functions.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\05_functions.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/05_functions.dir/build: 05_functions.exe

.PHONY : CMakeFiles/05_functions.dir/build

CMakeFiles/05_functions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\05_functions.dir\cmake_clean.cmake
.PHONY : CMakeFiles/05_functions.dir/clean

CMakeFiles/05_functions.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user418\Documents\Personnel\cpp_project\05-functions C:\Users\user418\Documents\Personnel\cpp_project\05-functions C:\Users\user418\Documents\Personnel\cpp_project\05-functions\cmake-build-debug C:\Users\user418\Documents\Personnel\cpp_project\05-functions\cmake-build-debug C:\Users\user418\Documents\Personnel\cpp_project\05-functions\cmake-build-debug\CMakeFiles\05_functions.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/05_functions.dir/depend

