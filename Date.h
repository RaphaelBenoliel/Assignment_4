//
// Created by Raphael Benoliel on 01/06/2022.
//
#ifndef ASSIGNMENT_4_DATE_H
#define ASSIGNMENT_4_DATE_H


class Date {
private:
    int day, month, year;
public:
    Date();
    Date(int d, int m, int y);
    Date(const Date& other);
    ~Date();
    bool operator>=(const Date &other)const;
};


#endif //ASSIGNMENT_4_DATE_H
