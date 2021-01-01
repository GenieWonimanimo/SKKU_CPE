#include <iostream>
#include <string>
using namespace std;
class Cargo
{
private:
	double weigh;
public:
	Cargo(double n) : weigh(n) { }
	double GetWeigh() const { return weigh; }
};

class Apple : public Cargo
{
public:
	Apple() : Cargo(1.5) { }
};

class Kiwi : public Cargo
{
public:
	Kiwi() : Cargo(0.5) { }
};

class Truck 
{
private:
	double remain = 8;
public:
    void loadCargo(Cargo cargo)
{
	remain -= cargo.GetWeigh();
}
void printInfo() const
{
	cout << remain << " tons remaining" << endl;
}

};
int main() {
    Truck truck;
    truck.printInfo();

	truck.loadCargo(Apple());
	truck.printInfo();

	truck.loadCargo(Kiwi());
	truck.printInfo();
}