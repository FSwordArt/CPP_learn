//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//��̬��Ա����
//1.���ж�����һ������
//2.�ڱ���׶η����ڴ�
//3.���������������ʼ��
//4.�з���Ȩ��
//*/
//
///*
//��̬��Ա����
//1.���ж�����һ������
//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//3.�з���Ȩ��
//*/
//
//class Person {
//
//public:
//	static int m_A;
//	int m_B;
//
//	static void func() {
//		//m_B = 10; �ᱨ��
//		cout << "func�����ĵ���" << endl;
//	}
//};
//
//int Person::m_A = 10;
//void test01() {
//
//	//1.ͨ��������з���
//	Person p;
//	cout << p.m_A << endl;
//	p.func();
//
//	//2.ͨ���������з���,ֻ�о�̬��������
//	cout << Person::m_A << endl;
//	Person::func();
//}
//int main() {
//
//	test01();
//
//
//
//	system("pause");
//	return 0;
//}