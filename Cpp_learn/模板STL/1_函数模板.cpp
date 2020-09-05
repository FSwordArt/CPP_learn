//#include <iostream>
//using namespace std;
//#include <string>
//
///*
//语法：
//template<typename T>
//函数声明或者定义
//
//typename 也可以为 class
//
//*/
//
//template<typename T>//声明一个模板，告诉编译器后面紧跟着的代码中T不要报错，T是一个通用数据类型
//void mySwap(T& a, T& b) {
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template <class T>
//void BubbleSort(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		int max = i;
//
//		for (int j = i+1; j < len; j++) {
//			if (arr[max] < arr[j]) {
//				max = j;
//			}
//		}
//		mySwap(arr[i], arr[max]);
//	}
//}
//
//template <class T>
//void PrintArr(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test01() {
//
//	char charArr[] = "badcfe";
//	int len = sizeof(charArr) / sizeof(char);
//	BubbleSort(charArr, len);
//	PrintArr(charArr, len);
//
//	for (int i = 0; i < len; i++) {
//		cout << charArr[i] << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//
//	//int a = 10;
//	//int b = 20;
//	//
//	////1、自动类型推导
//	////mySwap(a, b);
//
//	////2、显示指定类型
//	////mySwap<int>(a, b);
//	//cout << a << endl;
//	//cout << b << endl;
//	test01();
//
//
//	system("pause");
//	return 0;
//}
//
