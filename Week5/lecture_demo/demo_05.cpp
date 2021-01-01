#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string phrase;
    string adjective("fried"), noun("ants");
    string newWord(adjective + " " + noun);

    string wish = "Bon appetite!";

    phrase = "I love " + newWord + "!";
    cout << phrase << endl << wish << endl;
    phrase = "I love " + adjective + " " + noun + "!";
    cout << phrase << endl << wish << endl;
    return 0;
}