#include <iostream>
using namespace std;

class Person
{
public:
    Person() {}
    virtual ~Person() {}
    virtual void Action() final {} // cannot override
    virtual void func(int nVal) {}
    int funcNormal(int nVal);
};

class Student : public Person
{
public:
    Student() {}
    ~Student() {}
    //void Action() {} // results in compiler error
    virtual void func(int nVal) override {}
    //virtual int func(float nVal) override; // error! trying to override a method that is not in Person
    //int funcNormal(int nVal) override; // override can only be applied to virtual methods
};