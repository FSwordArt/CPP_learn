#include <iostream>
using namespace std;

/*-------------------------默认参数-------------------------*/
//如果函数声明中有默认参数，函数实现就不能有默认参数
int func1(int a = 10, int b = 20);

//int func(int a = 10, int b = 20) {//这个默认参数是错误的
//	return a + b;
//}
int func1(int a, int b) {
	return a + b;
}



/*-------------------------函数占位参数-------------------------*/
//返回值类型 函数名（数据类型） int func(int a, int){}
//占位参数可以有默认值
void func2(int a, int = 10) {

	cout << "this is a func" << endl;
}

/*-------------------------函数重载-------------------------*/
//函数重载的条件
//1.同一个作用域下
//2.函数名称不同
//3.函数参数类型不同，或者个数不同，或者顺序不同
//4.返回值不可作为函数重载的条件

void func3() {
	cout << "this is func3" << endl;
}

void func3(int a) {
	cout << "this is func3(int a)" << endl;
}

void func3(double a) {
	cout << "this is func3(double a)" << endl;
}

void func3(double a, int b) {
	cout << "this is func3(double a, int b)" << endl;
}

void func3(int a, double b) {
	cout << "this is func3(int a, double b)" << endl;
}


/*-------------------------函数重载注意事项-------------------------*/

//1.引用作为函数重载的条件
void func4(int& a) {
	cout << "this is func4(int& a)" << endl;
}

void func4(const int& a) {
	cout << "this is func4(const int& a)" << endl;
}

//2.函数重载碰到默认参数
void func5(int a) {
	cout << "this is func5(int a)" << endl;
}

void func5(int a, int b= 10) {//通过不了
	cout << "this is (int a, int b= 10)" << endl;
}

int main() {

	//cout << func1() << endl;
	//func2(10, 10);
	//func3();
	//int a = 10;
	//func4(a);//第一个
	//func4(10);//第二个

	//func5(10);



	return 0;
}


