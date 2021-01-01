#include <iostream>
#include <string>

using namespace std;

#define STOCK_NUM 4
string stock_list[STOCK_NUM] = {"Apple", "Google", "Samsung", "Amazon"};

class BankAccount
{
private:
    string name;
    int age;
    int balance; // initial balance is 1
public:
    BankAccount(string n, int a);
    void printAccInfo();
    void deposit(int amount);
    bool withdraw(int amount);
};

class StockAccount : public BankAccount
{
private:
    int stock_nums[STOCK_NUM];

public:
    StockAccount(string n, int a);
    void buyStock(string stock_name, int num, int price);
    void sellStock(string stock_name, int num, int price);
    void printAccInfo();
};

BankAccount::BankAccount(string n, int a)
    : name(n), age(a), balance(1)
{ }

void BankAccount::deposit(int amount)
{
    balance += amount;
    cout << "Success. Balance: " << balance << endl;
}

bool BankAccount::withdraw(int amount)
{
    if (balance < amount)
    {
        cout << "Withdraw Failed!" << endl;
        return false;
    }
    balance -= amount;
    cout << "Success. Balance: " << balance << endl;
    return true;
}

void BankAccount::printAccInfo()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Balance: " << balance << endl;
}

StockAccount::StockAccount(string n, int a)
    : BankAccount(n, a)
{
    for (int i = 0; i < 4; i++)
        stock_nums[i] = 0;
}

void StockAccount::buyStock(string stock_name, int num, int price)
{
    int whatStock;
    for (whatStock = 0; whatStock < 4; whatStock++)
        if (stock_list[whatStock] == stock_name)
            break;

    if (whatStock >= 4)
    {
        cout << "Cannot find " << stock_name << " stock" << endl;
        return;
    }

    if (withdraw(price * num))
    {
        stock_nums[whatStock] += num;
        cout << "Success! Buy " << stock_list[whatStock] << " stock" << endl;
    }
    else
        cout << "Buy Failed" << endl;
}

void StockAccount::sellStock(string stock_name, int num, int price)
{
    int whatStock;
    for (whatStock = 0; whatStock < 4; whatStock++)
        if (stock_list[whatStock] == stock_name)
            break;
    if (whatStock >= 4)
    {
        cout << "Cannot find " << stock_name << " stock" << endl;
        return;
    }

    if (stock_nums[whatStock] >= num)
    {
        stock_nums[whatStock] -= num;
        deposit(price * num);
        cout << "Success! Sell " << stock_list[whatStock] << " stock" << endl;
    }
    else
        cout << "Sell Failed" << endl;    
}

void StockAccount::printAccInfo()
{
    BankAccount::printAccInfo();
    for (int i = 0; i < 4; i++)
        cout << stock_list[i] << " : " << stock_nums[i] << endl;
}

int main(void)
{
    StockAccount my_acc("HongGilDong", 24);
    int menu;
    do
    {
        cout << "=============Menu=============" << endl;
		cout << "1. Print Account Information" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Withdraw" << endl;
		cout << "4. Enter StockMode" << endl;
		cout << "5. END" << endl;
		cout << "==============================" << endl;
	
		cout << "Menu: ";
		cin >> menu;
		cout << "==============================" << endl;

        if (menu == 5)
            break;
        else if (menu > 5)
        {
            cout << "Wrong number!" << endl;
            continue;
        }
        else if (menu == 1)
            my_acc.BankAccount::printAccInfo();
        else if (menu == 2 || menu == 3)
        {
            int amount;
            cout << "Amount: ";
            cin >> amount;
            if (menu == 2)
                my_acc.deposit(amount);
            else
                my_acc.withdraw(amount);
        }
        else if (menu == 4)
        {
            int s_menu;
			cout << "=============Stock Menu=============" << endl;
			cout << "1. Print Stock Account Information" << endl;
			cout << "2. Buy" << endl;
			cout << "3. Sell" << endl;
			cout << "4. Back" << endl;
			cout << "====================================" << endl;
			
			cout << "Menu: ";
			cin >> s_menu;
			cout << "====================================" << endl;

            if (s_menu == 4)
                continue;
            else if (s_menu > 4)
            {
                cout << "Wrong Number" << endl;
                continue;
            }
            if (s_menu == 1)
                my_acc.printAccInfo();
            else if (s_menu == 2 || s_menu == 3)
            {
                string s_name;
                int s_num, s_price;
                cout << "Stock Name: ";
                cin >> s_name;
                cout << "Stock Num: ";
                cin >> s_num;
                cout << "Stock Price: ";
                cin >> s_price;

                if (s_menu == 2)
                    my_acc.buyStock(s_name, s_num, s_price);
                else
                    my_acc.sellStock(s_name, s_num, s_price);
            }
        }
    } while (true);
    
    return 0;
}

// 1 4 1 5
// 2 10000 4 2 Apple 100 1000 4 2 Samsung 100 100 4 1 4 3 Apple 10 1000 4 3 Samsung 100 500 4 1 3 10000 1 5
// 3 100 4 2 Intel 100 100  4 3 Intel 100 100 5