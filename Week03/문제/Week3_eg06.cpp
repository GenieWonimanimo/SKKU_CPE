#include <iostream>
using namespace std;

int main(void)
{
    int arr[3] = {1, 2, 3};
    auto[a, b, c] = arr;
    cout << a << b << c;

    return 0;
}