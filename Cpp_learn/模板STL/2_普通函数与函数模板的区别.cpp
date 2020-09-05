//#include <iostream>
//using namespace std;
//#include <string>
//
///*
//普通函数与函数模板的区别
//1、普通函数调用可以发生隐式类型转换
//2、函数模板 用自动类型推导，不可以发生隐式类型转换
//3、函数模板 用显示指定类型，可以发生隐式类型转换
//*/
//
//
//int Add01(int a, int b) {
//	return a + b;
//}
//
//template <class T>
//T Add02(T a, T b) {
//	return a + b;
//}
//
//
///*
//普通函数与函数模板调用规则
//1.如果普通函数和函数模板都可以调用，优先调用普通函数
//2.可以通过空模板参数列表强制调用函数模板
//3.函数模板可以发生函数重载
//4.如果函数模板可以发生更好的匹配，则优先调用函数模板
//*/
//
//
//void myPrint(int a, int b) {
//	cout << "普通函数" << endl;
//}
//
//template <class T>
//void myPrint(T a, T b) {
//	cout << "模板调用" << endl;
//}
//
//template <class T>
//void myPrint(T a, T b, T c) {
//	cout << "模板调用" << endl;
//}
//
//void test01() {
//
//	int a = 10;
//	int b = 10;
//	//1.
//	//myPrint(a, b);
//
//	//2.
//	myPrint<>(a, b);
//}
//
//
//class Person {
//public:
//	
//	Person(string name, int age) {
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//
//};
//
//template <class T>
//bool myCompare(T& a, T& b) {
//	if (a == b) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
////通过具体化来让模板走哪块程序
//template<> bool myCompare(Person& a, Person& b) {
//	if (a.m_name == b.m_name && a.m_age == a.m_age) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//void test02() {
//
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//
//	bool ret = myCompare(p1, p2);
//
//	if (ret) {
//		cout << "a==b" << endl;
//	}
//	else {
//		cout << "a!=b" << endl;
//	}
//}
//
//int main() {
//
//	//int a = 10;
//	//int b = 20;
//	//char c = 'c';
//
//	////cout << Add01(a, c) << endl;
//	//
//	////自动类型推导
//	////cout << Add02(a, c) << endl;
//
//	////指定类型
//	//cout << Add02<int>(a, c) << endl;
//
//	//test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}
//
