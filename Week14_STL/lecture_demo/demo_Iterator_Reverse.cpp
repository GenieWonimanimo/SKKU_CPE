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

    cout << "Print in a reverse order.\n";
    // What happens with the below line
    //for (auto it = container.end(); it != container.begin(); it--) cout << *it << " "; // Wrong
    //for (auto it = container.end() - 1; it != container.begin() - 1; it--) cout << *it << " "; // ??
    for (vector<int>::reverse_iterator it = container.rbegin(); it != container.rend(); it++) cout << *it << " ";
    //for (auto it = container.rbegin(); it != container.rend(); it++) cout << *it << " ";
    cout << endl;

    vector<int>::iterator iter = container.begin();
    cout << *iter << endl;

    vector<int>::reverse_iterator rit = vector<int>::reverse_iterator(iter); // previous position iter pointed and reverse
    cout << *(iter - 1) << endl;
    cout << *(rit - 0) << endl;
    cout << *(rit - 1) << endl;
    cout << *(rit - 2) << endl;
    cout << *(rit - 3) << endl;
    cout << *(rit - 4) << endl;
    return 0;
}
