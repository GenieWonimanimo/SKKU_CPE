#include <iostream>
using namespace std;

void getNumbers(int& input1, int& input2);
void swapValues(int& variable1, int& variable2);
void showResults(int output1, int output2);

int main(void)
{
    int firstNum, secondNum;
    getNumbers(firstNum, secondNum);
    cout << "입력 후" << endl;
    showResults(firstNum, secondNum);
    swapValues(firstNum, secondNum);
    cout << "swap 후" << endl;
    showResults(firstNum, secondNum);
    return 0;
}

void getNumbers(int& input1, int& input2)
{
    cout << "Enter two integers: ";
    cin >> input1 >> input2;
}


void swapValues(int& variable1, int& variable2)
{
    int tmp;
    tmp = variable1;
    variable1 = variable2;
    variable2 = tmp;
}
void showResults(int output1, int output2)
{
    cout << output1 << endl << output2 << endl;
}