#include <iostream>
#include "change.h"
using namespace std;


int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main_sum() {
	int a = 10, b = 20;
	int sum = add(a, b);
	//cout << sum << endl;

	change(a, b);


	system("pause");
	return 0;

}