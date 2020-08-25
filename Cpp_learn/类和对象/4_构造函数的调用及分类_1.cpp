//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//两种分类方式：
//按参数分为：有参构造和无参构造（默认构造）
//按类型分为：普通构造和拷贝构造
//*/
//
///*
//三种调用方式：
//括号法、显示法、隐式转换法
//*/
//
//class Person {
//
//public:
//
//	int age;
//	Person() {
//		cout << "Person无参构造函数的调用" << endl;
//
//	}
//
//	Person(int a) {
//		age = a;
//		cout << "Person有参构造函数的调用" << endl;
//
//	}
//
//	//拷贝构造函数
//	Person(const Person& p) {
//		age = p.age;
//		cout << "Person拷贝构造函数的调用" << endl;
//
//	}
//
//	~Person() {
//		cout << "Person析构函数的调用" << endl;
//	}
//};
//
////调用
//void test1() {
//	//1.括号法
//	//注意：构造默认构造时不要加（）,即 Person p;
//	Person p(10);//调用有参构造函数
//	Person p1(p);//调用拷贝构造函数
//
//	//2.显示法
//	//注意：不要利用拷贝构造函数来初始化匿名对象 。Person(p3) === Person p3
//	//Person(10)匿名对象，特点：当前执行结束后，系统会立即回收匿名对象
//	Person p2 = Person(10);
//	Person p3 = Person(p2);
//
//	//3.隐式转换法
//	Person p4 = 10;//相当于Person p4 = Person(10)
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
