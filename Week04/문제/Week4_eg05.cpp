#include <iostream>
using namespace std;

const double PI = 3.14159265359;

float turn(double deg, bool positive = true, bool use_rad = false)
{
    if (use_rad) deg *= (180 / PI);
    deg += positive? 90 : -90;
    if (use_rad) deg *= (PI / 180);
    return deg;
}

int main(void)
{
    double deg = 90;
    cout << "degree: " << deg << endl;
    cout << "after positive turn: " << turn(deg) << endl;
    cout << "after negative turn: " << turn(deg, false) << endl;
    deg *= (PI / 180);
    cout << "in radian: " << deg << endl;
    cout << "after positive turn: " << turn(deg, true, true) << endl;
    cout << "after negative turn: " << turn(deg, false, true) << endl;
    return 0;
}