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
CMAKE_BINARY_DIR = /home/user/Документы/453502/ОАиП/LR6/Task_1

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/Task_1.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/Task_1.cpp.o: Task_1.cpp
CMakeFiles/main.dir/Task_1.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Документы/453502/ОАиП/LR6/Task_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/Task_1.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/Task_1.cpp.o -MF CMakeFiles/main.dir/Task_1.cpp.o.d -o CMakeFiles/main.dir/Task_1.cpp.o -c /home/user/Документы/453502/ОАиП/LR6/Task_1/Task_1.cpp

CMakeFiles/main.dir/Task_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/Task_1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Документы/453502/ОАиП/LR6/Task_1/Task_1.cpp > CMakeFiles/main.dir/Task_1.cpp.i

CMakeFiles/main.dir/Task_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/Task_1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Документы/453502/ОАиП/LR6/Task_1/Task_1.cpp -o CMakeFiles/main.dir/Task_1.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/Task_1.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/Task_1.cpp.o
main: CMakeFiles/main.dir/build.make
main: lib/libgtest_main.a
main: lib/libgtest.a
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Документы/453502/ОАиП/LR6/Task_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=main -D TEST_EXECUTABLE=/home/user/Документы/453502/ОАиП/LR6/Task_1/main -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/user/Документы/453502/ОАиП/LR6/Task_1 -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=main_TESTS -D CTEST_FILE=/home/user/Документы/453502/ОАиП/LR6/Task_1/main[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.25/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/user/Документы/453502/ОАиП/LR6/Task_1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Документы/453502/ОАиП/LR6/Task_1 /home/user/Документы/453502/ОАиП/LR6/Task_1 /home/user/Документы/453502/ОАиП/LR6/Task_1 /home/user/Документы/453502/ОАиП/LR6/Task_1 /home/user/Документы/453502/ОАиП/LR6/Task_1/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

