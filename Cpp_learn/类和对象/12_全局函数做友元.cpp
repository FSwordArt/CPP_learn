//#include <iostream>
//using namespace std;
//#include <string>
//
//class Building {
//
//	friend void query(Building* building);//ͨ��friend�ؼ��ֿ��Է������е�˽������
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
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//};
//
//void query(Building& building) {//(Building* building)
//
//	cout << "���ڷ���: " << building.m_SittingRoom << endl;
//	cout << "���ڷ���: " << building.m_BedRoom << endl;
//	//cout << "���ڷ���: " << building->m_SittingRoom << endl;
//	//cout << "���ڷ���: " << building->m_BedRoom << endl;
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