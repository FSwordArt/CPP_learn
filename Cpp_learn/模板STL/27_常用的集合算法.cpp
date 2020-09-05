//#include <iostream>
//#include <vector>
//using namespace std;
//#include <numeric>
//#include <algorithm>
//
///*
//set_intersection(iterator1 begin(), iterator1 end(), iterator2 begin(), iterator2 end(), iterator vTarget.begin()) 
//求两个容器交集
//返回交集后最后一个元素的迭代器
//
//set_union(iterator1 begin(), iterator1 end(), iterator2 begin(), iterator2 end(), iterator vTarget.begin()) 
//求两个容器并集
//
//set_different(iterator1 begin(), iterator1 end(), iterator2 begin(), iterator2 end(), iterator vTarget.begin())  
//求两个容器差集
//v1 : 0 1 2 3 4 5 6 7 8 9
//v2 : 5 6 7 8 9 10 11 12 13 14 15
//v1和v2的差集：0 1 2 3 4 
//v2和v1的差集： 10 11 12 13 14 15
//*/
//
//void Print(int val) {
//	cout << val << " ";
//}
//int main() {
//
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int> vTarget;
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, Print);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}