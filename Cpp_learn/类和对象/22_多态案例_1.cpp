//#include <iostream>
//using namespace std;
//#include <string>
//
////��ʹ�ö�̬
//class Calculator {
//public:
//	int m_Num1;
//	int m_Num2;
//
//	int operate(string oper) {
//
//		if (oper == "+") {
//			return m_Num1 + m_Num2;
//		}
//
//		else if (oper == "-") {
//			return m_Num1 - m_Num2;
//		}
//
//		else if (oper == "*") {
//			return m_Num1 * m_Num2;
//		}
//	}
//};
//void test01() {
//
//	Calculator* c = new Calculator;
//	c->m_Num1 = 10;
//	c->m_Num2 = 20;
//
//	cout << c->operate("+") << endl;
//	cout << c->operate("-") << endl;
//	cout << c->operate("*") << endl;
//
//	delete c;
//}
//
////ʹ�ö�̬
//class AbstractCalculator {
//public:
//	int m_Num1;
//	int m_Num2;
//
//	virtual int getResult() {
//		return 0;
//	}
//};
//
//class Add : public AbstractCalculator {
//public:
//
//	int getResult() {
//		return m_Num1 + m_Num2;
//	}
//};
//
//class Sub : public AbstractCalculator {
//public:
//
//	int getResult() {
//		return m_Num1 - m_Num2;
//	}
//};
//
//class Mul : public AbstractCalculator {
//public:
//
//	int getResult() {
//		return m_Num1 * m_Num2;
//	}
//};
//
////����ָ��ָ���������
//void test02() {
//
//	AbstractCalculator* abc;
//
//	abc = new Add;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 200;
//	cout << abc->getResult() << endl;
//	delete abc;
//
//	abc = new Sub;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 200;
//	cout << abc->getResult() << endl;
//	delete abc;
//
//	abc = new Mul;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 200;
//	cout << abc->getResult() << endl;
//	delete abc;
//
//
//
//
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}