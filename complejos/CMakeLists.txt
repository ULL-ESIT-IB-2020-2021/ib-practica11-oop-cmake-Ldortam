# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Laura Dorta Marrero
# @date 07 01 2021
# @brief CMakeLists.txt for complejos

cmake_minimum_required(VERSION 3.1) 


project(complejos
    VERSION 1.0
    DESCRIPTION "A simple CMake project for the Fibonacci Sum application"
    LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 14) 	
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)


set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")


include_directories(${PROJECT_SOURCE_DIR}/src)


add_executable(complejos
    src/complejo.h
    src/complejo.cc)


target_compile_features(complejos PRIVATE cxx_std_14)


target_compile_options(complejos PRIVATE -Wall -Wextra -Wpedantic)
