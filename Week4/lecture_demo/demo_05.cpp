#include <iostream>
using namespace std;

double mpg(double miles, double gallons)
{
    cout << "dd" << endl;
    return (miles / gallons);
}

double mpg(int miles, int gallons)
{
    cout << "ii" << endl;
    return (double(miles) / gallons);
}

double mpg(int miles, double gallons)
{
    cout << "id" << endl;
    return (miles / gallons);
}
int main(void)
{
    cout << mpg(5, 20) << endl;
    cout << mpg(5, 24.9) << endl;
    // cout << mpg(5.0, 20) << endl; cause error
    return 0;
}