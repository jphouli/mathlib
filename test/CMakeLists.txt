include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY  https://github.com/google/googletest
  GIT_TAG         v1.17.0        
)

FetchContent_MakeAvailable(googletest)

include(GoogleTest)

add_executable(math_lib_test)

target_sources(math_lib_test PRIVATE 
  linear_algebra_test.cpp
)

target_link_libraries(math_lib_test PRIVATE MathLib::MathLib GTest::gtest_main)

gtest_discover_tests(math_lib_test)
