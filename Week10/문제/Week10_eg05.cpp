#include <iostream>
#include <string>

using namespace std;

class Account {
private:
  string id;
  string password;

public:
  Account();
  bool   set_id(string arg);
  string get_id();
  bool   set_passwd(string arg);
  string get_passwd();
};

class BankAccount : public Account {
private:
  static const string sp_str;
  static const string num_str;

  int balance;

public:
  BankAccount();
  // This seems weird at this time,
  // After learning 'virtual', it'll get better
  bool set_passwd(string arg);
  int  get_balance();
  bool withdraw(int arg);
  bool deposit(int arg);

};

class Bank {
public:
  static bool transfer(BankAccount &sender, BankAccount &reciever, int amount);
};

Account::Account() :  id(""), password("") {}

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

BankAccount::BankAccount() :  Account(), balance(0) {}

const string BankAccount::sp_str = "!@#$";
const string BankAccount::num_str = "1234567890";

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

  flag = true;
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

int BankAccount::get_balance()
{
  return balance;
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

bool Bank::transfer(BankAccount &sender, BankAccount &reciever, int amount)
{
  if (amount < 0)
    return false;
  if (!sender.withdraw(amount))
    return false;
  reciever.deposit(amount);

  return true;
}

int main()
{
  BankAccount a, b;

  a.deposit(1000);
  b.deposit(5);

  cout << "a's balance : " << a.get_balance() << endl;
  cout << "b's balance : " << b.get_balance() << endl;

  Bank::transfer(a, b, 100);

  cout << "a's balance : " << a.get_balance() << endl;
  cout << "b's balance : " << b.get_balance() << endl;

  return 0;
}
