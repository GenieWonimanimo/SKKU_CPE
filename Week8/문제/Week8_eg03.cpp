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
    void show();
    ~Box();
};

Box::Box(int w, int h, int d)
{
    width = w;
    height = h;
    depth = new int;
    *depth = d;
}

Box::~Box()
{
    delete(depth);
    cout << "Destructor is called!" << endl;
}

void Box::show()
{
    cout << width << ", " << height << ", " << *depth;
}

int main()
{
    Box box1(10, 20, 30);
    cout << "Box1 : "; box1.show(); cout << endl;
}