#include <iostream>
using namespace std;
int main(void)
{
    int number7 = 7;
    int number8 = 8;
    int* const addr_const = &number7;
    const int* const_addr = &number7;
    cout << number7 << " has an address of " << addr_const << endl;
    cout << number7 << " has an address of " << const_addr << endl;

    // Error
    //addr_const = &number8
    //cout << number8 << " has an address of " << addr_const << endl;
    const_addr = &number8;
    cout << number8 << " has an address of " << const_addr << endl;

    *addr_const = 77;
    cout << "number7 is now " << *addr_const << endl;

    // Error
    //*const_addr = 88;
    //cout << "number8 is now " << *const_addr << endl;
}