#include <iostream>
using namespace std;
class Rectangle
{
public:
    virtual void printInfo() {cout << "Rectangle" << endl;}
};
class Square : public Rectangle
{
public:
    virtual void printInfo() override {cout << "Square" << endl;}
};

int main(void)
{
    Square* sq = new Square();
    Rectangle* rec = sq;
    rec->printInfo();
    sq->printInfo();
    return 0;
}