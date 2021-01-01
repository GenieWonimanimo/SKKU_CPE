#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	string name;
	unsigned age; // unsigned is same with unsigned int
private:
	int hidden;
};
 
class Student: public Person {
public:
	unsigned studentId;
};

int main() {
    Student s;
    s.name = "Billie";
    s.age = 17;
    s.studentId = 2019111222;
	cout << s.name << endl;
	cout << s.age << endl;
	cout << s.studentId << endl;
}
