#include <iostream>
using namespace std;

/*
override 키워드 -> 이것이 오버라이드 된 함수인지 확인하는 용도.
final 키워드 -> 더 이상 유도클래스에서 오버라이드 하지 않겠다.
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
    /* 무언가 오버라이드 했다고 표시하기 위하여 override 키워드를 추가하는 것인데 그렇지 않으므로 에러.
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