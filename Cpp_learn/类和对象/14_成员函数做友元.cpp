//#include <iostream>
//using namespace std;
//#include <string>
//
//
//class Building;
//class Query {
//
//public:
//
//	Query();
//	void visit();
//	void visit2();
//	Building* building;
//};
//
//class Building {
//
//	friend void Query::visit();
//
//public:
//	Building();
//
//public:
//	string m_SittingRoom;
//
//private:
//	string m_BedRoom;
//};
//
//
//Building::Building() {
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//Query::Query() {
//	building = new Building;
//}
//
//void Query::visit() {
//	cout << "visit ���ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "visit ���ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void Query::visit2() {
//	cout << "visit2 ���ڷ��ʣ�" << building->m_SittingRoom << endl;
//	//cout << "visit2 ���ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//
//int main() {
//
//	Query q;
//	q.visit();
//	q.visit2();
//
//	system("pause");
//	return 0;
//}