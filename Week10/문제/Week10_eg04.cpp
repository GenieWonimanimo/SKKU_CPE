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

class BankAccount : public Account
{
private:
    int balance;
    static const string sp_str;
    static const string num_str;
public:
    BankAccount();
    bool set_passwd(string arg);
    bool withdraw(int arg);
    bool deposit(int arg);
};
const string BankAccount::sp_str = "!@#$";
const string BankAccount::num_str = "1234567890";
BankAccount::BankAccount() : Account(), balance(0) {}
bool BankAccount::set_passwd(string arg)
{
    bool flag = false;
    int len = arg.length();
    if (len < 8 || len > 20)
        return false;
    
    for (auto c : sp_str)
    {
        if (arg.find(c) != string::npos)
        {
            flag = true;
            break;
        }
    }
    if (!flag)
        return false;
    
    flag = false;
    for (auto c : num_str)
    {
        if (arg.find(c) != string::npos)
        {
            flag = true;
            break;
        }
    }
    if (!flag)
        return false;
    
    Account::set_passwd(arg);
    return true;
}

bool BankAccount::withdraw(int arg)
{
    if (arg < 0 || balance < arg)
        return false;
    balance -= arg;
    return true;
}

bool BankAccount::deposit(int arg)
{
    if (arg < 0)
        return false;
    balance += arg;
    return true;
}
int main(void)
{
    BankAccount a;
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