#include <iostream>
using namespace std;

class Pet
{
public:
    string name;
    virtual void print() const;
    Pet() {}
};

void Pet::print() const
{
    cout << "name: " << name << endl;
}

class Dog : public Pet
{
public:
    string breed;
    void print() const;
    Dog() {}
};

void Dog::print() const
{
    Pet::print();
    cout << "breed: " << breed << endl;
}

int main(void)
{
    Dog* dog;
    Pet* pet;
    dog = new Dog;

    dog->name = "Tiny";
    dog->breed = "Great Dane";
    pet = dog;
    // following line is illegal
    //cout << pet->breed << endl; // we cannot access directly
    pet->print();
    return 0;
}