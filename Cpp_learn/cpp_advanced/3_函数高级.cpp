#include <iostream>
using namespace std;

/*-------------------------Ĭ�ϲ���-------------------------*/
//���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
int func1(int a = 10, int b = 20);

//int func(int a = 10, int b = 20) {//���Ĭ�ϲ����Ǵ����
//	return a + b;
//}
int func1(int a, int b) {
	return a + b;
}



/*-------------------------����ռλ����-------------------------*/
//����ֵ���� ���������������ͣ� int func(int a, int){}
//ռλ����������Ĭ��ֵ
void func2(int a, int = 10) {

	cout << "this is a func" << endl;
}

/*-------------------------��������-------------------------*/
//�������ص�����
//1.ͬһ����������
//2.�������Ʋ�ͬ
//3.�����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
//4.����ֵ������Ϊ�������ص�����

void func3() {
	cout << "this is func3" << endl;
}

void func3(int a) {
	cout << "this is func3(int a)" << endl;
}

void func3(double a) {
	cout << "this is func3(double a)" << endl;
}

void func3(double a, int b) {
	cout << "this is func3(double a, int b)" << endl;
}

void func3(int a, double b) {
	cout << "this is func3(int a, double b)" << endl;
}


/*-------------------------��������ע������-------------------------*/

//1.������Ϊ�������ص�����
void func4(int& a) {
	cout << "this is func4(int& a)" << endl;
}

void func4(const int& a) {
	cout << "this is func4(const int& a)" << endl;
}

//2.������������Ĭ�ϲ���
void func5(int a) {
	cout << "this is func5(int a)" << endl;
}

void func5(int a, int b= 10) {//ͨ������
	cout << "this is (int a, int b= 10)" << endl;
}

int main() {

	//cout << func1() << endl;
	//func2(10, 10);
	//func3();
	//int a = 10;
	//func4(a);//��һ��
	//func4(10);//�ڶ���

	//func5(10);



	return 0;
}


