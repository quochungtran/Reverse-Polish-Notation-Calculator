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

# Include any dependencies generated for this target.
include CMakeFiles/calculator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/calculator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/calculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculator.dir/flags.make

CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o: calculator_autogen/mocs_compilation.cpp
CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o -MF CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/calculator_autogen/mocs_compilation.cpp

CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/calculator_autogen/mocs_compilation.cpp > CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.i

CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/calculator_autogen/mocs_compilation.cpp -o CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.s

CMakeFiles/calculator.dir/src/controleur.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/controleur.cpp.o: ../src/controleur.cpp
CMakeFiles/calculator.dir/src/controleur.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/calculator.dir/src/controleur.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/controleur.cpp.o -MF CMakeFiles/calculator.dir/src/controleur.cpp.o.d -o CMakeFiles/calculator.dir/src/controleur.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/controleur.cpp

CMakeFiles/calculator.dir/src/controleur.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/controleur.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/controleur.cpp > CMakeFiles/calculator.dir/src/controleur.cpp.i

CMakeFiles/calculator.dir/src/controleur.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/controleur.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/controleur.cpp -o CMakeFiles/calculator.dir/src/controleur.cpp.s

CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.o: ../src/Litteral/LitEntier.cpp
CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.o -MF CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.o.d -o CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitEntier.cpp

CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitEntier.cpp > CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.i

CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitEntier.cpp -o CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.s

CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.o: ../src/Litteral/LitExpression.cpp
CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.o -MF CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.o.d -o CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitExpression.cpp

CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitExpression.cpp > CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.i

CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitExpression.cpp -o CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.s

CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.o: ../src/Litteral/LitNumerique.cpp
CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.o -MF CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.o.d -o CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitNumerique.cpp

CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitNumerique.cpp > CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.i

CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitNumerique.cpp -o CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.s

CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.o: ../src/Litteral/LitRationelle.cpp
CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.o -MF CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.o.d -o CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitRationelle.cpp

CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitRationelle.cpp > CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.i

CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitRationelle.cpp -o CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.s

CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.o: ../src/Litteral/LitReelle.cpp
CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.o -MF CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.o.d -o CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitReelle.cpp

CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitReelle.cpp > CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.i

CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitReelle.cpp -o CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.s

CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.o: ../src/Litteral/LitAtom.cpp
CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.o -MF CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.o.d -o CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitAtom.cpp

CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitAtom.cpp > CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.i

CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitAtom.cpp -o CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.s

CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.o: ../src/Litteral/LitProgramme.cpp
CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.o -MF CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.o.d -o CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitProgramme.cpp

CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitProgramme.cpp > CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.i

CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Litteral/LitProgramme.cpp -o CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.s

CMakeFiles/calculator.dir/src/MainWindow.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/MainWindow.cpp.o: ../src/MainWindow.cpp
CMakeFiles/calculator.dir/src/MainWindow.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/calculator.dir/src/MainWindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/MainWindow.cpp.o -MF CMakeFiles/calculator.dir/src/MainWindow.cpp.o.d -o CMakeFiles/calculator.dir/src/MainWindow.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/MainWindow.cpp

CMakeFiles/calculator.dir/src/MainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/MainWindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/MainWindow.cpp > CMakeFiles/calculator.dir/src/MainWindow.cpp.i

CMakeFiles/calculator.dir/src/MainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/MainWindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/MainWindow.cpp -o CMakeFiles/calculator.dir/src/MainWindow.cpp.s

CMakeFiles/calculator.dir/src/OperateurManager.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/OperateurManager.cpp.o: ../src/OperateurManager.cpp
CMakeFiles/calculator.dir/src/OperateurManager.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/calculator.dir/src/OperateurManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/OperateurManager.cpp.o -MF CMakeFiles/calculator.dir/src/OperateurManager.cpp.o.d -o CMakeFiles/calculator.dir/src/OperateurManager.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/OperateurManager.cpp

CMakeFiles/calculator.dir/src/OperateurManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/OperateurManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/OperateurManager.cpp > CMakeFiles/calculator.dir/src/OperateurManager.cpp.i

CMakeFiles/calculator.dir/src/OperateurManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/OperateurManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/OperateurManager.cpp -o CMakeFiles/calculator.dir/src/OperateurManager.cpp.s

CMakeFiles/calculator.dir/src/Operateur.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/Operateur.cpp.o: ../src/Operateur.cpp
CMakeFiles/calculator.dir/src/Operateur.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/calculator.dir/src/Operateur.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/Operateur.cpp.o -MF CMakeFiles/calculator.dir/src/Operateur.cpp.o.d -o CMakeFiles/calculator.dir/src/Operateur.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Operateur.cpp

CMakeFiles/calculator.dir/src/Operateur.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/Operateur.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Operateur.cpp > CMakeFiles/calculator.dir/src/Operateur.cpp.i

CMakeFiles/calculator.dir/src/Operateur.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/Operateur.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Operateur.cpp -o CMakeFiles/calculator.dir/src/Operateur.cpp.s

CMakeFiles/calculator.dir/src/Pile.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/Pile.cpp.o: ../src/Pile.cpp
CMakeFiles/calculator.dir/src/Pile.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/calculator.dir/src/Pile.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/Pile.cpp.o -MF CMakeFiles/calculator.dir/src/Pile.cpp.o.d -o CMakeFiles/calculator.dir/src/Pile.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Pile.cpp

CMakeFiles/calculator.dir/src/Pile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/Pile.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Pile.cpp > CMakeFiles/calculator.dir/src/Pile.cpp.i

CMakeFiles/calculator.dir/src/Pile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/Pile.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/Pile.cpp -o CMakeFiles/calculator.dir/src/Pile.cpp.s

CMakeFiles/calculator.dir/src/qcomputer.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/qcomputer.cpp.o: ../src/qcomputer.cpp
CMakeFiles/calculator.dir/src/qcomputer.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/calculator.dir/src/qcomputer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/src/qcomputer.cpp.o -MF CMakeFiles/calculator.dir/src/qcomputer.cpp.o.d -o CMakeFiles/calculator.dir/src/qcomputer.cpp.o -c /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/qcomputer.cpp

CMakeFiles/calculator.dir/src/qcomputer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/qcomputer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/qcomputer.cpp > CMakeFiles/calculator.dir/src/qcomputer.cpp.i

CMakeFiles/calculator.dir/src/qcomputer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/qcomputer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/src/qcomputer.cpp -o CMakeFiles/calculator.dir/src/qcomputer.cpp.s

# Object files for target calculator
calculator_OBJECTS = \
"CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/calculator.dir/src/controleur.cpp.o" \
"CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.o" \
"CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.o" \
"CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.o" \
"CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.o" \
"CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.o" \
"CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.o" \
"CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.o" \
"CMakeFiles/calculator.dir/src/MainWindow.cpp.o" \
"CMakeFiles/calculator.dir/src/OperateurManager.cpp.o" \
"CMakeFiles/calculator.dir/src/Operateur.cpp.o" \
"CMakeFiles/calculator.dir/src/Pile.cpp.o" \
"CMakeFiles/calculator.dir/src/qcomputer.cpp.o"

# External object files for target calculator
calculator_EXTERNAL_OBJECTS =

libcalculator.a: CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/controleur.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/Litteral/LitEntier.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/Litteral/LitExpression.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/Litteral/LitNumerique.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/Litteral/LitRationelle.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/Litteral/LitReelle.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/Litteral/LitAtom.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/Litteral/LitProgramme.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/MainWindow.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/OperateurManager.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/Operateur.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/Pile.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/src/qcomputer.cpp.o
libcalculator.a: CMakeFiles/calculator.dir/build.make
libcalculator.a: CMakeFiles/calculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX static library libcalculator.a"
	$(CMAKE_COMMAND) -P CMakeFiles/calculator.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculator.dir/build: libcalculator.a
.PHONY : CMakeFiles/calculator.dir/build

CMakeFiles/calculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calculator.dir/clean

CMakeFiles/calculator.dir/depend:
	cd /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build /home/tranquochung/Desktop/repositories/github/Reverse-Polish-Notation-Calculator/build/CMakeFiles/calculator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calculator.dir/depend

