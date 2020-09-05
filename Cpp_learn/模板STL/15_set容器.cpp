//#include <iostream>
//#include <set>
//using namespace std;
//
////void Print(set<int> s) {
////	for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
////		cout << *it << " ";
////	}
////	cout << endl;
////}
////void test01() {
////
////	set<int> s1;
////
////	//插入数据只有insert
////	s1.insert(20);
////	s1.insert(40);
////	s1.insert(10);
////	s1.insert(50);
////	s1.insert(30);
////
////	//所有元素在插入的时候会自动排序，set容器不允许插入同样的值
////	Print(s1);
////
////	set<int>::iterator pos = s1.find(30);
////
////	cout << s1.count(30) << endl;
////
////}
////
/////*
////set和mulset的区别
////*/
////void test02() {
////
////	set<int> s1;
////
////	//插入数据只有insert
////	pair<set<int>::iterator, bool> ret = s1.insert(20);
////	if (ret.second) {
////		cout << "success" << endl;
////	}
////	else {
////		cout << "fail" << endl;
////	}
////
////	ret = s1.insert(20);
////	if (ret.second) {
////		cout << "success" << endl;
////	}
////	else {
////		cout << "fail" << endl;
////	}
////}
//
////set容器排序
////set存放内置数据类型
//class MyCompare {
//public:
//	bool operator()(int v1, int v2) const{
//		return v1 > v2;
//	}
//};
//	
//void Print2(set<int, MyCompare> s) {
//	for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test03() {
//	//在创建容器插入数据之前告诉编译器
//	set<int, MyCompare> s1;
//	
//	s1.insert(10);
//	s1.insert(2);
//	Print2(s1);
//}
//
//class Person {
//public:
//	string m_Name;
//	int m_Age;
//
//	Person(string name, int age) {
//		m_Name = name;
//		m_Age = age;
//	}
//};
//
//class myCompare {
//public:
//	bool operator()(Person p1, Person p2) const{
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void Print3(set<Person, myCompare>& s){
//	for (set<Person, myCompare>::iterator it = s.begin(); it != s.end(); ++it) {
//		cout << (*it).m_Name << " " << (*it).m_Age << endl;
//	}
//}
//
//void test04() {
//
//	set<Person, myCompare> s;
//
//	Person p1("T", 25);
//	Person p2("J", 21);
//	Person p3("X", 29);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//
//	Print3(s);
//
//}
//int main() {
//
//	//test01();
//	//test02();
//	//test03();
//	test04();
//
//
//	system("pause");
//	return 0;
//}