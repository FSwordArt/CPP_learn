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
//	//ͨ�����乹��
//	vector<int> v2(v1.begin(), v1.end());
//	Print(v2);
//
//	vector<int> v3(10, 100); //���ǹ���
//	/*
//	vector<int> v3;
//	v3.assign(10, 100) ���Ǹ�ֵ
//	*/
//
//	Print(v3);
//
//	//��������
//	vector<int> v4(v3);
//	Print(v4);
//}
//
///*
//��ֵ
//assign(begin, end) // ǰ���Ǳ����䣬�����ǿ�����
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
////�����ʹ�С
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
//		cout << "��" << endl;
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
////�����ɾ��
///*
//insert(pos, count, elem) ָ��λ�ò���n��elem  ��һ�������ǵ�����
//erase(start, end) //ɾ��������Ԫ��
//*/
//
///*
//���ݴ�ȡ
//front()���ص�һ��Ԫ��
//back()�������һ��Ԫ��
//*/
//
//
//void test04() {
//	//����swap�������ռ�
//	vector<int> v1;
//	for (int i = 0; i < 10000; i++) {
//		v1.push_back(i);
//	}
//
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//
//	v1.resize(3);
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//
//	vector<int> (v1).swap(v1);
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//}
//
///*
//Ԥ���ռ�
//reserve(int len)//Ԥ��len���ȣ�λ�ò��ɳ�ʼ�������ɷ���
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