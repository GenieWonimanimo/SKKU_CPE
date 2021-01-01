#include <iostream>
using namespace std;

class complex{
public:
    complex() : r(0), i(0){}
    complex(int a, int b): r(a), i(b){}
    ~complex(){}
    friend const complex operator +(const complex& c1, const complex& c2);
    friend const complex operator -(const complex& c1, const complex& c2);
    friend const bool operator ==(const complex& c1, const complex& c2);
    friend const bool operator !=(const complex& c1, const complex& c2);
    friend const complex operator -(const complex& c1);
    friend ostream& operator <<(ostream& os, complex& c);
private:
	int r, i;
};

const complex operator +(const complex& c1, const complex& c2) {
	return complex(c1.r+c2.r, c1.i+c2.i); }

const bool operator ==(const complex& c1, const complex& c2) {
	return (c1.r==c2.r&&c1.i==c2.i); }

const bool operator !=(const complex& c1, const complex& c2) {
	return (c1.r!=c2.r||c1.i!=c2.i); }

const complex operator -(const complex& c1, const complex& c2) {
	return complex(c1.r-c2.r, c1.i-c2.i); }

const complex operator -(const complex& c1) {
	return complex(-c1.r, -c1.i); }

ostream& operator <<(ostream& os, complex& c) {
	return os<<c.r<<(c.i>=0?"+":"")<<c.i<<"i"; }

int main()
{
    complex c1(1, -2), c2(2, 1), c3;
    cout<<"c1: "<<c1<<endl;
    cout<<"c2: "<<c2<<endl;
    c3 = c1-c2;
    cout<<"c3: "<<c3<<endl;
    c3 = c1+c2;
    cout<<"c3: "<<c3<<endl;
    cout<<(c1==c2?"c1==c2":"c1!=c2")<<endl;
    c1 = c2;
    cout<<(c1!=c2?"c1!=c2":"c1==c2")<<endl;
    return 0;
}
