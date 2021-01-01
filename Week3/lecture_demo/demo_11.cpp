#include <iostream>
using namespace std;

int main(void)
{
#if 0 // C style
    int* ptr;
    cout << ptr << endl;
    ptr = (int*) malloc(sizeof(int) * 1);
    cout << ptr << endl;
    *ptr = 1;
    cout << *ptr << endl;

    if (ptr) free(ptr);
    cout << ptr << endl; // free �Ŀ��� ������ ���� �޸� ������ ����Ų��.
    *ptr = 2;
    cout << *ptr << endl; 
    /* free �� ������ ������ �ش� �޸� ������ ����Ű�� ������
    ���� �����ϱ� ���� �������� �� ���� �ִ�.
    �׷��� �ش� ������ free �� �� �����̱� ������ �ٸ� ������ �Ŀ�
    �ٽ� �Ҵ���� ���� �ִ� �����̱� ������
    ��� �����ϱ� ���� ��ó�� �ʿ��ϴ�. */    
    ptr = NULL; // ���� NULL �� ���� �ٲ��� �ʿ䰡 �ִ�.
#else // C++ style
    int *ptr = new int;
    *ptr = 1;
    cout << *ptr << endl;

    // guess results
    cout << ptr << endl;
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;

    if (ptr != nullptr) delete ptr;
    ptr = nullptr;
#endif

    return 0;
}