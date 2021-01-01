#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int id = 0;
    static int count;
    Person()
    {
        // cout << "in Person()" << endl;
        id = count++;
    }
    Person(string name) : name(name)
    {
        // cout << "in Person(string name)" << endl;
        id = count++;
    }
    Person(const Person& p)
    {
        // cout << "in Person(const Person&)" << endl;
        id = count++;
        name = p.name;
    }
    ~Person()
    {
        cout << "in ~Person() " << name << "(" << id << ")" << endl;
    }
};
int Person::count = 0;

int main(void)
{
    Person persons[10];
    /*
    for (Person p : persons) // copy constructor is called for each loop
        cout << p.name << endl;
    
    for (Person& p : persons) // solve above
    {
        cout << p.name << endl;
        cout << p.count << endl;
    }    
    */
    Person personA("Hoon");
    Person* personB = new Person("Young");
    delete personB;
    Person personC = personA;
    Person& personD = personA;
    return 0;
}