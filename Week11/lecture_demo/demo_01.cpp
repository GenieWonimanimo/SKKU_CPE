#include <iostream>
using namespace std;

class Pet
{
public:
    string name;
    virtual void print() const;
};

class Dog : public Pet
{
public:
    string breed;
    void print() const;
};

void Pet::print() const
{
    cout << "name: " << name << endl;
}

void Dog::print() const
{
    cout << "name: " << name << endl;
    cout << "breed: " << breed << endl;
}

int main(void)
{
    Dog dog;

    dog.name = "Tiny";
    dog.breed = "Great Dane";
    dog.print();
    return 0;
}