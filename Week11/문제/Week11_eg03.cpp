#include <iostream>
using namespace std;

class Person
{
public:
    Person() {}
    virtual ~Person() {}
    virtual void Action() = 0; // pure virtual function
};

class Student : public Person
{
public:
    Student() {}
    ~Student() {}
    void Action()
    {
        cout << "Student" << endl;
    }
};

class Professor : public Person
{
public:
    Professor() {}
    ~Professor() {}
    void Action()
    {
        cout << "Professor" << endl;
    }
};

int main(void)
{
    Student* student = new Student();
    Professor* professor = new Professor();

    student->Action();
    professor->Action();

    delete student;
    delete professor;
    return 0;
}