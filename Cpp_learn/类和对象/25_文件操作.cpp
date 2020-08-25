#include <iostream>
using namespace std;
#include <string>
#include <fstream>

/*
写文件：
1、包含头文件 fstream
2、创建流对象 ofstream ofs
3、指定打开方式
4、写内容
5、关闭文件
*/

void writefile() {

	ofstream ofs;

	ofs.open("E:\\program_github\\C++\\Cpp_learn\\文件操作test.txt", ios::out);

	ofs << "name: Tom" << endl;
	ofs << "age: 18" << endl;
	ofs << "sex: male" << endl;

	ofs.close();
}

/*
读文件：
1、包含头文件 fstream
2、创建流对象 ifstream ifs
3、打开文件并判断是否打开成功 ifs.open("文件路径", 打开方式)
4、读数据
5、关闭文件
*/

void readfile() {
	//2.
	ifstream ifs;

	//3.
	ifs.open("E:\\program_github\\C++\\Cpp_learn\\文件操作test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}

	//4.
	//第一种
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf))) {
	//	cout << buf << endl;
	//}

	//第二种
	//char buf[1024] = { 0 };
	//while (ifs >> buf) {
	//	cout << buf << endl;
	//}

	//第三种
	//string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}

	//第四种
	char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}

	//5.
	ifs.close();
}

/*
二进制写文件
*/
class Person {

public:
	char m_Name[64];
	int m_Age;
};

void binarywrite() {

	ofstream ofs("E:\\program_github\\C++\\Cpp_learn\\二进制文件操作test.txt", 
                ios::out | ios::binary);

	Person p = { "张三", 18 };
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();
}

void binaryread() {

	ifstream ifs("E:\\program_github\\C++\\Cpp_learn\\二进制文件操作test.txt",
		        ios::in | ios::binary);

	if (!ifs.is_open()) {
		cout << "打开失败" << endl;
		return;
	}

	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << p.m_Name << endl;
	cout << p.m_Age << endl;

	ifs.close();
}
int main() {

	//writefile();
	//readfile();
	//binarywrite();
	binaryread();

	system("pause");
	return 0;
}