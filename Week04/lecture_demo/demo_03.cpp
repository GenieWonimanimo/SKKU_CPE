#include <iostream>
using namespace std;

double& func(double& variable)
{
    return variable;
}
double& mal_func(double variable)
{
    return variable;
}


int main(void)
{
    double dVar = 3.14;
    
    cout << dVar << endl;
    cout << func(dVar) << endl;
    cout << dVar << endl;

#if 0
    double dVar2 = func(dVar);
    cout << "&dVar1: " << &dVar << endl;
    cout << "&dVar2: " << &dVar2 << endl;
#else
    double dVar2 = mal_func(dVar);
    // double& dVar2 = func(dVar);
    cout << "&dVar1: " << &dVar << endl;
    cout << "&dVar2: " << &dVar2 << endl;
#endif
    return 0;
}