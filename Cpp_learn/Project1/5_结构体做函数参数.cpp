#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;

};

//值传递
void printstudent1(Student s) {

	cout << "name:" << s.name
		 << " age:" << s.age
		 << " score:" << s.score << endl;

}

//地址传递
void printstudent2(Student* p) {

	cout << "name:" << p->name
		 << " age:" << p->age
		 << " score:" << p->score << endl;

}


int main_5() {

	struct Student s;
	s.name = "Sam";
	s.age = 18;
	s.score = 85;

	printstudent1(s);
	printstudent2(&s);

	system("pause");
	return 0;

}