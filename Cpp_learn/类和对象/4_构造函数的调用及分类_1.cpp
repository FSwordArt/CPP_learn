//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//���ַ��෽ʽ��
//��������Ϊ���вι�����޲ι��죨Ĭ�Ϲ��죩
//�����ͷ�Ϊ����ͨ����Ϳ�������
//*/
//
///*
//���ֵ��÷�ʽ��
//���ŷ�����ʾ������ʽת����
//*/
//
//class Person {
//
//public:
//
//	int age;
//	Person() {
//		cout << "Person�޲ι��캯���ĵ���" << endl;
//
//	}
//
//	Person(int a) {
//		age = a;
//		cout << "Person�вι��캯���ĵ���" << endl;
//
//	}
//
//	//�������캯��
//	Person(const Person& p) {
//		age = p.age;
//		cout << "Person�������캯���ĵ���" << endl;
//
//	}
//
//	~Person() {
//		cout << "Person���������ĵ���" << endl;
//	}
//};
//
////����
//void test1() {
//	//1.���ŷ�
//	//ע�⣺����Ĭ�Ϲ���ʱ��Ҫ�ӣ���,�� Person p;
//	Person p(10);//�����вι��캯��
//	Person p1(p);//���ÿ������캯��
//
//	//2.��ʾ��
//	//ע�⣺��Ҫ���ÿ������캯������ʼ���������� ��Person(p3) === Person p3
//	//Person(10)���������ص㣺��ǰִ�н�����ϵͳ������������������
//	Person p2 = Person(10);
//	Person p3 = Person(p2);
//
//	//3.��ʽת����
//	Person p4 = 10;//�൱��Person p4 = Person(10)
//	Person p5 = p4;
//}
//
//
//int main() {
//
//	test1();
//
//	system("pause");
//	return 0;
//}
//
//
