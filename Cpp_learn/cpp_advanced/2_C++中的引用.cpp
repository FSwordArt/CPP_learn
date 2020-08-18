#include <iostream>
#include <string>
using namespace std;

/*
引用：给变量起别名
数据类型 &别名 = 原名
引用必须初始化，引用初始化后不可更改
本质是一个指针常量
int& ref = a, 系统会自动转换为 int* const ref = &a
*/

/*
void swap1(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap2(int* a, int* b) {

	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap3(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {

	int a = 10;
	int b = 20;
	//swap1(a, b);
	//swap2(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap3(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	

	system("pause");
	return 0;
}
*/



/*
引用做函数的返回值
*/

//1.不要反悔局部变量的引用
int& test01() {

	int a = 10;
	return a;
}

//函数的调用可以作为左值
int& test02() {

	static int a = 10; //静态数据存放在全局区，结束后由系统释放
	return a;
}
int main_2() {


	//int& ref = test01();
	//cout << "ref = " << ref << endl;
	//cout << "ref = " << ref << endl;//存在于栈中，已经被释放

	//int& ref = test02();
	//cout << "ref = " << ref << endl;

	//test02() = 1000; //相当于a = 20
	////test02返回的是a,a = 1000,ref是a的别名。如果函数的返回值是引用，函数的调用可以作为左值	
	//cout << "ref = " << ref << endl;

	const int& ref = 10;
	//上面一行代码相当于 int tmp = 10； const int& ref = tmp

	//const 主要是为了防止引用时的误操作
	



	system("pause");
	return 0;
}