#include <iostream>
using namespace std;

class Person
{
private:
    string name;
public:
    Person() : name("not set")
    {
        cout << "Person() ctor" << endl;
    }
    Person(string name) : name(name)
    {
        cout << "Person(name) ctor" << endl;
    }
    string getName() const {return name;}
    void setName(string name) {this->name = name;}
    void printInfo() const;
};

void Person::printInfo() const
{
    cout << "Name: " << name << endl;
}

class Student : public Person
{
private:
    int sid;
public:
    Student() : Person(), sid(0)
    {
        cout << "Student() ctor" << endl;
    }
    Student(int sid) : Person(), sid(sid)
    {
        cout << "Student(sid) ctor" << endl;
    }
    Student(string name, int sid) : Person(name), sid(sid)
    {
        cout << "Student(name, sid) ctor" << endl;
    }
    void setSid(int sid) {this->sid = sid;}
    int getSid() const {return sid;}
    void printInfo();
};

void Student::printInfo()
{
    Person::printInfo();
    cout << "Student ID: " << sid << endl;
}

int main(void)
{
    Student kim;
    kim.printInfo();

    Student lee(100);
    lee.printInfo();
    Student park("PSJ", 200);
    park.printInfo();
    
    return 0;
}