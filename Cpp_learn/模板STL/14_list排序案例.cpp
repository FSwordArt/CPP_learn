//#include <iostream>
//#include <string>
//#include <list>
//using namespace std;
//
//
//class Person {
//
//public:
//	Person(string name, int age, int height) {
//		m_Name = name;
//		m_Age = age;
//		m_Height = height;
//	}
//
//public:
//	string m_Name;
//	int m_Age;
//	int m_Height;
//};
//
//void Print(list<Person> l) {
//	for (list<Person>::iterator pit = l.begin(); pit != l.end(); ++pit) {
//		cout << "姓名：" << pit->m_Name << "  年龄：" << pit->m_Age << "  身高：" << pit->m_Height << endl;
//	}
//}
//
//bool ComparePerson(Person& p1, Person& p2) {
//	if (p1.m_Age == p2.m_Age) {
//		return p1.m_Height > p2.m_Height;
//	}
//	else {
//		return p1.m_Age < p2.m_Age;
//	}
//}
//
//void test01() {
//
//	list<Person> l;
//
//	Person p1("刘备", 35, 175);
//	Person p2("曹操", 45, 180);
//	Person p3("孙权", 40, 170);
//	Person p4("赵云", 25, 190);
//	Person p5("张飞", 35, 160);
//	Person p6("关羽", 35, 200);
//
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	l.push_back(p5);
//	l.push_back(p6);
//
//	Print(l);
//	cout << "----------排序后----------" << endl;
//	l.sort(ComparePerson);
//	Print(l);
//
//
//}
//
//int main() {
//
//	test01();
//
//
//
//	system("pause");
//	return 0;
//}