#include <iostream>
using namespace std;

class GrandParent
{
protected:
    int age;
public:
    GrandParent() : age(1000) {cout << "in GrandParent()" << endl;}
    GrandParent(int age) : age(age) {cout << "in GrandParent(int age)" << endl;}
    void printAge() {cout << age << endl;}
    ~GrandParent() {cout << "in ~GrandParent()" << endl;}
};

class Parent : public GrandParent
{
public:
    Parent() {cout << "in Parent()" << endl;}
    Parent(int age)
    {
        this->age = age;
        cout << "in Parent(int age)" << endl;
    }
    ~Parent() {cout << "in ~Parent()" << endl;}
};

class Child : public Parent
{
public:
    Child() 
    {
        age = 0;
        cout << "in Child()" << endl;
    }
    ~Child() {cout << "in ~Child()" << endl;}
};

int main(void)
{
    //Parent parent;
    Child child;
    child.printAge();
    return 0;
}