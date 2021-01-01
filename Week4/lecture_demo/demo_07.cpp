#include <iostream>
using namespace std;

inline int add(int a, int b) {return a + b;}
/* inline 함수를 쓰면 컴파일러가 함수의 몸체 부분으로 함수의 호출문을 대체해 준다.
주로 짧은 함수에 이용한다.*/
int main(void)
{
    cout << add(3, 5) << endl;
    return 0;
}