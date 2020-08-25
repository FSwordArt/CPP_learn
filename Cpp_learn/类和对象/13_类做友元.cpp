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
////类外实现成员函数
//Building::Building() {
//
//	m_BedingRoom = "卧室";
//	m_SittingRoom = "客厅";
//
//}
//
//Query::Query() {
//	//创建建筑物对象
//	building = new Building;
//}
//
//void Query::visit() {
//
//	cout << "正在访问：" << building->m_SittingRoom << endl;
//	cout << "正在访问：" << building->m_BedingRoom << endl;
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
