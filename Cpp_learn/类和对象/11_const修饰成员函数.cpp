//#include <iostream>
//using namespace std;
//
//
////������
//class Person {
//
//public:
//	int m_A;
//	mutable int m_B;
//
//	//this �൱��ָ�볣���� Person* const this 
//	void func1() const{   //������ const Person* const this
//		//m_A = 100;
//		m_B = 100;
//	}
//	void func2() {
//		m_A = 100;
//	}
//};
//
////������
//void test01() {
//
//	const Person p;
//	//p.m_A = 100;  ���󣬳����󲻿��޸ı���ֵ
//	p.m_B = 100;
//
//	//������ֻ�ܵ��ó�����
//	p.func1();
//	//p.func2(); �����󲻿ɵ�����ͨ�ĳ�Ա��������Ϊ��ͨ��Ա���������޸����ԡ�
//}
//
//int main() {
//
//
//}