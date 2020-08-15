#include <iostream>
#include <string>
using namespace std;

struct student{

	string name;
	int age;
	int score;

};

//将形参改为指针，可以减少内存空间，而且不会复制新的样本。const可以保证防止误该
void printstudent1(const student* s) {
	cout << s->name << endl;

}

int main_6() {

	student s = {"张三", 18, 80};
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

		{"张三", 18, 80},
		{"李四", 19, 85},
		{"王五", 20, 90}
	
	};

	printstudent(s, 3);

	system("pause");
	return 0;
}
*/
