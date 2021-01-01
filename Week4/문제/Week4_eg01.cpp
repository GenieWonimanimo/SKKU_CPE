#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int val = 10;
    int& ref = val;
    //int& ref; this cause error, variable declared as reference must be initialized coincidently
    int* ptr;
    ptr = &val;
    printf("val=%d, ref=%d, *ptr=%d\n", val, ref, *ptr);
    val = 20;
    printf("val=%d, ref=%d, *ptr=%d\n", val, ref, *ptr);
    return 0;
}