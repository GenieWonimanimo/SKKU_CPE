#include <iostream>
using namespace std;


void printArr(const int arrPtr[], const int len)
{
    for (int i = 0; i < len; i++)
        cout << arrPtr[i] << " ";
    cout << endl;
}

int main(void)
{
    int arr[5] = {1, 3, 5, 7, 9};
    int last_num = arr[sizeof(arr) / sizeof(int) - 1];

    cout << "Before reversing" << endl;
    printArr(arr, 5);

    for (int& ref : arr)
    {
        ref = last_num;
        last_num -= 2;
    }
    cout << "After reversing" << endl;
    printArr(arr, 5);    
    return 0;
}