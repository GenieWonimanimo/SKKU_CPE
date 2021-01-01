#include <iostream>
#include <string>
#include <queue>
using namespace std;

typedef struct
{
    string name;
    bool visited = false;
} Comp;

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
    Comp* comp;
    int num_names1 = 0;
    int num_names2 = 0;
    cin >> num_names1;
    cin >> num_names2;
    comp = new Comp[num_names2];
    for (int i = 0; i < num_names1; i++)
    {
        string name;
        cin >> name;
        pq.push(name);
    }
    for (int i = 0; i < num_names2; i++)
        cin >> comp[i].name;

    for (int i = 0; i < num_names1; i++)
    {
        string control = pq.top(); pq.pop();
        for (int j = 0; j < num_names2; j++)
        {
            if (control == comp[j].name && !comp[j].visited)
            {
                cout << control << endl;
                comp[j].visited = true;
                break;
            }
        }
    }

    return 0;
}