//
// Created by Raphael Benoliel on 01/06/2022.
//

#include "Date.h"

Date::Date()
{
    this->day = 0;
    this->month = 0;
    this->year = 0;
}

Date::Date(int d, int m, int y)
{
    this->day = d;
    this->month = m;
    this->year= y;
}
Date::Date(const Date &other) {
    day = other.day;
    month = other.month;
    year = other.year;

}
Date::~Date() {
}

bool Date::operator>=(const Date &other)const {
    if(this->year > other.year)
        return true;
    else if(this->year == other.year && this->month > other.month)
        return true;
    else if(this->year == other.year && this->month == other.month && this->day>=other.day)
        return true;
    return false;
}

