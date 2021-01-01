#include <iostream>
using namespace std;

class Angle
{
public:
    static const double PI;
    void RtoD();
    void DtoR();
    void show();
    double getVal();
    void setVal(double deg, bool isDeg);
    void Add(Angle a);
    bool isDeg;

private:
    double angle;
};

const double Angle::PI = 3.14159;

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

void Angle::show() { cout << angle << endl; }
double Angle::getVal() { return angle; }

void Angle::setVal(double deg, bool isDeg)
{
    angle = deg;
    this->isDeg = isDeg;
}

void Angle::Add(Angle a)
{
    if (isDeg)
    {
        a.RtoD();
        angle += a.getVal();
    }
    else
    {
        a.DtoR();
        angle += a.getVal();
    }
}

int main(void)
{
    double deg;
    char select;
    Angle a1, a2;

    //cout << "first angle and isDeg: ";
    cin >> deg >> select;
    a1.setVal(deg, select == 'y');

    // cout << "Second angle and isDeg: ";
    cin >> deg >> select;
    a2.setVal(deg, select == 'y');

    a1.Add(a2);

    cout << a1.getVal() << endl;
    cout << a2.getVal() << endl;

    return 0;
}