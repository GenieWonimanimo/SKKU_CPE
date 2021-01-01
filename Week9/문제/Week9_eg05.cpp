#include <iostream>
#include <string>
using namespace std;

class CitizenID
{
private:
    unsigned IDNum;
protected:
    string name;
public:
    CitizenID(unsigned IDNum, string name) : IDNum(IDNum), name(name) {}
    void showIDNum()
    {
        cout << "ID number: " << IDNum << endl;
    }
};

class DrivingLicense : public CitizenID
{
protected:
    unsigned licenseNum;
public:
    DrivingLicense(unsigned IDNum, string name, unsigned licenseNum)
        : CitizenID(IDNum, name), licenseNum(licenseNum)
    { }
    void showLicense()
    {
        cout << "name: " << name << endl;
        cout << "license number: " << licenseNum << endl;
    }
};

int main(void)
{
    DrivingLicense myLicense(1969123, "Joey", 12345);
    myLicense.showIDNum();
    myLicense.showLicense();
    return 0;
}