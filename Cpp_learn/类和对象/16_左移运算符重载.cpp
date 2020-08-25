//#include <iostream>
//using namespace std;
//#include <string>
//
////无法使用成员函数实现重载<< 因为cout会在右边, p << cout
//
//class Person {
//
//	friend ostream& operator<<(ostream& cout, Person& p);
//	friend void test01();
//
//private:
//	int m_A;
//	int m_B;
//
//};
////只能利用全局函数实现<<重载
//ostream& operator<<(ostream& cout, Person& p) {
//
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
//	return cout;
//}
//
//void test01() {
//
//	Person p;
//	p.m_A = 10;
//	p.m_B = 10;
//
//	//operator<<(cout, p) << endl;
//	cout << p << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}