#pragma once
#include <iostream>
#include <string>

using namespace std;

template<class T1, class T2>
class Person {
public:
	T1 m_Name;
	T2 m_Age;

	Person(T1 name, T2 age);
	void show();
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
	m_Name = name;
	m_Age = age;
}

//��Ա��������ʵ��
template <class T1, class T2>
void Person<T1, T2>::show() {
	cout << m_Name << endl;
	cout << m_Age << endl;
}