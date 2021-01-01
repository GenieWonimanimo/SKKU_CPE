#include <iostream>
using namespace std;

int main(void)
{
    char s1[10];
    char s2[10] = "";
    char s3[10] = {};
    char s4[10] = {'\0'};

    cout << "s1" << endl;
    for (char c : s1)
        cout << int(c) << " ";
    cout << endl;

    cout << "s2" << endl;
    for (char c : s2)
        cout << int(c) << " ";
    cout << endl;

    cout << "s3" << endl;
    for (char c : s3)
        cout << int(c) << " ";
    cout << endl;

    cout << "s4" << endl;
    for (char c : s4)
        cout << int(c) << " ";
    cout << endl;

    return 0;
}