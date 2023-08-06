cmake_minimum_required(VERSION 3.10)

project(MatrixInversion)

# Find Boost
find_package(Boost REQUIRED COMPONENTS)

# Include Boost and include directory
include_directories(${Boost_INCLUDE_DIRS} ${CMAKE_SOURCE_DIR}/include)

# Add executable
add_executable(MatrixInversion main.cpp src/LinAlg.cpp)

# Link Boost libraries
target_link_libraries(MatrixInversion ${Boost_LIBRARIES})
