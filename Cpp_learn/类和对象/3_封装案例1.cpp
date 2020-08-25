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
//	//获得长，宽，高
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
//	//计算面积
//	int calSquare() {
//
//		return 2 * (m_L * m_H + m_L * m_W + m_W * m_L);
//	}
//
//	//计算体积
//	int calVol() {
//
//		return m_H * m_L * m_W;
//	}
//
//	//利用成员函数来判断是否相等
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
////利用全局函数来判断两个立方体是否相同
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
//	cout << "面积为：" << c1.calSquare() << endl;
//	cout << "体积为：" << c1.calVol() << endl;
//
//	Cube c2;
//	c2.setNum(1, 1, 1);
//
//	bool ret1 = isSame(c1, c2);
//	if (ret1) {
//		cout << "c1和c2相等" <<endl;
//	}
//	else {
//		cout << "c1和c2不相等" << endl;
//	}
//
//	bool ret2 = c1.isSamebyclass(c2);
//	if (ret2) {
//		cout << "方法判断c1和c2相等"<< endl;
//	}
//	else {
//		cout << "方法判断c1和c2相等" << endl;
//	}
//
//	system("pause");
//	return 0;
//
//}