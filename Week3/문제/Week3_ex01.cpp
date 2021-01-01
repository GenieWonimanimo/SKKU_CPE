#include <iostream>
using namespace std;

int main(void)
{
	int option;
	double krw;
	cout << "Choose Country" << endl;
	cout << "(1) USA  (2) FRANCE : "; cin >> option;
	cout << "KRW : "; cin >> krw;
	switch(option)
	{
		case 1:
			cout << krw / 1184.11 << " $" << endl;
			cout << "Good luck in USA";
			break;
		case 2:
			cout << krw / 1310.11 << " EUR" << endl;
			cout << "Good luck in FRANCE";
	}
	return 0;
}