#include <iostream>
using namespace std;

int main(void)
{
    int src;
    int* p_src = nullptr;
    if (p_src == nullptr)
        cout << "p_src is nullptr" << endl;
    p_src = &src;
    cout << "input p_src: ";
    cin >> *p_src;
    cout << "src: " << src << endl;
    return 0;
}