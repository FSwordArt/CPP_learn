//#include <iostream>
//using namespace std;
//#include <string>
//
//class Building {
//
//	friend class Query;
//
//public:
//	string m_SittingRoom;
//private:
//	string m_BedingRoom;
//
//public:
//	Building();
//
//};
//
//class Query {
//
//public:
//	Query();
//	void visit();
//	Building* building;
//};
//
////����ʵ�ֳ�Ա����
//Building::Building() {
//
//	m_BedingRoom = "����";
//	m_SittingRoom = "����";
//
//}
//
//Query::Query() {
//	//�������������
//	building = new Building;
//}
//
//void Query::visit() {
//
//	cout << "���ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "���ڷ��ʣ�" << building->m_BedingRoom << endl;
//}
//
//void test01() {
//	Query q;
//	q.visit();
//}
//
//
//int main() {
//
//	test01();
//
//
//	system("pause");
//	return 0;
//}
//
