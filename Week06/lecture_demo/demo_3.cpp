#include <iostream>
using namespace std;


//only from c++11
// g++ -std=c++98 ... show an error or a warning
struct Data
{
    int month = 12;
    int day = 31; // 디폴드 값을 설정 안해준 것은 쓰레기 값으로 초기화
    int year = 2001;
};

int main(void)
{
    Data dueDate;
    //Data dueDate = {12, 31, 2001};
    //Data dueDate = {12, 31}; // 설정 안해준 것은 0 으로 초기화
    //Data dueDate = {}; // 모두 0으로 초기화
    cout << dueDate.month << endl;
    cout << dueDate.day << endl;
    cout << dueDate.year << endl;
}