#include <iostream>
//time 系统时间头文件包含
#include <ctime>
using namespace std;

int main_switch() {

	cout << "input score" << endl;
	
	int score = 0;
	cin >> score;
	
	switch (score){
	case 10:
		cout << "good" << endl;
		break;

	case 5:
		cout << "ordinary" << endl;
		break;

	default:
		cout << "worse" << endl;
		break;
	}
	system("pause");
	return 0;
}














