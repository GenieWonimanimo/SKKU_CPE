#include <iostream>

using namespace std;

class DayOfYear
{
private:
    int month;
    int day;
public:
    DayOfYear();
    DayOfYear(int, int);
    void output() const;
};

DayOfYear::DayOfYear()
    : month(1), day(1)
{ // empty
}

DayOfYear::DayOfYear(int monthValue, int dayValue)
    : month(monthValue), day(dayValue)
{
    cout << "In the constructor DayOfYear(" << monthValue;
    cout << "," << dayValue << ")" << endl;
}

void DayOfYear::output() const
{
    cout << month << "/" << day << endl;
}

void print_day(DayOfYear day)
{
    cout << "In print_day" << endl;
    day.output();
}

int main()
{
    DayOfYear newYear(1, 1);
    DayOfYear holiday = newYear;
    holiday.output();

    holiday = DayOfYear(9, 25);
    print_day(holiday);
    return 0;
}