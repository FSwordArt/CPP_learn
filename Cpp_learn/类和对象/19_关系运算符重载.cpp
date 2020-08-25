//#include <iostream>
//using namespace std;
//#include <string>
//
//
//class Person {
//
//public:
//	string m_Name;
//	int m_Age;
//
//	Person(string name, int age) {
//
//		m_Name = name;
//		m_Age = age;
//	}
//
//	bool operator == (Person & p) {
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//
//
//};
//
//void test01() {
//
//	Person p1("Tom", 18);
//	Person p2("Tom", 12);
//
//	if (p2 == p1) {
//		cout << "相同" << endl;
//	}
//	else {
//		cout << "不同" << endl;
//	}
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}