//#include <iostream>
//#include <functional>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////算术仿函数
//void test01() {
//
//	//negate 一元仿函数， 取反仿函数
//	negate<int> n;
//	cout << n(50) << endl;
//
//	//plus 二元仿函数， 加法
//	plus<int> m;
//	cout << m(10, 20) << endl;
//}
//
////关系仿函数
//void test02() {
//
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(5);
//
//	sort(v.begin(), v.end(), greater<int>());
//}
//
////逻辑仿函数
//void test03() {
//
//	vector<bool> v1;
//	v1.push_back(true);
//	v1.push_back(false);
//	v1.push_back(false);
//	v1.push_back(true);
//
//	vector<bool> v2;
//	v2.resize(v1.size());
//
//	transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>());
//
//
//}
//
//
//
//
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//	return 0;
//}