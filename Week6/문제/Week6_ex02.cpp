#include <iostream>
using namespace std;
class Angle
{
public:
    static const double PI;
    bool isDeg;
    double angle;

    // Declare member func here
    void RtoD();
    void DtoR();
    void show();
};
const double Angle::PI = 3.14159;

// Define Angle class's member func here
void Angle::RtoD()
{
    if (!isDeg)
    {
        isDeg = true;
        angle *= (180 / PI);
    }
}

void Angle::DtoR()
{
    if (isDeg)
    {
    isDeg = false;
    angle *= (PI / 180);
    }
}

void Angle::show()
{
    if (isDeg)
        cout << angle << "¡Æ" << endl;
    else
        cout << angle << "rad" << endl;
}

int main(void)
{
    double deg;
    char select;
    cout << "Input angle: ";
    cin >> deg;
    cout << "is degree?(y/n): ";
    cin >> select;

    Angle angle = {select == 'y', deg};

    angle.DtoR();
    angle.show();
    angle.RtoD();
    angle.show();

    return 0;
}