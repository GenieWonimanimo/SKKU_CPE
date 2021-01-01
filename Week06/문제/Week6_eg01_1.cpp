#include <iostream>
#include <string>
using namespace std;
struct User
{
    string ID;
    string password;
};

int main(void)
{
    User user = { "Dr.Octopus", "skku" };
    cout << "ID: " << user.ID << endl;
    cout << "PASS: " << user.password << endl;
    User* pUser = &user;
    cout << "ID: " << pUser->ID << endl;
    cout << "PASS: " << pUser->password << endl;
    return 0;
}