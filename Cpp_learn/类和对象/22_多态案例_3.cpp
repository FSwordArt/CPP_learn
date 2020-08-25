//#include <iostream>
//using namespace std;
//#include <string>
//
//class CPU {
//public:
//	virtual void calculate() = 0;
//};
//
//class VideoCard {
//public:
//	virtual void display() = 0;
//};
//
//class Memory {
//public:
//	virtual void storage() = 0;
//};
//
//
//class InterCPU :public CPU {
//public:
//	void calculate() {
//		cout << "Inter CPU is working" << endl;
//	}
//};
//
//class InterVideoCard :public VideoCard {
//public:
//	void display() {
//		cout << "Inter VideoCard is working" << endl;
//	}
//};
//
//class InterMemory :public Memory {
//public:
//	void storage() {
//		cout << "Inter Memory is working" << endl;
//	}
//};
//
//class LenovoCPU :public CPU {
//public:
//	void calculate() {
//		cout << "Lenovo CPU is working" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard {
//public:
//	void display() {
//		cout << "Lenovo VideoCard is working" << endl;
//	}
//};
//
//class LenovoMemory :public Memory {
//public:
//	void storage() {
//		cout << "Lenovo Memory is working" << endl;
//	}
//};
//
//class Computer {
//
//public:
//
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//
//	}
//
//	void doWork() {
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//
//	~Computer() {
//
//		if (m_cpu != NULL) {
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//
//		if (m_vc != NULL) {
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//
//		if (m_mem != NULL) {
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//	}
//
//
//private:
//	CPU* m_cpu;
//	VideoCard* m_vc;
//	Memory* m_mem;
//
//};
//
//void test01() {
//
//	CPU* cpu = new InterCPU;
//	VideoCard* vc = new InterVideoCard;
//	Memory* mem = new InterMemory;
//
//	Computer* computer1 = new Computer(cpu, vc, mem);
//	computer1->doWork();
//
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
//	computer2->doWork();
//}
//
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}