#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    string name;
    int age;
    bool adult;
public:
    person(string, int, bool);
    person(string, int);
    string getName();
    bool isAdult();
};

person::person(string name, int age, bool adult)
    : name(name), age(age), adult(adult)
{ }

person::person(string name, int age)
    : name(name), age(age)
{
    adult = (age > 19);
}

string person::getName() {return name;}
bool person::isAdult() {return adult;}

int main(void)
{
    person a("Tom", 35, true);
    person b("Daniel", 17);

    if (a.isAdult())
        cout << a.getName() << " is adult." << endl;
    else
        cout << a.getName() << " is not adult." << endl;

    if (b.isAdult())
        cout << b.getName() << " is adult." << endl;
    else
        cout << b.getName() << " is not adult." << endl;
    return 0;
}