//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请内存空间进行拷贝
//*/
//
//class Person {
//
//public:
//
//	int m_age;
//	int* m_Height;
//
//	Person() {
//		cout << "Person无参构造函数的调用" << endl;
//	}
//
//	Person(int age, int height) {
//		m_age = age;
//		m_Height = new int(height);
//		
//		cout << "Person有参构造函数的调用" << endl;
//		cout << m_Height << endl;
//	}
//
//	//拷贝构造函数
//	Person(const Person& p) {
//		m_age = p.m_age;
//		m_Height = new int(*p.m_Height);
//		//m_Height = p.m_Height; 系统是浅拷贝，必须手动开辟堆区
//		
//		cout << "Person拷贝构造函数的调用" << endl;
//		cout << m_Height << endl;
//	}
//
//	~Person() {
//		//将堆区开辟的数据做释放
//
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person析构函数的调用" << endl;
//	}
//};
//
//void test1() {
//
//	Person p1(18, 160);
//	cout << "p1的年龄为：" << p1.m_age << endl;
//	cout << "p1的身高为：" << *p1.m_Height << endl;
//	
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_age << endl;
//	cout << "p2的身高为：" << *p2.m_Height << endl;
//
//}
//int main() {
//
//	test1();
//
//
//	system("pause");
//	return 0;
//}