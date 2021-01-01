#include <iostream>
using namespace std;

class Box
{
public:
    int width;
    int height;
    int* depth;

public:
    Box(int, int, int);
    Box(const Box& other);
    void show();
};

Box::Box(int w, int h, int d)
{
    width = w;
    height = h;
    depth = new int;
    *depth = d;
}

Box::Box(const Box &other)
{
    this->width = other.width;
    this->height = other.height;
    // shallow
    //this->depth = other.depth;
    // deep
    this->depth = new int;
    *(this->depth) = *(other.depth);
}

void Box::show()
{
    cout << "Box\t : " << width << ", " << height << ", " << *depth;
}

int main()
{
    Box box1(10, 20, 30);
    Box box2 = box1;
    *(box1.depth) = 40;
    cout << "Box1 : "; box1.show(); cout << endl;
    cout << "Box2 : "; box2.show(); cout << endl;
}