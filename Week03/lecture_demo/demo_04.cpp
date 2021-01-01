#include <iostream>

using namespace std;

int main(void)
{
    // const_cast
    cout << endl << "const_cast example" << endl;
    // const double var1 = 1.1; 
    double var1 = 1.1;

    const double& var2 = var1;
    // var2 = 1.2  it makes error
    double& var3 = const_cast<double&>(var2);
    cout << var1 << '\t' << var2 << '\t' << var3 << endl;
    var3 = 1.3;
    cout << var1 << '\t' << var2 << '\t' << var3 << endl;
    cout << &var1 << '\t' << &var2 << '\t' << &var3 << endl;
    return 0;
}