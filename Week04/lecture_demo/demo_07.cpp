#include <iostream>
using namespace std;

inline int add(int a, int b) {return a + b;}
/* inline �Լ��� ���� �����Ϸ��� �Լ��� ��ü �κ����� �Լ��� ȣ�⹮�� ��ü�� �ش�.
�ַ� ª�� �Լ��� �̿��Ѵ�.*/
int main(void)
{
    cout << add(3, 5) << endl;
    return 0;
}