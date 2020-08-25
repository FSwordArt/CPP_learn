//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//1.使用一个已经创建完毕的对象来初始化一个新对象
//2.值传递的方式给函数参数传值
//3.值方式返回局部对象
//*/
//
//class Person {
//
//public:
//
//	int m_age;
//
//	Person() {
//		cout << "Person无参构造函数的调用" << endl;
//	}
//
//	Person(int age) {
//		m_age = age;
//		cout << "Person有参构造函数的调用" << endl;
//
//	}
//
//	//拷贝构造函数
//	Person(const Person& p) {
//		m_age = p.m_age;
//		cout << "Person拷贝构造函数的调用" << endl;
//	}
//
//	~Person() {
//		cout << "Person析构函数的调用" << endl;
//	}
//};
//
////调用
//void test2_1() {
//
//	//1.使用一个已经创建完毕的对象来初始化一个新对象
//	Person p1(10);
//	Person p2(p1);
//	cout << "p2的值" << p2.m_age << endl;
//	
//}
//
////2.值传递的方式给函数参数传值
//void doWork(Person p) {
//
//}
//
//void test2_2() {
//	Person p;
//	doWork(p);
//}
//
////3.值方式返回局部对象
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
