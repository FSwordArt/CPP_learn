/*
1.�������βκ;ֲ��������ᱣ����ջ�ϣ��ں���ִ����ʱ���Զ��ͷţ�ϵͳΪ�˷�ֹ�������󣬻��Զ�
����һ�Σ������ղ�Ҫ���ؾֲ������ĵ�ַ
*/

#include <iostream>
#include <string>
using namespace std;

int* func() {

	//����new���Խ����ݿ��ٵ�����
	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
	int* p = new int(10); //new���ٵ���һ���ַ��������ָ����н���
	return p;
}

void test01() {

	int* p = func();
	cout << *p << endl;

	delete p; //��Ҫ�ͷŶ������ݣ�ʹ��delete
	//cout << *p << endl;

}

//��new�ڶ�����������
void test02() {

	int* arr = new int[10]; //����һ�����飬��10��Ԫ��
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	//�ͷ�����ʱ��Ҫ��[]�ſ���
	delete[] arr;

}

int main_1() {

	//test01();
	test02();
	system("pause");
	return 0;
}













