#include <iostream>
using namespace std;

int main(void)
{
    double n1, n2;
    cout << "input 2 numbers: ";
    cin >> n1 >> n2;

    char oper;
    cout << "input operator: ";
    cin >> oper;

    switch (oper)
    {
        case '+':
            cout << n1 << " " << oper << " " << n2 << " = " << n1 + n2 << endl;
            break;
        case '-':
            cout << n1 << " " << oper << " " << n2 << " = " << n1 - n2 << endl;
            break;
        case '*':
            cout << n1 << " " << oper << " " << n2 << " = " << n1 * n2 << endl;
            break;
        case '/':
            cout << n1 << " " << oper << " " << n2 << " = " << n1 / n2 << endl;
            break;
    }
    return 0;
}