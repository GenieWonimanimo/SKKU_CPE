#include <iostream>
using namespace std;

template <typename T>
class Pair
{
private:
    T first;
    T second;
public:
    Pair() { };
    Pair(T firstVal, T secondVal);
    void setFirst(T newVal);
    void setSecond(T newVal);
    T getFirst() const {return first;}
    T getSecond() const {return second;}
    void print() const {cout << "(" << first << ", " << second << ")" << endl;}
};

template <typename T>
Pair<T>::Pair(T firstVal, T secondVal)
{
    first = firstVal;
    second = secondVal;
}

template <typename T>
void Pair<T>::setFirst(T newVal)
{
    first = newVal;
}
template <typename T>
void Pair<T>::setSecond(T newVal)
{
    second = newVal;
}

template <typename T>
T addUp(const Pair<T>& thePair)
{
    // precondition: Operator + is defined for values of type T
    // return sum of two values in thePair
    return thePair.getFirst() + thePair.getSecond();
}

template <typename T>
T diff(const Pair<T>& thePair)
{
    return thePair.getFirst() - thePair.getSecond();
}

#if 1
typedef Pair<int> PairOfInt;
#else
using PairOfInt = Pair<int>;
#endif

int main(void)
{
    PairOfInt score;

    score.setFirst(3);
    score.setSecond(0);

    score.print();

    cout << addUp(score) << endl;
    cout << diff(score) << endl;

    PairOfInt* tmp = new Pair<int>();
    
    tmp->setFirst(3);
    tmp->setSecond(0);

    tmp->print();

    cout << addUp(*tmp) << endl;
    cout << diff(*tmp) << endl;
    return 0;
}