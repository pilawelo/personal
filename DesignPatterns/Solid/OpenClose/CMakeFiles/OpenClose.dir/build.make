# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose

# Include any dependencies generated for this target.
include CMakeFiles/OpenClose.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenClose.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenClose.dir/flags.make

CMakeFiles/OpenClose.dir/OpenClose.cpp.o: CMakeFiles/OpenClose.dir/flags.make
CMakeFiles/OpenClose.dir/OpenClose.cpp.o: OpenClose.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenClose.dir/OpenClose.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenClose.dir/OpenClose.cpp.o -c /home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose/OpenClose.cpp

CMakeFiles/OpenClose.dir/OpenClose.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenClose.dir/OpenClose.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose/OpenClose.cpp > CMakeFiles/OpenClose.dir/OpenClose.cpp.i

CMakeFiles/OpenClose.dir/OpenClose.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenClose.dir/OpenClose.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose/OpenClose.cpp -o CMakeFiles/OpenClose.dir/OpenClose.cpp.s

# Object files for target OpenClose
OpenClose_OBJECTS = \
"CMakeFiles/OpenClose.dir/OpenClose.cpp.o"

# External object files for target OpenClose
OpenClose_EXTERNAL_OBJECTS =

OpenClose: CMakeFiles/OpenClose.dir/OpenClose.cpp.o
OpenClose: CMakeFiles/OpenClose.dir/build.make
OpenClose: CMakeFiles/OpenClose.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OpenClose"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenClose.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenClose.dir/build: OpenClose

.PHONY : CMakeFiles/OpenClose.dir/build

CMakeFiles/OpenClose.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenClose.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenClose.dir/clean

CMakeFiles/OpenClose.dir/depend:
	cd /home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose /home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose /home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose /home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose /home/user/cpp-tutorial/DesignPatterns/Solid/OpenClose/CMakeFiles/OpenClose.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenClose.dir/depend

