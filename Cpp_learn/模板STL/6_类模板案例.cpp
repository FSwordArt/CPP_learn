//#include <iostream>
//using namespace std;
//#include <string>
//#include "MyArray.hpp"
//
//void PrintArray(MyArray<int> arr) {
//	for (int i = 0; i < arr.getSize(); i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//
//	MyArray<int> arr1(5);
//	for (int i = 0; i < 5; i++) {
//		arr1.PushBack(i);
//	}
//	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
//	PrintArray(arr1);
//	cout << "arr1������Ϊ" << arr1.getCapacity() << endl;
//	cout << "arr1�Ĵ�СΪ" << arr1.getSize() << endl;
//	cout << endl;
//
//	MyArray<int> arr2(arr1);
//	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
//	arr2.PopBack();
//	PrintArray(arr2);
//	cout << "arr2������Ϊ" << arr2.getCapacity() << endl;
//	cout << "arr2�Ĵ�СΪ" << arr2.getSize() << endl;
//	//MyArray<int> arr3(100);
//	//arr3 = arr1;
//
//}
//
//
//class Person {
//public:
//	string m_Name;
//	int m_age;
//
//	Person() {};
//
//	Person(string name, int age) {
//		this->m_Name = name;
//		this->m_age = age;
//	}
//};
//
//void PrintPerson(MyArray<Person> arr) {
//
//	for (int i = 0; i < arr.getSize(); i++) {
//		cout << "����:" << arr[i].m_Name << " ����:" << arr[i].m_age << endl;
//	}
//}
//
//void test02() {
//
//	MyArray<Person> arr(10);
//
//	Person p1("Tom1", 17);
//	Person p2("Tom2", 18);
//	Person p3("Tom3", 19);
//	Person p4("Tom4", 15);
//	Person p5("Tom5", 16);
//
//	arr.PushBack(p1);
//	arr.PushBack(p2);
//	arr.PushBack(p3);
//	arr.PushBack(p4);
//	arr.PushBack(p5);
//
//	PrintPerson(arr);
//
//	cout << "����Ϊ��" << arr.getCapacity() << endl;
//	cout << "��СΪ��" << arr.getSize() << endl;
//}
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}