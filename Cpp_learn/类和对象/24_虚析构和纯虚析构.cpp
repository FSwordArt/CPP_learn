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
//		cout << "Base���캯������" << endl;
//	}
//
//	virtual void speak() = 0;
//
//	////������
//	//virtual ~Base() {
//	//	cout << "Base������������" << endl;
//	//}
//
//	//��������
//	virtual ~Base() = 0;
//};
//
//Base::~Base() {
//	cout << "Base������������" << endl;
//}
//
//class Cat :public Base {
//public:
//
//	string* m_Name;
//
//	Cat(string name) {
//		cout << "Cat���캯������" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak() {
//		cout << *m_Name << "��˵��" << endl;
//	}
//
//	~Cat() {
//
//		if (m_Name != NULL) {
//			cout << "Cat������������" << endl;
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