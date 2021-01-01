#include <iostream>
using namespace std;

template <typename T, size_t N>
T SumArray(T (&arr)[N])
{
    T sum = 0;
    for (auto i : arr)
        sum += i;
    return sum;
}

int main(void)
{
    double arr[10];
    cout << "Enter your numbers." << endl;
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    double sum = SumArray<double, 10>(arr);

    cout << sum << endl;
    return 0;
}