#include <iostream>
using namespace std;
class Rectangle
{
public:
    void printInfo() {cout << "Rectangle" << endl;}
};
class Square : public Rectangle
{
public:
    void printInfo() {cout << "Square" << endl;}
};

int main(void)
{
    //Person* person = new Person(); -> error! class Person is abstract class
    Square* sq = new Square();
    Rectangle* rec = sq;
    rec->printInfo();
    sq->printInfo();
    return 0;
}