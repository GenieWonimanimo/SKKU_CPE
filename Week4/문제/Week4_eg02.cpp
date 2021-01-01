#include <iostream>
#include <cstdio>
using namespace std;

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int a = 10, b = 7;
    printf("before swap: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("after swap: a = %d, b = %d\n", a, b);
    return 0;
}