#include <iostream>
using namespace std;
class Angle
{
public:
    static const double PI;
    bool isDeg;
    double angle;
};
const double Angle::PI = 3.14159;
int main(void)
{
    Angle ang = {true, 180};
    cout << "PI: " << Angle::PI << endl;
    cout << "ang: " << ang.angle << endl;
    return 0;
}