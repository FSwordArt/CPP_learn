//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Phone {
//public:
//	string m_PName;
//
//public:
//	Phone(string name) :m_PName(name) {
//		cout << "Phone构造函数的调用" << endl;
//	}
//
//	~Phone() {
//		cout << "Phone析构函数的调用" << endl;
//	}
//};
//
//
//class Person {
//
//public:
//	string m_Name;
//	Phone m_PName;
//
//public:
//
//	Person(string name, string pname) :m_Name(name), m_PName(pname) {
//		cout << "Person构造函数的调用" << endl;
//	}
//
//	~Person() {
//		cout << "Person析构函数的调用" << endl;
//	}
//};
//
////当其他类对象作为本类成员时，构造函数先构造其他类对象，再构造自身，析构函数先析构自身，再析构其他类对象
//void test01() {
//	Person p("张三", "iphone 11");
//	cout << p.m_Name << endl;
//	cout << p.m_PName.m_PName << endl;
//
//}
//int main() {
//
//	test01();
//
//
//
//
//
//	system("pause");
//	return 0;
//}