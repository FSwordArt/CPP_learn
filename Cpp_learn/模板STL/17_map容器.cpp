//#include <iostream>
//#include <map>
//using namespace std;
//
//void PrintMap(map<int, int>& m) {
//
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it) {
//		cout << "key = " << (*it).first << "   value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01() {
//
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	PrintMap(m);
//
//	//拷贝构造
//	map<int, int> m2(m);
//	PrintMap(m2);
//
//	//赋值
//	map<int, int> m3;
//	m3 = m;
//	PrintMap(m3);
//
//	if (m.empty()) {
//		cout << "m为空" << endl;
//	}
//	else {
//		cout << m.size() << endl;
//	}
//
//	map<int, int> m4;
//	m4.insert(pair<int, int>(3, 100));
//	m4.insert(pair<int, int>(4, 200));
//	m4.insert(pair<int, int>(5, 300));
//	m4.insert(pair<int, int>(6, 400));
//	PrintMap(m4);
//
//	m.swap(m4);
//	PrintMap(m4);
//}
//
//void test02() {
//
//	map<int, int> m1;
//	//插入
//	//1.
//	m1.insert(pair<int, int>(10, 100));
//	//2.
//	m1.insert(make_pair(20, 200));
//	//3.
//	m1.insert(map<int, int>::value_type(30, 300));
//	//4.不建议插入，可以使用[]来找到这个数
//	m1[40] = 400;
//	PrintMap(m1);
//
//	map<int, int>::iterator it = m1.begin(); 
//	m1.erase(it);
//	m1.erase(m1.begin());
//	m1.erase(30); //按照key方式进行删除
//	PrintMap(m1);
//
//}
//class MyCompare {
//public:
//	bool operator()(int m1, int m2) const{
//		return m1 > m2;
//	}
//};
//
//void PrintMap2(map<int, int, MyCompare>& m) {
//
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it) {
//		cout << "key = " << (*it).first << "   value = " << it->second << endl;
//	}
//	cout << endl;
//}
//void test03() {
//
//	map<int, int, MyCompare> m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(3, 30));
//	m1.insert(pair<int, int>(4, 40));
//
//	PrintMap2(m1);
//}
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