#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	unsigned age;
	void printInfo()
	{
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
	}
};

class Student : public Person
{
public:
	unsigned studentId;
	void printInfo()
	{
		Person::printInfo();
		cout << "studentID: " << studentId << endl;
		cout << name << " is a good student" << endl;
	}
};

int main(void)
{
	Student s;
	s.name = "Billie";
	s.age = 17;
	s.studentId = 2019111222;
	s.printInfo();
}