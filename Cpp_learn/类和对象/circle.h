#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle {

public:

	void setmR(int r);
	int getmR();

	void setCenter(Point center);
	Point getCenter();

private:
	int m_R;
	Point m_Center;
};