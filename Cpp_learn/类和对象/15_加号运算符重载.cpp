//#include <iostream>
//using namespace std;
//#include <string>
//
//class Person {
//
//public:
//	int m_A;
//	int m_B;
//
////通过成员函数重载+
//	//Person operator+(Person& p) {
//
//	//	Person tmp;
//	//	tmp.m_A = this->m_A + p.m_A;
//	//	tmp.m_B = this->m_B + p.m_B;
//
//	//	return tmp;
//	//}
//};
//
//
////通过全局函数来实现+运算符重载
//Person operator+(Person& p1, Person& p2) {
//
//	Person tmp;
//	tmp.m_A = p1.m_A + p2.m_A;
//	tmp.m_B = p1.m_B + p2.m_B;
//
//	return tmp;
//}
//
//Person operator+(Person& p1, int num) {
//
//	Person tmp;
//	tmp.m_A = p1.m_A + num;
//	tmp.m_B = p1.m_B + num;
//
//	return tmp;
//}
//
//void test01() {
//
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	//成员函数方式：Person p3 = p1.operator+(p2)
//	//全局函数方式：Person p3 = operator+(p1, p2)
//
//	Person p3 = p1 + p2;
//	
//	cout << "p3.m_A = " << p3.m_A << endl;
//	cout << "p3.m_B = " << p3.m_B << endl;
//
//	//函数也可以重载
//	//Person p4 = operator+(p1, 10)
//	Person p4 = p1 + 10;
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
