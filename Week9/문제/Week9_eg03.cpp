#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	unsigned age;
	Person(string name, unsigned age)
		: name(name), age(age) { }
	void printInfo()
	{
		cout << "name: " << name << "\n";
		cout << "age: " << age << endl;
	}
	void addAge() {age++;}
};

class Student : public Person
{
public:
	unsigned studentId;
	Student(string name, unsigned age, unsigned studentId)
        : Person(name, age), studentId(studentId) { }
    void printInfo()
    {
        Person::printInfo();
        cout << "studentID: " << studentId << endl;
    }
};

int main(void)
{
    Person("Billie", 17).printInfo();
    cout << endl;

    Student two("Billie", 17, 2019111222);
    two.addAge();
    two.printInfo();
    cout << endl;

    Student three("Billie", 17, 2019111222);
    three.Person::printInfo();
    cout << endl;

    Student four = Student("Billie", 17, 2019111222);
    four.printInfo();
}