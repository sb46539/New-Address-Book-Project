#include "dateType.h"
#include <iostream>


void dateType::setDate(int month, int day, int year) {
    dMonth = month;
    dDay = day;
    dYear = year;
}


void dateType::print() const {
    std::cout << dMonth << "/" << dDay << "/" << dYear << std::endl;
}


int dateType::getDay() const {
    return dDay;
}

int dateType::getMonth() const {
    return dMonth;
}

// Getter for year
int dateType::getYear() const {
    return dYear;
}