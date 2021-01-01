#include <iostream>
using namespace std;

int main(void)
{
    int a = 5;
    auto n1 = a;
    decltype(a) n2 = 7;
    decltype((double)a) n3 = 7.7;
    cout << n1 << endl << n2 << endl << n3 << endl;
    return 0;
}