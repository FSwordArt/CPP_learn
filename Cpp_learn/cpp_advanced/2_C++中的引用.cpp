#include <iostream>
#include <string>
using namespace std;

/*
���ã������������
�������� &���� = ԭ��
���ñ����ʼ�������ó�ʼ���󲻿ɸ���
������һ��ָ�볣��
int& ref = a, ϵͳ���Զ�ת��Ϊ int* const ref = &a
*/

/*
void swap1(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap2(int* a, int* b) {

	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap3(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {

	int a = 10;
	int b = 20;
	//swap1(a, b);
	//swap2(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap3(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	

	system("pause");
	return 0;
}
*/



/*
�����������ķ���ֵ
*/

//1.��Ҫ���ھֲ�����������
int& test01() {

	int a = 10;
	return a;
}

//�����ĵ��ÿ�����Ϊ��ֵ
int& test02() {

	static int a = 10; //��̬���ݴ����ȫ��������������ϵͳ�ͷ�
	return a;
}
int main_2() {


	//int& ref = test01();
	//cout << "ref = " << ref << endl;
	//cout << "ref = " << ref << endl;//������ջ�У��Ѿ����ͷ�

	//int& ref = test02();
	//cout << "ref = " << ref << endl;

	//test02() = 1000; //�൱��a = 20
	////test02���ص���a,a = 1000,ref��a�ı�������������ķ���ֵ�����ã������ĵ��ÿ�����Ϊ��ֵ	
	//cout << "ref = " << ref << endl;

	const int& ref = 10;
	//����һ�д����൱�� int tmp = 10�� const int& ref = tmp

	//const ��Ҫ��Ϊ�˷�ֹ����ʱ�������
	



	system("pause");
	return 0;
}