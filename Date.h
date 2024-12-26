#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int _day, int _month, int _year);
    ~Date();

    bool isValidDate(int day, int month, int year) const;

    friend std::ostream& operator<<(std::ostream& os, const Date& date);
};

#endif //DATE_H