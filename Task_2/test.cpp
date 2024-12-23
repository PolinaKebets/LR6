#include <gtest/gtest.h>
#include "functions.cpp"
#include <cstring>
#include <climits>

TEST(FindMinMaxWordsTest, HandlesMultipleWords) {
    char text[] = "This is a test";
    testing::internal::CaptureStdout();
    findMinMaxWords(text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Слова минимальной длины: a\nСлова максимальной длины: This\n");
}

TEST(FindMinMaxWordsTest, HandlesEqualLengthWords) {
    char text[] = "cat dog bat";
    testing::internal::CaptureStdout();
    findMinMaxWords(text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Слова минимальной длины: cat\nСлова максимальной длины: cat\n");
}


TEST(FindMinMaxWordsTest, HandlesWordsWithHyphens) {
    char text[] = "self-made well-being";
    testing::internal::CaptureStdout();
    findMinMaxWords(text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Слова минимальной длины: self-made\nСлова максимальной длины: well-being\n");
}

TEST(FindMinMaxWordsTest, HandlesWordsWithApostrophes) {
    char text[] = "it's John's book";
    testing::internal::CaptureStdout();
    findMinMaxWords(text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Слова минимальной длины: it's\nСлова максимальной длины: John's\n");
}


TEST(FindMinMaxWordsTest, HandlesMultipleWords1) {
    char text[] = "This is a test";
    testing::internal::CaptureStdout();
    findMinMaxWords(text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Слова минимальной длины: a\nСлова максимальной длины: This\n");
}

TEST(FindMinMaxWordsTest, HandlesEqualLengthWords1) {
    char text[] = "cat dog bat";
    testing::internal::CaptureStdout();
    findMinMaxWords(text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Слова минимальной длины: cat\nСлова максимальной длины: cat\n");
}


TEST(FindMinMaxWordsTest, HandlesWordsWithHyphens1) {
    char text[] = "self-made well-being";
    testing::internal::CaptureStdout();
    findMinMaxWords(text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Слова минимальной длины: self-made\nСлова максимальной длины: well-being\n");
}

TEST(FindMinMaxWordsTest, HandlesWordsWithApostrophes1) {
    char text[] = "it's John's book";
    testing::internal::CaptureStdout();
    findMinMaxWords(text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Слова минимальной длины: it's\nСлова максимальной длины: John's\n");
}


TEST(FindMinMaxWordsTest, HandlesWordsWithHyphens2) {
    char text[] = "self-made well-being";
    testing::internal::CaptureStdout();
    findMinMaxWords(text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Слова минимальной длины: self-made\nСлова максимальной длины: well-being\n");
}

TEST(FindMinMaxWordsTest, HandlesWordsWithApostrophes2) {
    char text[] = "it's John's book";
    testing::internal::CaptureStdout();
    findMinMaxWords(text);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Слова минимальной длины: it's\nСлова максимальной длины: John's\n");
}
