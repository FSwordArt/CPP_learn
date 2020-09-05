//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
////ÆÕÍ¨º¯Êý
//void print01(int val) {
//	cout << val << " ";
//}
//
////·Âº¯Êý
//class print02 {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//
//
//void test01() {
//
//	vector<int> v;
//	for (int i = 0; i < 10; ++i) {
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), print01);
//	cout << endl;
//	for_each(v.begin(), v.end(), print02());
//	cout << endl;
//}
//
//class Transform {
//public:
//	int operator()(int val) {
//		return val;
//	}
//};
//
//void test02() {
//
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//
//	vector<int> vTarget;
//	vTarget.resize(v1.size());
//	transform(v1.begin(), v1.end(), vTarget.begin(), Transform());
//
//	for_each(vTarget.begin(), vTarget.end(), print01);
//
//}
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}