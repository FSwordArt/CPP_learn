#include <iostream>
#include <string>
using namespace std;

/*
struct �ṹ���� {�ṹ���Ա�б�}

������ʽ
struct �ṹ���� ������
struct �ṹ����	������={��Ա1ֵ����Ա2ֵ}
����ṹ��ʱ˳�㴴������
*/

struct Student {

	string name;
	int age;
	int score;

}s3;//3.����ṹ��ʱ˳�㴴������

int main_1() {

	//1.struct �ṹ���� ������
	//struct �ؼ��ֿ���ʡ��
	struct Student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 80;
	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;

	//2.struct �ṹ����	������={��Ա1ֵ����Ա2ֵ}
	struct Student s2 = { "����", 19, 85 };
	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;


	system("pause");
	return 0;
}


