# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_SOURCE_DIR = /home/codio/workspace/Surveillance

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/codio/workspace/Surveillance

# Include any dependencies generated for this target.
include CMakeFiles/file5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/file5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/file5.dir/flags.make

CMakeFiles/file5.dir/getOccupation.cpp.o: CMakeFiles/file5.dir/flags.make
CMakeFiles/file5.dir/getOccupation.cpp.o: getOccupation.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/codio/workspace/Surveillance/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/file5.dir/getOccupation.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/file5.dir/getOccupation.cpp.o -c /home/codio/workspace/Surveillance/getOccupation.cpp

CMakeFiles/file5.dir/getOccupation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/file5.dir/getOccupation.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/codio/workspace/Surveillance/getOccupation.cpp > CMakeFiles/file5.dir/getOccupation.cpp.i

CMakeFiles/file5.dir/getOccupation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/file5.dir/getOccupation.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/codio/workspace/Surveillance/getOccupation.cpp -o CMakeFiles/file5.dir/getOccupation.cpp.s

CMakeFiles/file5.dir/getOccupation.cpp.o.requires:
.PHONY : CMakeFiles/file5.dir/getOccupation.cpp.o.requires

CMakeFiles/file5.dir/getOccupation.cpp.o.provides: CMakeFiles/file5.dir/getOccupation.cpp.o.requires
	$(MAKE) -f CMakeFiles/file5.dir/build.make CMakeFiles/file5.dir/getOccupation.cpp.o.provides.build
.PHONY : CMakeFiles/file5.dir/getOccupation.cpp.o.provides

CMakeFiles/file5.dir/getOccupation.cpp.o.provides.build: CMakeFiles/file5.dir/getOccupation.cpp.o

# Object files for target file5
file5_OBJECTS = \
"CMakeFiles/file5.dir/getOccupation.cpp.o"

# External object files for target file5
file5_EXTERNAL_OBJECTS =

lib/libfile5.a: CMakeFiles/file5.dir/getOccupation.cpp.o
lib/libfile5.a: CMakeFiles/file5.dir/build.make
lib/libfile5.a: CMakeFiles/file5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library lib/libfile5.a"
	$(CMAKE_COMMAND) -P CMakeFiles/file5.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/file5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/file5.dir/build: lib/libfile5.a
.PHONY : CMakeFiles/file5.dir/build

CMakeFiles/file5.dir/requires: CMakeFiles/file5.dir/getOccupation.cpp.o.requires
.PHONY : CMakeFiles/file5.dir/requires

CMakeFiles/file5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/file5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/file5.dir/clean

CMakeFiles/file5.dir/depend:
	cd /home/codio/workspace/Surveillance && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codio/workspace/Surveillance /home/codio/workspace/Surveillance /home/codio/workspace/Surveillance /home/codio/workspace/Surveillance /home/codio/workspace/Surveillance/CMakeFiles/file5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/file5.dir/depend

