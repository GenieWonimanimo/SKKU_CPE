#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int ID;
    string name;
    string major;
};

void show(Student s)
{
    cout << "ID: " << s.ID << endl;
    cout << "Name: " << s.name << endl;
    cout << "Major: " << s.major;
}

int main(void)
{
    Student std = {2020123456, "Hong Gil Dong", "Software"};
    show (std);
    return 0;
}