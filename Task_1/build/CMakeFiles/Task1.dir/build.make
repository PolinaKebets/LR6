# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/Документы/453502/ОАиП/LR6/Task_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/Документы/453502/ОАиП/LR6/Task_1/build

# Include any dependencies generated for this target.
include CMakeFiles/Task1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Task1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Task1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task1.dir/flags.make

CMakeFiles/Task1.dir/Task_1.cpp.o: CMakeFiles/Task1.dir/flags.make
CMakeFiles/Task1.dir/Task_1.cpp.o: /home/user/Документы/453502/ОАиП/LR6/Task_1/Task_1.cpp
CMakeFiles/Task1.dir/Task_1.cpp.o: CMakeFiles/Task1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Документы/453502/ОАиП/LR6/Task_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task1.dir/Task_1.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Task1.dir/Task_1.cpp.o -MF CMakeFiles/Task1.dir/Task_1.cpp.o.d -o CMakeFiles/Task1.dir/Task_1.cpp.o -c /home/user/Документы/453502/ОАиП/LR6/Task_1/Task_1.cpp

CMakeFiles/Task1.dir/Task_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task1.dir/Task_1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Документы/453502/ОАиП/LR6/Task_1/Task_1.cpp > CMakeFiles/Task1.dir/Task_1.cpp.i

CMakeFiles/Task1.dir/Task_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task1.dir/Task_1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Документы/453502/ОАиП/LR6/Task_1/Task_1.cpp -o CMakeFiles/Task1.dir/Task_1.cpp.s

# Object files for target Task1
Task1_OBJECTS = \
"CMakeFiles/Task1.dir/Task_1.cpp.o"

# External object files for target Task1
Task1_EXTERNAL_OBJECTS =

Task1: CMakeFiles/Task1.dir/Task_1.cpp.o
Task1: CMakeFiles/Task1.dir/build.make
Task1: CMakeFiles/Task1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Документы/453502/ОАиП/LR6/Task_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Task1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Task1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task1.dir/build: Task1
.PHONY : CMakeFiles/Task1.dir/build

CMakeFiles/Task1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Task1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Task1.dir/clean

CMakeFiles/Task1.dir/depend:
	cd /home/user/Документы/453502/ОАиП/LR6/Task_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Документы/453502/ОАиП/LR6/Task_1 /home/user/Документы/453502/ОАиП/LR6/Task_1 /home/user/Документы/453502/ОАиП/LR6/Task_1/build /home/user/Документы/453502/ОАиП/LR6/Task_1/build /home/user/Документы/453502/ОАиП/LR6/Task_1/build/CMakeFiles/Task1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Task1.dir/depend
