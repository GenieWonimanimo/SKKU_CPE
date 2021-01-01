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

class company
{
private:
    string name;
    static bool operating;
    int numCustomer = 0;
public:
    company(string);
    void showCompanyStatus() const;
    static void onoffOperating(char);
    static bool isOperating();
    void signUp(person);
};

bool company::operating = true;

company::company(string name) : name(name) { }

void company::showCompanyStatus() const
{
    cout << numCustomer << " member(s) signed up in " << name << ".";
}

void company::onoffOperating(char is_on)
{
    operating = (is_on != 'N' && is_on != 'n');
}

bool company::isOperating() {return operating;}

void company::signUp(person newP)
{
    if (newP.isAdult())
    {
        cout << "Signed up." << endl;
        numCustomer++;
    }
    else
        cout << newP.getName() << " is not adult. Cannot sign up." << endl;
}

int main(void)
{
    cout << "Enter company name." << endl; string company_name;
    cin >> company_name; company a(company_name);
    cout << endl;
    while (company::isOperating())
    {
        cout << "Enter your name and age." << endl;
        string name; int age;
        cin >> name >> age;
        person customer(name, age);
        a.signUp(customer);
        cout << "Is it still operating time?" << endl;
        char ans; cin >> ans;
            a.onoffOperating(ans);
        cout << endl;
    }
    cout << "Operating hours are over. ";
        a.showCompanyStatus();
    return 0;
}