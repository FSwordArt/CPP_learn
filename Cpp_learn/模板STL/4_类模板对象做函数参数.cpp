//#include <iostream>
//using namespace std;
//#include <string>
//
//template <class T1, class T2>
//class Person {
//
//public:
//	T1 m_Name;
//	T2 m_Age;
//
//	Person(T1 name, T2 age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void show() {
//
//		cout << this->m_Name << endl;
//		cout << this->m_Age << endl;
//
//	}
//
//};
//
////直接传入 最常用
//void PrintPerson(Person<string, int>& p) {
//	p.show();
//}
//void test01() {
//
//	Person<string, int> p1("Tom", 18);
//	PrintPerson(p1);
//
//}
//
////2.参数模板化
//template <class T1, class T2>
//void PrintPerson2(Person<T1, T2>& p) {
//	p.show();
//	cout << "T1的类型为：" << typeid(T1).name() << endl;
//	cout << "T2的类型为：" << typeid(T2).name() << endl;
//
//}
//
//void test02() {
//	Person<string, int> p1("Tom", 18);
//	PrintPerson2(p1);
//
//}
//
////3.整个类模板化
//template <class T>
//void PrintPerson3(T& p) {
//	p.show();
//}
//
//void test03() {
//	Person<string, int> p1("Tom", 18);
//	PrintPerson3(p1);
//}
//
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//
//
//	system("pause");
//	return 0;
//}