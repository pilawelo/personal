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
CMAKE_SOURCE_DIR = /home/user/Ola/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/Ola/cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/Ola.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ola.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ola.dir/flags.make

CMakeFiles/Ola.dir/main.cpp.o: CMakeFiles/Ola.dir/flags.make
CMakeFiles/Ola.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Ola/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ola.dir/main.cpp.o"
	/bin/x86_64-linux-gnu-g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ola.dir/main.cpp.o -c /home/user/Ola/cpp/main.cpp

CMakeFiles/Ola.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ola.dir/main.cpp.i"
	/bin/x86_64-linux-gnu-g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Ola/cpp/main.cpp > CMakeFiles/Ola.dir/main.cpp.i

CMakeFiles/Ola.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ola.dir/main.cpp.s"
	/bin/x86_64-linux-gnu-g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Ola/cpp/main.cpp -o CMakeFiles/Ola.dir/main.cpp.s

# Object files for target Ola
Ola_OBJECTS = \
"CMakeFiles/Ola.dir/main.cpp.o"

# External object files for target Ola
Ola_EXTERNAL_OBJECTS =

Ola: CMakeFiles/Ola.dir/main.cpp.o
Ola: CMakeFiles/Ola.dir/build.make
Ola: subdir/libexcel.a
Ola: ../libxl-4.0.3.1/lib64/libxl.so
Ola: CMakeFiles/Ola.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Ola/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ola"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ola.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ola.dir/build: Ola

.PHONY : CMakeFiles/Ola.dir/build

CMakeFiles/Ola.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ola.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ola.dir/clean

CMakeFiles/Ola.dir/depend:
	cd /home/user/Ola/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Ola/cpp /home/user/Ola/cpp /home/user/Ola/cpp/build /home/user/Ola/cpp/build /home/user/Ola/cpp/build/CMakeFiles/Ola.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ola.dir/depend

