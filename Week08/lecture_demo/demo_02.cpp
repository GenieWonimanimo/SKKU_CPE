#include <iostream>

using namespace std;

class DayOfYear
{
private:
    int month = 1;
    int day = 1;
public:
    DayOfYear(int, int);
    void output();
};

DayOfYear::DayOfYear(int monthValue, int dayValue)
    : month(monthValue), day(dayValue)
{
    cout << "In the constructor DayOfYear(" << monthValue;
    cout << "," << dayValue << ")" << endl;
    month = monthValue + 2;
    day = dayValue + 2;
}

void DayOfYear::output()
{
    cout << month << "/" << day << endl;
}

int main()
{
    DayOfYear christmas(12, 25);
    christmas.output();
    return 0;
}