//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//class GreaterFive {
//
//public:
//	bool operator()(int val) {
//		return val > 5;
//	}
//};
//
//class MyCompare {
//
//public:
//	bool operator()(int val1, int val2) {
//		return val1 > val2;
//	}
//};
//
//void test01() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());//匿名函数对象
//	if (it == v.end()) {
//		cout << "false" << endl;
//	}
//	else {
//		cout << "true   " << (*it) << endl;
//	}
//}
//
//void Print(vector<int>& v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//
//void test02() {
//
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(50);
//	v.push_back(30);
//	v.push_back(40);
//
//	sort(v.begin(), v.end());
//	Print(v);
//
//	sort(v.begin(), v.end(), MyCompare());
//	Print(v);
//
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
