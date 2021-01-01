#include <iostream>
#include <string>
using namespace std;

class Obj
{
private:
    string name;
    static int count;
public:
    Obj():name("not set") {count++;}
    Obj(string name):name(name) {count++;}
    static void printCounter();
    void printInfo();
};

int Obj::count = 0;

void Obj::printInfo()
{
    cout << name << ": " << count << endl; 
}

void Obj::printCounter()
{
    cout << count << endl;
}

int main()
{
    Obj obj1("first");
    obj1.printCounter();
    obj1.printInfo();
    Obj obj2("second");
    obj2.printCounter();
    obj2.printInfo();

    Obj obj[10];
    obj1.printCounter();
    obj1.printInfo();
    obj2.printCounter();
    obj2.printInfo();
    return 0;
}
