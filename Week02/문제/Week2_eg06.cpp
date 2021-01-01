#include <iostream>
using namespace std;

int main(void)
{
    int A;
    int &B = A;
    cout << "input A: ";
    cin >> A;
    cout << "B: " << B << endl;

    cout << "input B: ";
    cin >> B;
    cout << "A: " << A << endl;

    cout << "Address: " << &A << " " << &B << endl;
    return 0;
}