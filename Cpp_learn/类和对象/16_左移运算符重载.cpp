//#include <iostream>
//using namespace std;
//#include <string>
//
////�޷�ʹ�ó�Ա����ʵ������<< ��Ϊcout�����ұ�, p << cout
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
////ֻ������ȫ�ֺ���ʵ��<<����
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