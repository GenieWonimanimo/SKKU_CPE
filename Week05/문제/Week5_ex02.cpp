#include <iostream>
#include <string>

using namespace std;

string reverse_num_from_int_to_str(int num)
{
    string str = to_string(num);
    for (int i = 0; i < str.length() / 2; i++)
        swap(str[i], str[str.length() - (i + 1)]);
    return str;
}

int main(void)
{
    int input;
    string output;
    cin >> input;

    output = reverse_num_from_int_to_str(input);
    cout << output << endl;
    return 0;
}