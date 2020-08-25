#include <iostream>
using namespace std;
#include <string>
#include <fstream>

/*
д�ļ���
1������ͷ�ļ� fstream
2������������ ofstream ofs
3��ָ���򿪷�ʽ
4��д����
5���ر��ļ�
*/

void writefile() {

	ofstream ofs;

	ofs.open("E:\\program_github\\C++\\Cpp_learn\\�ļ�����test.txt", ios::out);

	ofs << "name: Tom" << endl;
	ofs << "age: 18" << endl;
	ofs << "sex: male" << endl;

	ofs.close();
}

/*
���ļ���
1������ͷ�ļ� fstream
2������������ ifstream ifs
3�����ļ����ж��Ƿ�򿪳ɹ� ifs.open("�ļ�·��", �򿪷�ʽ)
4��������
5���ر��ļ�
*/

void readfile() {
	//2.
	ifstream ifs;

	//3.
	ifs.open("E:\\program_github\\C++\\Cpp_learn\\�ļ�����test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4.
	//��һ��
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf))) {
	//	cout << buf << endl;
	//}

	//�ڶ���
	//char buf[1024] = { 0 };
	//while (ifs >> buf) {
	//	cout << buf << endl;
	//}

	//������
	//string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}

	//������
	char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}

	//5.
	ifs.close();
}

/*
������д�ļ�
*/
class Person {

public:
	char m_Name[64];
	int m_Age;
};

void binarywrite() {

	ofstream ofs("E:\\program_github\\C++\\Cpp_learn\\�������ļ�����test.txt", 
                ios::out | ios::binary);

	Person p = { "����", 18 };
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();
}

void binaryread() {

	ifstream ifs("E:\\program_github\\C++\\Cpp_learn\\�������ļ�����test.txt",
		        ios::in | ios::binary);

	if (!ifs.is_open()) {
		cout << "��ʧ��" << endl;
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