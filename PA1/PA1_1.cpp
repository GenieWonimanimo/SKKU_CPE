#include <iostream>

using namespace std;

/**
 * @param array is an fixed size integer array. 
 *        It can be used as an input and also output.
 *        array contains 0 to 10.
 * @return size of output array
 */
int unique(int* array) {
	int size = 10;

	// TODO: make a unique array
	// TODO: pack the array to left the left side (rearrange the array)
	// TODO: changed size must be returned
    int desArr[10] = {array[0]};
    int cnt = 1;
	for (int i = 1; i < size; i++)
	{
        bool is_new = true;
		for (int j = 0; j < cnt; j++)
        {
            if (array[i] == desArr[j])
            {
                is_new = false;
                break;
            }
        }
        if (is_new)
            desArr[cnt++] = array[i];
	}
    size = cnt;
    for (int i = 0; i < size; i++)
        array[i] = desArr[i];
	return size;
}

int main() {
	int array[10];
	for(int i = 0; i < 10; i++)
		cin >> array[i];

	int size = unique(array);

	if(size < 0 || size > 10)
		return -1;

	for(int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	return 0;
}
