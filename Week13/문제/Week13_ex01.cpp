#include <iostream>
using namespace std;

template <typename T, size_t N>
int array_length(T (&arr)[N])
{
    int len = 0;
    while (arr[len] != 0) len++;
    return len + 1;
}

int main(void)
{
    int a[6] = {2, 7, 4, 2, 2, 0}; char b[8] = "GEBD030";
    double c[7] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 0.0};
    cout << "a: " << array_length(a) << endl;
    cout << "b: " << array_length(b) << endl;
    cout << "c: " << array_length(c) << endl;
    return 0;
}