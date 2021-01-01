#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double ByRoundPow(double pNum, int pDecimalPoint)
{
    pNum = round( pNum * pow(10, pDecimalPoint) ) / pow(10, pDecimalPoint);
    return pNum;
}

int main(void)
{
    double num;
    int decimalPoint;
    cin >> num >> decimalPoint;
    
    // case 1
    cout << ByRoundPow(num, decimalPoint) << endl;
    // case 2
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(decimalPoint);
    cout << num << endl;

    return 0;
}