#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> container;

    for (int i = 1; i <= 4; i++)
        container.push_back(i);
    
    auto it = container.begin(); // better to use auto keyword
    //vector<int>::iterator it = container.begin(); // also can, but it is kind of burden
    for (; it != container.end(); it++)
        cout << *it << " ";
    cout << endl;

    // Setting the last item with zero
    // Why should we use --?
    //container[3] = 0;
    //cout << *(--it) << endl;
    *(--it) = 0; // before decrement, it is container.end()
    cout << *it << endl;

    // Setting the second item with ten
    // Why -2 is used here?
    //it[-2] = 10;
    it--;
    it--;
    *it = 10;
    cout << *it << endl;

    for (it = container.begin(); it != container.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}