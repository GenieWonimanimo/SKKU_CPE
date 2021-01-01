#include <iostream>
using namespace std;

int main(void)
{
	int scores[] = { 84, 92, 76, 81, 56 };
	int max = -1;
	for (int score : scores)
		max = (score > max) ? score : max;
	cout << "The maximum score is " << max;
	return 0;
}