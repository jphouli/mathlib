cmake_minimum_required(VERSION 4.0)

project(MATH_LIB VERSION 1.0.0 LANGUAGES CXX)

add_library(math_lib INTERFACE)
add_library(MathLib::MathLib ALIAS math_lib)

target_sources(math_lib INTERFACE
  FILE_SET HEADERS
  BASE_DIRS include
  FILES
    include/math_lib/linear_algrebra.hpp
)

include(CTest)

if(PROJECT_IS_TOP_LEVEL AND BUILD_TESTING)
  add_subdirectory(test)
endif()
