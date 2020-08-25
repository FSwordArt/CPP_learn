//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//静态成员变量
//1.所有对象共享一份数据
//2.在编译阶段分配内存
//3.类内声明，类外初始化
//4.有访问权限
//*/
//
///*
//静态成员函数
//1.所有对象共享一个函数
//2.静态成员函数只能访问静态成员变量
//3.有访问权限
//*/
//
//class Person {
//
//public:
//	static int m_A;
//	int m_B;
//
//	static void func() {
//		//m_B = 10; 会报错
//		cout << "func函数的调用" << endl;
//	}
//};
//
//int Person::m_A = 10;
//void test01() {
//
//	//1.通过对象进行访问
//	Person p;
//	cout << p.m_A << endl;
//	p.func();
//
//	//2.通过类名进行访问,只有静态变量可以
//	cout << Person::m_A << endl;
//	Person::func();
//}
//int main() {
//
//	test01();
//
//
//
//	system("pause");
//	return 0;
//}