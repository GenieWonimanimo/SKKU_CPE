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

class SecureAccount : public Account
{
private:
    static const string sp_str;
public:
    SecureAccount();
    bool set_passwd(string arg);
};
const string SecureAccount::sp_str = "!@#$";
SecureAccount::SecureAccount() : Account() {}
bool SecureAccount::set_passwd(string arg)
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
    
    Account::set_passwd(arg);
    return true;
}

class NeverAccount : public SecureAccount
{
private:
    string email;
    static char at;
    static char point;
public:
    bool set_email(string arg);
    string get_email();
};
char NeverAccount::at = '@';
char NeverAccount::point = '.';

bool NeverAccount::set_email(string arg)
{
    bool flag = false;
    int atPos = arg.find(at);
    int pointPos = arg.find(point);

    if (atPos == string::npos || pointPos == string::npos)
        return false;
    else
        if (atPos < pointPos)
        {
            email = arg;
            return true;
        }
        else return false;
}
string NeverAccount::get_email()
{
    return email;
}

int main(void)
{
    NeverAccount a;
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
    do
    {
        cout << "please enter user email : ";
        cin >> input;
    } while (!a.set_email(input));
    

    cout << "id : " << a.get_id() << endl;
    cout << "password : " << a.get_passwd() << endl;
    cout << "email : " << a.get_email() << endl;

    return 0;
}