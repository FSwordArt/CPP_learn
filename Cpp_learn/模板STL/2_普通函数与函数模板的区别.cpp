//#include <iostream>
//using namespace std;
//#include <string>
//
///*
//��ͨ�����뺯��ģ�������
//1����ͨ�������ÿ��Է�����ʽ����ת��
//2������ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//3������ģ�� ����ʾָ�����ͣ����Է�����ʽ����ת��
//*/
//
//
//int Add01(int a, int b) {
//	return a + b;
//}
//
//template <class T>
//T Add02(T a, T b) {
//	return a + b;
//}
//
//
///*
//��ͨ�����뺯��ģ����ù���
//1.�����ͨ�����ͺ���ģ�嶼���Ե��ã����ȵ�����ͨ����
//2.����ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//3.����ģ����Է�����������
//4.�������ģ����Է������õ�ƥ�䣬�����ȵ��ú���ģ��
//*/
//
//
//void myPrint(int a, int b) {
//	cout << "��ͨ����" << endl;
//}
//
//template <class T>
//void myPrint(T a, T b) {
//	cout << "ģ�����" << endl;
//}
//
//template <class T>
//void myPrint(T a, T b, T c) {
//	cout << "ģ�����" << endl;
//}
//
//void test01() {
//
//	int a = 10;
//	int b = 10;
//	//1.
//	//myPrint(a, b);
//
//	//2.
//	myPrint<>(a, b);
//}
//
//
//class Person {
//public:
//	
//	Person(string name, int age) {
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//
//};
//
//template <class T>
//bool myCompare(T& a, T& b) {
//	if (a == b) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
////ͨ�����廯����ģ�����Ŀ����
//template<> bool myCompare(Person& a, Person& b) {
//	if (a.m_name == b.m_name && a.m_age == a.m_age) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//void test02() {
//
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//
//	bool ret = myCompare(p1, p2);
//
//	if (ret) {
//		cout << "a==b" << endl;
//	}
//	else {
//		cout << "a!=b" << endl;
//	}
//}
//
//int main() {
//
//	//int a = 10;
//	//int b = 20;
//	//char c = 'c';
//
//	////cout << Add01(a, c) << endl;
//	//
//	////�Զ������Ƶ�
//	////cout << Add02(a, c) << endl;
//
//	////ָ������
//	//cout << Add02<int>(a, c) << endl;
//
//	//test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}
//
