#include <iostream>
using namespace std;

template<typename T1, typename T2> // use all template
void showStuff(int stuff1, T1 stuff2, T2 stuff3)
{
    cout << stuff1 << endl
        << stuff2 << endl
        << stuff3 << endl;
}

int main(void)
{
    showStuff(1, 1.1, "abcd");
    return 0;
}