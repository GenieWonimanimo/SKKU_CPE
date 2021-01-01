#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s1 = "hello";
    string s2 = "world";

    // we cna concatente by just +
    // compare it with strcat from c
    string s3 = s1 + " " + s2;
    cout << s3 << endl;
    cout << "s3 length : " << s3.length() << endl;

    // we can copare string by just ==
    // remember strcmp from c?
    if (s1 == "hello")
        cout << "SAME!" << endl;
    
    // find with find method
    if (s3.find("world") != std::string::npos) 
    // find �� world �� ó�� ������ �κ��� �������� �˷��ְ� ã�� ���ϸ� string::npos �� ��ȯ
        cout << "world is in s3" << endl;
    return 0;
}