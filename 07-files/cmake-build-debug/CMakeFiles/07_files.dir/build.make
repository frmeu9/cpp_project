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
CMAKE_SOURCE_DIR = C:\Users\user418\Documents\Personnel\cpp_project\07-files

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user418\Documents\Personnel\cpp_project\07-files\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/07_files.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/07_files.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/07_files.dir/flags.make

CMakeFiles/07_files.dir/main.cpp.obj: CMakeFiles/07_files.dir/flags.make
CMakeFiles/07_files.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user418\Documents\Personnel\cpp_project\07-files\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/07_files.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\07_files.dir\main.cpp.obj -c C:\Users\user418\Documents\Personnel\cpp_project\07-files\main.cpp

CMakeFiles/07_files.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/07_files.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user418\Documents\Personnel\cpp_project\07-files\main.cpp > CMakeFiles\07_files.dir\main.cpp.i

CMakeFiles/07_files.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/07_files.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user418\Documents\Personnel\cpp_project\07-files\main.cpp -o CMakeFiles\07_files.dir\main.cpp.s

# Object files for target 07_files
07_files_OBJECTS = \
"CMakeFiles/07_files.dir/main.cpp.obj"

# External object files for target 07_files
07_files_EXTERNAL_OBJECTS =

07_files.exe: CMakeFiles/07_files.dir/main.cpp.obj
07_files.exe: CMakeFiles/07_files.dir/build.make
07_files.exe: CMakeFiles/07_files.dir/linklibs.rsp
07_files.exe: CMakeFiles/07_files.dir/objects1.rsp
07_files.exe: CMakeFiles/07_files.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user418\Documents\Personnel\cpp_project\07-files\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 07_files.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\07_files.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/07_files.dir/build: 07_files.exe

.PHONY : CMakeFiles/07_files.dir/build

CMakeFiles/07_files.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\07_files.dir\cmake_clean.cmake
.PHONY : CMakeFiles/07_files.dir/clean

CMakeFiles/07_files.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user418\Documents\Personnel\cpp_project\07-files C:\Users\user418\Documents\Personnel\cpp_project\07-files C:\Users\user418\Documents\Personnel\cpp_project\07-files\cmake-build-debug C:\Users\user418\Documents\Personnel\cpp_project\07-files\cmake-build-debug C:\Users\user418\Documents\Personnel\cpp_project\07-files\cmake-build-debug\CMakeFiles\07_files.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/07_files.dir/depend
