//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//2.ֵ���ݵķ�ʽ������������ֵ
//3.ֵ��ʽ���ؾֲ�����
//*/
//
//class Person {
//
//public:
//
//	int m_age;
//
//	Person() {
//		cout << "Person�޲ι��캯���ĵ���" << endl;
//	}
//
//	Person(int age) {
//		m_age = age;
//		cout << "Person�вι��캯���ĵ���" << endl;
//
//	}
//
//	//�������캯��
//	Person(const Person& p) {
//		m_age = p.m_age;
//		cout << "Person�������캯���ĵ���" << endl;
//	}
//
//	~Person() {
//		cout << "Person���������ĵ���" << endl;
//	}
//};
//
////����
//void test2_1() {
//
//	//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//	Person p1(10);
//	Person p2(p1);
//	cout << "p2��ֵ" << p2.m_age << endl;
//	
//}
//
////2.ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p) {
//
//}
//
//void test2_2() {
//	Person p;
//	doWork(p);
//}
//
////3.ֵ��ʽ���ؾֲ�����
//Person doWork2() {
//	Person p1;
//	cout << &p1 << endl;
//	return p1;
//}
//
//void test2_3() {
//	Person p = doWork2();
//	cout << &p << endl;
//}
//
//int main() {
//
//	//test2_1();
//	test2_2();
//	//test2_3();
//
//	system("pause");
//	return 0;
//}
//
//
