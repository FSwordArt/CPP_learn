//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//#include "point.h"
//#include "circle.h"
//
//
////�жϵ��Բ�Ĺ�ϵ
//void isInCircle(Circle& c, Point& p) {
//	//��������ƽ��
//	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())
//				 + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//
//	//����뾶��ƽ��
//	int rdistance = c.getmR() * c.getmR();
//
//
//	if (distance > rdistance) {
//		cout << "��Բ��" << endl;
//	}
//	else if (distance == rdistance) {
//		cout << "��Բ��" << endl;
//	}
//	else {
//		cout << "��Բ��" << endl;
//
//	}
//}
//
//int main() {
//
//	Circle c;
//	c.setmR(10);
//
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	//������
//	Point p;
//	p.setX(10);
//	p.setY(12);
//
//	isInCircle(c, p);
//
//
//	system("pause");
//	return 0;
//}