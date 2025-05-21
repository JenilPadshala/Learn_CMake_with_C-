# Learning CMake with C++

This repository contains a series of C++ projects designed to help learn and practice CMake.
The projects progress from basic to more advanced CMake concepts.

## Projects

### 🟢 Beginner Projects

1.  **HelloCMake**:
    * A basic "Hello World" C++ program compiled with CMake.
    * Demonstrates `add_executable`.
2.  **MathProject**:
    * A simple static library (libmath) linked to a main program.
    * Demonstrates `add_library`, `target_link_libraries`, and `target_include_directories`.
3.  **ModularProgram**:
    * A small program with multiple `.cpp` and `.h` files organized into `src/` and `include/` folders.
    * Demonstrates handling multiple source files for an executable and managing include paths.

### 🟡 Intermediate Projects

4.  **FileCompressionTool**:
    * A tool using Run-Length Encoding, structured with a library and an executable.
    * Demonstrates `add_subdirectory()` for modular builds and inter-directory dependencies.
5.  **JsonParserProject** (Current / Next):
    * A program that uses an external JSON library (nlohmann/json).
    * Focuses on learning `WorkspaceContent` or `find_package` for managing external dependencies.
6.  **UnitTestDemo**:
    * Integrates the Google Test framework for unit testing a simple C++ library.
    * Demonstrates fetching a test framework (Google Test) via `WorkspaceContent`, using `enable_testing()`, `add_executable()` for test runners, `target_link_libraries()` for tests, and `add_test()` to register tests with CTest.

### 🔵 Advanced Projects

*(Coming soon. Projects will focus on topics like cross-platform builds, install rules, CPack for packaging, configuration files, and more complex dependency management.)*


## Structure

Each project is contained in its own subdirectory within this repository (e.g., `HelloCMake/`, `MathProject/`, etc.).

Each project typically uses an out-of-source build pattern, with build artifacts generated in a `build/` subdirectory within each project's folder.

## How to Build

Navigate into a specific project's directory, then:

```bash
# Ensure you are in the specific project's root directory
# e.g., cd JsonParserProject

mkdir build
cd build
cmake ..
cmake --build .
```

# Run tests
For projects with tests (like UnitTestDemo), you can run tests from the build directory using:

```bash
ctest
# or for more details:
ctest -V
```
