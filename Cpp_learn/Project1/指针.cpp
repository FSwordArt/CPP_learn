#include <iostream>
using namespace std;


int main_jichu() {

	/*ָ��Ļ�������*/
	//float a = 10.1;
	//float* p = &a;

	////��¼ָ����ռ�ռ䣬��32λ�»������͵Ķ�Ϊ4��64 Ϊ8
	//cout << "��ռ�ڴ棺" << sizeof(int*) << endl;
	//cout << "��ռ�ڴ棺" << sizeof(float*) << endl;
	//cout << "��ռ�ڴ棺" << sizeof(double*) << endl;
	//cout << "��ռ�ڴ棺" << sizeof(char*) << endl;

	//cout << *p << endl;

	//cout << "a�ĵ�ַ��" << &a << endl;
	//cout << "p�ĵ�ַ��" << p << endl;

	//*p = 1000;
	//cout << "a = " << a << endl;
	//cout << "*p = " << *p << endl;
 /*-------------------------------------------------------------*/
	
	/*
	��ָ��
	1�����ڸ�ָ�������ʼ��
	2����ָ���ǲ����Խ��з��ʵ�
	*/

	//int* p = NULL;
	////*p = 100; �Ǵ����
	//int a = 100;
	//p = &a;
	//cout << *p << endl;


	/*
	Ұָ�룺ָ�����ָ��Ƿ����ڴ�ռ�
	*/
	int* p = (int*)0x1100;
	cout << *p << endl;

	/*��ָ���Ұָ�붼��������������ʵĿռ䣬��˲�Ҫ����*/
	/*-----------------------------------------------------*/

	system("pause");
	return 0;
}