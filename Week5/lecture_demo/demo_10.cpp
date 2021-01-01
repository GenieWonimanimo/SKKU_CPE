#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{   
    string dogName;
    int actualAge;
    int humanAge;
    cout << "How many years old is your dog?";
    cin >> actualAge;
    humanAge = actualAge * 7;
    cout << "What is your dog's name?";

    // keyboard buffer 
    getline(cin, dogName);
    getline(cin, dogName);
    cout << dogName << "'s age is approxiamtely equivalent to a " <<
        humanAge << " year old human." << endl; 
    return 0;
}