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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tp2_class_zfraction.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tp2_class_zfraction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp2_class_zfraction.dir/flags.make

CMakeFiles/tp2_class_zfraction.dir/main.cpp.obj: CMakeFiles/tp2_class_zfraction.dir/flags.make
CMakeFiles/tp2_class_zfraction.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp2_class_zfraction.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\tp2_class_zfraction.dir\main.cpp.obj -c C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\main.cpp

CMakeFiles/tp2_class_zfraction.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2_class_zfraction.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\main.cpp > CMakeFiles\tp2_class_zfraction.dir\main.cpp.i

CMakeFiles/tp2_class_zfraction.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2_class_zfraction.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\main.cpp -o CMakeFiles\tp2_class_zfraction.dir\main.cpp.s

CMakeFiles/tp2_class_zfraction.dir/Zfraction.cpp.obj: CMakeFiles/tp2_class_zfraction.dir/flags.make
CMakeFiles/tp2_class_zfraction.dir/Zfraction.cpp.obj: ../Zfraction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tp2_class_zfraction.dir/Zfraction.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\tp2_class_zfraction.dir\Zfraction.cpp.obj -c C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\Zfraction.cpp

CMakeFiles/tp2_class_zfraction.dir/Zfraction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2_class_zfraction.dir/Zfraction.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\Zfraction.cpp > CMakeFiles\tp2_class_zfraction.dir\Zfraction.cpp.i

CMakeFiles/tp2_class_zfraction.dir/Zfraction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2_class_zfraction.dir/Zfraction.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\Zfraction.cpp -o CMakeFiles\tp2_class_zfraction.dir\Zfraction.cpp.s

# Object files for target tp2_class_zfraction
tp2_class_zfraction_OBJECTS = \
"CMakeFiles/tp2_class_zfraction.dir/main.cpp.obj" \
"CMakeFiles/tp2_class_zfraction.dir/Zfraction.cpp.obj"

# External object files for target tp2_class_zfraction
tp2_class_zfraction_EXTERNAL_OBJECTS =

tp2_class_zfraction.exe: CMakeFiles/tp2_class_zfraction.dir/main.cpp.obj
tp2_class_zfraction.exe: CMakeFiles/tp2_class_zfraction.dir/Zfraction.cpp.obj
tp2_class_zfraction.exe: CMakeFiles/tp2_class_zfraction.dir/build.make
tp2_class_zfraction.exe: CMakeFiles/tp2_class_zfraction.dir/linklibs.rsp
tp2_class_zfraction.exe: CMakeFiles/tp2_class_zfraction.dir/objects1.rsp
tp2_class_zfraction.exe: CMakeFiles/tp2_class_zfraction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable tp2_class_zfraction.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tp2_class_zfraction.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp2_class_zfraction.dir/build: tp2_class_zfraction.exe

.PHONY : CMakeFiles/tp2_class_zfraction.dir/build

CMakeFiles/tp2_class_zfraction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tp2_class_zfraction.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tp2_class_zfraction.dir/clean

CMakeFiles/tp2_class_zfraction.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\cmake-build-debug C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\cmake-build-debug C:\Users\Francoune\Desktop\CPP-Projects\openclassroom-cpp\tp2-class_zfraction\cmake-build-debug\CMakeFiles\tp2_class_zfraction.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tp2_class_zfraction.dir/depend

