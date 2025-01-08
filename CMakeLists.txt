cmake_minimum_required(VERSION 3.12)
project(dsa_practice)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

# Add catch2
Include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v2.13.7
)
FetchContent_MakeAvailable(Catch2)

# Create header-only library
add_library(dsa_lib INTERFACE)
target_include_directories(dsa_lib INTERFACE include)

# Add tests directory
add_subdirectory(tests)

enable_testing()

