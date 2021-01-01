#include <iostream>
using namespace std;

const double GRAVITY = 9.80665;

int main(void)
{
    double t;
    cout << "speed after t seconds : ";
    cin >> t;
    // GRAVITY = 3; error
    cout << GRAVITY * t << " m/s" << endl;
}