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

typedef Point<int> intPoint;
using floatPoint = Point<float>;

intPoint p1; // objects of type Point<int>
floatPoint fp1; // objects of type Point<float>

int main(void)
{
    intPoint p1;
    floatPoint fp1;
    p1.setX(3); fp1.setX(2.3);
    p1.setY(4); fp1.setY(4.7);
    p1.ShowPos(); fp1.ShowPos();
    return 0;
}