//#include <iostream>
//using namespace std;
//#include <string>
//
//class MyInteger {
//
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//
//private:
//	int m_Num;
//
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//
//	//重载前置++运算符，返回引用为了一直对一个数据进行操作
//	MyInteger& operator++() {
//		
//		//先进行++运算0
//		m_Num++;
//
//		//再将自身返回
//		return *this;
//	}	
//
//	MyInteger operator++(int) {//不能返回引用，返回的是局部的值，函数结束后会释放内存
//
//		MyInteger tmp = *this;
//		m_Num++;
//
//		return tmp;
//	}
//};
//
////重载<<运算符
//ostream& operator<<(ostream& cout, MyInteger myint) {
//	cout << myint.m_Num;
//
//	return cout;
//}
//
//void test01() {
//	MyInteger myint;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//}
//
//void test02() {
//
//	MyInteger myint;
//
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
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
