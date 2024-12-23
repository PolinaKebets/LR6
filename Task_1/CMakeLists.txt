/*
cmake_minimum_required(VERSION 3.22)
project("Task_1")

set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fno-omit-frame-pointer") #-fsanitize=thread

include(CTest)
add_subdirectory(GTEST)
if(BUILD_TESTING)
    add_executable(main Task_1.cpp)
    target_link_libraries(main PRIVATE GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(main)
endif()
*/

