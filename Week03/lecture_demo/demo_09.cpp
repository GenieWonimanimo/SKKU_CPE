#include <iostream>
using namespace std;

int main(void)
{
#if 0
    int a[2] = {1, 2};
    auto [x, y] = a;
    auto& [xr, yr] = a;
    cout << x << ", " << y << endl;

    xr = 3;
    yr = 4;

    cout << x << ", " << y << endl;
    cout << a[0] << ", " << a[1] << endl;
    cout << xr << ", " << yr << endl;
#else
    struct {
        int i = 1;
        double d = 2;
    } f;
    auto [i, d] = f;
    cout << i << " " << d << endl;
    cout << typeid(i).name() << " " << typeid(d).name() << endl;
#endif
    return 0;
}