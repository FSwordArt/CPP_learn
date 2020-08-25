//#include <iostream>
//using namespace std;
//#include <string>
//
//
///*
//纯虚函数：virtual 返回值类型 函数名 (参数列表) = 0；
//1、无法实例化对象
//2、抽象类的子类必须重写父类中的纯虚函数，否则无法实例化对象
//有了纯虚函数的类成为抽象类
//*/
//
//class AbstractDrinking {
//
//public:
//
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void PourInCup() = 0;
//	virtual void PutSomething() = 0;
//
//	void MakeDrinking() {
//
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//
//	}
//};
//
//class Coffee : public AbstractDrinking {
//public:
//	virtual void Boil() {
//		cout << "煮水" << endl;
//	}
//	virtual void Brew() {
//		cout << "冲泡" << endl;
//	}
//	virtual void PourInCup() {
//		cout << "导入" << endl;
//	}
//	virtual void PutSomething() {
//		cout << "加入咖啡" << endl;
//	}
//};
//
//void test01(AbstractDrinking* abd) {
//	abd->MakeDrinking();
//
//	delete abd;
//	
//}
//
//int main() {
//
//	test01(new Coffee);
//
//
//	system("pause");
//	return 0;
//}