# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\msys2\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\msys2\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\vova\workspace\latex\cs_mipt_faki\term3\seminar10_cmake_basics\homework\4choosing_source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\vova\workspace\latex\cs_mipt_faki\term3\seminar10_cmake_basics\homework\4choosing_source\build

# Include any dependencies generated for this target.
include CMakeFiles/animal.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/animal.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/animal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/animal.dir/flags.make

CMakeFiles/animal.dir/src/dog.cpp.obj: CMakeFiles/animal.dir/flags.make
CMakeFiles/animal.dir/src/dog.cpp.obj: C:/Users/vova/workspace/latex/cs_mipt_faki/term3/seminar10_cmake_basics/homework/4choosing_source/src/dog.cpp
CMakeFiles/animal.dir/src/dog.cpp.obj: CMakeFiles/animal.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\vova\workspace\latex\cs_mipt_faki\term3\seminar10_cmake_basics\homework\4choosing_source\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/animal.dir/src/dog.cpp.obj"
	C:\msys2\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/animal.dir/src/dog.cpp.obj -MF CMakeFiles\animal.dir\src\dog.cpp.obj.d -o CMakeFiles\animal.dir\src\dog.cpp.obj -c C:\Users\vova\workspace\latex\cs_mipt_faki\term3\seminar10_cmake_basics\homework\4choosing_source\src\dog.cpp

CMakeFiles/animal.dir/src/dog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/animal.dir/src/dog.cpp.i"
	C:\msys2\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\vova\workspace\latex\cs_mipt_faki\term3\seminar10_cmake_basics\homework\4choosing_source\src\dog.cpp > CMakeFiles\animal.dir\src\dog.cpp.i

CMakeFiles/animal.dir/src/dog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/animal.dir/src/dog.cpp.s"
	C:\msys2\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\vova\workspace\latex\cs_mipt_faki\term3\seminar10_cmake_basics\homework\4choosing_source\src\dog.cpp -o CMakeFiles\animal.dir\src\dog.cpp.s

# Object files for target animal
animal_OBJECTS = \
"CMakeFiles/animal.dir/src/dog.cpp.obj"

# External object files for target animal
animal_EXTERNAL_OBJECTS =

animal.exe: CMakeFiles/animal.dir/src/dog.cpp.obj
animal.exe: CMakeFiles/animal.dir/build.make
animal.exe: CMakeFiles/animal.dir/linkLibs.rsp
animal.exe: CMakeFiles/animal.dir/objects1.rsp
animal.exe: CMakeFiles/animal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\vova\workspace\latex\cs_mipt_faki\term3\seminar10_cmake_basics\homework\4choosing_source\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable animal.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\animal.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/animal.dir/build: animal.exe
.PHONY : CMakeFiles/animal.dir/build

CMakeFiles/animal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\animal.dir\cmake_clean.cmake
.PHONY : CMakeFiles/animal.dir/clean

CMakeFiles/animal.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\vova\workspace\latex\cs_mipt_faki\term3\seminar10_cmake_basics\homework\4choosing_source C:\Users\vova\workspace\latex\cs_mipt_faki\term3\seminar10_cmake_basics\homework\4choosing_source C:\Users\vova\workspace\latex\cs_mipt_faki\term3\seminar10_cmake_basics\homework\4choosing_source\build C:\Users\vova\workspace\latex\cs_mipt_faki\term3\seminar10_cmake_basics\homework\4choosing_source\build C:\Users\vova\workspace\latex\cs_mipt_faki\term3\seminar10_cmake_basics\homework\4choosing_source\build\CMakeFiles\animal.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/animal.dir/depend

