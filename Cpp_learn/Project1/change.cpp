#include "change.h"

void change(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}