#include <iostream>
#include <string>
using namespace std;

class User
{
public:
    string ID;
    string password;
    void welcome();
};

void User::welcome()
{
    cout << "Welcome, " << ID << endl;
    cout << "Password: " << this->password << endl;
}

int main(void)
{
    User user = {"Dr.Octopus", "skku"};
    user.welcome();
}