#include <iostream>
#include <string>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
    return num1 + num2;
}

int main(void)
{
    cout << Add(15, 20) << endl;
    cout << Add<double>(1.5, 2.3) << endl;
    cout << Add<string>("template", " example") << endl;
    return 0;
}