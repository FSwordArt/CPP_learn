//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Cube {
//
//private:
//
//	int m_L;
//	int m_W;
//	int m_H;
//
//public:
//
//	//��ó�������
//	void setNum(int l, int w, int h) {
//
//		m_L = l;
//		m_W = w;
//		m_H = h;
//	}
//
//	int getNum() {
//
//		return m_L, m_W, m_H;
//	}
//
//	//�������
//	int calSquare() {
//
//		return 2 * (m_L * m_H + m_L * m_W + m_W * m_L);
//	}
//
//	//�������
//	int calVol() {
//
//		return m_H * m_L * m_W;
//	}
//
//	//���ó�Ա�������ж��Ƿ����
//	bool isSamebyclass(Cube& c) {
//		if (getNum() == c.getNum()) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//};
//
////����ȫ�ֺ������ж������������Ƿ���ͬ
//bool isSame(Cube& c1, Cube& c2) {
//
//	if (c1.getNum() == c2.getNum()) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//int main() {
//
//	Cube c1;
//	c1.setNum(1, 1, 1);
//
//	cout << "���Ϊ��" << c1.calSquare() << endl;
//	cout << "���Ϊ��" << c1.calVol() << endl;
//
//	Cube c2;
//	c2.setNum(1, 1, 1);
//
//	bool ret1 = isSame(c1, c2);
//	if (ret1) {
//		cout << "c1��c2���" <<endl;
//	}
//	else {
//		cout << "c1��c2�����" << endl;
//	}
//
//	bool ret2 = c1.isSamebyclass(c2);
//	if (ret2) {
//		cout << "�����ж�c1��c2���"<< endl;
//	}
//	else {
//		cout << "�����ж�c1��c2���" << endl;
//	}
//
//	system("pause");
//	return 0;
//
//}