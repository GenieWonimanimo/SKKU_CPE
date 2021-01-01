#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
public:
    Person() : name("Jonn Dae") { }
    Person(string name) : name(name) { }
    string& getName() {return name;} // return the reference of private member is dangerous
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
    void setSId(int sid) {this->sid = sid;}
    int getSid() const {return sid;}
    void setName(string name);
    void printInfo();
};

void Student::setName(string name)
{
    Person::setName(name + "(Student)");   
}

void Student::printInfo()
{
    cout << "Name:\t" << getName() << endl;
    cout << "Student ID: " << sid << endl;
}

int main(void)
{
    Student kim;
    kim.setName("Park");
    kim.setSId(2020314315);
    kim.printInfo();
    return 0;
}