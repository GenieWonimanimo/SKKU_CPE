#include <iostream>
using namespace std;

int main(void)
{
    int arr[] = {20, 30, 40, 50};
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) // messy :()
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (auto x : arr) // beautiful :)
        cout << x << " ";
    cout << endl;

    string str = "abcd";
    // char * str = "abcd"; // this code cause error
    for (auto c : str)
        cout << c << endl;
    return 0;
}