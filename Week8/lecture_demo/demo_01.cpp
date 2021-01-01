#include <iostream>

using namespace std;

class DayOfYear
{
private:
    int month;
    int day;
public:
    DayOfYear(int monthValue, int dayValue);
    void output();
};

DayOfYear::DayOfYear(int monthValue, int dayValue)
{
    cout << "In the constructor DayOfYear(" << monthValue;
    cout << "," << dayValue << ")" << endl;
    month = monthValue;
    day = dayValue;
}

void DayOfYear::output()
{
    cout << month << "/" << day << endl;
}

int main()
{
    DayOfYear christmas(12, 25);
    int month(5);
    int* day = new int(11);

    DayOfYear* birthday = new DayOfYear(month, *day);
    birthday->output();

    return 0;
}