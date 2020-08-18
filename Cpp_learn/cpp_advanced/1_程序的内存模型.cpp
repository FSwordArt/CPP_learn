/*
1.函数的形参和局部变量都会保存在栈上，在函数执行完时会自动释放，系统为了防止操作错误，会自动
保留一次，但最终不要返回局部变量的地址
*/

#include <iostream>
#include <string>
using namespace std;

int* func() {

	//利用new可以将数据开辟到堆区
	//指针本质也是局部变量，放在栈上，指针保存的数据是放在堆区
	int* p = new int(10); //new开辟的是一块地址，可以用指针进行接收
	return p;
}

void test01() {

	int* p = func();
	cout << *p << endl;

	delete p; //想要释放堆区数据，使用delete
	//cout << *p << endl;

}

//用new在堆区开辟数组
void test02() {

	int* arr = new int[10]; //创建一个数组，有10个元素
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	//释放数组时，要加[]才可以
	delete[] arr;

}

int main_1() {

	//test01();
	test02();
	system("pause");
	return 0;
}













