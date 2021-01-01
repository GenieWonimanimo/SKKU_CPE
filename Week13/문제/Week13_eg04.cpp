#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:
    T xpos, ypos;
public:
    Point() {}
    Point(T x, T y) : xpos(x), ypos(y) { }

    void setX(T xVal) {xpos = xVal;}
    void setY(T yVal) {ypos = yVal;}
    T getX() const {return xpos;}
    T getY() const {return ypos;}
    void ShowPos() const {cout << "[" << xpos << ", " << ypos << "]" << endl;}
};

template <typename T>
Point<T> SumArray(Point<T> *arr, int len)
{
    T sum1 = 0, sum2 = 0;
    for (int i = 0; i < len; i++)
    {
        sum1 += arr[i].getX();
        sum2 += arr[i].getY();
    }
    return Point<T>(sum1, sum2);
}

int main(void)
{
    int len;
    double tmp1, tmp2;
    Point<double>* arr;
    cout << "Enter the number of Point pairs." << endl;
    cin >> len;
    arr = new Point<double>[len];
    cout << "Enter your numbers." << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> tmp1 >> tmp2;
        arr[i].setX(tmp1);
        arr[i].setY(tmp2);
    }
    Point<double> sum = SumArray(arr, len);
    sum.ShowPos();
    return 0;
}