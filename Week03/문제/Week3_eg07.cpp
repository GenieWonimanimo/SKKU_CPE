#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cout << "input array size: "; cin >> num;
    int* arr = new int[num];

    // do not use range based loop with pointer
    for (int i = 1; i <= num; i++)
    {
        arr[i-1] = i;
        cout << arr[i-1] << " ";
    }
    if (arr != nullptr) delete []arr;
    arr = nullptr;
    return 0;
}