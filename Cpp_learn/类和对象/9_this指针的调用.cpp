//#include <iostream>
//using namespace std;
//
///*
//用途：
//1.当形参和成员变量同名时，可用this指针来区分
//2.在类的非静态成员函数中返回对象本身，可使用 return* this
//*/
//class Person {
//
//	//1.当形参和成员变量同名时，可用this指针来区分.this指针指向 被调用的成员函数 所属的对象
//public:
//	int age;
//
//	Person(int age) {
//		this->age = age;
//	}
//	
//	//2.在类的非静态成员函数中返回对象本身，可使用 return*this
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
//	//链式编程
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