#include <iostream>
#include <cmath>
using namespace std;

struct CDAccountV1
{
    double balance;
    double interestRate;
    int term;
};

void printAccountInfo(CDAccountV1& myAccount)
{
    cout << "I have $" << myAccount.balance << " in my account." << endl;
    double rate = pow(1 + myAccount.interestRate, myAccount.term);
    myAccount.term = 5;
    cout << "After " << myAccount.term << " years it will become $" << myAccount.balance * rate << "." << endl;
    // what happens when we modify the value of myAccount's member var?
}

int main(void)
{
    CDAccountV1 acc;
    acc.balance = 2000;
    acc.interestRate = 0.02;
    acc.term = 3;
    printAccountInfo(acc);

    cout << acc.term << endl;
    return 0;
}
