# Learning CMake with C++

This repository contains a series of C++ projects designed to help learn and practice CMake.
The projects progress from basic to more advanced CMake concepts.

## Projects

Currently, this repository includes:

1.  **HelloCMake**: A basic "Hello World" C++ program compiled with CMake. Demonstrates `add_executable`.
2.  **MathProject**: A simple static library (libmath) linked to a main program. Demonstrates `add_library`, `target_link_libraries`, and `target_include_directories`.
3.  **ModularProgram**: A small program with multiple `.cpp` and `.h` files organized into `src/` and `include/` folders. Demonstrates handling multiple source files for an executable and managing include paths.

## Structure

Each project is contained in its own subdirectory:
-   `HelloCMake/`
-   `MathProject/`
-   `ModularProgram/`

Each project typically uses an out-of-source build pattern, with build artifacts generated in a `build/` subdirectory within each project's folder.

## How to Build

Navigate into a specific project's directory, then:

```bash
mkdir build
cd build
cmake ..
cmake --build .