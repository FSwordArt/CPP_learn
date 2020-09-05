/*
双端队列容器
*/

//#include <iostream>
//#include <string>
//using namespace std;
//#include <deque>
//#include <algorithm>
// 
//
//void Print(const deque<int>& q) {
//	for (deque<int>::const_iterator it = q.begin(); it != q.end(); ++it) {
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
///*
//默认构造
//拷贝构造
//*/
//void test01() {
//	
//	deque<int> de;
//	for (int i = 0; i < 10; i++) {
//		de.push_back(i);
//	}
//
//	Print(de);
//
//	deque<int> de1(de.begin(), de.end());
//	Print(de1);
//
//	deque<int> de2(10, 100);
//	Print(de2);
//
//	deque<int> de3(de2);
//	Print(de3);
//}
//
///*
//插入及删除
//*/
//void test02() {
//
//	deque<int> d1;
//
//	d1.push_front(10);
//	d1.push_front(20);
//	d1.push_back(100);
//	d1.push_back(200);
//	Print(d1);
//
//	deque<int> d2;
//	d2.insert(d2.begin(), d1.begin(), d1.end());
//	Print(d2);
//
//	deque<int>::iterator it = d2.begin();
//	it++;
//	d2.erase(it);
//	for (int i = 0; i < d2.size(); i++) {
//		cout << d2[i] << " ";
//		cout << d2.at(i) << " ";
//	}
//	cout << endl;
//	
//	//Print(d2);
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