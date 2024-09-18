#include <iostream>

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(int m, int d, int y) {
        if (m < 1 || m > 12) {
            month = 1;
        } else {
            month = m;
        }
        day = d;
        year = y;
    }

    int getMonth() {
        return month;
    }

    void setMonth(int m) {
        if (m < 1 || m > 12) {
            month = 1;
        } else {
            month = m;
        }
    }

    int getDay() {
        return day;
    }

    void setDay(int d) {
        day = d;
    }

    int getYear() {
        return year;
    }

    void setYear(int y) {
        year = y;
    }

    void displayDate() {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }
};

int main() {
    //Valido
    Date date1(5, 30, 2024);
    std::cout << "Fecha 1: ";
    date1.displayDate();
    //Invalido
    Date date2(15, 12, 2024);
    std::cout << "Fecha 2: ";
    date2.displayDate();

    return 0;
}