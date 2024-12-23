#include <gtest/gtest.h>
#include "functions.cpp"
#include <cstring>
#include <climits>

TEST(FindMinMaxWordsTest, HandlesSinglePalindrome) {
    const int n = 1;
    char* text[n] = { "АРГЕНТИНА МАНИТ НЕ ГРА" };
    testing::internal::CaptureStdout();
    findMinMaxWords(n, text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("является палиндромом") != std::string::npos);
}

TEST(FindMinMaxWordsTest, HandlesSingleNonPalindrome) {
    const int n = 1;
    char* text[n] = { "Hello world" };
    testing::internal::CaptureStdout();
    findMinMaxWords(n, text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("НЕ является палиндромом") != std::string::npos);
}

TEST(FindMinMaxWordsTest, HandlesMultiplePalindromes) {
    const int n = 2;
    char* text[n] = { "АРГЕНТИНА МАНИТ НЕ ГРА", "А РОЗА УПАЛА НА ЛАПУ АЗОРА" };
    testing::internal::CaptureStdout();
    findMinMaxWords(n, text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("является палиндромом") != std::string::npos);
}

TEST(FindMinMaxWordsTest, HandlesMultipleNonPalindromes) {
    const int n = 2;
    char* text[n] = { "Hello world", "Goodbye world" };
    testing::internal::CaptureStdout();
    findMinMaxWords(n, text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("НЕ является палиндромом") != std::string::npos);
}

TEST(FindMinMaxWordsTest, HandlesSingleCharacter) {
    const int n = 1;
    char* text[n] = { "a" };
    testing::internal::CaptureStdout();
    findMinMaxWords(n, text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("является палиндромом") != std::string::npos);
}

TEST(FindMinMaxWordsTest, HandlesPalindromeWithPunctuation) {
    const int n = 1;
    char* text[n] = { "А роза, упала на лапу Азора!" };
    testing::internal::CaptureStdout();
    findMinMaxWords(n, text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("является палиндромом") != std::string::npos);
}
TEST(FindMinMaxWordsTest, HandlesSinglePalindrome1) {
    const int n = 1;
    char* text[n] = { "АРГЕНТИНА МАНИТ НЕ ГРА" };
    testing::internal::CaptureStdout();
    findMinMaxWords(n, text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("является палиндромом") != std::string::npos);
}

TEST(FindMinMaxWordsTest, HandlesSingleNonPalindrome1) {
    const int n = 1;
    char* text[n] = { "Hello world" };
    testing::internal::CaptureStdout();
    findMinMaxWords(n, text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("НЕ является палиндромом") != std::string::npos);
}

TEST(FindMinMaxWordsTest, HandlesMultiplePalindromes1) {
    const int n = 2;
    char* text[n] = { "АРГЕНТИНА МАНИТ НЕ ГРА", "А РОЗА УПАЛА НА ЛАПУ АЗОРА" };
    testing::internal::CaptureStdout();
    findMinMaxWords(n, text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("является палиндромом") != std::string::npos);
}

TEST(FindMinMaxWordsTest, HandlesMultipleNonPalindromes1) {
    const int n = 2;
    char* text[n] = { "Hello world", "Goodbye world" };
    testing::internal::CaptureStdout();
    findMinMaxWords(n, text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("НЕ является палиндромом") != std::string::npos);
}