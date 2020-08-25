//#include <iostream>
//using namespace std;
//#include <string>
//
//class Building {
//
//	friend void query(Building* building);//通过friend关键字可以访问类中的私有属性
//	friend void query(Building& building);
//
//public:
//	string m_SittingRoom;
//
//private:
//	string m_BedRoom;
//
//public:
//
//	Building() {
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//};
//
//void query(Building& building) {//(Building* building)
//
//	cout << "正在访问: " << building.m_SittingRoom << endl;
//	cout << "正在访问: " << building.m_BedRoom << endl;
//	//cout << "正在访问: " << building->m_SittingRoom << endl;
//	//cout << "正在访问: " << building->m_BedRoom << endl;
//
//}
//int main() {
//
//	Building building;
//	//query(&building);
//	query(building);
//
//	system("pause");
//	return 0;
//}