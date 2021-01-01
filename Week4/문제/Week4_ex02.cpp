#include <iostream>
using namespace std;

int getPrice(int a);
int getPrice(int a, int b);
int getPrice(int a, int b, int g);

int main(void)
{
    int a = 0, b = 0, g = 0;
    int price;
    cout << "We have apple(1,000), banana(1,500), grape(3,000)." << endl;
    cout << "apple: "; cin >> a;
    cout << "banana: "; cin >> b;
    cout << "grape: "; cin >> g;

    if (a > 0 && b == 0 && g == 0)
        price = getPrice(a);
    else if (a > 0 && b > 0 && g == 0)
        price = getPrice(a, b);
    else
        price = getPrice(a, b, g);
    cout << "Total price is " << price << endl;
    
    return 0;
}

int getPrice(int a)
{
    return (a * 1000);
}
int getPrice(int a, int b)
{
    return ( (a * 1000 + b * 1500) * 0.9 );
}
int getPrice(int a, int b, int g)
{
    return ( (a * 1000 + b * 1500 + g * 3000) * 0.8 );
}