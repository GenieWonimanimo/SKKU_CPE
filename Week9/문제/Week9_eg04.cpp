#include <iostream>
using namespace std;

class SuperSuperClass
{
public:
	SuperSuperClass() {cout << "SuperSuperClass Constructor" << endl;}
    ~SuperSuperClass() {cout << "SuperSuperClass Destructor" << endl;}
};

class SuperClass : public SuperSuperClass
{
public:
	SuperClass() {cout << "SuperClass Constructor" << endl;}
    ~SuperClass() {cout << "SuperClass Destructor" << endl;}
};


class MyClass : public SuperClass
{
public:
	MyClass() {cout << "MyClass Constructor" << endl;}
    ~MyClass() {cout << "MyClass Destructor" << endl;}
};

int main(void)
{
    MyClass myObject;
}