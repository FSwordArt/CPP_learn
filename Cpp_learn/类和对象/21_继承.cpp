//#include <iostream>
//using namespace std;
//#include <string>
//
///*
//�̳��﷨��
//class ���ࣺ�̳з�ʽ ����
//�̳з�ʽ��
//�����̳�
//�����̳�
//˽�м̳�
//*/
//
//
////class BasePage1 {
////
////public:
////	void header() {
////		cout << "Base1ͷ������" << endl;
////	}
////
////	void footer() {
////		cout << "Base1β������" << endl;
////	}
////
////	void left() {
////		cout << "Base1������" << endl;
////	}
////};
////
////class BasePage2 {
////
////public:
////	void header() {
////		cout << "Base2ͷ������" << endl;
////	}
////
////	void footer() {
////		cout << "Base2β������" << endl;
////	}
////
////	void left() {
////		cout << "Base2������" << endl;
////	}
////};
////
////
////
////class Java :public BasePage1, public BasePage2 {
////public:
////	void middle() {
////		cout << "Java�м䲿������" << endl;
////	}
////};
////
////
////void test01() {
////	//�����̳�
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
////������̳н�����μ̳е����⣬�ڼ̳�֮ǰ����Virtual
////Animal�������
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
