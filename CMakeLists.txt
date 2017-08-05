cmake_minimum_required(VERSION 3.4)
project (UnitTesting)
enable_testing ()
add_test (Test COMMAND Test)
add_executable (demo main.cpp TestedClass.h)
find_package (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)
include_directories (${TEST_SOURCE_DIR}
        ${Boost_INCLUDE_DIRS}
        )
add_executable (Test TestedClass.h TestedClass.cpp Tests.cpp)
target_link_libraries (Test
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

