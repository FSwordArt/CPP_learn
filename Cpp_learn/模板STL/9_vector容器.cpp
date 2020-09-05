//#include <iostream>
//#include <string>
//using namespace std;
//#include <vector>
//
//void Print(vector<int>& v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//void test01() {
//
//	vector<int> v1;
//
//	for (int i = 0; i < 10; ++i) {
//		v1.push_back(i);
//	}
//	Print(v1);
//
//	//通过区间构造
//	vector<int> v2(v1.begin(), v1.end());
//	Print(v2);
//
//	vector<int> v3(10, 100); //这是构造
//	/*
//	vector<int> v3;
//	v3.assign(10, 100) 这是赋值
//	*/
//
//	Print(v3);
//
//	//拷贝构造
//	vector<int> v4(v3);
//	Print(v4);
//}
//
///*
//赋值
//assign(begin, end) // 前面是闭区间，后面是开区间
//assign(n, elem)
//*/
//
//void test02() {
//
//	vector<int> v1;
//	for (int i = 0; i < 10; ++i) {
//		v1.push_back(i);
//	}
//
//	Print(v1);
//
//	vector<int> v2;
//	v2.assign(v1.begin(), v1.end());
//	Print(v2);
//
//}
//
////容量和大小
//void test03() {
//
//	vector<int> v1;
//	for (int i = 0; i < 10; ++i) {
//		v1.push_back(i);
//	}
//
//	//Print(v1);
//
//	if (v1.empty()) {
//		cout << "空" << endl;
//	}
//	else {
//		cout << "no" << endl;
//		cout << v1.capacity() << endl;
//		cout << v1.size() << endl;
//	}
//
//	v1.resize(15, 1);
//	Print(v1);
//}
//
////插入和删除
///*
//insert(pos, count, elem) 指定位置插入n个elem  第一个参数是迭代器
//erase(start, end) //删除区间内元素
//*/
//
///*
//数据存取
//front()返回第一个元素
//back()返回最后一个元素
//*/
//
//
//void test04() {
//	//利用swap来收缩空间
//	vector<int> v1;
//	for (int i = 0; i < 10000; i++) {
//		v1.push_back(i);
//	}
//
//	cout << "v1的容量为：" << v1.capacity() << endl;
//	cout << "v1的大小为：" << v1.size() << endl;
//
//	v1.resize(3);
//	cout << "v1的容量为：" << v1.capacity() << endl;
//	cout << "v1的大小为：" << v1.size() << endl;
//
//	vector<int> (v1).swap(v1);
//	cout << "v1的容量为：" << v1.capacity() << endl;
//	cout << "v1的大小为：" << v1.size() << endl;
//}
//
///*
//预留空间
//reserve(int len)//预留len长度，位置不可初始化，不可访问
//*/
//
//int main() {
//
//	//test01();
//	//test02();
//	//test03(); 
//	test04();
//
//
//
//	system("pause");
//	return 0;
//}