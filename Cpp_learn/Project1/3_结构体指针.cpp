#include <iostream>
#include <string>
using namespace std;


struct Student
{
	string name;
	int age;
	int score;
};

int main_3() {

	//�����ṹ�����
	//struct Student s = {"����", 18, 100};
	Student s = { "����", 18, 100 };

	//ͨ��ָ��ָ��ṹ�����
	Student* p = &s;

	//ͨ��ָ��ָ��ṹ������е�����
	cout << "������" << p->name
		 << " ���䣺" << p->age
		 << " ������" << p->score << endl;


	system("pause");
	return 0;
}