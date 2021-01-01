#include <iostream>
using namespace std;

class Angle
{
public:
    double getVal();
    void setVal(double angle, bool isDeg);
    bool isDeg;
private:
    double angle;
};

double Angle::getVal()
{
    return angle;
}
void Angle::setVal(double angle, bool isDeg)
{
    this->isDeg = isDeg;
    this->angle = angle;
}

int main(void)
{
    Angle ang;
    ang.setVal(180, true);
    cout << "Angle : " << ang.getVal() << endl;
    return 0;
}