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

	//创建结构体变量
	//struct Student s = {"张三", 18, 100};
	Student s = { "张三", 18, 100 };

	//通过指针指向结构体变量
	Student* p = &s;

	//通过指针指向结构体变量中的数据
	cout << "姓名：" << p->name
		 << " 年龄：" << p->age
		 << " 分数：" << p->score << endl;


	system("pause");
	return 0;
}