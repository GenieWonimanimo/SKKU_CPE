#include <iostream>
#include <string>
using namespace std;
class Account
{
public:
    string id;
    string passwd;
    virtual void printInfo() const
    {
        cout << "ID: " << id << "\nPASS: " << passwd << endl;
    }
};

class NeverAccount : public Account
{
public:
    string email;
    void printInfo() const
    {
        Account::printInfo();
        cout << "Email: " << email << endl;
    }
};

int main(void)
{
    NeverAccount* nac = new NeverAccount();
    nac->id = "ckjung";
    nac->passwd = "hick777";
    nac->email = "ckjung@gmail.com";

    Account* ac = nac;
    ac->printInfo();
    return 0;
}