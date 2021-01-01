#include <iostream>
using namespace std;

class Box
{
    int width, height, depth;
    static Box default_length;
public:
    Box();
    Box(int, int, int);
    void show();
    static void set_default(int, int, int);
};

Box::Box(int w, int h, int d)
{
    width = (w == 0) ? default_length.width : w;
    height = (h == 0) ? default_length.height : h;
    depth = (d == 0) ? default_length.depth : d;
}

Box::Box() : Box(0, 0, 0)
{ }

Box Box::default_length(10, 10, 10);

void Box::show()
{
    if (height == width && width == depth)
        cout << "Cube\t : " << width;
    else
        cout << "Box\t : " << width << ", " << height << ", " << depth;
}

void Box::set_default(int w, int h, int d)
{
    default_length = Box(w, h, d);
}

int main(void)
{
    Box box1; box1.show(); cout << endl;
    Box::set_default(20, 30, 10);
    Box box2; box2.show(); cout << endl;
}