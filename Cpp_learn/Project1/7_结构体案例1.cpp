#include <iostream>
#include <string>
#include <ctime>
using namespace std;


struct student {
	string sName;
	int score;
};

struct teacher {
	string tName;
	
	student sArray[5];
};

void add(teacher tArray[], int len) {

	string NameSeed = "ABCDE";
	for (int i = 0; i < len; i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += NameSeed[i];

		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += NameSeed[j];

			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		}
	}
}

void printTS(teacher tArray[], int len) {

	for (int i = 0; i < len; i++) {
		cout << "��ʦ������Ϊ��" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++) {
			cout <<"\tѧ��������Ϊ��" << tArray[i].sArray[j].sName
				 << " ���Է���Ϊ��" << tArray[i].sArray[j].score << endl;
		}
	}

}
int main_7() {
	srand((unsigned int)time(NULL));

	//������ʦ������
	teacher tArray[3];

	//����ʦѧ����ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	add(tArray, len);

	//��ӡ��Ϣ
	printTS(tArray, len);



	return 0;


}