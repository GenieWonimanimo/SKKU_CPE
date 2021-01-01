#include <iostream>
#include <string>
#include <queue>
using namespace std;

typedef struct _compare
{
    bool operator() (const string& str1, const string& str2) // str2 has higher priority, return true
    {
        return (str1.compare(str2) > 0);
    }
} compare;

int main(void)
{
    priority_queue<string, vector<string>, compare> pq;
    int num_names = 0;
    cin >> num_names;
    for (int i = 0; i < num_names; i++)
    {
        string name;
        cin >> name;
        pq.push(name);
    }

    for (int i = 0; i < num_names; i++)
    {
        string control, comparison;
        int hist = 1;
        control = pq.top(); pq.pop();
        comparison = pq.top();
        while (control == comparison && !pq.empty())
        {
            pq.pop();
            comparison = pq.top();
            hist++;
            i++;
        }
        cout << control << " : " << hist << endl;
    }

    return 0;
}