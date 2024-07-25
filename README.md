# Scasa
  Scasa is a tool based on Clang Static Analyzer (CSA), and it can detecting Element Accessing bugs in C++ Sequence Containers (EASC bugs).

# Scasa Setup and Usage Guide
Prerequisites
CMake (minimum version 3.13)
A C++ compiler (e.g., GCC or Clang)
tar utility

# Setup Instructions
First, extract the contents of the llvm-Scasa.tar.xz and llvm-Scasa2.tar.xz archives:

tar -xf llvm-Scasa.tar.xz
tar -xf llvm-Scasa2.tar.xz

Move the clang, clang-tools-extra, and compiler-rt directories from llvm-Scasa2 to llvm-Scasa:

mv llvm-Scasa2/clang llvm-Scasa/
mv llvm-Scasa2/clang-tools-extra llvm-Scasa/
mv llvm-Scasa2/compiler-rt llvm-Scasa/

Compile Clang-Check

cd llvm-Scasa
mkdir build
cd build

Run CMake to configure the project:

cmake -G "Unix Makefiles" ..

Compile clang-check:

make clang-check

Using Clang-Check
After compilation, you can use the obtained clang-check as a regular clang-check. To check EASC bugs, enable the corresponding checkers with the -analyzer-checker=STL_seki option:

./bin/clang-check <source-file> -- -analyzer-checker=STL_seki
Replace <source-file> with the path to the source file you want to analyze.

# Notes
Ensure that you have all the necessary dependencies installed before starting the setup process.
If you encounter any issues during compilation, refer to the CMake and Clang documentation for troubleshooting.
    
  
