# 0) Create Source and CmakeFile
# 1) mkdir build
# 2) cd build
# 3) cmake ../          Generating the build files / Configure the project
# 4) cmake --build .
# 5) ./Executable (It's the name added by "add_executable")

cmake_minimum_required(VERSION 3.22)

project(CppProjectTemplate
VERSION 1.0.0 # 1 = Mayor version, 0 = Minor version, 0 = Patch version => 1.0.0
LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17) #Defino que version de CPP uso
set(CMAKE_CXX_STANDARD_REQUIRED ON) #Compiler version that has fully implemented the GCC standard
set(CMAKE_CXX_EXTENSIONS        OFF) #If the compiler has a standard that isn't included in the GCC

option(ENABLE_TESTING "Enable a Unit Testing Build" OFF)

set(LIBRARY_NAME Library) #Se escribe en mayuscula por estandar
set(EXECUTABLE Executable)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)
include(FetchContent)

FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt
    GIT_TAG 9.1.0
    GIT_SHALLOW TRUE)

FetchContent_MakeAvailable(fmt)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2
    GIT_TAG v2.13.9
    GIT_SHALLOW TRUE)

FetchContent_MakeAvailable(Catch2)

FetchContent_Declare(
    cxxopts
    GIT_REPOSITORY https://github.com/jarro2783/cxxopts
    GIT_TAG v3.0.0
    GIT_SHALLOW TRUE)

FetchContent_MakeAvailable(cxxopts)

FetchContent_Declare(
    spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog
    GIT_TAG v1.11.0
    GIT_SHALLOW TRUE)

FetchContent_MakeAvailable(spdlog)

FetchContent_Declare(
    nlohmann_json
    GIT_REPOSITORY https://github.com/nlohmann/json
    GIT_TAG v3.11.2
    GIT_SHALLOW TRUE)

FetchContent_MakeAvailable(nlohmann_json)



add_subdirectory(configured)
add_subdirectory(dependencies)
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)
