//#include <iostream>
//#include <list>
//#include <algorithm>
//using namespace std;
//
//void PrintInfo(const list<int>& l) {
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//
//	list<int> lst;
//	lst.push_back(10);
//	lst.push_back(20);
//	lst.push_back(30);
//	PrintInfo(lst);
//
//	//list<int> l1(lst);
//	//PrintInfo(l1);
//
//	//list<int> l2;
//	//l2 = l1;
//	//PrintInfo(l2);
//
//	list<int>::iterator sit = lst.begin();
//	lst.insert(++sit, 1000);
//	PrintInfo(lst);
//	lst.erase(sit);
//	PrintInfo(lst);
//
//}
//
//bool MyCompare(int v1, int v2) {
//	return v1 > v2;
//}
//void test02() {
//
//	list<int> L;
//	L.push_back(3);
//	L.push_back(1);
//	L.push_back(5);
//	L.push_back(2);
//	L.push_back(4);
//
//	L.sort();
//	PrintInfo(L);
//
//	//½µÐò
//	L.sort(MyCompare);
//	PrintInfo(L);
//
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}