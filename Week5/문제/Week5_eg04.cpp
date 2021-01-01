#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    // user gives us "hello world"
    string s;
    cin >> s;

    // what is the value of the variable s?
    cout << s;

    /*
    // what about this?
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 + " " << s2 << endl;
    */

    // up code is too messy. use getline
    /*
        string tr;
        getline(cin, str);
    */
    return 0;
}