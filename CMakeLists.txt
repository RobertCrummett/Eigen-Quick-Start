cmake_minimum_required(VERSION 3.29)

project(eigen_example LANGUAGES CXX)

find_package(Eigen3 REQUIRED)

set(TARGET run)
add_executable(${TARGET} main.cpp)
target_link_libraries(${TARGET} Eigen3::Eigen)
