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
////ֱ�Ӵ��� ���
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
////2.����ģ�廯
//template <class T1, class T2>
//void PrintPerson2(Person<T1, T2>& p) {
//	p.show();
//	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
//	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
//
//}
//
//void test02() {
//	Person<string, int> p1("Tom", 18);
//	PrintPerson2(p1);
//
//}
//
////3.������ģ�廯
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