#include <iostream>
using namespace std;

void foo()
{
    cout << "Global Function\n";
}

template <typename T>
class Cls1
{
private:
    T Var1;
public:
    void foo()
    {
        cout << "Member Function\n";
    }
};

template <typename T>
class Cls2 : public Cls1<T>
{
private:
    T Var2;
public:
    void test()
    {
        //foo(); // without global compiler cant find member function foo
        Cls1<T>::foo();
    }
};

int main(void)
{
    Cls2<int> cls2;
    cls2.test();
    return 0;
}