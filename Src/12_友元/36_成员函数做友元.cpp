#include <iostream>
#include <string>
using namespace std;
//��Ա��������Ԫ
//������
class Building6;
class GoodGay6
{
	GoodGay6();
	void visit();//��visit�������Է���Building6�е�˽�г�Ա
	void visit2();//��visit2�������ܷ���Building�е�˽�г�Ա
	Building6* building;
};
class Building6
{
	//���߱�����GoodGay���µ�visit��Ա������Ϊ����ĺ�����, ���Է���˽�г�Ա
	friend void GoodGay6::visit();
public:
	Building6();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//����ʵ�ֳ�Ա����
Building6::Building6()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
void GoodGay6::visit()
{
	cout << "visit�������ڷ���:" << building->m_SittingRoom << endl;
	cout << "visit�������ڷ���:" << building->m_BedRoom << endl;
}
void GoodGay6::visit2()
{
	cout << "visit�������ڷ���:" << building->m_SittingRoom << endl;
	//cout << "visit�������ڷ���:" << building->m_BedRoom << endl;
}
GoodGay6::GoodGay6()
{
	//����������������Ա
	building = new Building6;
}
int main()
{
	system("pause");
	return 0;
}
