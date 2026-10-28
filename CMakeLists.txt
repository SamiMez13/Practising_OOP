
cmake_minimum_required(VERSION 3.20)
project(CppOOPProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CppOOPProject
        src/main.cpp
        src/Person.cpp
        src/Student.cpp
)

target_include_directories(CppOOPProject PRIVATE include)
