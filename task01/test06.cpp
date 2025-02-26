//#include <iostream>
//using namespace std;
//
//void init(int* array, int size) {
//
//}
//
//int* test(int* size) {
//	*size = 5;
//	int* array = new int[5];
//	*(array) = 1;
//	*(array + 1) = 11;
//	*(array + 2) = 111;
//	*(array + 3) = 1111;
//	*(array + 4) = 11111;
//	return array;
//}
//
//int main() {
//	int size = 0;
//	int* array = test(&size);
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << array[i] << " ";
//	}
//
//	cout << endl;
//
//	delete[] array;
//
//	return 0;
//}