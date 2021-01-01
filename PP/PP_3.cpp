#include <iostream>
#include <string>

using namespace std;



class Fraction
{
private:
    int N; // integer of mixed number form
    int D; // denominator
    int NU; // Numerator

public:
    void setFraction(int N, int D, int NU); // Initializer for Fraction class
    // define class functions here
    int GetN() const;
    int GetD() const;
    int GetNU() const;
    Fraction sum(Fraction b);
    Fraction sum(double b);
    Fraction multiply(Fraction b);
    Fraction multiply(double b);
    void abbreviation();
    bool toMixedNum();
    void print();
    double toDouble();
};
	

void Fraction::setFraction (int N, int D, int NU) {
  this->N = N;
  this->D = D;
  this->NU = NU;
}

int GCD(int a, int b)
{
    if(a == 0 || b == 0) return 0;
    int tmp;
    if (a < b)
        swap(a, b);
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

double Round(double num, int pos = 0)
{
    string snum = to_string(num);
    int decimalIdx = snum.find('.');

    if (decimalIdx == string::npos)
        return num;
    if (snum[decimalIdx + pos + 1] >= '5')
        snum[decimalIdx + pos] += 1;
    return stod(snum.substr(0, decimalIdx + pos + 1));
}

Fraction str2Fraction(string str)
{
    Fraction result;
    int idx1, idx2;
    idx1 = str.find('/');
    idx2 = str.find('/', idx1 + 1);
    int n = stoi(str.substr(0, idx1));
    int d = stoi(str.substr(idx2 + 1));
    int nu = stoi(str.substr(idx1 + 1, idx2 - idx1 - 1));
    result.setFraction(n, d, nu);
    result.toMixedNum(); result.abbreviation();
    
    return result;
}

Fraction double2Fraction(double val)
{
    Fraction result;
    int n = val;
    double underpoint = val - n;
    if(underpoint == 0)
    {
        result.setFraction(n, 0, 0);
        return result;
    }
    const int precision = 1000000000;
    // from now, underpoint != 0
    int gcd = GCD(Round(underpoint * precision), precision);

    int d = precision / gcd;
    int nu = Round(underpoint * precision) / gcd;
    result.setFraction(n, d, nu);
    result.toMixedNum(); result.abbreviation();
    return result;
}



int Fraction::GetN() const {return N;}
int Fraction::GetD() const {return D;}
int Fraction::GetNU() const {return NU;}

Fraction Fraction::sum(Fraction b)
{
    Fraction result;
    if(b.GetD() == 0) // is b int?
    {
        if(D == 0) // && b.GetD() == 0
            result.setFraction(N + b.GetN(), 0, 0);
        else // D != 0 && b.GetD() == 0
            result.setFraction(N + b.GetN(), D, NU);
    }
    else // b.GetD() != 0
    {
        if(D == 0) // && b.GetD() != 0
            result.setFraction(N + b.GetN(), b.GetD(), b.GetNU());
        else // D != 0 && b.GetD() != 0
            result.setFraction(N + b.GetN(), D * b.GetD(), NU * b.GetD() + b.GetNU() * D);            
    }
    result.toMixedNum();
    result.abbreviation();
    return result;
}

Fraction Fraction::sum(double b)
{
    return sum(double2Fraction(b));
}

Fraction Fraction::multiply(Fraction b)
{
    Fraction result;
    if(b.GetD() == 0) // is b int?
    {
        if(D == 0) // && b.GetD() == 0
            result.setFraction(N * b.GetN(), 0, 0);
        else // D != 0 && b.GetD() == 0
            result.setFraction(N * b.GetN(), D, NU * b.GetN());
    }
    else // b.GetD() != 0
    {
        if(D == 0) // && b.GetD() != 0
            result.setFraction(N * b.GetN(), b.GetD(), N * b.GetNU());
        else // D != 0 && b.GetD() != 0
            result.setFraction(0, D * b.GetD(), (NU + (N * D)) * (b.GetNU() + (b.GetN() * b.GetD())));
    }
    result.toMixedNum(); result.abbreviation();
    return result;
}

Fraction Fraction::multiply(double b)
{
    return multiply(double2Fraction(b));
}

void Fraction::abbreviation()
{
    if(NU != 0 && D != 0) 
    {
        int gcd = GCD(D, NU);
        D /= gcd;
        NU /= gcd;
    }
}

bool Fraction::toMixedNum()
{
    if(D == 0 || NU == 0)
    {
        D = 0;
        NU = 0;
        return false;
    }
    int tmp = N;
    N += (NU >= D) ? (NU / D) : 0;
    NU %=  D;
    if (NU == 0)
        D = 0;
    return (tmp != N);
}

void Fraction::print()
{
    cout << N << " and " << NU << "/" << D << endl;
}

double Fraction::toDouble()
{
    if (NU == 0 || D == 0)
        return N;
    return N + Round(double(NU) / D, 4);
}

int main() {
  string in_frac1;
  double in_frac2;
  cin >> in_frac1 >> in_frac2;

  Fraction frac1 = str2Fraction (in_frac1);
  Fraction frac2 = double2Fraction (in_frac2);

  frac1.print ();
  frac2.print ();
 
  Fraction frac3 = frac1.sum (frac1);			// frac1 + frac1
  frac3.print ();

  Fraction frac4 = frac1.sum (in_frac2);		// frac1 + frac2
  frac4.print ();

  Fraction frac5 = frac2.multiply (frac1);		// frac2 * frac1
  frac5.print ();

  Fraction frac6 = frac2.multiply (in_frac2);	// frac2 * frac2
  frac6.print ();

  double res = frac1.toDouble();
  printf ("%.6f\n", res);

  res = frac2.toDouble();
  printf ("%.6f\n", res);
  
  frac1.toMixedNum ();
  frac2.toMixedNum ();

  frac1.print ();
  frac2.print ();

  return 0;
}