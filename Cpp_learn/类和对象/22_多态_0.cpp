//#include <iostream>
//using namespace std;
//#include <string>
///*
//��̬��̬����������
//1.�м̳й�ϵ
//2.������д�����麯��
//
//��̬��̬ʹ�ã�
//�����ָ���������ָ������Ķ���
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