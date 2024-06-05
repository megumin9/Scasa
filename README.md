# Scasa
  Scasa is a tool based on Clang Static Analyzer (CSA), and it can detecting Element Accessing bugs in C++ Sequence Containers (EASC bugs).

# Instructions for use
  1.Extract llvm-Scasa.tar.xz and llvm-Scasa2.tar.xz.
  2.Move clang, clang-tools-extra, and compiler-rt from llvm-Scasa2 to llvm-Scasa.
  3.Use cmake in llvm-Scasa to compile clang-check.
  4.After that, you can use the obtained clang-check as a regular clang-check. When you want to check EASC bugs, you can use -analyzer-checker=STL_seki to enable the corresponding checkers for detection.

# 
    
  
