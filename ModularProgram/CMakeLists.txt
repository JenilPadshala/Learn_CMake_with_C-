cmake_minimum_required(VERSION 4.0.1)

project(ModularProgram VERSION 1.0.0 LANGUAGES CXX)

add_executable(App 
    src/main.cpp
    src/Person.cpp
    src/Student.cpp 
)

target_include_directories(App PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
