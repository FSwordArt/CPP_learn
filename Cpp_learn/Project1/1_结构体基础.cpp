#include <iostream>
#include <string>
using namespace std;

/*
struct 结构体名 {结构体成员列表}

创建方式
struct 结构体名 变量名
struct 结构体名	变量名={成员1值，成员2值}
定义结构体时顺便创建变量
*/

struct Student {

	string name;
	int age;
	int score;

}s3;//3.定义结构体时顺便创建变量

int main_1() {

	//1.struct 结构体名 变量名
	//struct 关键字可以省略
	struct Student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 80;
	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;

	//2.struct 结构体名	变量名={成员1值，成员2值}
	struct Student s2 = { "李四", 19, 85 };
	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;


	system("pause");
	return 0;
}


