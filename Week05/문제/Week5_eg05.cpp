#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    double d = 15.45555;
    cout << d << endl;

    // want something like %0.2f int printf()?
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << d << endl;
    return 0;  
}