#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void)
{
    char aCString[] = "My C-string";
#if 0 // c -> c++
    string stringVar = aCString;

    cout << "C String: " << aCString << endl;
    cout << "string: " << stringVar << endl;
#else // c++ -> c
    string stringVar = "C++";
    strcpy(aCString, stringVar.c_str());
    //aCString = stringVar; // illegal!
    // aCString = stringVar.c_str(); // what happens?

    cout << "C String: " << aCString << endl;
    cout << "string: " << stringVar << endl;
#endif
    return 0;
}