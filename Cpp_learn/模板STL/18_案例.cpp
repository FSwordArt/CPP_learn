//#include<iostream>
//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//
//#define CEHUA  0
//#define MEISHU 1
//#define YANFA  2
//
//class Person {
//public:
//	string m_Name;
//	int m_Salary;
//};
//
//
//void setPerson(vector<Person>& v){
//
//	string NameSeed = "ABCDEFGHIJ";
//
//	for (int i = 0; i < 10; i++) {
//
//		Person p;
//		p.m_Name = "员工";
//		p.m_Name += NameSeed[i];
//
//		p.m_Salary = rand() % 1001 + 1000;
//
//		v.push_back(p);
//	}
//}
//
//void printPerson(vector<Person>& v) {
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it) {
//		cout << "姓名：" << it->m_Name << "   工资：" << it->m_Salary << endl;
//	}
//}
//
//void setGroup(vector<Person>& v, multimap<int, Person>& m) {
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it) {
//
//		int deptId = rand() % 3;
//		m.insert(pair<int, Person>(deptId, *it));
//	}
//}
//
//void showPerson(multimap<int, Person>& m) {
//
//	cout << "策划部门" << endl;
//	int count = m.count(CEHUA);
//	int index = 0;
//
//	for (multimap<int, Person>::iterator pos = m.find(CEHUA); pos != m.end() && index < count; pos++, index++) {
//		cout << "姓名：" << (*pos).second.m_Name << "   工资：" << pos->second.m_Salary << endl;
//	}
//
//	cout << endl;
//	
//	cout << "美术部门" << endl;
//	count = m.count(MEISHU);
//	index = 0;
//	for (multimap<int, Person>::iterator pos = m.find(MEISHU); pos != m.end() && index < count; pos++, index++) {
//		cout << "姓名：" << (*pos).second.m_Name << "   工资：" << pos->second.m_Salary << endl;
//	}
//
//	cout << endl;
//
//	cout << "研发部门" << endl;
//	count = m.count(YANFA);
//	index = 0;
//	for (multimap<int, Person>::iterator pos = m.find(YANFA); pos != m.end() && index < count; pos++, index++) {
//		cout << "姓名：" << (*pos).second.m_Name << "   工资：" << pos->second.m_Salary << endl;
//	}
//
//}
//
//void test01() {
//
//	//创建员工
//	vector<Person> vPerson;
//	setPerson(vPerson);
//	//printPerson(vPerson);
//
//	//员工分组
//	multimap<int, Person> mPerson;
//	setGroup(vPerson, mPerson);
//
//	//打印部分员工
//	showPerson(mPerson);
//
//}
//
//int main(){
//
//
//	test01();
//
//
//	system("pause");
//	return 0;
//}