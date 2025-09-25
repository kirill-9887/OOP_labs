#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include "./include/psychiatrist.h"

int main() {
    std::cout << "Введите день недели >>> ";
    std::string weekday;
    std::getline(std::cin, weekday);
    if (weekday != "Понедельник" &&
            weekday != "Вторник" &&
            weekday != "Среда" &&
            weekday != "Четверг" &&
            weekday != "Пятница" &&
            weekday != "Суббота" &&
            weekday != "Воскресенье") {
        std::cout <<  "Ошибка ввода: Некорректно введен день недели" << std::endl;
        return 0;
    }
    std::string number_str;
    std::cout << "Введите число >>> ";
    std::getline(std::cin, number_str);
    for (size_t i = 0; i < number_str.length(); ++i) {
        if (!(isdigit(number_str[i]) || (i == 0 && (number_str[i] == '+' || number_str[i] == '-')))) {
            std::cout << "Ошибка ввода: Не удалось прочитать число" << std::endl;
            return 0;
        }
    }
    std::stringstream number_ss(number_str);
    int number;
    number_ss >> number;
    if (number == std::numeric_limits<int>::max() || number == std::numeric_limits<int>::min()) {
        std::cout << "Ошибка ввода: Число вне поддерживаемого диапазона" << std::endl;
        return 0;
    }
    std::cout << "Пациент " << (isTerribleNumber(weekday, number) ? "боится" : "НЕ боится") << std::endl;
    return 0;
}