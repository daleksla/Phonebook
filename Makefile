# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/codio/workspace/SurveillanceVIII/CMakeFiles /home/codio/workspace/SurveillanceVIII/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/codio/workspace/SurveillanceVIII/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named myOtherFiles

# Build rule for target.
myOtherFiles: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 myOtherFiles
.PHONY : myOtherFiles

# fast build rule for target.
myOtherFiles/fast:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/build
.PHONY : myOtherFiles/fast

#=============================================================================
# Target rules for targets named sourcev3

# Build rule for target.
sourcev3: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 sourcev3
.PHONY : sourcev3

# fast build rule for target.
sourcev3/fast:
	$(MAKE) -f CMakeFiles/sourcev3.dir/build.make CMakeFiles/sourcev3.dir/build
.PHONY : sourcev3/fast

addOrganisation.o: addOrganisation.cpp.o
.PHONY : addOrganisation.o

# target to build an object file
addOrganisation.cpp.o:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.o
.PHONY : addOrganisation.cpp.o

addOrganisation.i: addOrganisation.cpp.i
.PHONY : addOrganisation.i

# target to preprocess a source file
addOrganisation.cpp.i:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.i
.PHONY : addOrganisation.cpp.i

addOrganisation.s: addOrganisation.cpp.s
.PHONY : addOrganisation.s

# target to generate assembly for a file
addOrganisation.cpp.s:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/addOrganisation.cpp.s
.PHONY : addOrganisation.cpp.s

addPerson.o: addPerson.cpp.o
.PHONY : addPerson.o

# target to build an object file
addPerson.cpp.o:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/addPerson.cpp.o
.PHONY : addPerson.cpp.o

addPerson.i: addPerson.cpp.i
.PHONY : addPerson.i

# target to preprocess a source file
addPerson.cpp.i:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/addPerson.cpp.i
.PHONY : addPerson.cpp.i

addPerson.s: addPerson.cpp.s
.PHONY : addPerson.s

# target to generate assembly for a file
addPerson.cpp.s:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/addPerson.cpp.s
.PHONY : addPerson.cpp.s

data.o: data.cpp.o
.PHONY : data.o

# target to build an object file
data.cpp.o:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/data.cpp.o
.PHONY : data.cpp.o

data.i: data.cpp.i
.PHONY : data.i

# target to preprocess a source file
data.cpp.i:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/data.cpp.i
.PHONY : data.cpp.i

data.s: data.cpp.s
.PHONY : data.s

# target to generate assembly for a file
data.cpp.s:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/data.cpp.s
.PHONY : data.cpp.s

getOccupation.o: getOccupation.cpp.o
.PHONY : getOccupation.o

# target to build an object file
getOccupation.cpp.o:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/getOccupation.cpp.o
.PHONY : getOccupation.cpp.o

getOccupation.i: getOccupation.cpp.i
.PHONY : getOccupation.i

# target to preprocess a source file
getOccupation.cpp.i:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/getOccupation.cpp.i
.PHONY : getOccupation.cpp.i

getOccupation.s: getOccupation.cpp.s
.PHONY : getOccupation.s

# target to generate assembly for a file
getOccupation.cpp.s:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/getOccupation.cpp.s
.PHONY : getOccupation.cpp.s

getOrganisation.o: getOrganisation.cpp.o
.PHONY : getOrganisation.o

# target to build an object file
getOrganisation.cpp.o:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.o
.PHONY : getOrganisation.cpp.o

getOrganisation.i: getOrganisation.cpp.i
.PHONY : getOrganisation.i

# target to preprocess a source file
getOrganisation.cpp.i:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.i
.PHONY : getOrganisation.cpp.i

getOrganisation.s: getOrganisation.cpp.s
.PHONY : getOrganisation.s

# target to generate assembly for a file
getOrganisation.cpp.s:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/getOrganisation.cpp.s
.PHONY : getOrganisation.cpp.s

getPerson.o: getPerson.cpp.o
.PHONY : getPerson.o

# target to build an object file
getPerson.cpp.o:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/getPerson.cpp.o
.PHONY : getPerson.cpp.o

getPerson.i: getPerson.cpp.i
.PHONY : getPerson.i

# target to preprocess a source file
getPerson.cpp.i:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/getPerson.cpp.i
.PHONY : getPerson.cpp.i

getPerson.s: getPerson.cpp.s
.PHONY : getPerson.s

# target to generate assembly for a file
getPerson.cpp.s:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/getPerson.cpp.s
.PHONY : getPerson.cpp.s

insert.o: insert.cpp.o
.PHONY : insert.o

# target to build an object file
insert.cpp.o:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/insert.cpp.o
.PHONY : insert.cpp.o

insert.i: insert.cpp.i
.PHONY : insert.i

# target to preprocess a source file
insert.cpp.i:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/insert.cpp.i
.PHONY : insert.cpp.i

insert.s: insert.cpp.s
.PHONY : insert.s

# target to generate assembly for a file
insert.cpp.s:
	$(MAKE) -f CMakeFiles/myOtherFiles.dir/build.make CMakeFiles/myOtherFiles.dir/insert.cpp.s
.PHONY : insert.cpp.s

source.o: source.cpp.o
.PHONY : source.o

# target to build an object file
source.cpp.o:
	$(MAKE) -f CMakeFiles/sourcev3.dir/build.make CMakeFiles/sourcev3.dir/source.cpp.o
.PHONY : source.cpp.o

source.i: source.cpp.i
.PHONY : source.i

# target to preprocess a source file
source.cpp.i:
	$(MAKE) -f CMakeFiles/sourcev3.dir/build.make CMakeFiles/sourcev3.dir/source.cpp.i
.PHONY : source.cpp.i

source.s: source.cpp.s
.PHONY : source.s

# target to generate assembly for a file
source.cpp.s:
	$(MAKE) -f CMakeFiles/sourcev3.dir/build.make CMakeFiles/sourcev3.dir/source.cpp.s
.PHONY : source.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... myOtherFiles"
	@echo "... sourcev3"
	@echo "... addOrganisation.o"
	@echo "... addOrganisation.i"
	@echo "... addOrganisation.s"
	@echo "... addPerson.o"
	@echo "... addPerson.i"
	@echo "... addPerson.s"
	@echo "... data.o"
	@echo "... data.i"
	@echo "... data.s"
	@echo "... getOccupation.o"
	@echo "... getOccupation.i"
	@echo "... getOccupation.s"
	@echo "... getOrganisation.o"
	@echo "... getOrganisation.i"
	@echo "... getOrganisation.s"
	@echo "... getPerson.o"
	@echo "... getPerson.i"
	@echo "... getPerson.s"
	@echo "... insert.o"
	@echo "... insert.i"
	@echo "... insert.s"
	@echo "... source.o"
	@echo "... source.i"
	@echo "... source.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

