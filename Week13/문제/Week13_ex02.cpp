#include <iostream>
using namespace std;
const int INVALID = -9999;

template <typename T>
class array5
{
private:
    T arr[5];
public:
    bool set(int idx, T item);
    T get(int idx) const;
};
template <typename T>
bool array5<T>::set(int idx, T item)
{
    if (idx < 0 || idx > 4)
        return false;
    arr[idx] = item;
    return true;
}
template <typename T>
T array5<T>::get(int idx) const
{
    if (idx < 0 || idx > 4)
        return INVALID;
    return arr[idx];
}

template <typename T>
T array_sum(const array5<T>& theArr)
{
    T sum = 0;
    for (int i = 0; i < 5; i++)
    {
        T arr_i = theArr.get(i);
        sum += (arr_i != INVALID) ? arr_i : 0;
    }
    return sum;
}
template <typename T>
int array_cnt(const array5<T>& theArr)
{
    int cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        T arr_i = theArr.get(i);
        cnt += (arr_i != 0 && arr_i != INVALID) ? 1 : 0;
    }
    return cnt;
}
int main()
{ 
	int input;
	float input2;
	
	array5<int> int_arr; array5<float> float_arr;
	
	cout << "5 int for int_arr" << endl;
	for(int i=0;i<5;i++){
		cin >> input;
		int_arr.set(i,input);	
	}
	cout << "5 float for float_arr" << endl;
	for(int i=0;i<5;i++){
		cin >> input2;
		float_arr.set(i,input2);
	}
	
	cout << "int_arr sum: " << array_sum(int_arr) << endl;
	cout << "float_arr sum: " << array_sum(float_arr) << endl;

	cout << "The num of non-zero elt in int_arr: " << array_cnt(int_arr) << endl;
	cout << "The num of non-zero elt in float_arr: " << array_cnt(float_arr) << endl;

	return 0;
}