#include <iostream>
using namespace std;

/*
override Ű���� -> �̰��� �������̵� �� �Լ����� Ȯ���ϴ� �뵵.
final Ű���� -> �� �̻� ����Ŭ�������� �������̵� ���� �ʰڴ�.
*/


class Pet
{
public:
    string name;
    virtual void print() const;
};

void Pet::print() const
{
    cout << "name: " << name << endl;
}
class Dog : public Pet
{
public:
    string breed;
    void print() const override;
};

void Dog::print() const
{
    cout << "name: " << name << endl;
    cout << "breed: " << breed << endl;
}

class MyDog : public Dog
{
public:
    string address;
    void print() const override;
    /* ���� �������̵� �ߴٰ� ǥ���ϱ� ���Ͽ� override Ű���带 �߰��ϴ� ���ε� �׷��� �����Ƿ� ����.
    void printAddr() const override
    {
        cout << address << endl;
    }
    */
};

void MyDog::print() const
{
    Dog::print();
    cout << "address: " << address << endl;
}

int main(void)
{
    MyDog myDog;

    myDog.name = "Tiny";
    myDog.breed = "Great Dane";
    myDog.address = "2066";
    myDog.print();
    return 0;
}