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
		cout << "老师的姓名为：" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++) {
			cout <<"\t学生的姓名为：" << tArray[i].sArray[j].sName
				 << " 考试分数为：" << tArray[i].sArray[j].score << endl;
		}
	}

}
int main_7() {
	srand((unsigned int)time(NULL));

	//创建老师的数组
	teacher tArray[3];

	//给老师学生赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	add(tArray, len);

	//打印信息
	printTS(tArray, len);



	return 0;


}