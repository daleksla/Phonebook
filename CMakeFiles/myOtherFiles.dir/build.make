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
CMAKE_SOURCE_DIR = /home/codio/workspace/SurveillanceVIII

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/codio/workspace/SurveillanceVIII

# Include any dependencies generated for this target.
include CMakeFiles/myOtherFiles.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myOtherFiles.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myOtherFiles.dir/flags.make

CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o: CMakeFiles/myOtherFiles.dir/flags.make
CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o: addOrganisation.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/codio/workspace/SurveillanceVIII/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o -c /home/codio/workspace/SurveillanceVIII/addOrganisation.cpp

CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/codio/workspace/SurveillanceVIII/addOrganisation.cpp > CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.i

CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/codio/workspace/SurveillanceVIII/addOrganisation.cpp -o CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.s

CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o.requires:
.PHONY : CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o.requires

CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o.provides: CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o.requires
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o.provides.build
.PHONY : CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o.provides

CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o.provides.build: CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o

CMakeFiles/myOtherFiles.dir/addPerson.cpp.o: CMakeFiles/myOtherFiles.dir/flags.make
CMakeFiles/myOtherFiles.dir/addPerson.cpp.o: addPerson.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/codio/workspace/SurveillanceVIII/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/myOtherFiles.dir/addPerson.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/myOtherFiles.dir/addPerson.cpp.o -c /home/codio/workspace/SurveillanceVIII/addPerson.cpp

CMakeFiles/myOtherFiles.dir/addPerson.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myOtherFiles.dir/addPerson.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/codio/workspace/SurveillanceVIII/addPerson.cpp > CMakeFiles/myOtherFiles.dir/addPerson.cpp.i

CMakeFiles/myOtherFiles.dir/addPerson.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myOtherFiles.dir/addPerson.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/codio/workspace/SurveillanceVIII/addPerson.cpp -o CMakeFiles/myOtherFiles.dir/addPerson.cpp.s

CMakeFiles/myOtherFiles.dir/addPerson.cpp.o.requires:
.PHONY : CMakeFiles/myOtherFiles.dir/addPerson.cpp.o.requires

CMakeFiles/myOtherFiles.dir/addPerson.cpp.o.provides: CMakeFiles/myOtherFiles.dir/addPerson.cpp.o.requires
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/addPerson.cpp.o.provides.build
.PHONY : CMakeFiles/myOtherFiles.dir/addPerson.cpp.o.provides

CMakeFiles/myOtherFiles.dir/addPerson.cpp.o.provides.build: CMakeFiles/myOtherFiles.dir/addPerson.cpp.o

CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o: CMakeFiles/myOtherFiles.dir/flags.make
CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o: getOrganisation.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/codio/workspace/SurveillanceVIII/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o -c /home/codio/workspace/SurveillanceVIII/getOrganisation.cpp

CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/codio/workspace/SurveillanceVIII/getOrganisation.cpp > CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.i

CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/codio/workspace/SurveillanceVIII/getOrganisation.cpp -o CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.s

CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o.requires:
.PHONY : CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o.requires

CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o.provides: CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o.requires
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o.provides.build
.PHONY : CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o.provides

CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o.provides.build: CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o

CMakeFiles/myOtherFiles.dir/getPerson.cpp.o: CMakeFiles/myOtherFiles.dir/flags.make
CMakeFiles/myOtherFiles.dir/getPerson.cpp.o: getPerson.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/codio/workspace/SurveillanceVIII/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/myOtherFiles.dir/getPerson.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/myOtherFiles.dir/getPerson.cpp.o -c /home/codio/workspace/SurveillanceVIII/getPerson.cpp

CMakeFiles/myOtherFiles.dir/getPerson.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myOtherFiles.dir/getPerson.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/codio/workspace/SurveillanceVIII/getPerson.cpp > CMakeFiles/myOtherFiles.dir/getPerson.cpp.i

CMakeFiles/myOtherFiles.dir/getPerson.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myOtherFiles.dir/getPerson.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/codio/workspace/SurveillanceVIII/getPerson.cpp -o CMakeFiles/myOtherFiles.dir/getPerson.cpp.s

CMakeFiles/myOtherFiles.dir/getPerson.cpp.o.requires:
.PHONY : CMakeFiles/myOtherFiles.dir/getPerson.cpp.o.requires

CMakeFiles/myOtherFiles.dir/getPerson.cpp.o.provides: CMakeFiles/myOtherFiles.dir/getPerson.cpp.o.requires
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/getPerson.cpp.o.provides.build
.PHONY : CMakeFiles/myOtherFiles.dir/getPerson.cpp.o.provides

CMakeFiles/myOtherFiles.dir/getPerson.cpp.o.provides.build: CMakeFiles/myOtherFiles.dir/getPerson.cpp.o

CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o: CMakeFiles/myOtherFiles.dir/flags.make
CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o: getOccupation.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/codio/workspace/SurveillanceVIII/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o -c /home/codio/workspace/SurveillanceVIII/getOccupation.cpp

CMakeFiles/myOtherFiles.dir/getOccupation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myOtherFiles.dir/getOccupation.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/codio/workspace/SurveillanceVIII/getOccupation.cpp > CMakeFiles/myOtherFiles.dir/getOccupation.cpp.i

CMakeFiles/myOtherFiles.dir/getOccupation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myOtherFiles.dir/getOccupation.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/codio/workspace/SurveillanceVIII/getOccupation.cpp -o CMakeFiles/myOtherFiles.dir/getOccupation.cpp.s

CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o.requires:
.PHONY : CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o.requires

CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o.provides: CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o.requires
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o.provides.build
.PHONY : CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o.provides

CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o.provides.build: CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o

CMakeFiles/myOtherFiles.dir/data.cpp.o: CMakeFiles/myOtherFiles.dir/flags.make
CMakeFiles/myOtherFiles.dir/data.cpp.o: data.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/codio/workspace/SurveillanceVIII/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/myOtherFiles.dir/data.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/myOtherFiles.dir/data.cpp.o -c /home/codio/workspace/SurveillanceVIII/data.cpp

CMakeFiles/myOtherFiles.dir/data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myOtherFiles.dir/data.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/codio/workspace/SurveillanceVIII/data.cpp > CMakeFiles/myOtherFiles.dir/data.cpp.i

CMakeFiles/myOtherFiles.dir/data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myOtherFiles.dir/data.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/codio/workspace/SurveillanceVIII/data.cpp -o CMakeFiles/myOtherFiles.dir/data.cpp.s

CMakeFiles/myOtherFiles.dir/data.cpp.o.requires:
.PHONY : CMakeFiles/myOtherFiles.dir/data.cpp.o.requires

CMakeFiles/myOtherFiles.dir/data.cpp.o.provides: CMakeFiles/myOtherFiles.dir/data.cpp.o.requires
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/data.cpp.o.provides.build
.PHONY : CMakeFiles/myOtherFiles.dir/data.cpp.o.provides

CMakeFiles/myOtherFiles.dir/data.cpp.o.provides.build: CMakeFiles/myOtherFiles.dir/data.cpp.o

CMakeFiles/myOtherFiles.dir/insert.cpp.o: CMakeFiles/myOtherFiles.dir/flags.make
CMakeFiles/myOtherFiles.dir/insert.cpp.o: insert.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/codio/workspace/SurveillanceVIII/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/myOtherFiles.dir/insert.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/myOtherFiles.dir/insert.cpp.o -c /home/codio/workspace/SurveillanceVIII/insert.cpp

CMakeFiles/myOtherFiles.dir/insert.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myOtherFiles.dir/insert.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/codio/workspace/SurveillanceVIII/insert.cpp > CMakeFiles/myOtherFiles.dir/insert.cpp.i

CMakeFiles/myOtherFiles.dir/insert.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myOtherFiles.dir/insert.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/codio/workspace/SurveillanceVIII/insert.cpp -o CMakeFiles/myOtherFiles.dir/insert.cpp.s

CMakeFiles/myOtherFiles.dir/insert.cpp.o.requires:
.PHONY : CMakeFiles/myOtherFiles.dir/insert.cpp.o.requires

CMakeFiles/myOtherFiles.dir/insert.cpp.o.provides: CMakeFiles/myOtherFiles.dir/insert.cpp.o.requires
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/insert.cpp.o.provides.build
.PHONY : CMakeFiles/myOtherFiles.dir/insert.cpp.o.provides

CMakeFiles/myOtherFiles.dir/insert.cpp.o.provides.build: CMakeFiles/myOtherFiles.dir/insert.cpp.o

# Object files for target myOtherFiles
myOtherFiles_OBJECTS = \
"CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o" \
"CMakeFiles/myOtherFiles.dir/addPerson.cpp.o" \
"CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o" \
"CMakeFiles/myOtherFiles.dir/getPerson.cpp.o" \
"CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o" \
"CMakeFiles/myOtherFiles.dir/data.cpp.o" \
"CMakeFiles/myOtherFiles.dir/insert.cpp.o"

# External object files for target myOtherFiles
myOtherFiles_EXTERNAL_OBJECTS =

lib/libmyOtherFiles.a: CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o
lib/libmyOtherFiles.a: CMakeFiles/myOtherFiles.dir/addPerson.cpp.o
lib/libmyOtherFiles.a: CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o
lib/libmyOtherFiles.a: CMakeFiles/myOtherFiles.dir/getPerson.cpp.o
lib/libmyOtherFiles.a: CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o
lib/libmyOtherFiles.a: CMakeFiles/myOtherFiles.dir/data.cpp.o
lib/libmyOtherFiles.a: CMakeFiles/myOtherFiles.dir/insert.cpp.o
lib/libmyOtherFiles.a: CMakeFiles/myOtherFiles.dir/build.make
lib/libmyOtherFiles.a: CMakeFiles/myOtherFiles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library lib/libmyOtherFiles.a"
	$(CMAKE_COMMAND) -P CMakeFiles/myOtherFiles.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myOtherFiles.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myOtherFiles.dir/build: lib/libmyOtherFiles.a
.PHONY : CMakeFiles/myOtherFiles.dir/build

CMakeFiles/myOtherFiles.dir/requires: CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o.requires
CMakeFiles/myOtherFiles.dir/requires: CMakeFiles/myOtherFiles.dir/addPerson.cpp.o.requires
CMakeFiles/myOtherFiles.dir/requires: CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o.requires
CMakeFiles/myOtherFiles.dir/requires: CMakeFiles/myOtherFiles.dir/getPerson.cpp.o.requires
CMakeFiles/myOtherFiles.dir/requires: CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o.requires
CMakeFiles/myOtherFiles.dir/requires: CMakeFiles/myOtherFiles.dir/data.cpp.o.requires
CMakeFiles/myOtherFiles.dir/requires: CMakeFiles/myOtherFiles.dir/insert.cpp.o.requires
.PHONY : CMakeFiles/myOtherFiles.dir/requires

CMakeFiles/myOtherFiles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myOtherFiles.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myOtherFiles.dir/clean

CMakeFiles/myOtherFiles.dir/depend:
	cd /home/codio/workspace/SurveillanceVIII && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codio/workspace/SurveillanceVIII /home/codio/workspace/SurveillanceVIII /home/codio/workspace/SurveillanceVIII /home/codio/workspace/SurveillanceVIII /home/codio/workspace/SurveillanceVIII/CMakeFiles/myOtherFiles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myOtherFiles.dir/depend

