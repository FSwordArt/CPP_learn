#include <iostream>
using namespace std;

/*
void swap2(int* p1, int* p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


int main() {
	int a = 10;
	int b = 20;

	swap2(&a, &b); //如果是地址传递，可以修饰实参，即改变实参的值 
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;
}
*/
void bubble_sort(int *arr, int len) {

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {

			if (arr[j] > arr[j + 1]) {

				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

			}
		}
	}
}

void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i];
	}
}
int main() {

	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, len);
	printArray(arr, len);

	return 0;
}


