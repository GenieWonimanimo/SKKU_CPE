#include <iostream>
using namespace std;

char* reserve_num_from_int_to_char(int num)
{
	char* output = new char[100];
	int idx = 0;
	while (num > 0)
	{
		output[idx] = num % 10 + '0';
		num /= 10;
		idx++;
	}
	output[idx] = '\0';
	
	return output;
}

int main(void)
{
	int input;
	cout << "input : ";
	cin >> input;
	char* ret = reserve_num_from_int_to_char(input);
	cout << "output : " << ret << endl;
	delete []ret;
	
	return 0;
}