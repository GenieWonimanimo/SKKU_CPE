#include <iostream>

using namespace std;

int main(void)
{
	// 초기화하는 것의 type 에 따라 자동으로 type을 지정해준다.
	auto x = 10;
	auto y = "Ten";
	
	cout << x << " is " << y <<endl;
	return 0;
}
