#include <iostream>
using namespace std;

class DayOfYear
{
private:
    // we cannot call private constructors
    // it can prevent specific type of calling constructor
    DayOfYear(int, double) {}
    DayOfYear(double, int) {}
    DayOfYear(double, double) {}

    int month;
    int day;

public:
    DayOfYear(int, int);
    void output();
};

DayOfYear::DayOfYear(int monthValue, int dayValue)
    : month(monthValue), day(dayValue)
{
    cout << "In the constructor DayOfYear" << endl;
}

void DayOfYear::output()
{
    cout << month << "/" << day << endl;
}

int main(void)
{
    DayOfYear christmas(12, 25.0);
    christmas.output();
}