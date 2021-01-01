#include <iostream>
#include <string>
using namespace std;

// implement 5 types of add function -- function name [add]
// Note that the first parameter will contain a return value.

void add(int& pref)
{
    int addN;
    cout << "First input : "; cin >> pref;
    cout << "Second input : "; cin >> addN;
    pref += addN;
}

void add(double& pref)
{
    double addN;
    cout << "First input : "; cin >> pref;
    cout << "Second input : "; cin >> addN;
    pref += addN;
}

void add(string& pref)
{
    string addStr;
    cout << "First input : "; getline(cin, pref); getline(cin, pref);
    cout << "Second input : "; getline(cin, addStr); getline(cin, addStr);
    pref += (" " + addStr);
}

void add(int pArr[], int len)
{
    cout << "First input : ";
    for (int i = 0; i < len; i++)
        cin >> pArr[i];
    
    cout << "Second input : ";
    for (int i = 0; i < len; i++)
    {
        int addN;
        cin >> addN;
        pArr[i] += addN;
    }
}

void add(double pArr[], int len)
{
    cout << "First input : ";
    for (int i = 0; i < len; i++)
        cin >> pArr[i];
    
    cout << "Second input : ";
    for (int i = 0; i < len; i++)
    {
        double addN;
        cin >> addN;
        pArr[i] += addN;
    }
}

int main(void)
{
    char n;
    cout << "Input type (i/d/s/I/D) : ";
    cin >> n;
    switch(n)
    {
        case 'i':
        {
            int output;
            add(output); cout << "Output : " << output << endl;
            break;
        }
        case 'd':
        {
            double output;
            add(output); cout << "Output : " << output << endl;
            break;
        }
        case 's':
        {
            string output;
            add(output); cout << "Output : " << output << endl;
            break;
        }
        case 'I':
        {
            int len; cout << "Array size : "; cin >> len;
            int output[len];
            add(output, len);
            cout << "Output : ";
            for (int i = 0; i < len; i++)
                cout << output[i] << " ";
            cout << endl;
            break;
        }
        case 'D':
        {
            int len; cout << "Array size : "; cin >> len;
            double output[len];
            add(output, len);
            cout << "Output : ";
            for (int i = 0; i < len; i++)
                cout << output[i] << " ";
            cout << endl;
            break;
        }
        default:
            break;
    }
    return 0;
}