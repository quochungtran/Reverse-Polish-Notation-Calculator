# REVERSE POLISH NOTATION CALCULATOR

## Requirements For Linux Target

* **Cmake**, a cross-platform software used to manage the build process of source
code. Using Cmake permit to generate native compilation rules under Linux and Windows based on same common
build scripts.

The temporary **build** directory is generated after the bootstrap script if no error is occured

|file                            |description                                  |
|--------------|-------|
| bootstrap.sh                   | Configuration script to compile under Linux |
|build                           | Directory to store compiled files and binary |            
|./build/CMakeLists.txt          | Main Cmake script including lead compilation rules for the project |         
|src                             | All source code must be hosted in this directory      |
|tools                           | Diretory to store tools and unit-tests |
|./tools/CMakeLists.txt          | Cmake script to compile tools source code |    



* Each sub-directory containing a plateform dependant compilation script can be process with make (Linux) command to perform a local compilation of targets. For exemple, running make in tools directory will
recompile only the unit-test target files and the mandatory dependencies, if any source code have been modified.