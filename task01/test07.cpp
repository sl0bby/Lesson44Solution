#include <iostream>
using namespace std;


int main() {
	int size;

	cout << "Iput size of array: " << endl;
	cin >> size;

	int* array = new int[size];
	
	*(array) = 1;
	*(array + 1) = 11;
	*(array + 2) = 111;
	*(array + 3) = 1111;
	*(array + 4) = 11111;

	cout << *(array + 0) << " - " << array[0] << endl;
	cout << *(array + 1) << " - " << array[1] << endl;
	cout << *(array + 2) << " - " << array[2] << endl;
	cout << *(array + 3) << " - " << array[3] << endl;
	cout << *(array + 4) << " - " << array[4] << endl;

	delete[] array;

	return 0;
}