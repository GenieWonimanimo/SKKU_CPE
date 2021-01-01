#include <iostream>
#include <string>
using namespace std;

class MyWordMani
{
private:
    string str;
    string orig;
public:
    string getWord() const { return str; }
    void setWord(string str)
    {
        this->str = str;
        orig = str;
    }
    void printWord()
    {
        cout << str << endl;
    }
    void sortWord();
    void reverseWord();
    int countChar(char);
    int removeChar(char);
    void reset() {str = orig;}
};

void swap(string& s, int src, int dst)
{
    char tmp = s.at(src);
    s.at(src) = s.at(dst);
    s.at(dst) = tmp;
}

void MyWordMani::sortWord()
{
    for (int i = 0; i < str.length(); i++)
    {
        int minIndex = i;
        for (int j = i; j < str.length(); j++)
        {
            if (str[j] < str[minIndex])
                minIndex = j;
        }
        swap(str, i, minIndex);
    }
}

void MyWordMani::reverseWord()
{
    // reverse(str.begin(), str.end());
    
    string tmp;
    for (int i = str.length() - 1; i >= 0; i--)
        tmp.push_back( str.at(i) );
    
    str = tmp;
}

int MyWordMani::countChar(char  c)
{
    int count = 0;
    for (char ch : str)
    {
        if (c == ch)
        count++;
    }
    return count;
}

int MyWordMani::removeChar(char c)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (c == str.at(i))
        {
            str.erase(i, 1);
            count++;
        }
    }
    return count;
}

int main(void)
{
    MyWordMani mwm;
    mwm.setWord("pneumonoultramicroscopicsilicovolcanoconoiosis");
    cout << mwm.getWord() << endl;
    mwm.printWord();

    mwm.sortWord();
    cout << mwm.getWord() << endl;
    mwm.reverseWord();
    cout << mwm.getWord() << endl;

    cout << mwm.countChar('a') << endl;
    cout << mwm.removeChar('c') << endl;
    cout << mwm.getWord() << endl;

    return 0;
}