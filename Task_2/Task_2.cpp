#include "functions.cpp"
#include "test.cpp"
#include <iostream>
#include <cstring>
#include <cmath>
#include <climits>
#include <gtest/gtest.h>

int main() {
    int num1;
    setlocale(LC_ALL, "RU");
    std::cout << "Программа, находящая в тексте найти и выводящая на экран все слова максимальной и минимальной длины\n";
    std::cout << "Выполнила Кебец Полина, группа 453502\n";

    do {
        std::cout << "Введите 1, если хотите перейти к решению. Введите 2, если хотите завершить работу программы\n";
        std::cin >> num1;
        if (std::cin.fail()) {  
            std::cin.clear();  
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
            std::cout << "Неверный ввод. Пожалуйста, введите 1, чтобы перейти к решению ,или, 2, чтобы завершить работу программы." << std::endl;
            continue;  
        }
        char C = getchar();
        while(C != '\n')
            C = getchar();
            
        switch (num1)
        {
        case 1:
            Task(); 
            RUN_ALL_TESTS();
            break; 
        case 2:
            std::cout << "Программа завершена." << std::endl;
            break;
        default:
            std::cout << "Неверный ввод. Пожалуйста, введите 1, чтобы перейти к решению ,или, 2, чтобы завершить работу программы." << std::endl;
            break;
        }
    } while (num1 != 2);  
    return 0;
}
