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

int main(void)
{
    Point<int> pos1(3, 4);
    pos1.ShowPos();

    Point<double> pos2(2.4, 3.6);
    pos2.ShowPos();

    Point<char> pos3('P', 'F');
    pos3.ShowPos();
    return 0;
}