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
CMAKE_SOURCE_DIR = /home/cristi/Downloads/tema1paoo-main/tema2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cristi/Downloads/tema1paoo-main/tema2/build

# Include any dependencies generated for this target.
include CMakeFiles/Auto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Auto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Auto.dir/flags.make

CMakeFiles/Auto.dir/main.cpp.o: CMakeFiles/Auto.dir/flags.make
CMakeFiles/Auto.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cristi/Downloads/tema1paoo-main/tema2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Auto.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Auto.dir/main.cpp.o -c /home/cristi/Downloads/tema1paoo-main/tema2/main.cpp

CMakeFiles/Auto.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Auto.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cristi/Downloads/tema1paoo-main/tema2/main.cpp > CMakeFiles/Auto.dir/main.cpp.i

CMakeFiles/Auto.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Auto.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cristi/Downloads/tema1paoo-main/tema2/main.cpp -o CMakeFiles/Auto.dir/main.cpp.s

CMakeFiles/Auto.dir/masina.cpp.o: CMakeFiles/Auto.dir/flags.make
CMakeFiles/Auto.dir/masina.cpp.o: ../masina.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cristi/Downloads/tema1paoo-main/tema2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Auto.dir/masina.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Auto.dir/masina.cpp.o -c /home/cristi/Downloads/tema1paoo-main/tema2/masina.cpp

CMakeFiles/Auto.dir/masina.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Auto.dir/masina.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cristi/Downloads/tema1paoo-main/tema2/masina.cpp > CMakeFiles/Auto.dir/masina.cpp.i

CMakeFiles/Auto.dir/masina.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Auto.dir/masina.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cristi/Downloads/tema1paoo-main/tema2/masina.cpp -o CMakeFiles/Auto.dir/masina.cpp.s

# Object files for target Auto
Auto_OBJECTS = \
"CMakeFiles/Auto.dir/main.cpp.o" \
"CMakeFiles/Auto.dir/masina.cpp.o"

# External object files for target Auto
Auto_EXTERNAL_OBJECTS =

Auto: CMakeFiles/Auto.dir/main.cpp.o
Auto: CMakeFiles/Auto.dir/masina.cpp.o
Auto: CMakeFiles/Auto.dir/build.make
Auto: CMakeFiles/Auto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cristi/Downloads/tema1paoo-main/tema2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Auto"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Auto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Auto.dir/build: Auto

.PHONY : CMakeFiles/Auto.dir/build

CMakeFiles/Auto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Auto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Auto.dir/clean

CMakeFiles/Auto.dir/depend:
	cd /home/cristi/Downloads/tema1paoo-main/tema2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cristi/Downloads/tema1paoo-main/tema2 /home/cristi/Downloads/tema1paoo-main/tema2 /home/cristi/Downloads/tema1paoo-main/tema2/build /home/cristi/Downloads/tema1paoo-main/tema2/build /home/cristi/Downloads/tema1paoo-main/tema2/build/CMakeFiles/Auto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Auto.dir/depend
