#include <iostream>
#include <string>
using namespace std;

class Coder
{
public:
    virtual string translate(string input) {return "";}
};

class Encoder : public Coder
{
public:
    virtual string translate(string input) override;
};

class Decoder : public Coder
{
public:
    virtual string translate(string input) override;
};

string Encoder::translate(string input)
{
    string encoded = "";
    for (int a : input)
    {
        encoded += (a / 16 + '0');
        int code = a % 16;
        if (code < 10)
            encoded += (code + '0');
        else
            encoded += ('a' + (code - 10));
    }
    return encoded;
}

string Decoder::translate(string input)
{
    string decoded = "";
    for (int i = 0; i < input.length(); i++)
    {
        int decode = 0;
        // 16^1
        if ('0' <= input[i] && input[i] <= '9')
            decode += ((input[i++] - '0') * 16);
        else // 'a' <= input[i] && input[i] <= 'z'
            decode += ((input[i++] - 'a' + 10) * 16);
        // 16^0
        if ('0' <= input[i] && input[i] <= '9')
            decode += (input[i] - '0');
        else // 'a' <= input[i] && input[i] <= 'z'
            decode += (input[i] - 'a' + 10);

        decoded += decode;
    }
    return decoded;
}

int main(void)
{
    Coder* encoder = new Encoder();
    Coder* decoder = new Decoder();

    string word;

    cout << "Please enter a word: ";
    cin >> word;

    string encoded = encoder->translate(word);
    cout << "Encoded: " << encoded << endl;

    string decoded = decoder->translate(encoded);
    cout << "Decoded: " << decoded << endl;

    return 0;
}