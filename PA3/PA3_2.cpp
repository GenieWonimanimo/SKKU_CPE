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
    string* names2;
    int num_names1 = 0;
    int num_names2 = 0;
    cin >> num_names1;
    cin >> num_names2;
    names2 = new string[num_names2];
    for (int i = 0; i < num_names1; i++)
    {
        string name;
        cin >> name;
        pq.push(name);
    }
    for (int i = 0; i < num_names2; i++)
        cin >> names2[i];

    for (int i = 0; i < num_names1; i++)
    {
        string control, comparison;
        control = pq.top(); pq.pop();
        comparison = pq.top();
        // skip same in pq
        while (control == comparison && !pq.empty()) 
        {
            pq.pop();
            comparison = pq.top();
            i++;
        }

        for (int j = 0; j < num_names2; j++)
        {
            if (control == names2[j])
            {
                cout << control << endl;
                break;
            }
        }
    }

    return 0;
}