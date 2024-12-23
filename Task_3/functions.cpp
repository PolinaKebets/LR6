#pragma once
#include <iostream>
#include <cstring>
#include <cmath>
#include <climits>


int removeSpace(char* str)
{
    int newLen = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[newLen++] = str[i];
        }
    }
    str[newLen] = '\0';
    std::cout << "\"" << str << "\"" << std::endl;
    return newLen;
}

void findMinMaxWords(int n, char** text) {
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        char str[1001] = {};
        int len = 0;
        for (int j = 0; text[i][j] != '\0'; j++) {
            str[j] = text[i][j];
        }
        len = removeSpace(str);
        for (int j = 0; str[j] != '\0'; j++)
        {
            std::cout << str[j] << " || " << str[len-j-1] << std::endl;
            if (str[j] != str[len - j - 1])
            {
                flag = true;
                //break;
            }
        }
        if (flag == false)
        {
            std::cout << "Строка \"" << text[i] << "\" является палиндромом" << std::endl;
        }
        else {
            std::cout << "Строка \"" << text[i] << "\" НЕ является палиндромом" << std::endl;
        }
    }
}

int Task() {
    const int size = 1001;
    int n = 0;
    std::cout << "Введите колво строк ";
    std::cin >> n;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Неверный ввод." << std::endl;
        return -1;
    }
    char** text = new char* [n];

    char C = getchar();
    while (C != '\n')
        C = getchar();

    std::cout << "Введите текст (не более 1000 символов в строке): ";
    for (int i = 0; i < n; i++)
    {
        text[i] = new char[size];
        int j = 0;
        char c;
        while ((c = getchar()) != '\n' && j < size - 1) {
            text[i][j++] = c;
        }
        text[i][j] = '\0';

    }
    findMinMaxWords(n, text);

    for (int i = 0; i < n; i++)
    {
        delete[] text[i];
    }
    delete[] text;
    return 0;
}
