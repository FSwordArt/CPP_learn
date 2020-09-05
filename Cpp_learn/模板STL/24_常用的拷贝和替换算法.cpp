//#include <iostream>
//#include <vector>
//using namespace std;
//#include <algorithm>
//
////copy(iterator begin(), iterator end(), iterarot dest); dest 目标起始迭代器
////replace(iterator begin(), iterator end(), oldvalue, newvalue);
////replace_if(iterator begin(), iterator end(), 谓词, newvalue);
////swap(contariner c1, contariner c2);
////
//
////普通函数
//void Print1(int val) {
//	cout << val << " ";
//}
////仿函数
//class Print2 {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//
////谓词
//class Greater20 {
//public:
//	bool operator()(int val) {
//		return val > 20;
//	}
//};
//
//int main() {
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	replace_if(v.begin(), v.end(), Greater20(), 300);
//	for_each(v.begin(), v.end(), Print1);
//	cout << endl;
//	for_each(v.begin(), v.end(), Print2());
//	cout << endl;
//
//
//
//	system("pause");
//	return 0;
//}