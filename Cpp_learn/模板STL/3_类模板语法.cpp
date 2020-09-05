//#include <iostream>
//using namespace std;
//#include <string>
//
///*
//类模板和函数模板的区别：
//1.类模板没有自动类型推导的使用方式
//2.类模板在模板参数列表中可以由默认参数
//*/
//
//
//template <class NameType, class Agetype = int>
//class Person {
//
//public:
//	NameType m_Name;
//	Agetype m_Age;
//
//	Person(NameType name, Agetype age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void show() {
//		cout << this->m_Name << endl;
//		cout << this->m_Age << endl;
//	}
//
//};
//
//void test01() {
//
//	Person<string> p1("Tom", 18);
//	p1.show();
//}
//
//int main() {
//
//	test01();
//
//
//
//	system("pause");
//	return 0;
//}