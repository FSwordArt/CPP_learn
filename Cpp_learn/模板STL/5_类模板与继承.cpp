//#include <iostream>
//using namespace std;
//#include <string>
//
////��һ�ֽ��������ֱ�Ӱ���Դ�ļ�
////#include "person.cpp"
//
////�ڶ��ֽ����������.h��.cpp���ļ�д��һ�𣬽���׺����Ϊ.hpp �����Ľ������
////#include "person.hpp"
/////*
////����Ҫ֪��������T���������Ͳ��ܼ̳и�����
////���������ָ��������T���ͣ�����Ҳ��Ҫ�����ģ��
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
////		cout << "T1����������Ϊ��" << typeid(T1).name() << endl;
////		cout << "T2����������Ϊ��" << typeid(T2).name() << endl;
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
////��ģ�������ʵ��
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
//////���캯������ʵ��
////template<class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age) {
////	m_Name = name;
////	m_Age = age;
////}
////
//////��Ա��������ʵ��
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
//��ģ������Ԫ
//*/
//
//template <class T1, class T2>
//class Person;
//
////����ʵ��
//template <class T1, class T2>
//void PrintPerson2(Person<T1, T2> p) {
//	cout << "����ʵ��ȫ�ֺ���-������" << p.m_Name << endl;
//	cout << "����ʵ��ȫ�ֺ���-���䣺" << p.m_Age << endl;
//}
//
//template <class T1, class T2>
//class Person {
//
//	//ȫ�ֺ�������ʵ��
//	friend void PrintPerson1(Person<T1, T2> p) {
//		cout << "����ʵ��ȫ�ֺ���-������" << p.m_Name << endl;
//		cout << "����ʵ��ȫ�ֺ���-���䣺" << p.m_Age << endl;
//	}
//
//	//ȫ�ֺ�������ʵ�֣��ӿ�ģ������б���Ҫ�ñ�������ǰ֪����������Ĵ���
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