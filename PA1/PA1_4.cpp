#include <iostream>
#include <cstring>

using namespace std;

/**
 * Translate English to Arablish.
 *
 * @param text is a 100 sized char array that contains English sentense.
 */
void translate(char* text) {
    int textLen = strlen(text);
	for (int i = 0; i < textLen / 2; i++)
		swap( text[i], text[textLen - (i + 1)] );

    int numCnt = 0;
    for (int i = 0; i < textLen; i++)
    {
        if (text[i] >= '0' && text[i] <= '9')
            numCnt++;
        else
        {
            for (int j = 0; j < numCnt / 2; j++)
                swap( text[i - numCnt + j], text[i - (j + 1)] );
            numCnt = 0;
        }
    }
    if (numCnt != 0)
        for (int j = 0; j < numCnt / 2; j++)
            swap( text[textLen - numCnt + j], text[textLen - (j + 1)] );
}


int main(void)
{
    char text[100];
    cin.getline(text, 100);

    translate(text);

    cout << text << endl;
}