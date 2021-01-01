#include <iostream>

using namespace std;

int main(void)
{
    char s[10] = "Hi Mom!";
    cout << s << endl;

    //checking item of s
    for (char c : s)
        cout << c << ": " << int(c) << endl;
    return 0;
}