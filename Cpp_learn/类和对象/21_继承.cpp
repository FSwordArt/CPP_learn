//#include <iostream>
//using namespace std;
//#include <string>
//
///*
//继承语法：
//class 子类：继承方式 父类
//继承方式：
//公共继承
//保护继承
//私有继承
//*/
//
//
////class BasePage1 {
////
////public:
////	void header() {
////		cout << "Base1头部内容" << endl;
////	}
////
////	void footer() {
////		cout << "Base1尾部内容" << endl;
////	}
////
////	void left() {
////		cout << "Base1左部内容" << endl;
////	}
////};
////
////class BasePage2 {
////
////public:
////	void header() {
////		cout << "Base2头部内容" << endl;
////	}
////
////	void footer() {
////		cout << "Base2尾部内容" << endl;
////	}
////
////	void left() {
////		cout << "Base2左部内容" << endl;
////	}
////};
////
////
////
////class Java :public BasePage1, public BasePage2 {
////public:
////	void middle() {
////		cout << "Java中间部分内容" << endl;
////	}
////};
////
////
////void test01() {
////	//基本继承
////	Java java;
////	java.BasePage1::header();
////	java.BasePage2::footer();
////	java.BasePage1::left();
////	java.middle();
////
////	 
////}
////
////int main() {
////
////	test01();
////
////
////
////	system("pause");
////	return 0;
////}
//
//class Animal {
//public:
//	int m_Age;
//};
//
////利用虚继承解决菱形继承的问题，在继承之前加上Virtual
////Animal：虚基类
//class Sheep : virtual public Animal {};
//class Tuo : virtual public Animal {};
//
//class SheepTuo : public Sheep, public Tuo {};
//
//
//int main() {
//
//	SheepTuo st;
//	st.Sheep::m_Age = 18;
//	st.Tuo::m_Age = 28;
//	st.m_Age = 18;
//
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
//
//	system("pause");
//	return 0;
//}
//
//
