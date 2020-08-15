#include <iostream>
#include <string>
using namespace std;
/*
创建一个结构体
创建结构体数组
给结构体中的元素赋值
遍历结构体数组
*/

//1.创建一个结构体
struct Student {

	string name;
	int age;
	int score;

};

int main_2() {

	//2.创建结构体数组
	struct Student stuArray[3] = {

		{"张三", 18, 80},
		{"李四", 19, 85},
		{"王五", 20, 90}

	};

	//3.给结构体中的元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 21;
	stuArray[2].score = 95;

	//4.遍历结构体数组
	for (int i = 0; i < 3; i++) {

		cout << "姓名：" << stuArray[i].name
			 << " 年龄：" << stuArray[i].age
			 << " 分数：" << stuArray[i].score << endl;
	}

	system("pause");
	return 0;
}