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
//	//����ǰ��++���������������Ϊ��һֱ��һ�����ݽ��в���
//	MyInteger& operator++() {
//		
//		//�Ƚ���++����0
//		m_Num++;
//
//		//�ٽ�������
//		return *this;
//	}	
//
//	MyInteger operator++(int) {//���ܷ������ã����ص��Ǿֲ���ֵ��������������ͷ��ڴ�
//
//		MyInteger tmp = *this;
//		m_Num++;
//
//		return tmp;
//	}
//};
//
////����<<�����
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
