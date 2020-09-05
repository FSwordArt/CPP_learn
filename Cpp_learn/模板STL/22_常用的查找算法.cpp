//#include <iostream>
//using namespace std;
//#include <string>
//#include <vector>
//#include <algorithm>
//
//
//class Person {
//
//public:
//	string m_Name;
//	int m_Age;
//
//	Person(string name, int age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(const Person& p) {
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//};
//
//void test01() {
//
//	vector<Person> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//
//	if (it != v.end()) {
//		cout << "find " << it->m_Name << " " << it->m_Age << endl;
//	}
//	else {
//		cout << "no";
//	}
//}
//
////find_if 按条件查找
////adjacent_find(v.begin(), v.end(), num) 查找相邻重复的元素，并返回最前面的位置
////binary_search(iterator beg, iterator end, value) 容器必须是有序序列，找到true,没false
////count(iterator beg, iterator end, value) 返回个数
//class Person2 {
//
//public:
//	string m_Name;
//	int m_Age;
//
//	Person2(string name, int age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	//重载==运算符
//	bool operator==(const Person2& p) {
//		if (this->m_Age == p.m_Age) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//};
//
//void test02() {
//
//	vector<Person2> v;
//	Person2 p1("1", 1);
//	Person2 p2("2", 2);
//	Person2 p3("3", 1);
//	Person2 p4("4", 1);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	Person2 p("5", 1);
//	int num = count(v.begin(), v.end(), p);
//	cout << num << endl;
//
//}
//
////cout_if(iterator begin, iterator end, 谓词)
//class Person3 {
//
//public:
//	string m_Name;
//	int m_Age;
//
//	Person3(string name, int age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//};
//
//class GreaterFive {
//public:
//	bool operator()(const Person3& p) {
//		return p.m_Age > 5;
//	}
//};
//
//
//void test03() {
//
//	vector<Person3> v;
//
//	Person3 p1("a", 10);
//	Person3 p2("b", 30);
//	Person3 p3("c", 4);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	int num = count_if(v.begin(), v.end(),GreaterFive());
//	cout << "容器中大于5的个数：" << num << endl;
//}
//
//
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//
//
//	system("pause");
//	return 0;
//}