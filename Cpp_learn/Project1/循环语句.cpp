#include <iostream>
#include <ctime>
using namespace std;

/*
break ֻ��Ӱ�쵽�������ڵ�ѭ��
continue ֻ�˳����ѭ��������Ӱ������ѭ��

*/
int main_while() {

	//������������ ���ã����õ�ǰʱ�亯���������������ֹ���ɵ��������һ����
	srand((unsigned)time(NULL));

	int num = rand() % 100 + 1;
	int input = 0;

	cout << "����" << endl;
	cin >> input;


	while (input != num) {

		if (input < num) {
			cout << "С" << endl;
		}

		else if (input > num) {
			cout << "��" << endl;
		}

		else {
			cout << "True" << endl;
			break;
		}

		cout << "����" << endl;
		cin >> input;


	}
	return 0;
}


int main_dowhile() {

	int num = 100;
	int gw = 0;
	int sw = 0;
	int bw = 0;

	do {

		gw = num % 10;
		sw = num / 10 % 10;
		bw = num / 100;

		if (bw * bw * bw  + sw * sw * sw + gw * gw * gw == num) {
			cout << num << endl;
		}

		num++;

	} while (num < 1000);

	return 0;
}

int main_for() {

	for (int num = 0; num < 1000; num++) {

		int c1 = num % 7;
		int c2 = num % 100;
		int c3 = num / 10 % 10;
		int c4 = num / 100;

		if (c1 == 0 || c2 == 7 || c3 == 7 || c4 == 7) {
			cout << num << endl;
		}
	}

	return 0;
}



int main_print() {

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < i+1; j++) {
			cout << i << "*" << j << "=" << i*j << "\t";
		}
		cout << endl;
	}

	return 0;
}

int main_continue() {
	for (int i = 0; i < 10; i++) {

		if (i == 5) {
			continue;
		}
		cout << i << endl;
	}

	return 0;
}












