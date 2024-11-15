# The following lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.16)
set(IDF_TOOLCHAIN=clang)
set(DLLVM_ENABLE_PROJECTS='bolt;clang;clang-tools-extra;compiler-rt;cross-project-tests;libclc;lld;lldb;mlir;openmp;polly;pstl)
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(controler)
