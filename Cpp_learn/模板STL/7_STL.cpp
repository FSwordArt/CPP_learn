//#include <iostream>
//#include <string>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
//
//void Print(int elem) {
//	cout << elem << endl;
//}
////vector���������������
//
//void test01() {
//
//	//����һ������������
//	vector<int> v;
//
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	////ͨ�����������������е����ݣ���һ�ַ�ʽ
//	//vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ�������еĵ�һ��Ԫ��
//	//vector<int>::iterator itEnd = v.end();//������������ָ�����������һ��Ԫ�ص���һ��Ԫ��
//
//	//while (itBegin != itEnd) {
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//
//	//�ڶ��ַ�ʽ
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
//	//	cout << *it << endl;
//	//}
//
//
//	//�����ַ�ʽ
//	//for_each(v.begin(), v.end(), Print);
//}
//
////vector�����д���Զ������������
//class Person {
//
//public:
//
//	Person(string name, int age) {
//
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test02() {
//
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//
//	vector<Person> v;
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it) {
//		cout << (*it).m_Name << " " << (*it).m_Age <<endl;
//		cout << it->m_Name << " " << it->m_Age << endl;
//	}
//
//}
//
//void test03() {
//
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//
//	vector<Person*> v;
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); ++it) {
//		cout << (*it)->m_Name << " " << (*it)->m_Age << endl;
//	}
//
//}
//
//
////����Ƕ������
//void test04() {
//
//	vector<vector<int>> V;
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	for (int i = 0; i < 5; i++) {
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//	}
//
//	V.push_back(v1);
//	V.push_back(v2);
//	V.push_back(v3);
//
//	for (vector<vector<int>>::iterator Vit = V.begin(); Vit != V.end(); ++Vit) {
//		for (vector<int>::iterator vit = (*Vit).begin(); vit != (*Vit).end(); vit++) {
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}
//
//
//
//int main() {
//
//	//test01();
//	//test02();
//	//test03();
//	test04();
//
//	system("pause");
//	return 0;
//}