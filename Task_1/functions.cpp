#pragma once
#include <iostream>
#include <cstring>

int findEvenNumbers(char* str) {
    char* token = strtok(str, " ");
    int kolEven = 0;
    while (token != nullptr) {
        int num = std::atoi(token);
        if (num % 2 == 0) {
            kolEven++;
            std::cout << num << " ";
        }
        token = strtok(nullptr, " ");
    }
    std::cout << std::endl;
    return kolEven;
}

int Task(){
    const int size = 81;
    char* str = new char[size];

    std::cout << "Введите строку символов (цифры, разделенные пробелами, не более 80 символов): ";
    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && i < size - 1) {
        str[i++] = c;
    }
    str[i] = '\0';

    std::cout << "Исходный текст: " << str << std::endl;
    
    std::cout << "Четные числа: ";
    findEvenNumbers(str);

    delete[] str;
    return 0;
}