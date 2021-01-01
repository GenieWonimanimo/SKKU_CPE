#include <iostream>
using namespace std;

class Box
{
private:
    int width = 10;
    int height = 10;
    int depth = 10;

public:
    Box(int, int, int);
    Box(int, int);
    Box(int);
    Box();
    void show();
};

Box::Box(int w, int h, int d)
{
    width = w; height = h; depth = d;
}

Box::Box(int w, int h)
    : width(w), height(h), depth(0)
{ }

Box::Box(int w) : Box(w, 0, 0)
{ }

Box::Box() { }

void Box::show()
{
    if (height == width && width == depth) cout << "Cube\t : " << width;
    else if (!height) cout << "Line\t : " << width;
    else if (!depth) cout << "Quad\t : " << width << ", " << height;
    else            cout << "Box\t : " << width << ", " << height << ", " << depth;
}

int main()
{
    Box box(10, 20, 30);
    Box quad(50, 50);
    Box line(20);
    Box cube;

    box.show(); cout << endl;
    quad.show(); cout << endl;
    line.show(); cout << endl;
    cube.show(); cout << endl;
}