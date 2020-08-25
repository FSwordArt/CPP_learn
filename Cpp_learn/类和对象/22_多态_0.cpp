//#include <iostream>
//using namespace std;
//#include <string>
///*
//动态多态满足条件：
//1.有继承关系
//2.子类重写父类虚函数
//
//动态多态使用：
//父类的指针或者引用指向子类的对象
//
//*/
//
//class Animal {
//public:
//	virtual void doSpeak() {
//		cout << "speak" << endl;
//	}
//};
//
//class Cat : public Animal {
//	void doSpeak() {
//		cout << "cat speak" << endl;
//	}
//};
//
//class Dog : public Animal {
//	void doSpeak() {
//		cout << "dog speak" << endl;
//	}
//};
//
//void test01(Animal& animal) {
//	animal.doSpeak();
//}
//
//int main() {
//
//	Cat cat;
//	test01(cat);
//	Dog dog;
//	test01(dog);
//
//	system("pause");
//	return 0;
//}