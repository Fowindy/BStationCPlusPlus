#include <iostream>
#include <string>
using namespace std;
//��������
class Building
{
	//ȫ�ֺ�����Ԫ������
	friend void goodGay(Building* building);
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};
//ȫ�ֺ���
void goodGay(Building* building)
{
	cout << "�û���ȫ�ֺ������ڷ���:" << building->m_SittingRoom << endl;
	cout << "�û���ȫ�ֺ������ڷ���:" << building->m_BedRoom << endl;
}
void test4()
{
	Building building;
	goodGay(&building);
}
int main34()
{
	test4();
	system("pause");
	return 0;
}
