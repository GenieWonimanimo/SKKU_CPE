#include <iostream>

using namespace std;

int Pascal(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    else
        return Pascal(n - 1, r - 1) + Pascal(n - 1, r);
}

void printTriangle(int line)
{
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << Pascal(i, j) << " ";
        cout << endl;
    }
}

int main(void)
{
    int n;
    cin >> n;
    printTriangle(n);
    return 0;
}