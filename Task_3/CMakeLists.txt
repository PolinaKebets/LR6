cmake_minimum_required(VERSION 3.10)
project(PalindromeTest)

set(CMAKE_CXX_STANDARD 11)

# Добавьте пути к исходным файлам
add_executable(PalindromeTest main.cpp)

# Добавьте тесты
add_executable(PalindromeTestTest test_palindrome.cpp)

# Найдите библиотеку Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Слинкуйте тесты с библиотекой Google Test и исходными файлами
target_link_libraries(PalindromeTestTest ${GTEST_LIBRARIES} pthread)
