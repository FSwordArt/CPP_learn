#include <iostream>
#include <string>
using namespace std;


/*
C++���峣���ķ�ʽ
#define �곣�� #define ������ ����ֵ
const ���εı��� const �������� ������ = ����ֵ
һ���޸ľͻᱨ��
*/
#define day 7

int main_constant() {

	const int month = 12;

	cout << "һ����:" << day << "��" << endl;
	system("pause");
	return 0;

}

/*
sizeof(��������/����)
*/
int main_sizeof() {
	cout << "short=" << sizeof(short) << endl;
	cout << "int=" << sizeof(int) << endl;
	cout << "long=" << sizeof(long) << endl;
	cout << "long long=" << sizeof(long long) << endl;

	system("pause");
	return 0;
}


/*
��ѧ������
e2   ����10**2 
e-2  ����0.1**2
*/

/*
�ַ��� char ch = 'a'

�ַ�����C char ������[] = "�ַ���ֵ"
		
	    C++ string ������ = "�ַ���ֵ"  ����Ҫ��ͷ�ļ�string

*/

int main_bool() {
	bool str = false;
	cout << "���������͸�ֵ" << endl;
	cin >> str;
	cout << "str=" << str << endl;
	
	system("pause");
	return 0;
}


/*
ǰ�õ��������ñ���+1��Ȼ����б��ʽ����
���õ������Ƚ��б��ʽ���㣬Ȼ���ñ���+1
*/

int main_add() {
	
	int a = 10;
	int b = ++a * 10;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	int c = 10;
	int d = c++ * 10;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;

	system("pause");
	return 0;

}

int main_if() {
	int score = 0;
	char q = 'q';
	while(true){

		cout << "�������" << endl;
		cin >> score;

		if (score >= 600) {
			cout << "a" << endl;
		}
		else if (score >= 500 && score < 600) {
			cout << "b" << endl;
		}
		else {
			cout << "c" << endl;
		}
	}
	return 0;
}



	