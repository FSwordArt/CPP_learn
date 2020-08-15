#include <iostream>
using namespace std;


int main_jichu() {

	/*指针的基本操作*/
	//float a = 10.1;
	//float* p = &a;

	////记录指针所占空间，在32位下基本类型的都为4，64 为8
	//cout << "所占内存：" << sizeof(int*) << endl;
	//cout << "所占内存：" << sizeof(float*) << endl;
	//cout << "所占内存：" << sizeof(double*) << endl;
	//cout << "所占内存：" << sizeof(char*) << endl;

	//cout << *p << endl;

	//cout << "a的地址：" << &a << endl;
	//cout << "p的地址：" << p << endl;

	//*p = 1000;
	//cout << "a = " << a << endl;
	//cout << "*p = " << *p << endl;
 /*-------------------------------------------------------------*/
	
	/*
	空指针
	1、用于给指针变量初始化
	2、空指针是不可以进行访问的
	*/

	//int* p = NULL;
	////*p = 100; 是错误的
	//int a = 100;
	//p = &a;
	//cout << *p << endl;


	/*
	野指针：指针变量指向非法的内存空间
	*/
	int* p = (int*)0x1100;
	cout << *p << endl;

	/*空指针和野指针都不是我们申请访问的空间，因此不要访问*/
	/*-----------------------------------------------------*/

	system("pause");
	return 0;
}