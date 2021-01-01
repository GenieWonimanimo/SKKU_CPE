#include <iostream>
using namespace std;

class Box
{
private:
    int width = 10;
    int height = 10;
    const int depth = 10;

public:
    Box();
    Box(int, int, int);
    void show();
};

Box::Box(int w, int h, int d)
    : width(w), height(h), depth(d)
{ }

Box::Box() {};

void Box::show()
{
    if (height == width && width == depth)
        cout << "Cube\t : " << width;
    else
        cout << "Box\t : " << width << ", " << height << ", " << depth;
}

int main(void)
{
    Box box1(20, 10, 30);
    box1.show();
    cout << endl;
    return 0;
}