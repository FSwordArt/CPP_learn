//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//ǳ�������򵥵ĸ�ֵ��������
//������ڶ������������ڴ�ռ���п���
//*/
//
//class Person {
//
//public:
//
//	int m_age;
//	int* m_Height;
//
//	Person() {
//		cout << "Person�޲ι��캯���ĵ���" << endl;
//	}
//
//	Person(int age, int height) {
//		m_age = age;
//		m_Height = new int(height);
//		
//		cout << "Person�вι��캯���ĵ���" << endl;
//		cout << m_Height << endl;
//	}
//
//	//�������캯��
//	Person(const Person& p) {
//		m_age = p.m_age;
//		m_Height = new int(*p.m_Height);
//		//m_Height = p.m_Height; ϵͳ��ǳ�����������ֶ����ٶ���
//		
//		cout << "Person�������캯���ĵ���" << endl;
//		cout << m_Height << endl;
//	}
//
//	~Person() {
//		//���������ٵ��������ͷ�
//
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person���������ĵ���" << endl;
//	}
//};
//
//void test1() {
//
//	Person p1(18, 160);
//	cout << "p1������Ϊ��" << p1.m_age << endl;
//	cout << "p1�����Ϊ��" << *p1.m_Height << endl;
//	
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_age << endl;
//	cout << "p2�����Ϊ��" << *p2.m_Height << endl;
//
//}
//int main() {
//
//	test1();
//
//
//	system("pause");
//	return 0;
//}