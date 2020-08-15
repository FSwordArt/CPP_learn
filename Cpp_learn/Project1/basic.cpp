#include <iostream>
#include <string>
using namespace std;


/*
C++定义常量的方式
#define 宏常量 #define 变量名 变量值
const 修饰的变量 const 数据类型 常量名 = 常量值
一旦修改就会报错
*/
#define day 7

int main_constant() {

	const int month = 12;

	cout << "一周有:" << day << "天" << endl;
	system("pause");
	return 0;

}

/*
sizeof(数据类型/变量)
*/
int main_sizeof() {
	cout << "short=" << sizeof(short) << endl;
	cout << "int=" << sizeof(int) << endl;
	cout << "long=" << sizeof(long) << endl;
	cout << "long long=" << sizeof(long long) << endl;

	system("pause");
	return 0;
}


/*
科学计数法
e2   代表10**2 
e-2  代表0.1**2
*/

/*
字符： char ch = 'a'

字符串：C char 变量名[] = "字符串值"
		
	    C++ string 变量名 = "字符串值"  必须要有头文件string

*/

int main_bool() {
	bool str = false;
	cout << "给布尔类型赋值" << endl;
	cin >> str;
	cout << "str=" << str << endl;
	
	system("pause");
	return 0;
}


/*
前置递增：先让变量+1，然后进行表达式运算
后置递增：先进行表达式运算，然后让变量+1
*/

int main_add() {
	
	int a = 10;
	int b = ++a * 10;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	int c = 10;
	int d = c++ * 10;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;

	system("pause");
	return 0;

}

int main_if() {
	int score = 0;
	char q = 'q';
	while(true){

		cout << "输入分数" << endl;
		cin >> score;

		if (score >= 600) {
			cout << "a" << endl;
		}
		else if (score >= 500 && score < 600) {
			cout << "b" << endl;
		}
		else {
			cout << "c" << endl;
		}
	}
	return 0;
}



	