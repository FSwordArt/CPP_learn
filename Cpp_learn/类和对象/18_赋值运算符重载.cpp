//#include <iostream>
//using namespace std;
//#include <string>
//
//
//class Person {
//
//public:
//	int* m_Age;
//
//	Person(int age) {
//		m_Age = new int(age);
//	}
//
//	~Person(){
//
//		if (m_Age != NULL) {
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//ÖØÔØ=ÔËËã·û
//	Person& operator=(Person& p) {
//
//		if (m_Age != NULL) {
//
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		m_Age = new int(*p.m_Age);
//		
//		return *this;
//	}
//
//};
//
//
//void test01() {
//
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1;
//
//	cout << *p1.m_Age << endl;
//	cout << *p2.m_Age << endl;
//	cout << *p3.m_Age << endl;
//}
//int main() {
//
//	test01();
//
//
//
//
//	system("pause");
//	return 0;
//}