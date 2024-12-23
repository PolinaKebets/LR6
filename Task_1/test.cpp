#include <gtest/gtest.h>
#include "functions.cpp"

TEST(FindEvenNumbersTest, HandlesEvenNumbers) {
    char str1[] = "1 2 3 4 5 6";
    testing::internal::CaptureStdout();
    findEvenNumbers(str1);
    std::string output1 = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output1, "2 4 6 \n");

    char str2[] = "7 8 9 10 11 12";
    testing::internal::CaptureStdout();
    findEvenNumbers(str2);
    std::string output2 = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output2, "8 10 12 \n");
}

// Дополнительные тесты

TEST(FindEvenNumbersTest, HandlesNoEvenNumbers) {
    char str[] = "1 3 5 7 9";
    testing::internal::CaptureStdout();
    int count = findEvenNumbers(str);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(count, 0);
    EXPECT_EQ(output, "\n");
}

TEST(FindEvenNumbersTest, HandlesAllEvenNumbers) {
    char str[] = "2 4 6 8 10";
    testing::internal::CaptureStdout();
    int count = findEvenNumbers(str);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(count, 5);
    EXPECT_EQ(output, "2 4 6 8 10 \n");
}

TEST(FindEvenNumbersTest, HandlesSingleEvenNumber) {
    char str[] = "2";
    testing::internal::CaptureStdout();
    int count = findEvenNumbers(str);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(count, 1);
    EXPECT_EQ(output, "2 \n");
}

TEST(FindEvenNumbersTest, HandlesSingleOddNumber) {
    char str[] = "1";
    testing::internal::CaptureStdout();
    int count = findEvenNumbers(str);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(count, 0);
    EXPECT_EQ(output, "\n");
}

TEST(FindEvenNumbersTest, HandlesMixedNumbers) {
    char str[] = "1 2 3 4 5 6 7 8 9 10";
    testing::internal::CaptureStdout();
    int count = findEvenNumbers(str);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(count, 5);
    EXPECT_EQ(output, "2 4 6 8 10 \n");
}

TEST(FindEvenNumbersTest, HandlesNegativeEvenNumbers) {
    char str[] = "-2 -4 -6 -8 -10";
    testing::internal::CaptureStdout();
    int count = findEvenNumbers(str);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(count, 5);
    EXPECT_EQ(output, "-2 -4 -6 -8 -10 \n");
}

TEST(FindEvenNumbersTest, HandlesNegativeAndPositiveEvenNumbers) {
    char str[] = "-2 2 -4 4 -6 6";
    testing::internal::CaptureStdout();
    int count = findEvenNumbers(str);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(count, 6);
    EXPECT_EQ(output, "-2 2 -4 4 -6 6 \n");
}

TEST(FindEvenNumbersTest, HandlesEmptyString) {
    char str[] = "";
    testing::internal::CaptureStdout();
    int count = findEvenNumbers(str);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(count, 0);
    EXPECT_EQ(output, "\n");
}

TEST(FindEvenNumbersTest, HandlesLargeNumbers) {
    char str[] = "1000000 2000000 3000000";
    testing::internal::CaptureStdout();
    int count = findEvenNumbers(str);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(count, 3);
    EXPECT_EQ(output, "1000000 2000000 3000000 \n");
}
