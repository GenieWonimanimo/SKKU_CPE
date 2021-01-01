#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void)
{
    stack<char, vector<char>> s; // we change the default container from deque to vector
    char next; cin.get(next);
    while (next != '\n')
    {
        s.push(next); cin.get(next);
    }
    while (!s.empty())
    {
        cout << s.top(); s.pop(); // pop just pop, not return val
    }
    cout << endl;

    // Stack has no iterator
    //auto it = s.begin();
    //cout << *it << endl;
    return 0;
}