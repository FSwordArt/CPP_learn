//#include <iostream>
//using namespace std;
//#include <string>
//
///*
//�﷨��
//template<typename T>
//�����������߶���
//
//typename Ҳ����Ϊ class
//
//*/
//
//template<typename T>//����һ��ģ�壬���߱�������������ŵĴ�����T��Ҫ����T��һ��ͨ����������
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
//	////1���Զ������Ƶ�
//	////mySwap(a, b);
//
//	////2����ʾָ������
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
