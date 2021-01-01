#include <iostream>
using namespace std;

class SuperClass {
private:
    int x;
protected:
    int y;
public:
    int z;
    SuperClass() : x(1), y(2), z(3) 
    {
		cout << x << " " << y << " " << z << " ";
    }
};

class MyClass : public SuperClass {
private:
    int y;
public:
    int z;
    MyClass() : SuperClass(), y(4), z(5) {}
    void print() 
    {
        cout << y << " " << z;
    }
};

int main() 
{
    MyClass my;
    my.print();
}