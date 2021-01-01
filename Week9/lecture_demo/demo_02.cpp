#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
public:
    Person() : name("not set") { }
    Person(string name) : name(name) { }
    string getName(string name) const {return name;}
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
    kim.setName("Kim");
    kim.setSid(100);
    kim.printInfo();
    return 0;
}

