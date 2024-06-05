# Scasa
  Scasa is a tool based on Clang Static Analyzer (CSA), and it can detecting Element Accessing bugs in C++ Sequence Containers (EASC bugs).

# Instructions for use
  1. Download llvm15, compiler-rt, clang and clang-tools-extra required for CSA.
  2. Replace clang with clang-Scasa in CSA, compile clang-check, and then when using clang-check, just turn on the STL_seki checker to detect EASC buds.
    
  
