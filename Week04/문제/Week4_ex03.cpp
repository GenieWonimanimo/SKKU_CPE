#include <iostream>
using namespace std;
const int SIZE = 10;

void printArr(int* arr, int len)
{
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

//selectionSort 함수를 구현, std::swap 이용
void selectionSort(int* arr, int len, bool orderType = false);

int main(void)
{
    int arr[SIZE] = {5, 13, 6, 1, 32, 65, 87, 23, 14, 88};

    cout << "Before sort: " << endl;
    printArr(arr, SIZE);

    cout << "Sorted (descending order): " << endl;
    selectionSort(arr, SIZE);
    printArr(arr, SIZE);

    cout << "Sorted (ascending order): " << endl;
    selectionSort(arr, SIZE, 1);
    printArr(arr, SIZE);

    return 0;
}

void selectionSort(int arr[], int len, bool orderType)
{
    if (orderType)
    {
        for (int i = 0; i < len - 1; i++)
        {
            int tmp = i;
            for (int j = i + 1; j < len; j++)
            {
                if (arr[j] < arr[tmp])
                    tmp = j;
            }
            swap(arr[tmp], arr[i]);
        }
    }
    else
    {
        for (int i = 0; i < len - 1; i++)
        {
            int tmp = i;
            for (int j = i + 1; j < len; j++)
            {
                if (arr[j] > arr[tmp])
                    tmp = j;
            }
            swap(arr[tmp], arr[i]);
        }
    }
}
