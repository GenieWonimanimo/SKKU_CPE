#include <iostream>
using namespace std;

int main(void)
{
    string str;
    cout << "What's your name? ";
    cin >> str;
    cout << R"(Welcome\^o^/, )" << str << endl;
    return 0;
}