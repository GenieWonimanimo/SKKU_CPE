#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string id;
    string password;
public:
    Account() : id(""), password("") {}
    bool set_id(string arg);
    string get_id();
    bool set_passwd(string arg);
    string get_passwd();
};

bool Account::set_id(string arg)
{
    int len = arg.length();
    if (len < 4 || len > 10)
        return false;
    id = arg;
    return true;
}

string Account::get_id()
{
    return id;
}

bool Account::set_passwd(string arg)
{
    password = arg;
    return true;
}

string Account::get_passwd()
{
    return password;
}

int main(void)
{
    Account a;
    string input;

    do
    {
        cout << "please enter user id : ";
        cin >> input;
    } while(!a.set_id(input));

    do
    {
        cout << "please enter user password : ";
        cin >> input;
    } while (!a.set_passwd(input));
    
    cout << "id         : " << a.get_id() << endl;
    cout << "password   : " << a.get_passwd() << endl;
    return 0;
}