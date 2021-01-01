#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    list<int> listObject;
    for (int i = 1; i <= 3; i++)
        listObject.push_back(i);

    cout << "List contains:\n";
    list<int>::iterator iter;
    for (iter = listObject.begin(); iter != listObject.end(); iter++)
        cout << *iter << " ";
    cout << endl;


    // Random access is not defined
    //iter = listObject.begin();
    //cout << iter[2] << endl;
    //cout << listObject[2] << endl;
    return 0;
}