#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void)
{
    // from cstring to string
    char aCString[] = "My C-string";
    string stringVar = aCString;
    // from string to cstring
    strcpy(aCString, stringVar.c_str());
    // aCString = strintgVar; // illegal!
    // aCString = stringVar.c_str(); // what happens?

    string s;
    int i = 100;
    s = to_string(i);
    i = stoi(s);
    cout << (s + "1") << endl;
    cout << (i + 1) << endl;
    return 0;
}