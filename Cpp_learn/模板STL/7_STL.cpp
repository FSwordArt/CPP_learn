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
////vector存放内置数据类型
//
//void test01() {
//
//	//创建一个容器，数组
//	vector<int> v;
//
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	////通过迭代器访问数组中的数据，第一种方式
//	//vector<int>::iterator itBegin = v.begin();//起始迭代器，指向容器中的第一个元素
//	//vector<int>::iterator itEnd = v.end();//结束迭代器，指向容器中最后一个元素的下一个元素
//
//	//while (itBegin != itEnd) {
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//
//	//第二种方式
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
//	//	cout << *it << endl;
//	//}
//
//
//	//第三种方式
//	//for_each(v.begin(), v.end(), Print);
//}
//
////vector容器中存放自定义的数据类型
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
////容器嵌套容器
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