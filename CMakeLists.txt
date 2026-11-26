cmake_minimum_required(VERSION 3.20)
project(TestStaticStud2 LANGUAGES CXX)
add_library(MatrixAnalysis STATIC IMPORTED GLOBAL)
set_target_properties(MatrixAnalysis PROPERTIES
  IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/../Library-Build-Static-1/lib/MatrixAnalysis.lib"
  INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/../Library-Stud-1/include")
add_executable(TestStatic main.cpp)
target_link_libraries(TestStatic PRIVATE MatrixAnalysis)
