#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T>
class MyArray {

public:

	//有参构造
	MyArray(int capacity) {

		//cout << "有参构造调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//拷贝构造
	MyArray(const MyArray& arr) {

		//cout << "拷贝构造调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//pAddress = arr.pAddress;
		this->pAddress = new T[arr.m_Capacity];

		for (int i = 0; i < arr.m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//重载=运算符
	MyArray& operator=(const MyArray& arr) {

		//cout << "重载运算符调用" << endl;
		if (this->pAddress != NULL) {

			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];

		for (int i = 0; i < arr.m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	//尾插法
	void PushBack(const T& elem) {

		if (this->m_Size == this->m_Capacity) {
			return;
		}
		this->pAddress[this->m_Size] = elem;
		this->m_Size++;
	}

	//尾删法
	void PopBack() {
		if (this->m_Size == 0) {
			return;
		}
		this->m_Size--;
	}

	//打印对应元素的下标
	T& operator[](int index) {
		return this->pAddress[index];
	}

	//返回容量大小
	int getCapacity() {
		return this->m_Capacity;
	}

	//返回大小
	int getSize() {
		return this->m_Size;
	}

	//析构函数
	~MyArray() {

		if (this->pAddress != NULL) {

			//cout << "析构函数调用" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}


private:
	T* pAddress; //指针指向堆区开辟数组的真实数据
	int m_Capacity; //容量
	int m_Size; // 大小

};