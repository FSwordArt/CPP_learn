//#include <iostream>
//using namespace std;
//
//
////常函数
//class Person {
//
//public:
//	int m_A;
//	mutable int m_B;
//
//	//this 相当于指针常量， Person* const this 
//	void func1() const{   //常函数 const Person* const this
//		//m_A = 100;
//		m_B = 100;
//	}
//	void func2() {
//		m_A = 100;
//	}
//};
//
////常对象
//void test01() {
//
//	const Person p;
//	//p.m_A = 100;  错误，常对象不可修改变量值
//	p.m_B = 100;
//
//	//常对象只能调用常函数
//	p.func1();
//	//p.func2(); 常对象不可调用普通的成员函数，因为普通成员函数可以修改属性。
//}
//
//int main() {
//
//
//}