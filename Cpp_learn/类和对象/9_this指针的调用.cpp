//#include <iostream>
//using namespace std;
//
///*
//��;��
//1.���βκͳ�Ա����ͬ��ʱ������thisָ��������
//2.����ķǾ�̬��Ա�����з��ض�������ʹ�� return* this
//*/
//class Person {
//
//	//1.���βκͳ�Ա����ͬ��ʱ������thisָ��������.thisָ��ָ�� �����õĳ�Ա���� �����Ķ���
//public:
//	int age;
//
//	Person(int age) {
//		this->age = age;
//	}
//	
//	//2.����ķǾ�̬��Ա�����з��ض�������ʹ�� return*this
//	Person& PersonAddAge(Person& p) {
//		this->age += p.age;
//		return *this;
//
//	}
//
//};
//
//
//void test01() {
//	Person p1(18);
//	cout << p1.age << endl;
//}
//
//void test02() {
//	Person p1(10);
//	Person p2(10);
//
//	//��ʽ���
//	p2.PersonAddAge(p1).PersonAddAge(p1);
//	cout << p2.age << endl;
//
//}
//
//
//int main() {
//	
//	//test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}