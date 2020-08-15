#include <iostream>
#include <string>
using namespace std;

struct hero {
	string name;
	int age;
	string sex;
};

void bubble_sort(hero hArray[]) {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - 1 - i; j++) {
			if (hArray[j].age > hArray[j + 1].age) {
				hero tmp = hArray[j];
				hArray[j] = hArray[j + 1];
				hArray[j + 1] = tmp;

			}
		}
	}
}

void printInfo(hero hArray[]) {

	for (int i = 0; i < 5; i++) {
		cout << hArray[i].name << " " << hArray[i].age << " " << hArray[i].sex << endl;
	}

}
int main() {

	hero hArray[5] = {
	
		{"����", 24, "��"},
		{"����", 22, "��"},
		{"�ŷ�", 20, "��"},
		{"����", 21, "��"},
		{"����", 19, "Ů"}
	
	};

	bubble_sort(hArray);
	printInfo(hArray);

	return 0;
}