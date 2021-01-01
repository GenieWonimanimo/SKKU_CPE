#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    string name;
    int* age;
    bool adult;
public:
    person();
    person(const person& other);
    void setName(string n);
    string getName();
    void setAge(int a);
    bool isAdult();
    ~person();
};

person::person()
    : name(""), age(nullptr), adult(false)
{ }

person::person(const person& other)
    : name(other.name), age(other.age), adult(other.adult)
{ }

void person::setName(string n) {name = n;}
string person::getName() {return name;}
void person::setAge(int a)
{
    age = new int;
    *age = a;
}
bool person::isAdult()
{
    adult = (*age > 19);
    return adult;
}
person::~person() {delete age;}

int main(void)
{
    person defaultP, newP;

    string name; int age;
    cout << "Name : "; getline(cin, name);
    cout << "Age : "; cin >> age;

    defaultP.setName(name); defaultP.setAge(age);
    newP = defaultP;

    if (newP.isAdult())
        cout << newP.getName() << " is adult" << endl;
    else
        cout << newP.getName() << " is kid" << endl;
    return 0;
}