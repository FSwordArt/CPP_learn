#include <iostream>
#include <string>

using namespace std;

/*
数据类型 数组名[数组长度]
数据类型 数组名[数组长度] = {值1，值2}
数据类型 数组名[] = {值1，值2}
*/


int main_arr() {

	int arr[5] = { 1,2,3,4,5 };

	//统计数组内存长度
	cout << "数组所占内存：" << sizeof(arr) << endl;
	cout << "每个元素所占内存：" << sizeof(arr[0]) << endl;

	//获取数组在内存中的首地址
	cout << "内存所占首地址：" << arr << endl;
	//获取数组第一个元素在内存中的地址
	cout << "内存所占首地址：" << &arr[0] << endl;

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

//冒泡排序
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
二维数组

数组类型 数组名[行数][列数]
数组类型 数组名[行数][列数] = {{数值1,数值2，数值3},{数值4，数值5，数值6}};
数组类型 数组名[行数][列数] = {数值1,数值2，数值3, 数值4，数值5，数值6}
数组类型 数组名[][列数] = {数值1,数值2，数值3, 数值4，数值5，数值6}
*/






