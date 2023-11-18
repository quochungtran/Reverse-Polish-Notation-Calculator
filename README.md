# REVERSE POLISH NOTATION CALCULATOR

## Requirements for Linux Target

This project is a Reverse Polish Notation (RPN) calculator, and it has specific requirements for building and running on a Linux environment.

### Prerequisites

Before you begin, make sure you have the following tools installed on your Linux system:

- **CMake**: CMake is a cross-platform software used to manage the build process of source code. It enables the generation of native compilation rules under both Linux and Windows using common build scripts.

### Build Process

To compile the project, follow these steps:

1. Run the `bootstrap.sh` script:

   ```bash
   ./bootstrap.sh
   ```

This script configures the build process and generates a temporary build directory. Navigate to the build directory:

  ```bash
  cd build
  ```

Execute the build process using CMake:

   ```bash
   cmake ..
   make
  ```

The CMakeLists.txt file in the build directory contains the main CMake script, including lead compilation rules for the project.

### Project Structure
The project has the following directory structure:

* build: Directory to store compiled files and binaries.
* src: All source code must be hosted in this directory.
* tools: Directory to store tools and unit-tests.

The tools directory contains a platform-dependent compilation script. You can use the make command in this directory to perform a local compilation of targets. For example:

   ```bash
  cd tools
  make
  ```

This will recompile only the unit-test target files and the necessary dependencies if any source code has been modified.

### Additional Information
The ./tools/CMakeLists.txt file is the CMake script responsible for compiling tools' source code.
Feel free to explore the project, modify the source code in the src directory, and run the appropriate compilation scripts to build and test the Reverse Polish Notation Calculator.
