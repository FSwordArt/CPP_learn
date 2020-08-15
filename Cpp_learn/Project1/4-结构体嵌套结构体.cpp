#include <iostream>
#include <string>

using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;

};

int main_4() {

	Teacher t;
	t.id = 10000;
	t.name = "Sammi";
	t.age = 50;
	t.stu.name = "Sam";
	t.stu.age = 22;
	t.stu.score = 90;

	cout << "Êä³ö" << endl;

	system("pause");
	return 0;
}