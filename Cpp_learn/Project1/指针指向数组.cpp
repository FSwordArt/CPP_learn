#include <iostream>
using namespace std;

int main_a() {

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;
	//cout << "ָ��ָ��ĵ�һ��Ԫ��" << *p << endl;
	//p++;
	//cout << "ָ��ָ��ĵ�һ��Ԫ��" << *p << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << *p << " ";
		p++;
	}

	return 0;	
}