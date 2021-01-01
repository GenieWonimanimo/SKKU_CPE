#include <iostream>

using namespace std;

int main()
{
    double doNotUse; //Do not use this variable in your source code. ----> This will be covered later...
    double* p_input = &doNotUse; //Use 'p_input' variable instead of 'doNotUse' varaible.

    auto hour = 0; // int
    decltype(hour) min; // int
    double sec;
    double& refer_sec = sec;

    cout << "input time: ";
    cin >> *p_input;
    hour = *p_input / 3600; *p_input -= hour * 3600;
    min = *p_input / 60;
    sec = *p_input - (min * 60);


    cout << "it's " << hour << "h " << min << "m " << sec << "s." << endl;
    cout << "Reference Sec: " << refer_sec << endl;
    return 0;
}