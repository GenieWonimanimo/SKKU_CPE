#include <iostream>

using namespace std;

int main(void)
{
	size_t int_size = sizeof(int);
	size_t double_size = sizeof(double);
	size_t float_size = sizeof(float);
	
	cout << int_size << " " << double_size << " " << float_size << endl;	
}
