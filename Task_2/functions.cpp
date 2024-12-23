#pragma once
#include <iostream>
#include <cstring>
#include <cmath>
#include <climits>


void findMinMaxWords(char* text) {
    char* token = strtok(text, " ");
    int minLen = INT_MAX, maxLen = 0;
    char* minWord = nullptr;
    char* maxWord = nullptr;

    while (token != nullptr) {
        int len = std::strlen(token);
        if (len < minLen) {
            minLen = len;
            minWord = token;
        }
        if (len > maxLen) {
            maxLen = len;
            maxWord = token;
        }
        token = strtok(nullptr, " ");
    }

    std::cout << "Слова минимальной длины: " << minWord << std::endl;
    std::cout << "Слова максимальной длины: " << maxWord << std::endl;
}

int Task(){
    const int size = 1001;  
    char* text = new char[size];

    std::cout << "Введите текст (не более 1000 символов): ";
    int i = 0;
    char c;
    while (i < size - 1) {
        c = std::cin.get();
        if (c == '\n') {
            break;
        }
        text[i++] = c;
    }
    text[i] = '\0';

    std::cout << "Исходный текст: " << text << std::endl;

    findMinMaxWords(text);

    delete[] text;
    return 0;
}