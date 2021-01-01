#include <iostream>
using namespace std;
class DayOfYear
{
public:
    void output();
    void assign(int month, int day);
private:
    int month;
    int day;
};

void DayOfYear::output()
{
    cout << month << "/" << day << endl;
}

void DayOfYear::assign(int month, int day)
{
    this->month = month;
    this->day = day;
}

int main(void)
{
    DayOfYear birthday;
    birthday.assign(5, 11);
    birthday.output();
    return 0;
}