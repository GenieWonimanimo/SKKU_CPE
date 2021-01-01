#include <iostream>
using namespace std;

class Pet
{
public:
    string name;
    virtual void print() const;
    Pet() {}
    Pet(const Pet& pet)
    {
        cout << "in copy ctor(Pet)" << endl;
        name = pet.name;
    }
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
    Dog(const Dog& dog) : Pet(dog), breed(dog.breed)
    { 
        cout << "in copy ctor(Pet)" << endl;
    }
};

void Dog::print() const
{
    Pet::print();
    cout << "breed: " << breed << endl;
}

int main(void)
{
    Dog dog;
    dog.name = "Tiny";
    dog.breed = "Great Dane";

    //Pet pet;
    //pet = dog;
    Pet pet = dog;
    //dog = pet; error. pet is not a dog but dog is a pet.
    pet.print();
    return 0;
}