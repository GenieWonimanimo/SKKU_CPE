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
    cout << ptr << endl; // free 후에도 여전히 같은 메모리 공간을 가리킨다.
    *ptr = 2;
    cout << *ptr << endl; 
    /* free 를 했지만 여전히 해당 메모리 공간을 가리키기 때문에
    값을 저장하기 위한 공간으로 쓸 수는 있다.
    그러나 해당 공간은 free 가 된 공간이기 때문에 다른 변수가 후에
    다시 할당받을 수도 있는 공간이기 때문에
    사고를 방지하기 위한 대처가 필요하다. */    
    ptr = NULL; // 따라서 NULL 로 값을 바꿔줄 필요가 있다.
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