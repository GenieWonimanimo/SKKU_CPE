#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str("abcde");
    cout << str.length() << endl;

    str.erase(0, 1); // erase 1 char from 0 pos
    cout << str << endl;
    cout << str.length() << endl;
    cout << str.substr(1, 2) << endl; // from 1 pos 2 char
    return 0;   
}