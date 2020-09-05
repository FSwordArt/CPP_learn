//#include <iostream>
//using namespace std;
//#include <string>
//
////第一种解决方案，直接包含源文件
////#include "person.cpp"
//
////第二种解决方案，将.h和.cpp的文件写到一起，将后缀名改为.hpp 主流的解决方法
////#include "person.hpp"
/////*
////必须要知道父类中T的数据类型才能继承给子类
////如果想灵活的指定父类中T类型，子类也需要变成类模板
////
////*/
////
////template <class T>
////class Base {
////public:
////	T m;
////};
////
////template <class T1, class T2>
////class Son :public Base<T1> {
////
////public:
////
////	T2 obj;
////
////	Son() {
////
////		cout << "T1的数据类型为：" << typeid(T1).name() << endl;
////		cout << "T2的数据类型为：" << typeid(T2).name() << endl;
////
////	}
////};
////
////void  test01() {
////
////	Son<int, char> s;
////}
//
/////*
////类模板的类外实现
////*/
////template<class T1, class T2>
////class Person {
////public:
////	T1 m_Name;
////	T2 m_Age;
////
////	Person(T1 name, T2 age);
////	void show();
////};
////
//////构造函数类外实现
////template<class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age) {
////	m_Name = name;
////	m_Age = age;
////}
////
//////成员函数类外实现
////template <class T1, class T2>
////void Person<T1, T2>::show() {
////	cout << m_Name << endl;
////	cout << m_Age << endl;
////}
////
////
////void test02() {
////
////	Person<string, int> p("Tom", 20);
////	p.show();
////}
//
//
///*
//类模板与友元
//*/
//
//template <class T1, class T2>
//class Person;
//
////类外实现
//template <class T1, class T2>
//void PrintPerson2(Person<T1, T2> p) {
//	cout << "类外实现全局函数-姓名：" << p.m_Name << endl;
//	cout << "类外实现全局函数-年龄：" << p.m_Age << endl;
//}
//
//template <class T1, class T2>
//class Person {
//
//	//全局函数类内实现
//	friend void PrintPerson1(Person<T1, T2> p) {
//		cout << "类内实现全局函数-姓名：" << p.m_Name << endl;
//		cout << "类内实现全局函数-年龄：" << p.m_Age << endl;
//	}
//
//	//全局函数类外实现，加空模板参数列表，需要让编译器提前知道这个函数的存在
//	friend void PrintPerson2<>(Person<T1, T2> p);
//
//public:
//
//	Person(T1 name, T2 age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//void test03() {
//	Person<string, int> p1("Tom", 20);
//	PrintPerson1(p1);
//}
//
//
//void test04() {
//
//	Person<string, int> p2("Jerry", 30);
//	PrintPerson2(p2);
//}
//int main() {
//
//	//test01();
//	//test02();
//	//test03();
//	test04();
//
//
//	system("pause");
//	return 0;
//}