#include <iostream>
using namespace std;

int main(void)
{
	// NORMAL STRING 
	string s1 = "(\t\\t\n)"; // "내용"
	
	// RAW STRING
	string s2 = R"(\t\\t\n)"; // R"(내용)"
	
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s2[1] << endl;
	return 0;
}
