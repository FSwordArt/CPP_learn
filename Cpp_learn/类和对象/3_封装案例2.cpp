//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//#include "point.h"
//#include "circle.h"
//
//
////判断点和圆的关系
//void isInCircle(Circle& c, Point& p) {
//	//计算距离的平方
//	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())
//				 + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//
//	//计算半径的平方
//	int rdistance = c.getmR() * c.getmR();
//
//
//	if (distance > rdistance) {
//		cout << "在圆外" << endl;
//	}
//	else if (distance == rdistance) {
//		cout << "在圆上" << endl;
//	}
//	else {
//		cout << "在圆内" << endl;
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
//	//创建点
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