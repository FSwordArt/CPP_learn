#include <iostream>
#include <string>

using namespace std;

/*
�������� ������[���鳤��]
�������� ������[���鳤��] = {ֵ1��ֵ2}
�������� ������[] = {ֵ1��ֵ2}
*/


int main_arr() {

	int arr[5] = { 1,2,3,4,5 };

	//ͳ�������ڴ泤��
	cout << "������ռ�ڴ棺" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ����ռ�ڴ棺" << sizeof(arr[0]) << endl;

	//��ȡ�������ڴ��е��׵�ַ
	cout << "�ڴ���ռ�׵�ַ��" << arr << endl;
	//��ȡ�����һ��Ԫ�����ڴ��еĵ�ַ
	cout << "�ڴ���ռ�׵�ַ��" << &arr[0] << endl;

	system("pause");
	return 0;

}

int main_nixu() {

	int arra[5] = { 1,2,3,5,4 };
	int len = sizeof(arra) / sizeof(arra[0]);
	

	for (int i = 0; i < (len/2); i++) {
		
		int tmp = arra[i];
		arra[i] = arra[len - 1 - i];
		arra[len - 1 - i] = tmp;

		
	}
	for (int j = 0; j < len; j++) {
		cout << arra[j];
	}
	cout << endl;
	

	system("pause");
	return 0;
}

int main_findmax() {

	int arr[] = { 300, 350, 400, 200, 250 };
	int max = 0;
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 1; i < len; i++) {
		if (arr[max] < arr[i]) {
			max = i;
		}
	}
	cout << "max=" << max << endl;
	cout << "arr[max]=" << arr[max] << endl;

	system("pause");
	return 0;

}

//ð������
int main_bubblesort() {

	int arr[] = {4,2,8,0,5,7,1,3,9};
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int x = 0; x < len; x++) {
		cout << arr[x];
	}
	cout << endl;

	for (int i = 0; i < len-1; i++) {

		for (int j = 0; j < len - 1 - i; j++) {

			if (arr[j] > arr[j + 1]) {

				int tmp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int y = 0; y < len; y++) {
		cout << arr[y] <<" ";
	}
	cout << endl;


	system("pause");
	return 0;
}

/*
��ά����

�������� ������[����][����]
�������� ������[����][����] = {{��ֵ1,��ֵ2����ֵ3},{��ֵ4����ֵ5����ֵ6}};
�������� ������[����][����] = {��ֵ1,��ֵ2����ֵ3, ��ֵ4����ֵ5����ֵ6}
�������� ������[][����] = {��ֵ1,��ֵ2����ֵ3, ��ֵ4����ֵ5����ֵ6}
*/






