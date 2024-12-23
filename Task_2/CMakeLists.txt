/*
cmake_minimum_required(VERSION 3.10)
project(FindMinMaxWords)

set(CMAKE_CXX_STANDARD 11)

# Добавьте пути к исходным файлам
add_executable(FindMinMaxWords main.cpp)

# Добавьте тесты
add_executable(FindMinMaxWordsTest test.cpp)

# Найдите библиотеку Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Слинкуйте тесты с библиотекой Google Test и исходными файлами
target_link_libraries(FindMinMaxWordsTest ${GTEST_LIBRARIES} pthread)
*/