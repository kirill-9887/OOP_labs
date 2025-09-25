#include "../include/psychiatrist.h"

bool isTerribleNumber(const std::string &weekday, const int number) {
	if (weekday == "Понедельник") {
		return number == 12;
    } else if (weekday == "Вторник") {
		return number > 95;
    } else if (weekday == "Среда") {
		return number == 34;
    } else if (weekday == "Четверг") {
		return number == 0;
    } else if (weekday == "Пятница") {
		return number % 2 == 0;
	} else if (weekday == "Суббота") {
		return number == 56;
	} else if (weekday == "Воскресенье") {
		return number == 666 || number == -666;
	}
    return false;
}