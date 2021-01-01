#include <iostream>
using namespace std;

const double PI = 3.14159265359;

int main(void)
{
    double deg;
    cout << "input degree : ";
    cin >> deg;
    cout << deg * (PI / 180) << " rad" << endl;
    return 0;
}