//#include <iostream>
//using namespace std;
//#include <string>
//
//class Base {
//
//public:
//
//
//	Base() {
//		cout << "Base构造函数调用" << endl;
//	}
//
//	virtual void speak() = 0;
//
//	////虚析构
//	//virtual ~Base() {
//	//	cout << "Base析构函数调用" << endl;
//	//}
//
//	//纯虚析构
//	virtual ~Base() = 0;
//};
//
//Base::~Base() {
//	cout << "Base析构函数调用" << endl;
//}
//
//class Cat :public Base {
//public:
//
//	string* m_Name;
//
//	Cat(string name) {
//		cout << "Cat构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak() {
//		cout << *m_Name << "在说话" << endl;
//	}
//
//	~Cat() {
//
//		if (m_Name != NULL) {
//			cout << "Cat析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//};
//
//void test01() {
//
//	Base* c;
//	c = new Cat("Tom");
//	c->speak();
//	delete c;
//
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