#pragma once
#include "addressType.h"
class dateType : public addressType
{
private:
    int dMonth;
    int dDay;
    int dYear;

public:
    dateType(int month = 1, int day = 1, int year = 1900) {
        setDate(month, day, year);
    }

    void setDate(int month, int day, int year);

    // GETTERS
    int getDay() const;
    int getMonth() const;
    int getYear() const;


    int getDaysInMonth(int month, int year) const;
    bool isLeapYear(int year) const;

    void print() const;
};

