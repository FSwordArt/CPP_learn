#include <iostream>
#include <string>
using namespace std;

struct student{

	string name;
	int age;
	int score;

};

//���βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µ�������const���Ա�֤��ֹ���
void printstudent1(const student* s) {
	cout << s->name << endl;

}

int main_6() {

	student s = {"����", 18, 80};
	printstudent1(&s);



	system("pause");
	return 0;
}


/*
void printstudent(student* arr, int len) {

	for (int i = 0; i < len; i++) {

		cout << arr->name << endl;
		arr++;
	}
}

int main() {

	student s[3] = {

		{"����", 18, 80},
		{"����", 19, 85},
		{"����", 20, 90}
	
	};

	printstudent(s, 3);

	system("pause");
	return 0;
}
*/
