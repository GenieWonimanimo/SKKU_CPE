#include <iostream>
using namespace std;

int func(int n1, int n2) {return n1 + n2;}
double func(double n1, double n2) {return n1 * n2;}

int main(void)
{
    double d1, d2;
    int i1, i2;
    cout << "Input 2 Numbers: "; cin >> d1 >> d2;
    i1 = static_cast<int>(d1);
    i2 = static_cast<int>(d2);
    cout << "func (int): " << func(i1, i2) << endl;
    cout << "func (double): " << func(d1, d2) << endl;

    return 0;
}