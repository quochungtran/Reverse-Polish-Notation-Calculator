# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_SOURCE_DIR = /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build

# Utility rule file for Litterale_utest_autogen.

# Include any custom commands dependencies for this target.
include tools/CMakeFiles/Litterale_utest_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/CMakeFiles/Litterale_utest_autogen.dir/progress.make

tools/CMakeFiles/Litterale_utest_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Litterale_utest"
	cd /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/tools && /usr/bin/cmake -E cmake_autogen /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/tools/CMakeFiles/Litterale_utest_autogen.dir/AutogenInfo.json Debug

Litterale_utest_autogen: tools/CMakeFiles/Litterale_utest_autogen
Litterale_utest_autogen: tools/CMakeFiles/Litterale_utest_autogen.dir/build.make
.PHONY : Litterale_utest_autogen

# Rule to build all files generated by this target.
tools/CMakeFiles/Litterale_utest_autogen.dir/build: Litterale_utest_autogen
.PHONY : tools/CMakeFiles/Litterale_utest_autogen.dir/build

tools/CMakeFiles/Litterale_utest_autogen.dir/clean:
	cd /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/tools && $(CMAKE_COMMAND) -P CMakeFiles/Litterale_utest_autogen.dir/cmake_clean.cmake
.PHONY : tools/CMakeFiles/Litterale_utest_autogen.dir/clean

tools/CMakeFiles/Litterale_utest_autogen.dir/depend:
	cd /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/tools /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/tools /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/tools/CMakeFiles/Litterale_utest_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/CMakeFiles/Litterale_utest_autogen.dir/depend
