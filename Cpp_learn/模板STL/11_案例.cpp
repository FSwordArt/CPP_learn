//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <deque>
//#include <ctime>
//using namespace std;
//
//class Person {
//
//public:
//	Person(string name, int score) {
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//public:
//	string m_Name;
//	int m_Score;
//};
//
//void CreatePerson(vector<Person>& v) {
//
//	string NameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++) {
//		string name = "选手";
//		name += NameSeed[i];
//
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);
//	}
//}
//
//void CreateScore(vector<Person>& v) {
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it) {
//		
//		deque<int> s;
//		for (int i = 0; i < 10; i++) {
//			int score = rand() % 41 + 60;
//			s.push_back(score);
//		}
//		//cout << "姓名：" << it->m_Name << "  分数："<< endl;
//		//for (deque<int>::iterator getScore = s.begin(); getScore != s.end(); ++getScore) {
//		//	cout << *getScore << " ";
//		//}
//		//cout << endl;
//		//排序
//		sort(s.begin(), s.end());
//
//		//去掉最高最低分
//		s.pop_front();
//		s.pop_back();
//
//		int sum = 0;
//		for (deque<int>::iterator scoreSum = s.begin(); scoreSum != s.end(); ++scoreSum) {
//			sum += (*scoreSum);
//		}
//
//		int score_ave = sum / s.size();
//
//		it->m_Score = score_ave;
//	}
//}
//
//void showPersonInfo(vector<Person>& p) {
//	for (vector<Person>::iterator showInfo = p.begin(); showInfo != p.end(); ++showInfo) {
//		cout << "姓名：" << (*showInfo).m_Name << "   分数：" << (*showInfo).m_Score << endl;
//	}
//}
//
//int main() {
//	//随机数种子
//	srand((unsigned int)time(NULL));
//
//	vector<Person> person;
//	CreatePerson(person);
//	//for (vector<Person>::iterator it = person.begin(); it != person.end(); ++it) {
//	//	cout << "姓名：" << it->m_Name << "  分数：" << it->m_Score << endl;
//	//}
//	CreateScore(person);
//	showPersonInfo(person);
//
//
//	system("pause");
//	return 0;
//}