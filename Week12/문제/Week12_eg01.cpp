#include <iostream>
using namespace std;

class Animal
{
public:
    Animal() {cout << "Animal" << endl;}
    ~Animal() {cout << "~Animal" << endl;}
    //virtual ~Animal() {cout << "~Animal" << endl;}
};

class Dog : public Animal
{
public:
    Dog() {cout << "Dog" << endl;}
    ~Dog() {cout << "~Dog" << endl;}
};

int main(void)
{
    Animal* dog = new Dog();
    delete dog;
    return 0;
}