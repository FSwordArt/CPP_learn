#include <iostream>
#include <string>
using namespace std;
/*
����һ���ṹ��
�����ṹ������
���ṹ���е�Ԫ�ظ�ֵ
�����ṹ������
*/

//1.����һ���ṹ��
struct Student {

	string name;
	int age;
	int score;

};

int main_2() {

	//2.�����ṹ������
	struct Student stuArray[3] = {

		{"����", 18, 80},
		{"����", 19, 85},
		{"����", 20, 90}

	};

	//3.���ṹ���е�Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	stuArray[2].age = 21;
	stuArray[2].score = 95;

	//4.�����ṹ������
	for (int i = 0; i < 3; i++) {

		cout << "������" << stuArray[i].name
			 << " ���䣺" << stuArray[i].age
			 << " ������" << stuArray[i].score << endl;
	}

	system("pause");
	return 0;
}