#include <iostream>
using namespace std;

class GrandParent
{
public:
    GrandParent() {cout << "in GrandParent()" << endl;}
    ~GrandParent() {cout << "in ~GrandParent()" << endl;}
};

class Parent : public GrandParent
{
public:
    Parent() {cout << "in Parent()" << endl;}
    ~Parent() {cout << "in ~Parent()" << endl;}
};

class Child : public Parent
{
public:
    Child() {cout << "in Child()" << endl;}
    ~Child() {cout << "in ~Child()" << endl;}
};

int main(void)
{
    //Parent parent;
    Child child;
    return 0;
}