#include <iostream>
using namespace std;

#if 0
// Error case
void foo(int a[3])
{
    for (auto &i : a)
        cout << &i << endl;
}

void print(int a[3])
{
    for (auto i : a)
        cout << i << endl;
}
#endif

#if 0
// for one array size
void foo(int (&a)[3])
{
    for (auto &i : a)
        cout << &i << endl;
}

void print(int (&a)[3])
{
    for (auto i : a)
        cout << i << endl;
}
#endif

#if 1
// for variable array sizes
template <typename T, size_t N>
void foo(T (&a)[N])
{
    for (auto &i : a)
        cout << &i << endl;
}

template <typename T, size_t N>
void print(T (&a)[N])
{
    for (auto i : a)
        cout << i << endl;
}
#endif

int main(void)
{
    int a[3] = {0, 1, 2};
    for (auto &i : a)
        cout << &i << endl;
    foo(a);
    print(a);
    return 0;
}