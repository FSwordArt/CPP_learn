//#include <iostream>
//using namespace std;
//#include <string>
//
//
///*
//���麯����virtual ����ֵ���� ������ (�����б�) = 0��
//1���޷�ʵ��������
//2������������������д�����еĴ��麯���������޷�ʵ��������
//���˴��麯�������Ϊ������
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
//		cout << "��ˮ" << endl;
//	}
//	virtual void Brew() {
//		cout << "����" << endl;
//	}
//	virtual void PourInCup() {
//		cout << "����" << endl;
//	}
//	virtual void PutSomething() {
//		cout << "���뿧��" << endl;
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