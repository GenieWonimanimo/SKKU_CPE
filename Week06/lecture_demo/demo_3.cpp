#include <iostream>
using namespace std;


//only from c++11
// g++ -std=c++98 ... show an error or a warning
struct Data
{
    int month = 12;
    int day = 31; // ������ ���� ���� ������ ���� ������ ������ �ʱ�ȭ
    int year = 2001;
};

int main(void)
{
    Data dueDate;
    //Data dueDate = {12, 31, 2001};
    //Data dueDate = {12, 31}; // ���� ������ ���� 0 ���� �ʱ�ȭ
    //Data dueDate = {}; // ��� 0���� �ʱ�ȭ
    cout << dueDate.month << endl;
    cout << dueDate.day << endl;
    cout << dueDate.year << endl;
}